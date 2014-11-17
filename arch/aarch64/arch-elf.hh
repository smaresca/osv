#ifndef ARCH_ELF_HH
#define ARCH_ELF_HH

enum {
    R_AARCH64_NONE = 0,
    R_AARCH64_NONE2 = 256,
    R_AARCH64_ABS64 = 257,
    R_AARCH64_COPY = 1024,
    R_AARCH64_GLOB_DAT = 1025,
    R_AARCH64_JUMP_SLOT = 1026,
    R_AARCH64_RELATIVE = 1027,
    R_AARCH64_TLS_DTPREL64 = 1028,
    R_AARCH64_TLS_DTPMOD64 = 1029,
    R_AARCH64_TLS_TPREL64 = 1030,
    R_AARCH64_TLSDESC = 1031,
    R_AARCH64_IRELATIVE = 1032
};

/* for pltgot relocation */
#define ARCH_JUMP_SLOT R_AARCH64_JUMP_SLOT

inline void elf_entry_point(void* ep)
{
    // Not implemented:
    assert(0);
}

#endif /* ARCH_ELF_HH */
