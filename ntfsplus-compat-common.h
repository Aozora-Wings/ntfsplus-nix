/*
 * NTFS+ Common Compatibility Headers
 * For multi-kernel version support (6.12-6.18)
 * 
 * This file contains common compatibility definitions that work across
 * all supported kernel versions.
 */

#ifndef _NTFSPLUS_COMPAT_COMMON_H
#define _NTFSPLUS_COMPAT_COMMON_H

#include <linux/version.h>

/*
 * Kernel Version Detection Macros
 * 
 * These macros help identify the kernel version at compile time.
 * Use them for conditional compilation.
 */

#define NTFSPLUS_KERNEL_6_12 (LINUX_VERSION_CODE >= KERNEL_VERSION(6,12,0) && LINUX_VERSION_CODE < KERNEL_VERSION(6,13,0))
#define NTFSPLUS_KERNEL_6_13 (LINUX_VERSION_CODE >= KERNEL_VERSION(6,13,0) && LINUX_VERSION_CODE < KERNEL_VERSION(6,14,0))
#define NTFSPLUS_KERNEL_6_14 (LINUX_VERSION_CODE >= KERNEL_VERSION(6,14,0) && LINUX_VERSION_CODE < KERNEL_VERSION(6,15,0))
#define NTFSPLUS_KERNEL_6_15 (LINUX_VERSION_CODE >= KERNEL_VERSION(6,15,0) && LINUX_VERSION_CODE < KERNEL_VERSION(6,16,0))
#define NTFSPLUS_KERNEL_6_16 (LINUX_VERSION_CODE >= KERNEL_VERSION(6,16,0) && LINUX_VERSION_CODE < KERNEL_VERSION(6,17,0))
#define NTFSPLUS_KERNEL_6_17 (LINUX_VERSION_CODE >= KERNEL_VERSION(6,17,0) && LINUX_VERSION_CODE < KERNEL_VERSION(6,18,0))
#define NTFSPLUS_KERNEL_6_18 (LINUX_VERSION_CODE >= KERNEL_VERSION(6,18,0))

#define NTFSPLUS_KERNEL_PRE_6_16 (LINUX_VERSION_CODE < KERNEL_VERSION(6,16,0))
#define NTFSPLUS_KERNEL_6_16_OR_HIGHER (LINUX_VERSION_CODE >= KERNEL_VERSION(6,16,0))
#define NTFSPLUS_KERNEL_6_17_OR_HIGHER (LINUX_VERSION_CODE >= KERNEL_VERSION(6,17,0))
#define NTFSPLUS_KERNEL_6_18_OR_HIGHER (LINUX_VERSION_CODE >= KERNEL_VERSION(6,18,0))

/*
 * Common Compatibility Wrappers
 * 
 * These wrappers provide backward compatibility for APIs that changed
 * between kernel versions.
 */

/* File system operation compatibility */
#if LINUX_VERSION_CODE < KERNEL_VERSION(6,14,0)
/* inode_set_ctime_current compatibility for pre-6.14 */
#ifndef inode_set_ctime_current
#define inode_set_ctime_current(inode) ((inode)->i_ctime = current_time(inode))
#endif
#endif

/* Memory management compatibility */
#if LINUX_VERSION_CODE < KERNEL_VERSION(6,15,0)
/* kmalloc_node_noprof compatibility */
#ifndef kmalloc_node_noprof
#define kmalloc_node_noprof(size, flags, node) kmalloc_node(size, flags, node)
#endif
#endif

/* I/O mapping compatibility */
#if LINUX_VERSION_CODE < KERNEL_VERSION(6,16,0)
/* iomap_folio_ops compatibility */
struct iomap_folio_ops;
#define iomap_folio_ops iomap_page_ops
#endif

/*
 * Debugging and Logging Compatibility
 * 
 * Ensure consistent logging across kernel versions.
 */

/* pr_fmt for consistent log formatting */
#ifndef pr_fmt
#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#endif

/*
 * Build Configuration Macros
 * 
 * These help configure the module based on kernel capabilities.
 */

/* Check if FOLIO API is available (6.16+) */
#ifdef NTFSPLUS_KERNEL_6_16_OR_HIGHER
#define NTFSPLUS_USE_FOLIO_API 1
#else
#define NTFSPLUS_USE_FOLIO_API 0
#endif

/* Check if new IOMAP API is available (6.17+) */
#ifdef NTFSPLUS_KERNEL_6_17_OR_HIGHER
#define NTFSPLUS_USE_NEW_IOMAP 1
#else
#define NTFSPLUS_USE_NEW_IOMAP 0
#endif

/*
 * Utility Macros for Conditional Compilation
 */

/* Simple version check macro */
#define NTFSPLUS_VERSION_GE(major, minor) \
    (LINUX_VERSION_CODE >= KERNEL_VERSION(major, minor, 0))

/* Conditional code execution based on version */
#define NTFSPLUS_IF_VERSION(major, minor, true_code, false_code) \
    do { \
        if (NTFSPLUS_VERSION_GE(major, minor)) { \
            true_code; \
        } else { \
            false_code; \
        } \
    } while (0)

/* Compile-time assertion for minimum kernel version */
#define NTFSPLUS_REQUIRE_KERNEL(major, minor) \
    static_assert(LINUX_VERSION_CODE >= KERNEL_VERSION(major, minor, 0), \
                  "NTFS+ requires kernel " #major "." #minor " or higher")

/*
 * Module Information
 * 
 * These definitions help identify the module and its capabilities.
 */

#define NTFSPLUS_MODULE_NAME "ntfsplus"
#define NTFSPLUS_MODULE_VERSION "@PKGVER@"
#define NTFSPLUS_SUPPORTED_KERNELS "6.12-6.18"
#define NTFSPLUS_BUILD_DATE __DATE__ " " __TIME__

/*
 * Performance Optimization Hints
 * 
 * These can be used to enable version-specific optimizations.
 */

#if NTFSPLUS_KERNEL_6_18_OR_HIGHER
/* Enable latest kernel optimizations */
#define NTFSPLUS_OPTIMIZE_FOR_6_18 1
#else
#define NTFSPLUS_OPTIMIZE_FOR_6_18 0
#endif

#endif /* _NTFSPLUS_COMPAT_COMMON_H */