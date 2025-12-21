# NTFS+ 快速开始指南

## 🚀 一分钟快速开始

### 对于 Arch Linux 用户：
```bash
cd final_out
makepkg -si
```

### 对于其他 Linux 发行版：
```bash
# 1. 应用补丁
cd linux-kernel-source
for patch in ../final_out/real-ntfsplus-patches/kernel-$(uname -r | cut -d. -f1-2)/*.patch; do
    patch -p1 < "$patch"
done

# 2. 构建模块
make M=fs/ntfsplus
```

## 📦 文件说明

### 核心文件：
- `PKGBUILD` - Arch Linux 构建脚本
- `dkms.conf` - DKMS 配置文件
- `README.md` - 完整文档

### 补丁文件：
- `real-ntfsplus-patches/kernel-6.12/` - 6.12 内核补丁
- `real-ntfsplus-patches/kernel-6.13/` - 6.13 内核补丁
- ... 6.14, 6.15, 6.16, 6.17, 6.18

### 支持文件：
- `90-udev-prefer-ntfsplus.rules` - Udev 规则
- `ntfsplus-compat-common.h` - 通用兼容头文件

## 🔧 构建选项

### 1. 完整构建（推荐）
```bash
makepkg -si
```

### 2. 仅构建不安装
```bash
makepkg
```

### 3. 跳过依赖检查
```bash
makepkg --nodeps
```

### 4. 无确认构建
```bash
makepkg --noconfirm
```

## 📝 验证安装

安装后验证：
```bash
# 检查模块是否加载
lsmod | grep ntfsplus

# 检查 DKMS 状态
dkms status

# 检查版本支持
cat /usr/src/ntfsplus-*/SUPPORTED_VERSIONS
```

## ⚡ 快速命令参考

| 命令 | 说明 |
|------|------|
| `makepkg -si` | 构建并安装 |
| `makepkg` | 仅构建 |
| `sudo dkms add ntfsplus/版本` | 手动添加 DKMS |
| `sudo dkms build ntfsplus/版本` | 手动构建 |
| `sudo dkms install ntfsplus/版本` | 手动安装 |

## 🆘 遇到问题？

1. **查看详细文档**：`README.md`
2. **检查内核版本**：`uname -r`
3. **查看构建日志**：`tail -f /var/log/pacman.log`
4. **验证补丁适用性**：检查内核版本是否在 6.12-6.18 范围内

## ✅ 完成检查清单

- [ ] 确认内核版本在 6.12-6.18
- [ ] 安装 base-devel 包组
- [ ] 有足够的磁盘空间（2GB+）
- [ ] 网络连接正常
- [ ] 阅读了 README.md

---

**提示**：构建过程会自动：
1. 下载 Linux 内核源码
2. 检测当前内核版本
3. 应用对应版本的适配补丁
4. 构建 DKMS 模块
5. 安装到系统