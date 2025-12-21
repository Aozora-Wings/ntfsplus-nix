# NTFS+ 多内核版本适配补丁项目

## 📋 项目概述

这是一个支持 Linux 内核 6.12-6.18 的 NTFS+ 文件系统驱动补丁项目。通过自动化的 API 分析和适配，为不同内核版本生成兼容的补丁文件。

## 🎯 项目目标

- ✅ 支持内核版本：6.12, 6.13, 6.14, 6.15, 6.16, 6.17, 6.18
- ✅ 自动 API 差异分析
- ✅ 条件编译适配
- ✅ 完整的 AUR PKGBUILD 构建系统
- ✅ DKMS 自动构建支持

## 📁 文件结构

```
final_out/
├── README.md                          # 项目说明文档
├── PKGBUILD                           # AUR 风格构建脚本
├── dkms.conf                          # DKMS 配置文件
├── 90-udev-prefer-ntfsplus.rules      # Udev 自动加载规则
├── ntfsplus-compat-common.h           # 通用兼容性头文件
└── real-ntfsplus-patches/             # 多版本适配补丁
    ├── kernel-6.12/                   # 6.12 内核适配补丁
    │   ├── ntfsplus-compat.h          # 6.12 兼容性头文件
    │   ├── patch-1.patch              # 补丁文件 1
    │   ├── patch-2.patch              # 补丁文件 2
    │   └── ... (共19个补丁)
    ├── kernel-6.13/                   # 6.13 内核适配补丁
    ├── kernel-6.14/                   # 6.14 内核适配补丁
    ├── kernel-6.15/                   # 6.15 内核适配补丁
    ├── kernel-6.16/                   # 6.16 内核适配补丁
    ├── kernel-6.17/                   # 6.17 内核适配补丁
    └── kernel-6.18/                   # 6.18 内核适配补丁
```

## 🔧 技术特性

### 1. 智能版本检测
PKGBUILD 自动检测内核版本并应用对应的适配补丁：

```bash
# 自动版本映射
6.12.* → kernel-6.12/ 补丁
6.13.* → kernel-6.13/ 补丁
...
6.18.* → kernel-6.18/ 补丁
```

### 2. 条件编译适配
为不同内核版本自动添加条件编译指令：

**内核 6.12-6.15：**
```c
#if LINUX_VERSION_CODE >= KERNEL_VERSION(6,16,0)
    if (folio_test_uptodate(folio)) {
#else
    if (PageUptodate(&(folio)->page)) {
#endif
```

**内核 6.16-6.18：**
```c
    if (folio_test_uptodate(folio)) {  // 原生 API
```

### 3. 兼容性头文件
每个内核版本都有专用的兼容性头文件，处理 API 差异：

- `ntfsplus-compat-common.h` - 通用兼容定义
- `kernel-*/ntfsplus-compat.h` - 版本特定兼容性

## 🚀 快速开始

### 方法一：使用 PKGBUILD 构建（Arch Linux）

```bash
# 1. 进入项目目录
cd final_out

# 2. 构建并安装
makepkg -si

# 3. 或仅构建
makepkg
```

### 方法二：手动应用补丁

```bash
# 1. 克隆 Linux 内核
git clone --depth=1 https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git

# 2. 进入内核目录
cd linux

# 3. 应用对应版本的补丁（例如 6.18）
for patch in ../final_out/real-ntfsplus-patches/kernel-6.18/*.patch; do
    patch -p1 < "$patch"
done

# 4. 复制兼容性头文件
cp ../final_out/real-ntfsplus-patches/kernel-6.18/ntfsplus-compat.h fs/ntfsplus/
cp ../final_out/ntfsplus-compat-common.h fs/ntfsplus/
```

### 方法三：DKMS 安装

```bash
# 1. 安装构建的包
sudo pacman -U ntfsplus-dkms-multi-*.pkg.tar.zst

# 2. 或手动安装 DKMS 模块
sudo dkms add ntfsplus/<version>
sudo dkms build ntfsplus/<version>
sudo dkms install ntfsplus/<version>
```

## 📦 生成的包

构建后会生成两个包：

1. **ntfsplus-dkms-multi** - 主 DKMS 模块包
   - 支持内核 6.12-6.18
   - 自动版本适配
   - 包含兼容性代码

2. **ntfsplus-udev** - Udev 规则包
   - 自动加载 ntfsplus 模块
   - 优先于其他 NTFS 驱动

## 🔍 API 适配详情

通过分析发现以下关键 API 差异：

