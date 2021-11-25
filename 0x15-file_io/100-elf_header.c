#include <elf.h>

typedef struct elfhdr {
  unsigned char e_ident[EI_NIDENT];
  Elf32_Half    e_type;
  Elf32_Half    e_machine;
  Elf32_Word    e_version;
  Elf32_Addr    e_entry;
  Elf32_Off     e_phoff;
  Elf32_Off     e_shoff;
  Elf32_Word    e_flags;
  Elf32_Half    e_ehsize;
  Elf32_Half    e_phentsize;
  Elf32_Half    e_phnum;
  Elf32_Half    e_shentsize;
  Elf32_Half    e_shnum;
  Elf32_Half    e_shstrndx;
} Elf32_Ehdr;

typedef struct
{
  unsigned char e_ident[EI_NIDENT]; /* Magic number and other info */
  Elf64_Half  e_type;     /* Object file type */
  Elf64_Half  e_machine;  /* Architecture */
  Elf64_Word  e_version;  /* Object file version */
  Elf64_Addr  e_entry;    /* Entry point virtual address */
  Elf64_Off e_phoff;      /* Program header table file offset */
  Elf64_Off e_shoff;      /* Section header table file offset */
  Elf64_Word  e_flags;    /* Processor-specific flags */
  Elf64_Half  e_ehsize;   /* ELF header size in bytes */
  Elf64_Half  e_phentsize;/* Program header table entry size */
  Elf64_Half  e_phnum;    /* Program header table entry count */
  Elf64_Half  e_shentsize;/* Section header table entry size */
  Elf64_Half  e_shnum;    /* Section header table entry count */
  Elf64_Half  e_shstrndx; /* Section header string table index */
} Elf64_Ehdr;
