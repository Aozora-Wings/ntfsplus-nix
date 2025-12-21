/*
 * NTFS+ 内核模块兼容性头文件
 * 内核版本: 6.18
 * 自动生成
 */

#ifndef _NTFSPLUS_COMPAT_6_18_H
#define _NTFSPLUS_COMPAT_6_18_H

#include <linux/version.h>

/* 内核 6.18 使用原生API */
#define NTFSPLUS_KERNEL_6_18 1

/* 这些API在6.18中可用 */
#define NTFSPLUS_FOLIO_API_AVAILABLE 1
#define NTFSPLUS_IOMAP_API_AVAILABLE 1

/* 版本特定优化 */
#if LINUX_VERSION_CODE >= KERNEL_VERSION(6,17,0)
#define NTFSPLUS_HAS_FILEMAP_GET_FOLIO 1
#endif

#if LINUX_VERSION_CODE >= KERNEL_VERSION(6,18,0)  
#define NTFSPLUS_HAS_BDEV_OPEN_BY_DEV 1
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
