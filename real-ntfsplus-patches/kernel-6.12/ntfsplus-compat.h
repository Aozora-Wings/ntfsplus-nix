/*
 * NTFS+ 内核模块兼容性头文件
 * 内核版本: 6.12
 * 自动生成
 */

#ifndef _NTFSPLUS_COMPAT_6_12_H
#define _NTFSPLUS_COMPAT_6_12_H

#include <linux/version.h>

/* 内核 6.15 及以下版本兼容性定义 */
#define NTFSPLUS_KERNEL_PRE_6_16 1

/*
 * folio_test_uptodate 兼容性包装
 * 在6.16之前使用PageUptodate
 */
#if LINUX_VERSION_CODE < KERNEL_VERSION(6,16,0)
#ifndef folio_test_uptodate
static inline bool folio_test_uptodate(struct folio *folio)
{
    return PageUptodate(&folio->page);
}
#endif
#endif

/* 文件系统API兼容性 */
#if LINUX_VERSION_CODE < KERNEL_VERSION(6,14,0)
/* 6.14之前的inode时间处理 */
#define inode_set_ctime_current(inode) (inode)->i_ctime = current_time(inode)
#endif


/* 通用版本检查宏 */
#define NTFSPLUS_VERSION_GE(major, minor) \
    (LINUX_VERSION_CODE >= KERNEL_VERSION(major, minor, 0))

#define NTFSPLUS_VERSION_LT(major, minor) \
    (LINUX_VERSION_CODE < KERNEL_VERSION(major, minor, 0))

/* 条件编译辅助宏 */
#define NTFSPLUS_IF_VERSION(major, minor, true_code, false_code) \
    do { \
        if (NTFSPLUS_VERSION_GE(major, minor)) { \
            true_code; \
        } else { \
            false_code; \
        } \
    } while (0)

#endif /* _NTFSPLUS_COMPAT_H */
