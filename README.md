# NTFSPLUS-DKMS

---

# Introduction

There is a new Linux driver for NTFS called [`ntfsplus`](https://lore.kernel.org/all/?q=ntfsplus) submitted by [Namjae Jeon](https://github.com/namjaejeon) on 2025/10/20.

This repo contains the out-of-tree kernel module for `ntfsplus` and the patches to:
- Make it DKMS
- Backport it to 6.17
- Build AUR package

The AUR package is available at [ntfsplus-dkms-git](https://aur.archlinux.org/packages/ntfsplus-dkms-git)

# Quickstart

Clone this repository and

```
makepkg -si
```

and there you go.

# Development

## Setup source code

1. Clone [linux](https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git) kernel.
2. Apply [this](https://lore.kernel.org/all/20251020020749.5522-1-linkinjeon@kernel.org/t.mbox.gz) and [this](https://lore.kernel.org/all/20251020021227.5965-6-linkinjeon@kernel.org/t.mbox.gz) patches
3. Apply the patches in the current repo
4. Sync source with OOT module

## Status

Currently supports 6.17+ only.

The module was taken out of tree with my modifications. I currently haven't done much.

## TODOs

- Rewrite [`ntfs_iomap.c`](./out-of-tree/fs/ntfsplus/ntfs_iomap.c) to implement `ntfs_map_blocks`, `ntfs_submit_ioend` and `ntfs_discard_folio` for kernels older than 6.17
- Backport to LTS kernels
- Port the package to Debian
- Port the package to RedHat distros