### 1. `folio_test_uptodate` API
- **引入版本**：内核 6.16
- **适配方案**：6.15 及以下版本使用 `PageUptodate` 包装

### 2. 文件系统 API 变化
- `inode_set_ctime_current` - 6.14 前后变化
- `iomap_folio_ops` - 6.16 引入
- `filemap_get_folio` - 6.17 引入

### 3. 内存管理 API
- `kmalloc_node_noprof` - 6.15 引入
- 其他内存分配 API 的改进

## 🛠️ 开发工具

项目包含的自动化工具：

### 1. 补丁提取工具
```bash
./simple-extract.sh              # 从 .mbox 提取原始补丁
```

### 2. API 分析工具
```bash
python3 quick-analyze.py         # 快速 API 分析
python3 analyze-api.py           # 完整 API 分析
```

### 3. 补丁生成工具
```bash
./generate-real-patches.sh       # 生成多版本适配补丁
```

### 4. 构建准备工具
```bash
./prepare-pkgbuild.sh            # 准备 PKGBUILD
./test-build-pkg.sh              # 测试构建流程
```

## 📊 补丁统计

| 内核版本 | 补丁数量 | 条件编译 | 兼容头文件 |
|----------|----------|----------|------------|
| 6.12     | 19       | ✅       | ✅         |
| 6.13     | 19       | ✅       | ✅         |
| 6.14     | 19       | ✅       | ✅         |
| 6.15     | 19       | ✅       | ✅         |
| 6.16     | 19       | ⚠️       | ✅         |
| 6.17     | 19       | ⚠️       | ✅         |
| 6.18     | 19       | ⚠️       | ✅         |

**说明**：
- ✅ 6.12-6.15：需要条件编译处理 `folio_test_uptodate`
- ⚠️ 6.16-6.18：使用原生 API，条件编译较少

## 🔄 工作流程

```
原始补丁 (.mbox)
     ↓
提取补丁 (simple-extract.sh)
     ↓
API 分析 (quick-analyze.py)
     ↓
生成适配补丁 (generate-real-patches.sh)
     ↓
准备构建系统 (prepare-pkgbuild.sh)
     ↓
构建包 (makepkg)
     ↓
安装使用 (pacman/dkms)
```

## 📝 使用示例

### 示例 1：为当前内核构建
```bash
cd final_out
makepkg -si
# 自动检测内核版本并应用对应补丁
```

### 示例 2：测试特定内核版本
```bash
# 模拟 6.15 内核构建
KERNEL_VERSION=6.15.5 ./test-build-pkg.sh
```

### 示例 3：查看补丁内容
```bash
# 查看 6.12 版本的第一个补丁
head -30 real-ntfsplus-patches/kernel-6.12/patch-1.patch

# 查看条件编译部分
grep -n "#if LINUX_VERSION_CODE" real-ntfsplus-patches/kernel-6.12/patch-1.patch
```

## ⚠️ 注意事项

1. **构建环境**：需要 Arch Linux 或兼容环境
2. **依赖项**：需要安装 `base-devel`、`git`、`dkms`
3. **内核版本**：仅支持 6.12-6.18，其他版本可能需要额外适配
4. **网络连接**：构建时需要下载 Linux 内核源码
5. **磁盘空间**：需要约 2GB 临时空间

## 🐛 故障排除

### 常见问题 1：构建失败
```
错误：找不到内核头文件
```
**解决方案**：安装对应内核版本的 headers 包
```bash
sudo pacman -S linux-headers
```

### 常见问题 2：补丁应用失败
```
补丁不适用
```
**解决方案**：检查内核版本是否匹配，或手动调整补丁

### 常见问题 3：模块加载失败
```
未知符号
```
**解决方案**：确保使用正确版本的兼容性头文件

## 📄 许可证

- 补丁代码：GPL-2.0-only（与 Linux 内核相同）
- 构建脚本：MIT 许可证
- 文档：CC BY-SA 4.0

## 🤝 贡献

欢迎提交 Issue 和 Pull Request：
1. 报告内核兼容性问题
2. 改进适配逻辑
3. 添加新内核版本支持
4. 优化构建脚本

## 📞 联系

如有问题，请：
1. 查看 `ntfsplus-build-test-report.txt`
2. 检查构建日志
3. 提交 Issue 报告问题

---

**最后更新**：2025年12月21日  
**项目状态**：✅ 生产就绪  
**内核支持**：6.12-6.18  
**构建系统**：AUR PKGBUILD + DKMS