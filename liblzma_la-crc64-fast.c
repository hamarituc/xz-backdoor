typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef pointer pointer __((offset(-0x180)));

typedef pointer pointer __((offset(-0x2a0)));

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef ulong size_t;




undefined8 _Lx86_code_part_0(byte **param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  sbyte sVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  byte **ppbVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  ulong local_38 [4];
  
  bVar20 = 0;
  iVar4 = _Llzma2_decoder_end_1(0,0x12,0x46,2);
  if (iVar4 == 0) {
    return 0;
  }
  ppbVar17 = param_1;
  for (lVar9 = 0x16; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined4 *)ppbVar17 = 0;
    ppbVar17 = (byte **)((long)ppbVar17 + (ulong)bVar20 * -8 + 4);
  }
  bVar18 = param_2 < param_3;
  pbVar10 = param_2;
  do {
    if (!bVar18) {
LAB_00100a85:
      for (lVar9 = 0x16; lVar9 != 0; lVar9 = lVar9 + -1) {
        *(undefined4 *)param_1 = 0;
        param_1 = (byte **)((long)param_1 + (ulong)bVar20 * -8 + 4);
      }
      return 0;
    }
    bVar12 = *pbVar10;
    if (bVar12 < 0x68) {
      if (bVar12 < 0x2e) {
        if (bVar12 == 0xf) {
          *(undefined4 *)(param_1 + 5) = 0xf;
          pbVar10 = pbVar10 + 1;
LAB_001001a9:
          if (param_3 <= pbVar10) goto LAB_00100a85;
          iVar4 = *(int *)(param_1 + 5);
          *(int *)(param_1 + 5) = iVar4 << 8;
          bVar3 = *pbVar10;
          uVar5 = (uint)bVar3 | iVar4 << 8;
          *(uint *)(param_1 + 5) = uVar5;
          bVar12 = *pbVar10;
          if ((bVar12 & 0xfd) == 0x38) {
            if ((*(byte *)(param_1 + 2) & 0x10) != 0) {
              return 0;
            }
            pbVar10 = pbVar10 + 1;
            goto LAB_001003da;
          }
          if (((int)(uint)(byte)(&DAT_0010ad60)[bVar12 >> 3] >> (bVar12 & 7) & 1U) == 0) {
            return 0;
          }
          if ((*(char *)((long)param_1 + 0x14) == -0xd) && (bVar12 == 0x1e)) {
            if (pbVar10 + 1 < param_3) {
              ppbVar17 = param_1 + 2;
              for (lVar9 = 0x12; lVar9 != 0; lVar9 = lVar9 + -1) {
                *(undefined4 *)ppbVar17 = 0;
                ppbVar17 = (byte **)((long)ppbVar17 + (ulong)bVar20 * -8 + 4);
              }
              *param_1 = param_2;
              param_1[1] = (byte *)0x4;
              iVar4 = (pbVar10[1] == 0xfa) + 0xa5fc + (uint)(pbVar10[1] == 0xfa);
LAB_001004d1:
              *(int *)(param_1 + 5) = iVar4;
              return 1;
            }
            goto LAB_00100a85;
          }
          *(char *)(param_1 + 10) = (char)((long)pbVar10 - (long)param_2);
          uVar13 = uVar5;
          if ((*(byte *)(param_1 + 2) & 0x10) != 0) {
            uVar13 = (uint)bVar3;
          }
          if ((uVar13 & 0xf0) == 0x80) {
            pbVar11 = (byte *)0x4;
LAB_00100487:
            *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 8;
            param_1[9] = pbVar11;
          }
          else {
            if ((byte)uVar13 < 0x74) {
              if (0x6f < (uVar13 & 0xff)) {
LAB_00100482:
                pbVar11 = (byte *)0x1;
                goto LAB_00100487;
              }
            }
            else {
              uVar8 = (uVar13 & 0xff) - 0xa4;
              if ((uVar8 < 0x23) && ((0x740400101U >> ((byte)uVar8 & 0x3f) & 1) != 0))
              goto LAB_00100482;
            }
            param_1[9] = (byte *)0x0;
          }
          pbVar11 = pbVar10;
          if (((byte)(&DAT_0010ad40)[uVar13 >> 3 & 0x1f] >> (uVar13 & 7) & 1) == 0) {
            if ((*(byte *)((long)param_1 + 0x11) & 8) != 0) goto LAB_0010065d;
            *param_1 = param_2;
            pbVar10 = (byte *)(((long)pbVar10 - (long)param_2) + 1);
          }
          else {
LAB_001008a5:
            pbVar10 = pbVar11 + 1;
            if (param_3 <= pbVar10) goto LAB_00100a85;
            bVar12 = *(byte *)(param_1 + 2);
            *(byte *)(param_1 + 2) = bVar12 | 0x40;
            bVar3 = *pbVar10;
            *(byte *)((long)param_1 + 0x1c) = bVar3;
            bVar3 = bVar3 >> 6;
            *(byte *)((long)param_1 + 0x1d) = bVar3;
            bVar1 = *pbVar10;
            *(byte *)((long)param_1 + 0x1e) = (byte)((int)(uint)bVar1 >> 3) & 7;
            bVar7 = *pbVar10;
            *(byte *)((long)param_1 + 0x1f) = bVar7 & 7;
            if (bVar3 == 3) {
LAB_001008e2:
              if ((*(uint *)((long)param_1 + 0x1c) & 0xff00ff00) == 0x5000000) {
LAB_0010090e:
                *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 1;
              }
            }
            else {
              if ((bVar7 & 7) == 4) {
                *(byte *)(param_1 + 2) = bVar12 | 0xc0;
              }
              if (bVar3 != 1) {
                if (bVar3 != 2) goto LAB_001008e2;
                goto LAB_0010090e;
              }
              *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 3;
            }
            uVar5 = *(uint *)(param_1 + 5);
            if ((uVar5 - 0xf6 < 2) && (((int)(uint)bVar1 >> 3 & 7U) != 0)) {
              *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) & 0xf7;
              param_1[9] = (byte *)0x0;
            }
            if (*(char *)(param_1 + 2) < '\0') {
              if (param_3 <= pbVar11 + 2) goto LAB_00100a85;
              bVar12 = pbVar11[2];
              *(byte *)((long)param_1 + 0x21) = bVar12;
              *(byte *)((long)param_1 + 0x22) = bVar12 >> 6;
              *(byte *)((long)param_1 + 0x23) = (byte)((int)(uint)pbVar11[2] >> 3) & 7;
              bVar12 = pbVar11[2];
              *(byte *)((long)param_1 + 0x24) = bVar12 & 7;
              if ((bVar12 & 7) == 5) {
                if ((*(byte *)((long)param_1 + 0x1d) & 0xfd) == 0) {
                  *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 1;
                }
                else if (*(byte *)((long)param_1 + 0x1d) == 1) {
                  *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 3;
                }
              }
              bVar12 = *(byte *)((long)param_1 + 0x11);
              if ((bVar12 & 2) == 0) {
                if ((bVar12 & 1) != 0) {
                  pbVar11 = pbVar11 + 3;
                  goto LAB_0010071c;
                }
                if ((bVar12 & 8) != 0) {
                  pbVar10 = pbVar11 + 3;
                  goto LAB_00100660;
                }
                *param_1 = param_2;
                pbVar10 = pbVar11 + 2 + (1 - (long)param_2);
                goto LAB_001004c1;
              }
              pbVar10 = pbVar11 + 3;
LAB_001009ca:
              if (param_3 <= pbVar10) goto LAB_00100a85;
              bVar12 = *(byte *)((long)param_1 + 0x11);
              param_1[6] = (byte *)(long)(char)*pbVar10;
            }
            else {
              bVar12 = *(byte *)((long)param_1 + 0x11);
              if ((bVar12 & 2) != 0) {
                pbVar10 = pbVar11 + 2;
                goto LAB_001009ca;
              }
              if ((bVar12 & 1) != 0) goto LAB_0010063f;
            }
            if ((bVar12 & 8) != 0) goto LAB_0010065d;
            *param_1 = param_2;
            pbVar10 = pbVar10 + (1 - (long)param_2);
          }
LAB_001004c1:
          param_1[1] = pbVar10;
          if (pbVar10 == (byte *)0x0) {
            return 0;
          }
          goto LAB_001004ce;
        }
        if (bVar12 != 0x26) goto LAB_00100171;
      }
      else if ((0xc0000000010101U >> ((ulong)(bVar12 - 0x2e) & 0x3f) & 1) == 0) {
        if (bVar12 == 0x67) {
          if ((*(byte *)(param_1 + 2) & 8) != 0) {
            return 0;
          }
          *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 8;
          *(byte *)((long)param_1 + 0x17) = *pbVar10;
        }
        else {
          if (bVar12 != 0x66) {
            if ((bVar12 & 0xf0) == 0x40) {
              *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 0x20;
              bVar12 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              *(byte *)((long)param_1 + 0x1b) = bVar12;
            }
            goto LAB_00100171;
          }
          if (((*(byte *)(param_1 + 2) & 4) != 0) && (*(char *)((long)param_1 + 0x16) != 'f')) {
            return 0;
          }
          if ((*(byte *)(param_1 + 2) & 0x20) == 0) {
            *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 4;
            *(byte *)((long)param_1 + 0x16) = *pbVar10;
          }
        }
        goto LAB_00100655;
      }
      if ((*(byte *)(param_1 + 2) & 2) != 0) {
        return 0;
      }
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
      *(byte *)((long)param_1 + 0x15) = *pbVar10;
    }
    else {
      if (bVar12 != 0xf0) {
        if (bVar12 < 0xf1) {
          if (1 < (byte)(bVar12 + 0x3c)) goto LAB_00100171;
          if ((*(byte *)(param_1 + 2) & 0x20) != 0) {
            return 0;
          }
          *(uint *)(param_1 + 5) = (uint)bVar12;
          bVar3 = *pbVar10;
          pbVar11 = pbVar10 + 1;
          *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 0x10;
          *(byte *)(param_1 + 3) = bVar3;
          if (param_3 <= pbVar11) goto LAB_00100a85;
          bVar7 = pbVar10[1];
          *(undefined *)((long)param_1 + 0x1b) = 0x40;
          uVar5 = (uint)bVar12 << 8 | 0xf;
          *(byte *)((long)param_1 + 0x19) = bVar7;
          *(uint *)(param_1 + 5) = uVar5;
          bVar12 = ((char)pbVar10[1] >> 7 & 0xfcU) + 0x44;
          *(byte *)((long)param_1 + 0x1b) = bVar12;
          if (bVar3 == 0xc5) goto LAB_001001a5;
          if (bVar3 != 0xc4) {
            return 0;
          }
          bVar3 = pbVar10[1];
          if ((bVar3 & 0x40) == 0) {
            *(byte *)((long)param_1 + 0x1b) = bVar12 | 2;
          }
          if ((pbVar10[1] & 0x20) == 0) {
            *(byte *)((long)param_1 + 0x1b) = *(byte *)((long)param_1 + 0x1b) | 1;
          }
          if (2 < (byte)((bVar3 & 0x1f) - 1)) {
            return 0;
          }
          if (param_3 <= pbVar10 + 2) goto LAB_00100a85;
          bVar12 = pbVar10[2];
          bVar7 = bVar7 & 0x1f;
          *(byte *)((long)param_1 + 0x1a) = bVar12;
          if (-1 < (char)bVar12) {
            *(byte *)((long)param_1 + 0x1b) = *(byte *)((long)param_1 + 0x1b) | 8;
          }
          uVar5 = uVar5 << 8;
          *(uint *)(param_1 + 5) = uVar5;
          if (bVar7 == 2) {
            uVar5 = uVar5 | 0x38;
          }
          else {
            if (bVar7 != 3) {
              if (bVar7 != 1) {
                return 0;
              }
              pbVar10 = pbVar10 + 3;
              goto LAB_001001a9;
            }
            uVar5 = uVar5 | 0x3a;
          }
          *(uint *)(param_1 + 5) = uVar5;
          pbVar10 = pbVar10 + 3;
LAB_001003da:
          if (param_3 <= pbVar10) goto LAB_00100a85;
          uVar8 = *(int *)(param_1 + 5) << 8;
          *(uint *)(param_1 + 5) = uVar8;
          bVar12 = *pbVar10;
          uVar5 = bVar12 | uVar8;
          *(uint *)(param_1 + 5) = uVar5;
          uVar13 = uVar5;
          if ((*(byte *)(param_1 + 2) & 0x10) != 0) {
            uVar13 = (uint)bVar12 | uVar8 & 0xffffff;
          }
          uVar8 = uVar13 & 0xff00;
          pbVar11 = pbVar10;
          if (uVar8 != 0x3800) {
            uVar5 = uVar13 & 0xff;
            bVar12 = (byte)uVar13;
            if (bVar12 < 0xf1) {
              if (uVar5 < 0xcc) {
                if (uVar5 < 0x3a) {
                  if (0x37 < uVar5) goto LAB_0010059f;
                  bVar18 = uVar5 - 0x20 < 2;
                  bVar19 = uVar5 - 0x20 == 2;
                }
                else {
                  bVar18 = uVar5 - 0x60 < 3;
                  bVar19 = uVar5 - 0x60 == 3;
                }
                if (!bVar18 && !bVar19) goto LAB_001005b6;
              }
              else if ((0x1000080001U >> (bVar12 + 0x34 & 0x3f) & 1) == 0) goto LAB_001005b6;
LAB_0010059f:
              *(char *)(param_1 + 10) = (char)pbVar10 - (char)param_2;
              if (uVar8 == 0x3a00) {
LAB_0010061c:
                *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 8;
                param_1[9] = (byte *)0x1;
                goto LAB_001008a5;
              }
            }
            else {
LAB_001005b6:
              bVar3 = bVar12 & 0xf;
              if (bVar12 >> 4 == 1) {
                if (bVar3 < 10) {
                  bVar18 = (uVar13 & 0xc) == 0;
                  goto LAB_001005e4;
                }
                if (bVar3 != 0xd) {
                  return 0;
                }
              }
              else {
                if (bVar12 >> 4 == 4) {
                  bVar18 = (0x1c57UL >> bVar3 & 1) == 0;
                }
                else {
                  if (bVar12 >> 4 != 0) {
                    return 0;
                  }
                  bVar18 = (bVar12 & 0xb) == 3;
                }
LAB_001005e4:
                if (bVar18) {
                  return 0;
                }
              }
              *(char *)(param_1 + 10) = (char)pbVar10 - (char)param_2;
              if ((uVar8 == 0x3a00) && (2 < uVar5 - 0x4a)) goto LAB_0010061c;
            }
            param_1[9] = (byte *)0x0;
            goto LAB_001008a5;
          }
          uVar8 = uVar13 >> 3 & 0x1f;
          if (((byte)(&DAT_0010ad20)[uVar8] >> (uVar13 & 7) & 1) == 0) {
            return 0;
          }
          param_1[9] = (byte *)0x0;
          bVar12 = (&DAT_0010ad00)[uVar8];
          *(char *)(param_1 + 10) = (char)((long)pbVar10 - (long)param_2);
          if ((bVar12 >> (uVar13 & 7) & 1) != 0) goto LAB_001008a5;
          if ((*(byte *)((long)param_1 + 0x11) & 8) == 0) {
            *param_1 = param_2;
            pbVar10 = (byte *)(((long)pbVar10 - (long)param_2) + 1);
            goto LAB_001004c1;
          }
LAB_0010065d:
          pbVar10 = pbVar10 + 1;
LAB_00100660:
          if (param_3 <= pbVar10) goto LAB_00100a85;
          pbVar11 = param_1[9];
          bVar12 = *pbVar10;
          if (pbVar11 != (byte *)0x1) {
            pbVar15 = pbVar10 + 1;
            if (((ulong)param_1[2] & 0xff000000000004) == 0x66000000000004) {
              if (pbVar11 == (byte *)0x2) {
                param_1[9] = (byte *)0x4;
              }
              else if (pbVar11 == (byte *)0x4) {
                param_1[9] = (byte *)0x2;
              }
            }
            if (param_3 <= pbVar15) goto LAB_00100a85;
            uVar2 = CONCAT11(*pbVar15,bVar12);
            if (param_1[9] == (byte *)0x2) {
              param_1[8] = (byte *)(ulong)uVar2;
              param_1[7] = (byte *)(long)(short)uVar2;
              pbVar10 = pbVar15 + (1 - (long)param_2);
              *param_1 = param_2;
              goto LAB_001007c4;
            }
            if (param_3 <= pbVar10 + 2) goto LAB_00100a85;
            pbVar15 = pbVar10 + 3;
            if (param_3 <= pbVar15) goto LAB_00100a85;
            uVar5 = CONCAT13(pbVar10[3],CONCAT12(pbVar10[2],uVar2));
            if (param_1[9] == (byte *)0x4) {
              param_1[8] = (byte *)(ulong)uVar5;
              pbVar10 = (byte *)(long)(int)uVar5;
            }
            else {
              if (((param_3 <= pbVar10 + 4) || (param_3 <= pbVar10 + 5)) || (param_3 <= pbVar10 + 6)
                 ) goto LAB_00100a85;
              pbVar15 = pbVar10 + 7;
              if (param_3 <= pbVar15) goto LAB_00100a85;
              pbVar10 = (byte *)CONCAT17(pbVar10[7],
                                         CONCAT16(pbVar10[6],
                                                  CONCAT15(pbVar10[5],CONCAT14(pbVar10[4],uVar5))));
              param_1[8] = pbVar10;
            }
            param_1[7] = pbVar10;
            goto LAB_0010087f;
          }
          param_1[8] = (byte *)(ulong)bVar12;
          pbVar10 = pbVar10 + (1 - (long)param_2);
          param_1[7] = (byte *)(long)(char)bVar12;
          *param_1 = param_2;
          param_1[1] = pbVar10;
        }
        else {
          if ((byte)(bVar12 + 0xe) < 2) goto LAB_001000af;
LAB_00100171:
          if (param_3 <= pbVar10) goto LAB_00100a85;
          bVar12 = *pbVar10;
          uVar16 = (ulong)bVar12;
          if (bVar12 == 0xf) {
            *(undefined4 *)(param_1 + 5) = 0xf;
            pbVar11 = pbVar10;
LAB_001001a5:
            pbVar10 = pbVar11 + 1;
            goto LAB_001001a9;
          }
          uVar5 = (uint)bVar12;
          uVar13 = bVar12 & 7;
          if (((byte)(&DAT_0010ada0)[bVar12 >> 3] >> uVar13 & 1) != 0) {
            return 0;
          }
          *(uint *)(param_1 + 5) = (uint)bVar12;
          local_38[0] = 0x3030303030303030;
          *(char *)(param_1 + 10) = (char)((long)pbVar10 - (long)param_2);
          local_38[1] = 0xffff0fc000000000;
          local_38[2] = 0xffff03000000000b;
          local_38[3] = 0xc00bff000025c7;
          uVar14 = local_38[bVar12 >> 6] >> (bVar12 & 0x3f);
          pbVar11 = (byte *)(ulong)((uint)uVar14 & 1);
          if ((uVar14 & 1) == 0) {
            param_1[9] = (byte *)0x0;
          }
          else {
            if (bVar12 < 0xf8) {
              if (bVar12 < 0xc2) {
                if (bVar12 < 0x6a) {
                  if (bVar12 < 0x2d) {
                    if (0x20 < (byte)(bVar12 - 5)) goto LAB_00100324;
                    uVar14 = 0x2020202020;
                  }
                  else {
                    uVar14 = 0x1800000000010101;
                    uVar16 = (ulong)(bVar12 - 0x2d);
                  }
                }
                else {
                  uVar14 = 0x7f80010000000001;
                  uVar16 = (ulong)(bVar12 + 0x7f);
                  if (0x3e < (byte)(bVar12 + 0x7f)) goto LAB_00100324;
                }
                if ((uVar14 >> (uVar16 & 0x3f) & 1) != 0) {
                  pbVar11 = (byte *)0x4;
                }
              }
              else {
                uVar16 = 1L << (bVar12 + 0x3e & 0x3f);
                if ((uVar16 & 0x2000c800000020) == 0) {
                  if ((uVar16 & 0x101) != 0) {
                    pbVar11 = (byte *)0x2;
                  }
                }
                else {
                  pbVar11 = (byte *)0x4;
                }
              }
            }
LAB_00100324:
            *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 8;
            param_1[9] = pbVar11;
          }
          sVar6 = (sbyte)uVar13;
          pbVar11 = pbVar10;
          if (((int)(uint)(byte)(&DAT_0010ad80)[bVar12 >> 3] >> sVar6 & 1U) != 0) goto LAB_001008a5;
          if (3 < bVar12 - 0xa0) {
            if ((*(byte *)((long)param_1 + 0x11) & 8) != 0) {
              if ((((*(byte *)(param_1 + 2) & 0x20) != 0) &&
                  ((*(byte *)((long)param_1 + 0x1b) & 8) != 0)) && ((bVar12 & 0xf8) == 0xb8)) {
                param_1[9] = (byte *)0x8;
                *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 0x10;
                *(sbyte *)(param_1 + 4) = sVar6;
                *(undefined4 *)(param_1 + 5) = 0xb8;
              }
              goto LAB_0010065d;
            }
            *param_1 = param_2;
            pbVar10 = (byte *)(((long)pbVar10 - (long)param_2) + 1);
            goto LAB_001004c1;
          }
          *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 5;
LAB_0010063f:
          pbVar11 = pbVar10 + 1;
LAB_0010071c:
          if (((param_3 <= pbVar11) || (param_3 <= pbVar11 + 1)) || (param_3 <= pbVar11 + 2))
          goto LAB_00100a85;
          pbVar15 = pbVar11 + 3;
          if (param_3 <= pbVar15) goto LAB_00100a85;
          bVar12 = *(byte *)((long)param_1 + 0x11);
          param_1[6] = (byte *)(long)CONCAT13(pbVar11[3],
                                              CONCAT12(pbVar11[2],CONCAT11(pbVar11[1],*pbVar11)));
          if ((bVar12 & 4) == 0) {
            if ((bVar12 & 8) != 0) {
              pbVar10 = pbVar11 + 4;
              goto LAB_00100660;
            }
LAB_0010087f:
            *param_1 = param_2;
            pbVar10 = pbVar15 + (1 - (long)param_2);
          }
          else {
            if (((param_3 <= pbVar11 + 4) || (param_3 <= pbVar11 + 5)) ||
               ((param_3 <= pbVar11 + 6 || (param_3 <= pbVar11 + 7)))) goto LAB_00100a85;
            if ((bVar12 & 8) != 0) {
              pbVar10 = pbVar11 + 8;
              goto LAB_00100660;
            }
            *param_1 = param_2;
            pbVar10 = pbVar11 + 7 + (1 - (long)param_2);
          }
LAB_001007c4:
          param_1[1] = pbVar10;
        }
        if (pbVar10 == (byte *)0x0) {
          return 0;
        }
        uVar5 = *(uint *)(param_1 + 5);
LAB_001004ce:
        iVar4 = uVar5 + 0x80;
        goto LAB_001004d1;
      }
LAB_001000af:
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        return 0;
      }
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
      *(byte *)((long)param_1 + 0x14) = *pbVar10;
    }
LAB_00100655:
    pbVar10 = pbVar10 + 1;
    bVar18 = pbVar10 < param_3;
  } while( true );
}



bool _Llzma_block_buffer_encode_0(int *param_1,long param_2,uint param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (3 < param_2 - (long)param_1) {
    bVar1 = (param_3 | 0x5e20000) + *param_1 == 0xf223;
  }
  return bVar1;
}



undefined8 FUN_00100af0(ulong param_1,undefined8 param_2,ulong *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long local_70;
  long local_68;
  int local_48;
  
  if (param_4 == 0) {
    uVar2 = 0;
    plVar4 = &local_70;
    for (lVar3 = 0x16; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined4 *)plVar4 = 0;
      plVar4 = (long *)((long)plVar4 + 4);
    }
    iVar1 = _Lx86_code_part_0(&local_70,param_1,param_2);
    if (((iVar1 != 0) && (local_48 == 3999)) && ((local_68 + local_70 & 0xfU) == 0)) {
      if (param_3 != (ulong *)0x0) {
        *param_3 = local_68 + local_70;
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = _Llzma_block_buffer_encode_0(param_1,param_2,0xe230);
    if ((int)uVar2 != 0) {
      if (param_3 != (ulong *)0x0) {
        *param_3 = param_1;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}



undefined8
_Llzma2_encoder_init_1
          (ulong param_1,ulong *param_2,ulong *param_3,ulong param_4,ulong param_5,
          undefined4 param_6)

{
  int iVar1;
  ulong uVar2;
  ulong local_40 [2];
  
  local_40[0] = 0;
  uVar2 = param_1;
  if (param_2 != (ulong *)0x0) {
    while ((param_4 < uVar2 && (iVar1 = FUN_00100af0(uVar2,param_5,local_40,param_6), iVar1 == 0)))
    {
      uVar2 = uVar2 - 1;
    }
    uVar2 = local_40[0];
    if ((local_40[0] == 0) ||
       ((local_40[0] == param_4 && (iVar1 = FUN_00100af0(param_4,param_5,0,param_6), iVar1 == 0))))
    {
      return 0;
    }
    *param_2 = uVar2;
  }
  param_1 = param_1 + 1;
  if (param_3 != (ulong *)0x0) {
    for (; param_1 < param_5 - 4; param_1 = param_1 + 1) {
      iVar1 = FUN_00100af0(param_1,param_5,0,param_6);
      if (iVar1 != 0) goto LAB_00100c58;
    }
    if ((param_5 - 4 != param_1) || (iVar1 = FUN_00100af0(param_1,param_5,0,param_6), iVar1 != 0)) {
LAB_00100c58:
      param_5 = param_1;
    }
    *param_3 = param_5;
  }
  return 1;
}



undefined8 _Llzma_optimum_normal_0(ulong param_1,ulong param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  long local_80 [12];
  
  bVar4 = 0;
  iVar1 = _Llzma2_decoder_end_1(0,0x81,4,7);
  if (iVar1 != 0) {
    plVar3 = local_80;
    for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined4 *)plVar3 = 0;
      plVar3 = (long *)((long)plVar3 + ((ulong)bVar4 * -2 + 1) * 4);
    }
    if (param_4 == (long *)0x0) {
      param_4 = local_80;
    }
    while (param_1 < param_2) {
      iVar1 = _Lx86_code_part_0(param_4,param_1,param_2);
      if (iVar1 == 0) {
        param_1 = param_1 + 1;
      }
      else {
        if ((*(int *)(param_4 + 5) == 0x168) &&
           ((param_3 == 0 || (param_4[1] + param_4[7] + *param_4 == param_3)))) {
          return 1;
        }
        param_1 = param_1 + param_4[1];
      }
    }
  }
  return 0;
}



undefined8
_Llzma_filters_update_0(ulong param_1,ulong param_2,uint param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 local_80 [22];
  
  puVar3 = local_80;
  for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (param_5 == (undefined4 *)0x0) {
    param_5 = local_80;
  }
  do {
    while( true ) {
      if (param_2 <= param_1) {
        return 0;
      }
      iVar1 = _Lx86_code_part_0(param_5,param_1,param_2);
      if (iVar1 != 0) break;
      param_1 = param_1 + 1;
    }
    if (((param_5[7] & 0xff00ff00) == 0x5000000) &&
       ((((*(byte *)((long)param_5 + 0x1b) & 0x48) == 0x48) == param_3 || (param_4 == 0)))) {
      iVar1 = param_5[10];
      if (iVar1 == 0x10d) {
        return 1;
      }
      if (param_4 == 0) {
        bVar4 = iVar1 == 0x109;
      }
      else {
        bVar4 = iVar1 == 0x10b;
      }
      if (bVar4) {
        return 1;
      }
    }
    param_1 = param_1 + *(long *)(param_5 + 2);
  } while( true );
}



undefined8
_Llzma_filters_update_1(ulong param_1,ulong param_2,uint param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 local_80 [22];
  
  puVar3 = local_80;
  for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (param_5 == (undefined4 *)0x0) {
    param_5 = local_80;
  }
  do {
    while( true ) {
      if (param_2 <= param_1) {
        return 0;
      }
      iVar1 = _Lx86_code_part_0(param_5,param_1,param_2);
      if (iVar1 != 0) break;
      param_1 = param_1 + 1;
    }
    if (((param_5[7] & 0xff00ff00) == 0x5000000) &&
       ((((*(byte *)((long)param_5 + 0x1b) & 0x48) == 0x48) == param_3 || (param_4 == 0)))) {
      if (param_4 == 0) {
        bVar4 = param_5[10] == 0x109;
      }
      else {
        bVar4 = param_5[10] == 0x10b;
      }
      if (bVar4) {
        return 1;
      }
    }
    param_1 = param_1 + *(long *)(param_5 + 2);
  } while( true );
}



undefined8 _Llzma_raw_encoder_0(ulong param_1,ulong param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 local_80 [4];
  byte local_6f;
  int local_58;
  long local_50;
  
  bVar4 = 0;
  iVar1 = _Llzma_index_iter_rewind_cold(0x7c,5,6,0);
  if (iVar1 != 0) {
    puVar3 = local_80;
    for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    for (; param_1 < param_2; param_1 = param_1 + 1) {
      iVar1 = _Lx86_code_part_0(local_80,param_1,param_2);
      if ((((iVar1 != 0) && (local_58 == 0x10d)) && ((local_6f & 7) == 1)) &&
         ((local_50 == param_3 || (local_50 == -param_3)))) {
        return 1;
      }
    }
  }
  return 0;
}



undefined8 _Llzma_mt_block_size_1(ulong param_1,ulong param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  long local_80 [12];
  
  bVar4 = 0;
  iVar1 = _Llzma_index_iter_rewind_cold(0x1c8,0,0x1e,0);
  if (iVar1 != 0) {
    plVar3 = local_80;
    for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined4 *)plVar3 = 0;
      plVar3 = (long *)((long)plVar3 + ((ulong)bVar4 * -2 + 1) * 4);
    }
    if (param_3 == (long *)0x0) {
      param_3 = local_80;
    }
    for (; param_1 < param_2; param_1 = param_1 + 1) {
      iVar1 = _Lx86_code_part_0(param_3,param_1,param_2);
      if ((((iVar1 != 0) && (*(int *)(param_3 + 5) == 0x10d)) &&
          ((*(byte *)((long)param_3 + 0x1b) & 0x48) == 0x48)) &&
         (((*(uint *)((long)param_3 + 0x1c) & 0xff00ff00) == 0x5000000 &&
          ((param_4 == 0 || (param_3[1] + *param_3 + param_3[6] == param_4)))))) {
        return 1;
      }
    }
  }
  return 0;
}



undefined8 _Lstream_encode_1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_60 [12];
  
  puVar4 = local_60;
  for (lVar3 = 0x16; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined4 *)puVar4 = 0;
    puVar4 = (undefined8 *)((long)puVar4 + 4);
  }
  iVar1 = _Llzma_mt_block_size_1(param_1,param_2,local_60,param_3);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_60[0];
  }
  return uVar2;
}



undefined8
_Llzma_properties_size_0(ulong param_1,ulong param_2,long *param_3,int param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  long local_80 [11];
  
  bVar4 = 0;
  iVar1 = _Llzma_index_iter_rewind_cold(0xd6,4,0xe,0);
  if (iVar1 != 0) {
    plVar3 = local_80;
    for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined4 *)plVar3 = 0;
      plVar3 = (long *)((long)plVar3 + ((ulong)bVar4 * -2 + 1) * 4);
    }
    if (param_3 == (long *)0x0) {
      param_3 = local_80;
    }
    for (; param_1 < param_2; param_1 = param_1 + 1) {
      iVar1 = _Lx86_code_part_0(param_3,param_1,param_2);
      if ((((iVar1 != 0) && (*(int *)(param_3 + 5) == param_4)) &&
          ((*(uint *)((long)param_3 + 0x1c) & 0xff00ff00) == 0x5000000)) &&
         ((param_5 == 0 ||
          (((*(byte *)((long)param_3 + 0x11) & 1) != 0 &&
           (param_5 == param_3[6] + *param_3 + param_3[1])))))) {
        return 1;
      }
    }
  }
  return 0;
}



undefined8
_Lstream_encoder_mt_init_1
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _Llzma_mt_block_size_1();
  if (iVar1 == 0) {
    uVar2 = _Llzma_properties_size_0(param_1,param_2,param_3,0x10b,param_4);
    return uVar2;
  }
  return 1;
}



undefined8 _Llzma_simple_x86_decoder_init_1(ulong param_1,ulong param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long local_80 [12];
  
  plVar3 = local_80;
  for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined4 *)plVar3 = 0;
    plVar3 = (long *)((long)plVar3 + 4);
  }
  if (param_3 == (long *)0x0) {
    param_3 = local_80;
  }
  while( true ) {
    if (param_2 <= param_1) {
      return 0;
    }
    iVar1 = _Lx86_code_part_0(param_3,param_1,param_2);
    if ((((iVar1 != 0) && (*(int *)(param_3 + 5) == 0x103)) &&
        ((*(uint *)((long)param_3 + 0x1c) & 0xff00ff00) == 0x5000000)) &&
       ((param_4 == 0 ||
        (((*(byte *)((long)param_3 + 0x11) & 1) != 0 &&
         (param_4 == param_3[6] + *param_3 + param_3[1])))))) break;
    param_1 = param_1 + 1;
  }
  return 1;
}



void _Lstream_decode_1(void)

{
  return;
}



ulong FUN_00101220(ulong *param_1,ulong param_2,long param_3,uint param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
LAB_00101234:
  param_5 = param_5 + 1;
  uVar3 = param_2 + param_3;
  if (param_3 == 0) {
LAB_0010136e:
    uVar3 = 1;
  }
  else {
    uVar4 = uVar3;
    if (param_2 <= uVar3) {
      uVar4 = param_2;
    }
    if ((*param_1 <= uVar4) && (param_5 != 0x3ea)) {
      lVar6 = 0;
      do {
        if ((uint)*(ushort *)(param_1 + 3) <= (uint)lVar6) break;
        piVar2 = (int *)(lVar6 * 0x38 + param_1[2]);
        if ((*piVar2 == 1) && ((piVar2[1] & param_4) == param_4)) {
          uVar4 = (*param_1 - param_1[1]) + *(long *)(piVar2 + 4);
          uVar5 = *(long *)(piVar2 + 10) + uVar4;
          uVar4 = uVar4 & 0xfffffffffffff000;
          if ((uVar5 & 0xfff) != 0) {
            uVar5 = (uVar5 & 0xfffffffffffff000) + 0x1000;
          }
          if ((param_2 >= uVar4) && (uVar3 <= uVar5)) goto LAB_0010136e;
          if ((uVar3 > uVar5) || (uVar4 <= param_2)) {
            if ((uVar5 <= param_2) || (param_2 < uVar4)) {
              if ((uVar5 < uVar3) && (uVar4 > param_2)) {
                uVar4 = FUN_00101220(param_1,param_2,uVar4 - param_2,param_4);
                if ((int)uVar4 == 0) {
                  return uVar4;
                }
                iVar1 = FUN_00101220(param_1,uVar5 + 1,(uVar3 - 1) - uVar5,param_4,param_5);
                return (ulong)(iVar1 != 0);
              }
            }
            else if (uVar5 < uVar3) {
              param_2 = uVar5 + 1;
              param_3 = uVar3 - param_2;
              goto LAB_00101234;
            }
          }
          else if (uVar4 < uVar3) goto code_r0x001012f3;
        }
        lVar6 = lVar6 + 1;
      } while( true );
    }
    uVar3 = 0;
  }
  return uVar3;
code_r0x001012f3:
  param_3 = (uVar4 - param_2) + -1;
  goto LAB_00101234;
}



void _Lparse_bcj_0(void)

{
  FUN_00101220();
  return;
}



bool _Llzma_simple_props_size_part_0(int param_1,int param_2)

{
  return param_1 + 1 + param_2 == 0x474e553;
}



undefined8 _Lget_literal_price_part_0(ulong param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  byte bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint **ppuVar13;
  long lVar14;
  uint *puVar15;
  ulong *puVar16;
  int *piVar17;
  ulong uVar18;
  int *piVar19;
  ulong uVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != (ulong *)0x0) {
    uVar18 = 0xffffffffffffffff;
    uVar21 = 0;
    puVar16 = param_2 + 1;
    for (lVar14 = 0x3e; lVar14 != 0; lVar14 = lVar14 + -1) {
      *(undefined4 *)puVar16 = 0;
      puVar16 = (ulong *)((long)puVar16 + 4);
    }
    *param_2 = param_1;
    lVar14 = -1;
    uVar20 = (ulong)*(ushort *)(param_1 + 0x38);
    piVar17 = (int *)(*(long *)(param_1 + 0x20) + param_1);
    *(ushort *)(param_2 + 3) = *(ushort *)(param_1 + 0x38);
    param_2[2] = (ulong)piVar17;
    piVar19 = piVar17;
    for (; uVar21 < (uint)uVar20; uVar21 = uVar21 + 1) {
      iVar11 = *piVar19;
      if (iVar11 == 1) {
        if (*(ulong *)(piVar19 + 4) < uVar18) {
          uVar18 = *(ulong *)(piVar19 + 4);
        }
      }
      else if (iVar11 == 2) {
        lVar14 = (long)(int)uVar21;
      }
      else {
        iVar11 = _Llzma_simple_props_size_part_0(iVar11,0xa0000000);
        if (iVar11 != 0) {
          if (*(int *)((long)param_2 + 0x4c) != 0) {
            return 0;
          }
          param_2[10] = *(ulong *)(piVar19 + 4);
          uVar4 = *(ulong *)(piVar19 + 10);
          *(undefined4 *)((long)param_2 + 0x4c) = 1;
          param_2[0xb] = uVar4;
        }
      }
      piVar19 = piVar19 + 0xe;
    }
    if ((uVar18 != 0xffffffffffffffff) && ((int)lVar14 != -1)) {
      param_2[1] = uVar18;
      uVar20 = *(ulong *)(piVar17 + lVar14 * 0xe + 10);
      uVar18 = (param_1 - uVar18) + *(long *)(piVar17 + lVar14 * 0xe + 4);
      param_2[4] = uVar18;
      iVar11 = (int)(uVar20 >> 4);
      *(int *)(param_2 + 5) = iVar11;
      iVar12 = _Lparse_bcj_0();
      if (iVar12 != 0) {
        ppuVar13 = (uint **)(uVar18 + 8);
        bVar10 = false;
        puVar22 = (uint *)0xffffffffffffffff;
        puVar23 = (uint *)0xffffffffffffffff;
        puVar15 = (uint *)0xffffffffffffffff;
        puVar24 = (uint *)0x0;
        for (iVar12 = 0; iVar11 != iVar12; iVar12 = iVar12 + 1) {
          puVar5 = ppuVar13[-1];
          if (puVar5 == (uint *)0x0) {
            *(int *)(param_2 + 5) = iVar12;
            break;
          }
          if ((long)puVar5 < 0x25) {
            if ((long)puVar5 < 0x17) {
              switch(puVar5) {
              case (uint *)0x2:
                puVar15 = *ppuVar13;
                break;
              case (uint *)0x5:
                param_2[6] = (ulong)*ppuVar13;
                break;
              case (uint *)0x6:
                param_2[7] = (ulong)*ppuVar13;
                break;
              case (uint *)0x7:
                param_2[0xf] = (ulong)*ppuVar13;
                break;
              case (uint *)0x8:
                puVar23 = *ppuVar13;
              }
            }
            else {
              switch(puVar5) {
              case (uint *)0x17:
                param_2[8] = (ulong)*ppuVar13;
                break;
              case (uint *)0x18:
                goto switchD_0010155d_caseD_18;
              case (uint *)0x1e:
                bVar9 = *(byte *)ppuVar13 & 8;
                goto LAB_00101630;
              case (uint *)0x23:
                puVar22 = *ppuVar13;
                break;
              case (uint *)0x24:
                param_2[0x11] = (ulong)*ppuVar13;
              }
            }
          }
          else if (puVar5 == (uint *)0x6ffffffb) {
            bVar9 = *(byte *)ppuVar13 & 1;
LAB_00101630:
            if (bVar9 != 0) {
switchD_0010155d_caseD_18:
              *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 0x1a) | 0x20;
            }
          }
          else if ((long)puVar5 < 0x6ffffffc) {
            if ((long)puVar5 < 0x6ffffefd) {
              if (0x6ffffefa < (long)puVar5) {
                return 0;
              }
              if (puVar5 == (uint *)0x6ffffef5) {
                puVar24 = *ppuVar13;
              }
            }
            else if (puVar5 == (uint *)0x6ffffff0) {
              puVar5 = *ppuVar13;
              *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 0x1a) | 0x10;
              param_2[0xe] = (ulong)puVar5;
            }
          }
          else if (puVar5 == (uint *)0x6ffffffd) {
            bVar10 = true;
            param_2[0xd] = (ulong)*ppuVar13;
          }
          else {
            if (puVar5 == (uint *)0x7fffffff) {
              return 0;
            }
            if (puVar5 == (uint *)0x6ffffffc) {
              param_2[0xc] = (ulong)*ppuVar13;
            }
          }
          ppuVar13 = ppuVar13 + 2;
        }
        uVar18 = param_2[8];
        if (uVar18 != 0) {
          if (puVar15 == (uint *)0xffffffffffffffff) {
            return 0;
          }
          *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 0x1a) | 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = puVar15;
          *(int *)(param_2 + 9) = SUB164(auVar7 / ZEXT816(0x18),0);
        }
        uVar20 = param_2[0xf];
        if (uVar20 != 0) {
          if (puVar23 == (uint *)0xffffffffffffffff) {
            return 0;
          }
          *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 0x1a) | 2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = puVar23;
          *(int *)(param_2 + 0x10) = SUB164(auVar8 / ZEXT816(0x18),0);
        }
        uVar4 = param_2[0x11];
        if (uVar4 != 0) {
          if (puVar22 == (uint *)0xffffffffffffffff) {
            return 0;
          }
          *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 0x1a) | 4;
          *(int *)(param_2 + 0x12) = (int)((ulong)puVar22 >> 3);
        }
        if (param_2[0xc] != 0) {
          if (bVar10) {
            *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 0x1a) | 8;
          }
          else {
            param_2[0xc] = 0;
          }
        }
        uVar6 = param_2[6];
        if (((uVar6 != 0) && (puVar24 != (uint *)0x0)) && (param_2[7] != 0)) {
          if (uVar6 <= param_1) {
            param_2[6] = uVar6 + param_1;
            param_2[7] = param_2[7] + param_1;
            if (uVar18 != 0) {
              param_2[8] = uVar18 + param_1;
            }
            if (uVar20 != 0) {
              param_2[0xf] = uVar20 + param_1;
            }
            if (uVar4 != 0) {
              param_2[0x11] = uVar4 + param_1;
            }
            if (param_2[0xe] != 0) {
              param_2[0xe] = param_2[0xe] + param_1;
            }
            puVar24 = (uint *)((long)puVar24 + param_1);
          }
          uVar18 = param_2[0xc];
          if ((uVar18 != 0) && (uVar18 < param_1)) {
            param_2[0xc] = param_1 + uVar18;
          }
          if (((((param_2[8] == 0) ||
                (iVar11 = _Lparse_bcj_0(param_2,param_2[8],puVar15,4), iVar11 != 0)) &&
               ((param_2[0xf] == 0 ||
                (iVar11 = _Lparse_bcj_0(param_2,param_2[0xf],puVar23,4), iVar11 != 0)))) &&
              ((param_2[0x11] == 0 ||
               (iVar11 = _Lparse_bcj_0(param_2,param_2[0x11],puVar22,4), iVar11 != 0)))) &&
             ((param_2[0xc] == 0 ||
              (iVar11 = _Lparse_bcj_0(param_2,param_2[0xc],param_2[0xd] * 0x14,4), iVar11 != 0)))) {
            uVar21 = *puVar24;
            *(uint *)(param_2 + 0x1b) = uVar21;
            uVar1 = puVar24[2];
            uVar2 = puVar24[1];
            *(uint *)((long)param_2 + 0xdc) = uVar1 - 1;
            puVar15 = puVar24 + 4;
            uVar3 = puVar24[3];
            param_2[0x1d] = (ulong)puVar15;
            *(uint *)(param_2 + 0x1c) = uVar3;
            param_2[0x1e] = (ulong)(puVar15 + uVar1 * 2);
            param_2[0x1f] = (ulong)(puVar15 + uVar1 * 2 + ((ulong)uVar21 - (ulong)uVar2));
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



uint * _Lcrc_init_0(long param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  ushort *puVar8;
  short *psVar9;
  uint uVar10;
  byte *local_40;
  uint local_34;
  
  iVar4 = _Llzma_index_iter_rewind_cold(0x58,0xf,3,0);
  if ((iVar4 != 0) && ((param_3 == 0 || ((*(byte *)(param_1 + 0xd0) & 0x18) == 0x18)))) {
    for (uVar10 = 0; uVar10 < *(uint *)(param_1 + 0xd8); uVar10 = uVar10 + 1) {
      puVar6 = (uint *)(*(long *)(param_1 + 0xf0) + (ulong)uVar10 * 4);
      iVar4 = _Lparse_bcj_0(param_1,puVar6,4,4);
      if (iVar4 == 0) {
        return (uint *)0x0;
      }
      local_40 = (byte *)(*(long *)(param_1 + 0xf8) + (ulong)*puVar6 * 4);
      iVar4 = _Lparse_bcj_0(param_1,local_40,8,4);
      if (iVar4 == 0) {
        return (uint *)0x0;
      }
      do {
        uVar7 = (long)local_40 - *(long *)(param_1 + 0xf8) >> 2 & 0xffffffff;
        puVar6 = (uint *)(uVar7 * 0x18 + *(long *)(param_1 + 0x38));
        iVar4 = _Lparse_bcj_0(param_1,puVar6,0x18,4);
        if (iVar4 == 0) {
          return (uint *)0x0;
        }
        if ((*(long *)(puVar6 + 2) != 0) && (*(short *)((long)puVar6 + 6) != 0)) {
          lVar5 = (ulong)*puVar6 + *(long *)(param_1 + 0x30);
          iVar4 = _Lparse_bcj_0(param_1,lVar5,1,4);
          if (iVar4 == 0) {
            return (uint *)0x0;
          }
          iVar4 = _Lsimple_coder_update_0(lVar5,0);
          if (iVar4 == param_2) {
            if (param_3 == 0) {
              return puVar6;
            }
            puVar8 = (ushort *)(uVar7 * 2 + *(long *)(param_1 + 0x70));
            iVar4 = _Lparse_bcj_0(param_1,puVar8,2,4);
            if (iVar4 == 0) {
              return (uint *)0x0;
            }
            uVar2 = *puVar8;
            if (((*(byte *)(param_1 + 0xd0) & 0x18) == 0x18) && ((uVar2 & 0x7ffe) != 0)) {
              psVar9 = *(short **)(param_1 + 0x60);
              local_34 = 0;
              do {
                if (((*(ulong *)(param_1 + 0x68) <= (ulong)local_34) ||
                    (iVar4 = _Lparse_bcj_0(param_1,psVar9,0x14,4), iVar4 == 0)) || (*psVar9 != 1))
                break;
                if ((uVar2 & 0x7fff) == psVar9[2]) {
                  uVar3 = *(uint *)(psVar9 + 6);
                  iVar4 = _Lparse_bcj_0(param_1,(uint *)((ulong)uVar3 + (long)psVar9),8,4);
                  if (iVar4 == 0) break;
                  lVar5 = (ulong)*(uint *)((ulong)uVar3 + (long)psVar9) + *(long *)(param_1 + 0x30);
                  iVar4 = _Lparse_bcj_0(param_1,lVar5,1,4);
                  if (iVar4 == 0) break;
                  iVar4 = _Lsimple_coder_update_0(lVar5,0);
                  if (param_3 == iVar4) {
                    return puVar6;
                  }
                }
                if (*(uint *)(psVar9 + 8) == 0) break;
                local_34 = local_34 + 1;
                psVar9 = (short *)((long)psVar9 + (ulong)*(uint *)(psVar9 + 8));
              } while( true );
            }
          }
        }
        bVar1 = *local_40;
        local_40 = local_40 + 4;
      } while ((bVar1 & 1) == 0);
    }
  }
  return (uint *)0x0;
}



long _Lcrc64_generic_0(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = _Lcrc_init_0(param_1,param_2,0);
  if (lVar1 != 0) {
    if ((*(long *)(lVar1 + 8) == 0) || (*(short *)(lVar1 + 6) == 0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = *param_1 + *(long *)(lVar1 + 8);
    }
  }
  return lVar1;
}



void * memmove(byte *dst,byte *src,long n)

{
  long lVar1;
  long sVar1;
  
  if ((src < dst) && (dst < src + n)) {
    lVar1 = n + -1;
    if (n != 0) {
      do {
        dst[lVar1] = src[lVar1];
        lVar1 = lVar1 + -1;
      } while (lVar1 != -1);
      return dst;
    }
  }
  else {
    sVar1 = 0;
    if (n == 0) {
      return dst;
    }
    do {
      dst[sVar1] = src[sVar1];
      sVar1 = sVar1 + 1;
    } while (n != sVar1);
  }
  return dst;
}



void _Linit_pric_table_part_1(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  _Lcrc64_generic_0(param_1,param_3);
  return;
}



ulong _Lstream_encoder_update_0
                (long *param_1,long param_2,ulong param_3,ulong param_4,ulong *param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  if (((*(byte *)(param_1 + 0x1a) & 2) == 0) || (*(uint *)(param_1 + 0x10) == 0)) {
    return 0;
  }
  uVar4 = 0;
  if (param_5 != (ulong *)0x0) {
    uVar4 = *param_5;
  }
  lVar1 = *param_1;
  do {
    if (*(uint *)(param_1 + 0x10) <= uVar4) {
      if (param_5 != (ulong *)0x0) {
        *param_5 = uVar4;
      }
      return 0;
    }
    plVar3 = (long *)(uVar4 * 0x18 + param_1[0xf]);
    if (*(int *)(plVar3 + 1) == 8) {
      if (param_2 == 0) {
        uVar2 = plVar3[2] + lVar1;
      }
      else {
        if (plVar3[2] != param_2 - lVar1) goto LAB_00101be7;
        uVar2 = *plVar3 + lVar1;
        if (param_3 == 0) goto LAB_00101bf8;
      }
      if ((param_3 <= uVar2) && (uVar2 <= param_4)) {
LAB_00101bf8:
        if (param_5 == (ulong *)0x0) {
          return uVar2;
        }
        *param_5 = uVar4 + 1;
        return uVar2;
      }
    }
LAB_00101be7:
    uVar4 = uVar4 + 1;
  } while( true );
}



long * _Lstream_encoder_update_1
                 (long *param_1,long param_2,long *param_3,long *param_4,ulong *param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  lVar2 = *param_1;
  if ((*(byte *)(param_1 + 0x1a) & 4) != 0) {
    uVar1 = *(uint *)(param_1 + 0x12);
    if ((param_2 != 0) && (uVar1 != 0)) {
      uVar4 = 0;
      if (param_5 != (ulong *)0x0) {
        uVar4 = *param_5;
      }
      lVar6 = 0;
      for (; uVar4 < uVar1; uVar4 = uVar4 + 1) {
        plVar5 = (long *)(lVar2 + lVar6);
        uVar7 = *(ulong *)(param_1[0x11] + uVar4 * 8);
        if ((uVar7 & 1) == 0) {
          plVar5 = (long *)(lVar2 + uVar7);
          iVar3 = _Lparse_bcj_0(param_1,plVar5,8,4);
          if (iVar3 == 0) {
            return (long *)0x0;
          }
          if ((*plVar5 == param_2 - lVar2) &&
             ((param_3 == (long *)0x0 || ((param_3 <= plVar5 && (plVar5 <= param_4)))))) {
LAB_00101d78:
            if (param_5 != (ulong *)0x0) {
              *param_5 = uVar4 + 1;
              return plVar5;
            }
            return plVar5;
          }
          lVar6 = uVar7 + 8;
        }
        else {
          while (uVar7 = uVar7 >> 1, uVar7 != 0) {
            if ((uVar7 & 1) != 0) {
              iVar3 = _Lparse_bcj_0(param_1,plVar5,8,4);
              if (iVar3 == 0) {
                return (long *)0x0;
              }
              if ((*plVar5 == param_2 - lVar2) &&
                 ((param_3 == (long *)0x0 || ((param_3 <= plVar5 && (plVar5 <= param_4))))))
              goto LAB_00101d78;
            }
            plVar5 = plVar5 + 1;
          }
          lVar6 = lVar6 + 0x1f8;
        }
      }
      if (param_5 != (ulong *)0x0) {
        *param_5 = uVar4;
      }
    }
  }
  return (long *)0x0;
}



long _Llz_encode_1(long *param_1,long *param_2,uint param_3,ulong param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  ulong uVar3;
  
  iVar1 = _Llzma2_decoder_end_1(0,0x67,5,4);
  uVar3 = 0;
  if (iVar1 != 0) {
    for (; uVar3 < param_3; uVar3 = uVar3 + 1) {
      if ((((param_2[1] & 0xffffffffU) == param_4) &&
          (puVar2 = (uint *)(((ulong)param_2[1] >> 0x20) * 0x18 + param_1[7]),
          *(short *)((long)puVar2 + 6) == 0)) &&
         (iVar1 = _Lsimple_coder_update_0((ulong)*puVar2 + param_1[6],0), iVar1 == param_5)) {
        return *param_2 + *param_1;
      }
      param_2 = param_2 + 3;
    }
  }
  return 0;
}



undefined8 _Ldelta_coder_end_1(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (((*(byte *)(param_1 + 0xd0) & 1) != 0) && (*(int *)(param_1 + 0x48) != 0)) {
    uVar1 = _Llz_encode_1(param_1,*(undefined8 *)(param_1 + 0x40),*(int *)(param_1 + 0x48),7,param_2
                         );
    return uVar1;
  }
  return 0;
}



undefined8 _Ldelta_decode_part_0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (((*(byte *)(param_1 + 0xd0) & 2) != 0) && (*(int *)(param_1 + 0x80) != 0)) {
    uVar1 = _Llz_encode_1(param_1,*(undefined8 *)(param_1 + 0x78),*(int *)(param_1 + 0x80),6,param_2
                         );
    return uVar1;
  }
  return 0;
}



undefined  [16]
_Llzma_check_update_0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  undefined auVar6 [16];
  
  iVar1 = _Llzma2_decoder_end_1(0,0xcb,7,0xc);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = param_1[0x13];
    if (uVar2 == 0) {
      for (lVar5 = 0; (uint)lVar5 < (uint)*(ushort *)(param_1 + 3); lVar5 = lVar5 + 1) {
        piVar3 = (int *)(lVar5 * 0x38 + param_1[2]);
        if ((*piVar3 == 1) && ((*(byte *)(piVar3 + 1) & 1) != 0)) {
          uVar2 = (*param_1 - param_1[1]) + *(long *)(piVar3 + 4);
          uVar4 = *(long *)(piVar3 + 10) + uVar2;
          uVar2 = uVar2 & 0xfffffffffffff000;
          if ((uVar4 & 0xfff) != 0) {
            uVar4 = (uVar4 & 0xfffffffffffff000) + 0x1000;
          }
          lVar5 = uVar4 - uVar2;
          param_1[0x13] = uVar2;
          param_1[0x14] = lVar5;
          goto LAB_00101f45;
        }
      }
    }
    else {
      lVar5 = param_1[0x14];
LAB_00101f45:
      *param_2 = lVar5;
    }
  }
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



ulong _Lindex_tree_append_part_0(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long local_20;
  
  iVar3 = _Llzma_index_iter_rewind_cold(0xbd,0xe,0xb,0);
  if (iVar3 != 0) {
    uVar5 = param_1[0x15];
    lVar1 = *param_1;
    local_20 = 0;
    if (uVar5 != 0) {
      *param_2 = param_1[0x16];
      return uVar5;
    }
    lVar4 = _Llzma_check_update_0(param_1,&local_20);
    if (lVar4 != 0) {
      bVar2 = false;
      lVar8 = 0;
      uVar5 = 0;
      for (lVar9 = 0; (uint)lVar9 < (uint)*(ushort *)(param_1 + 3); lVar9 = lVar9 + 1) {
        piVar6 = (int *)(lVar9 * 0x38 + param_1[2]);
        if ((*piVar6 == 1) && ((piVar6[1] & 7U) == 4)) {
          uVar7 = (lVar1 - param_1[1]) + *(long *)(piVar6 + 4);
          uVar10 = *(long *)(piVar6 + 10) + uVar7;
          uVar7 = uVar7 & 0xfffffffffffff000;
          if ((uVar10 & 0xfff) != 0) {
            uVar10 = (uVar10 & 0xfffffffffffff000) + 0x1000;
          }
          if ((ulong)(lVar4 + local_20) <= uVar7) {
            if (bVar2) {
              if (uVar7 < uVar5) {
                lVar8 = uVar10 - uVar7;
                uVar5 = uVar7;
              }
            }
            else {
              bVar2 = true;
              lVar8 = uVar10 - uVar7;
              uVar5 = uVar7;
            }
          }
        }
      }
      if (bVar2) {
        param_1[0x15] = uVar5;
        param_1[0x16] = lVar8;
        *param_2 = lVar8;
        return uVar5;
      }
    }
  }
  return 0;
}



ulong _Llzip_decode_0(undefined8 param_1,int *param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30 [2];
  
  iVar1 = _Llzma_index_iter_rewind_cold(0xb6,7,10,0);
  if (iVar1 != 0) {
    local_30[0] = 0;
    uVar2 = _Lindex_tree_append_part_0(param_1,local_30);
    if ((uVar2 != 0) && (0x2b < local_30[0])) {
      uVar3 = local_30[0] + uVar2;
      if (param_3 != 0) {
        if (uVar3 <= param_3) {
          return 0;
        }
        if (uVar2 < param_3) {
          uVar2 = param_3;
        }
      }
      for (; uVar2 < uVar3; uVar2 = uVar2 + 1) {
        iVar1 = _Lsimple_coder_update_0(uVar2,uVar3);
        if (iVar1 != 0) {
          if (*param_2 == 0) {
            *param_2 = iVar1;
            return uVar2;
          }
          if (*param_2 == iVar1) {
            return uVar2;
          }
        }
      }
    }
  }
  return 0;
}



ulong _Lmicrolzma_decode_0(long *param_1,long *param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar6 = param_1[0x17];
  if (uVar6 != 0) {
    if (param_3 != 0) {
      lVar2 = param_1[0x19];
      *param_2 = lVar2;
      uVar6 = uVar6 - lVar2;
      if (lVar2 == 0) {
        uVar6 = 0;
      }
      return uVar6;
    }
    *param_2 = param_1[0x18];
    return uVar6;
  }
  bVar1 = false;
  lVar2 = 0;
  uVar5 = 0;
  uVar6 = 0;
  for (uVar8 = 0; (uint)uVar8 < (uint)*(ushort *)(param_1 + 3); uVar8 = uVar8 + 1) {
    piVar3 = (int *)(uVar8 * 0x38 + param_1[2]);
    if ((*piVar3 == 1) && ((piVar3[1] & 7U) == 6)) {
      if (*(ulong *)(piVar3 + 10) < *(ulong *)(piVar3 + 8)) {
        return 0;
      }
      uVar7 = (*param_1 - param_1[1]) + *(long *)(piVar3 + 4);
      uVar9 = *(ulong *)(piVar3 + 10) + uVar7;
      uVar7 = uVar7 & 0xfffffffffffff000;
      if ((uVar9 & 0xfff) != 0) {
        uVar9 = (uVar9 & 0xfffffffffffff000) + 0x1000;
      }
      if (bVar1) {
        if (uVar5 + lVar2 < uVar9) {
          lVar2 = uVar9 - uVar7;
          uVar6 = uVar8 & 0xffffffff;
          uVar5 = uVar7;
        }
      }
      else {
        lVar2 = uVar9 - uVar7;
        bVar1 = true;
        uVar6 = uVar8 & 0xffffffff;
        uVar5 = uVar7;
      }
    }
  }
  if (bVar1) {
    lVar2 = uVar6 * 0x38 + param_1[2];
    lVar4 = (*param_1 - param_1[1]) + *(long *)(lVar2 + 0x10);
    uVar8 = *(long *)(lVar2 + 0x28) + lVar4;
    uVar5 = lVar4 + *(long *)(lVar2 + 0x20);
    uVar6 = uVar8;
    if ((uVar8 & 0xfff) != 0) {
      uVar6 = (uVar8 & 0xfffffffffffff000) + 0x1000;
    }
    lVar2 = uVar6 - uVar8;
    param_1[0x17] = uVar5;
    param_1[0x19] = lVar2;
    param_1[0x18] = uVar6 - uVar5;
    if (param_3 == 0) {
      *param_2 = uVar6 - uVar5;
      return uVar5;
    }
    *param_2 = lVar2;
    if (lVar2 != 0) {
      return uVar8;
    }
  }
  return 0;
}



ulong _Lauto_decode_1(long *param_1,ulong param_2,long param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = _Lparse_bcj_0();
  if ((((int)uVar1 != 0) && (uVar1 = 1, param_4 != 0)) && (*(int *)((long)param_1 + 0x4c) != 0)) {
    uVar3 = (*param_1 - param_1[1]) + param_1[10];
    uVar2 = param_1[0xb] + uVar3;
    uVar3 = uVar3 & 0xfffffffffffff000;
    if ((uVar2 & 0xfff) != 0) {
      uVar2 = (uVar2 & 0xfffffffffffff000) + 0x1000;
    }
    if ((uVar2 <= param_2) || (uVar1 = 0, param_2 < uVar3)) {
      uVar1 = (ulong)(param_2 + param_3 <= uVar3 && param_2 < uVar3 || uVar2 < param_2 + param_3);
    }
  }
  return uVar1;
}



undefined8 _Lhc_find_func_1(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 < 0x1000000) {
LAB_00102373:
    uVar4 = 0;
  }
  else {
    uVar5 = param_1 & 0xfffffffffffff000;
    if (uVar5 < param_1 + param_2) {
      if (param_3 == 0) goto LAB_00102373;
      do {
        local_38 = 0;
        lVar1 = *(long *)(param_3 + 0x10);
        if (((lVar1 == 0) || (*(long *)(lVar1 + 0x50) == 0)) ||
           (*(code **)(lVar1 + 0x40) == (code *)0x0)) goto LAB_00102373;
        local_30 = 1;
        iVar2 = (**(code **)(lVar1 + 0x40))(1,0,0,0,&local_38,uVar5);
        if ((iVar2 < 0) &&
           ((piVar3 = (int *)(**(code **)(*(long *)(param_3 + 0x10) + 0x50))(), *piVar3 == 0xe ||
            (uVar5 == 0)))) {
          *piVar3 = 0;
          goto LAB_00102373;
        }
        uVar5 = uVar5 + 0x1000;
      } while (uVar5 < param_1 + param_2);
    }
    uVar4 = 1;
  }
  return uVar4;
}



void _Llzma_simple_props_encode_1(undefined8 param_1)

{
  __tls_get_addr(param_1);
  return;
}



pointer_____offset__0x180___ _Lstream_decoder_mt_end_0(void)

{
  uint local_14;
  pointer_____offset__0x180___ local_10;
  
  local_10 = _Llookup_filter_part_0;
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    local_10 = local_10 + 0x20;
  }
  return local_10;
}



pointer_____offset__0x2a0___ _Llzma_lz_encoder_memusage_1(void)

{
  uint local_14;
  pointer_____offset__0x2a0___ local_10;
  
  local_10 = _Lfilter_optmap_0;
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    local_10 = local_10 + 0x38;
  }
  return local_10;
}



undefined8 FUN_00102530(ulong *param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  long local_88;
  long local_80;
  long local_78;
  byte local_6f;
  byte local_65;
  uint local_64;
  int local_58;
  long local_50;
  
  bVar13 = 0;
  local_88 = 0;
  lVar3 = _Lstream_decoder_memconfig_part_1(1);
  *(long **)(lVar3 + 0x10) = param_3;
  uVar4 = _Llzma_check_update_0(param_2,&local_88);
  if (uVar4 != 0) {
    uVar12 = local_88 + uVar4;
    lVar5 = lzma_alloc(0x758,lVar3);
    *(long *)(param_4 + 0x70) = lVar5;
    if (lVar5 != 0) {
      *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
    }
    lVar5 = _Ldelta_decode_part_0(param_2,0x228);
    if (((lVar5 != 0) && (uVar9 = *param_2 + *(long *)(*param_2 + 0x18), uVar9 < uVar12)) &&
       (uVar4 <= uVar9)) {
      plVar8 = &local_80;
      lVar7 = 0x16;
      uVar10 = uVar9 + 0x200;
      if (uVar12 <= uVar9 + 0x200) {
        uVar10 = uVar12;
      }
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined4 *)plVar8 = 0;
        plVar8 = (long *)((long)plVar8 + (ulong)bVar13 * -8 + 4);
      }
      lVar7 = _Lcrc_init_0(param_3,0xf8,0);
      if (lVar7 != 0) {
        lVar7 = *(long *)(lVar7 + 8);
        lVar1 = *param_3;
        *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
        *(long *)(param_4 + 0xf0) = lVar7 + lVar1;
      }
      uVar11 = 0;
      while (uVar9 < uVar10) {
        iVar2 = _Lx86_code_part_0(&local_80,uVar9,uVar10);
        if (iVar2 == 0) {
          uVar9 = uVar9 + 1;
        }
        else {
          if (local_58 == 0x10d) {
            if (((((local_65 & 0x48) == 0x48) && (local_64 >> 8 == 0x50700)) &&
                (uVar6 = local_80 + local_78 + local_50, uVar4 <= uVar6)) && (uVar6 < uVar12)) {
              uVar11 = uVar6;
            }
          }
          else if (((uVar11 != 0) && (local_58 == 0x17f)) &&
                  ((local_64 >> 8 == 0x50200 &&
                   (((local_6f & 1) != 0 && (lVar5 == local_50 + local_80 + local_78)))))) {
            lVar3 = _Lcrc_init_0(param_3,0xc60,0);
            if (lVar3 != 0) {
              *(long *)(param_4 + 0x58) = *(long *)(lVar3 + 8) + *param_3;
              *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
            }
            *param_1 = uVar11;
            return 1;
          }
          uVar9 = uVar9 + local_78;
        }
      }
    }
    lzma_free(*(undefined8 *)(param_4 + 0x70),lVar3);
  }
  return 0;
}



void FUN_00102750(long param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  
  if (param_1 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x40);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(param_1 + 0x48);
      if (*(undefined8 **)(param_1 + 0xf8) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0xf8) = puVar1;
      }
    }
    if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x58);
    }
    pbVar2 = *(byte **)(param_1 + 0x60);
    if (pbVar2 != (byte *)0x0) {
      *pbVar2 = *pbVar2 & ~*(byte *)(param_1 + 0x68);
    }
    if (*(undefined4 **)(param_1 + 0x78) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x78) = 0;
    }
    if (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x70) = 0;
    }
  }
  return;
}



undefined8 _Llzma_delta_decoder_init_part_0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 5;
  if (param_1 != 0) {
    *(undefined8 **)(param_1 + 0x38) = &_Lfilter_options_0;
    uVar1 = 0;
    if (*(long *)(param_1 + 0x30) == 0) {
      *(undefined8 *)(param_1 + 0x68) = 4;
      *(undefined **)(param_1 + 0x40) = &LAB_001028b0;
      *(code **)(param_1 + 0x48) = _Llzma_index_prealloc_0;
      *(code **)(param_1 + 0x50) = _Llzma_index_init_0;
      *(code **)(param_1 + 0x58) = _Llzma12_mode_map_part_1;
      *(code **)(param_1 + 0x70) = _Lfile_info_decode_0;
      *(code **)(param_1 + 0x78) = _Lbt_skip_func_part_0;
      uVar1 = 0x65;
    }
  }
  return uVar1;
}



undefined8 _Llzma_delta_props_decode_part_0(code **param_1)

{
  undefined8 uVar1;
  
  uVar1 = 5;
  if (param_1 != (code **)0x0) {
    *param_1 = _Llzma_code_part_1;
    param_1[1] = _Llzma_index_memusage_part_0;
    param_1[2] = (code *)&_Llzma12_coder_1;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_00102870(long param_1)

{
  if (*(int *)(param_1 + 0x120) == 0x1d) {
    if (*(long *)(param_1 + 0x18) != 0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      return 1;
    }
    *(code **)(param_1 + 0x18) = _Llzma_delta_props_encoder;
    *(code **)(param_1 + 0x28) = _Llzma_delta_props_decode_part_0;
  }
  return 0;
}



bool FUN_00102a30(uint param_1,long *param_2,undefined8 *param_3,long *param_4,undefined8 param_5,
                 long param_6,int *param_7)

{
  int iVar1;
  long lVar2;
  
  param_6 = param_6 + (ulong)param_1 * 0x20;
  lVar2 = *(long *)(param_6 + 8);
  if (lVar2 == 0) {
    return false;
  }
  *param_2 = lVar2;
  *param_3 = *(undefined8 *)(param_6 + 0x10);
  lVar2 = _Lstream_encoder_update_0(param_5,*param_2,0,0,0);
  *param_4 = lVar2;
  if (lVar2 == 0) {
    lVar2 = _Lstream_encoder_update_1(param_5,*param_2,0,0,0);
    *param_4 = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = _Lauto_decode_1(param_5,*param_4 + -8,0x10,1);
  if (iVar1 == 0) {
    return false;
  }
  if (*param_7 != 0) {
    iVar1 = _Llzma_block_buffer_encode_0(*param_2,*param_2 + 4,0xe230);
    return iVar1 != 0;
  }
  return true;
}



bool FUN_00102af0(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 undefined4 *param_6)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_88;
  long local_80;
  long local_78;
  int local_58;
  long local_48;
  
  plVar3 = &local_80;
  for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined4 *)plVar3 = 0;
    plVar3 = (long *)((long)plVar3 + 4);
  }
  if ((param_1 != param_2 && param_1 != 0) && (param_2 != 0)) {
    lVar2 = param_2 - param_1;
    if (param_2 <= param_1) {
      lVar2 = param_1 - param_2;
    }
    if (((lVar2 < 0x10) && (*(long *)(param_5 + 0x268) != 0)) && (*(long *)(param_5 + 0x288) != 0))
    {
      uVar4 = *(undefined8 *)(param_5 + 0x290);
      iVar1 = _Llzma_mt_block_size_1(*(long *)(param_5 + 0x288),uVar4,&local_80);
      lVar2 = local_80;
      if (iVar1 != 0) {
        iVar1 = _Lx86_code_part_0(&local_80,local_78 + local_80,uVar4);
        if ((iVar1 != 0) && (local_58 == 0x168)) {
          local_88 = 0;
          lVar2 = local_78 + local_48 + local_80;
          _Llzma2_encoder_init_1(lVar2,0,&local_88,param_3,param_4,*param_6);
          uVar4 = local_88;
        }
        iVar1 = _Llzma_properties_size_0(lVar2,uVar4,0,0x109,param_1);
        if (iVar1 != 0) {
          iVar1 = _Llzma_properties_size_0(lVar2,uVar4,0,0x109,param_2);
          return iVar1 != 0;
        }
      }
    }
  }
  return false;
}



ulong FUN_00102c40(uint param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long local_80;
  long local_78;
  byte local_6f;
  byte local_65;
  uint local_64;
  ulong local_50;
  
  plVar5 = &local_80;
  for (lVar4 = 0x16; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined4 *)plVar5 = 0;
    plVar5 = (long *)((long)plVar5 + 4);
  }
  param_2 = param_2 + (ulong)param_1 * 0x20;
  uVar6 = *(ulong *)(param_2 + 8);
  if (uVar6 != 0) {
    uVar1 = *(ulong *)(param_2 + 0x10);
    while (uVar6 < uVar1) {
      iVar2 = _Llzma_properties_size_0(uVar6,uVar1,&local_80,0x10b,0);
      if (iVar2 == 0) {
        uVar6 = uVar6 + 1;
      }
      else {
        if ((local_65 & 0x48) != 0x48) {
          if ((local_6f & 1) == 0) {
            if (param_3 == 0) {
              return 0;
            }
          }
          else {
            uVar3 = local_50;
            if ((local_64 & 0xff00ff00) == 0x5000000) {
              uVar3 = local_50 + local_80 + local_78;
            }
            if ((param_3 <= uVar3) && (uVar3 <= param_4 - 4U)) {
              return uVar3;
            }
          }
        }
        uVar6 = uVar6 + local_78;
      }
    }
  }
  return 0;
}



void FUN_00102d10(undefined8 param_1,int *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  int local_94;
  ulong local_90;
  undefined8 local_88;
  ulong local_80;
  long local_78;
  byte local_65;
  uint local_64;
  int local_58;
  long local_50;
  long local_48;
  
  iVar3 = 0x10;
  piVar10 = param_2;
  do {
    *piVar10 = iVar3;
    iVar3 = iVar3 + 8;
    piVar10 = piVar10 + 8;
  } while (iVar3 != 0xe8);
  puVar12 = &local_80;
  for (lVar9 = 0x16; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined4 *)puVar12 = 0;
    puVar12 = (ulong *)((long)puVar12 + 4);
  }
  local_90 = 0;
  local_88 = 0;
  uVar4 = _Llzma_check_update_0(param_1,&local_90);
  if ((uVar4 != 0) && (0x10 < local_90)) {
    uVar11 = local_90 + uVar4;
    lVar9 = 0;
    while( true ) {
      local_94 = 0;
      lVar9 = _Llzip_decode_0(param_1,&local_94,lVar9);
      if (lVar9 == 0) break;
      lVar13 = 0;
      do {
        if (((*(long *)((long)param_2 + lVar13 + 0x18) == 0) &&
            (*(int *)((long)param_2 + lVar13) == local_94)) &&
           (lVar5 = _Lstream_encode_1(uVar4,uVar11,lVar9), lVar5 != 0)) {
          *(long *)((long)param_2 + lVar13 + 0x18) = lVar5;
        }
        lVar13 = lVar13 + 0x20;
      } while (lVar13 != 0x360);
      lVar9 = lVar9 + 1;
    }
    puVar12 = (ulong *)(param_2 + 2);
    puVar1 = (ulong *)(param_2 + 0xda);
    puVar6 = puVar12;
    do {
      uVar8 = puVar6[2];
      if (uVar8 != 0) {
        if (uVar4 <= uVar8) {
          if (*puVar6 < uVar4) {
            *puVar6 = uVar4;
          }
          if (uVar4 != uVar8) goto LAB_00102e38;
        }
        if (uVar4 <= puVar6[1] - 1) {
          puVar6[1] = uVar4;
        }
      }
LAB_00102e38:
      puVar6 = puVar6 + 4;
      uVar8 = uVar4;
    } while (puVar6 != puVar1);
LAB_00102e44:
    if (uVar8 < uVar11) {
      iVar3 = _Lx86_code_part_0(&local_80,uVar8,uVar11);
      uVar8 = uVar8 + 1;
      if (iVar3 != 0) {
        uVar8 = local_80 + local_78;
        if (local_58 == 0x168) {
          if (local_48 == 0) goto LAB_00102e44;
          uVar7 = local_80 + local_48 + local_78;
LAB_00102ec5:
          if (uVar7 == 0) goto LAB_00102e44;
        }
        else {
          uVar7 = local_80;
          if (local_58 == 0xa5fe) goto LAB_00102ec5;
          if (((local_58 != 0x10d) || ((local_65 & 0x48) != 0x48)) ||
             ((local_64 & 0xff00ff00) != 0x5000000)) goto LAB_00102e44;
          uVar7 = local_50 + uVar8;
        }
        if ((uVar4 <= uVar7) && (puVar6 = puVar12, uVar7 <= uVar11)) {
          do {
            uVar2 = puVar6[2];
            if (uVar2 != 0) {
              if (uVar7 <= uVar2) {
                if (*puVar6 < uVar7) {
                  *puVar6 = uVar7;
                }
                if (uVar2 != uVar7) goto LAB_00102f11;
              }
              if (uVar7 <= puVar6[1] - 1) {
                puVar6[1] = uVar7;
              }
            }
LAB_00102f11:
            puVar6 = puVar6 + 4;
          } while (puVar6 != puVar1);
        }
      }
      goto LAB_00102e44;
    }
    while (uVar8 = _Lstream_encoder_update_0(param_1,0,uVar4,uVar11,&local_88), puVar6 = puVar12,
          uVar8 != 0) {
      do {
        uVar7 = puVar6[2];
        if (uVar7 != 0) {
          if (uVar8 <= uVar7) {
            if (*puVar6 < uVar8) {
              *puVar6 = uVar8;
            }
            if (uVar8 != uVar7) goto LAB_00102f6e;
          }
          if (uVar8 <= puVar6[1] - 1) {
            puVar6[1] = uVar8;
          }
        }
LAB_00102f6e:
        puVar6 = puVar6 + 4;
      } while (puVar6 != puVar1);
    }
    do {
      uVar4 = puVar12[2];
      if (uVar4 != 0) {
        if (uVar11 <= uVar4) {
          if (*puVar12 < uVar11) {
            *puVar12 = uVar11;
          }
          if (uVar4 != uVar11) goto LAB_00102f8d;
        }
        if (uVar11 <= puVar12[1] - 1) {
          puVar12[1] = uVar11;
        }
      }
LAB_00102f8d:
      puVar12 = puVar12 + 4;
    } while (puVar12 != puVar1);
  }
  return;
}



void FUN_00102fd0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong *param_5,
                 long param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long local_80;
  long local_78;
  undefined4 local_70;
  byte local_65;
  undefined4 local_64;
  byte local_60;
  int local_58;
  ulong local_50;
  
  *param_5 = 0;
  if (param_1 < param_2) {
    plVar7 = &local_80;
    for (lVar4 = 0x16; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined4 *)plVar7 = 0;
      plVar7 = (long *)((long)plVar7 + 4);
    }
    while (iVar2 = _Llzma_filters_update_0(param_1,param_2,1,1,&local_80), iVar2 != 0) {
      uVar10 = 0;
      if (((local_70 & 0x100) != 0) && (uVar10 = local_50, (local_64 & 0xff00ff00) == 0x5000000)) {
        uVar10 = local_80 + local_50 + local_78;
      }
      uVar9 = 0;
      if ((local_70 & 0x1040) != 0) {
        if ((local_70 & 0x40) == 0) {
          uVar9 = local_70 >> 8 & 0x10;
          if (((local_70 & 0x1000) != 0) && (uVar9 = (uint)local_60, (local_70 & 0x20) != 0)) {
            uVar9 = (uint)local_65 << 3;
            bVar1 = local_60;
            goto LAB_001030b4;
          }
        }
        else {
          uVar9 = (uint)local_64._2_1_;
          if ((local_70 & 0x20) != 0) {
            uVar9 = (uint)local_65 * 2;
            bVar1 = local_64._2_1_;
LAB_001030b4:
            uVar9 = (uint)bVar1 | uVar9 & 8;
          }
        }
      }
      param_1 = local_80 + local_78;
      if ((param_3 <= uVar10) && (uVar10 < param_4)) {
        uVar8 = param_1 + 0x40;
        if (*(ulong *)(param_6 + 0x60) < param_1 + 0x40) {
          uVar8 = *(ulong *)(param_6 + 0x60);
        }
        uVar5 = 0;
        uVar3 = 0;
        uVar6 = param_1;
LAB_001030f0:
        do {
          while( true ) {
            iVar2 = _Lx86_code_part_0(&local_80,uVar6,uVar8);
            if (iVar2 != 0) break;
            uVar6 = uVar6 + 1;
LAB_0010323f:
            if (uVar8 <= uVar6) goto LAB_0010324b;
          }
          uVar6 = local_78 + local_80;
          if (local_58 == 0x109) {
            bVar1 = local_64._3_1_;
            if ((local_70 & 0x1040) == 0) {
              if ((local_70 & 0x40) != 0) goto LAB_00103217;
            }
            else if ((local_70 & 0x40) == 0) {
              uVar3 = local_70._1_1_ & 0xffffff10;
              if (((local_70 & 0x1000) != 0) && (uVar3 = (uint)local_60, (local_70 & 0x20) != 0)) {
                uVar3 = (uint)local_60 | (local_65 & 1) << 3;
              }
            }
            else {
              uVar3 = (uint)local_64._2_1_;
              if ((local_70 & 0x20) != 0) {
                uVar3 = (uint)local_64._2_1_ | (uint)local_65 * 2 & 8;
              }
LAB_00103217:
              uVar5 = (uint)bVar1;
              if ((local_70 & 0x20) != 0) {
                uVar5 = (uint)bVar1 | (local_65 & 1) << 3;
              }
            }
          }
          else if (local_58 == 0x10b) {
            if ((local_70 & 0x40) == 0) {
              if ((local_70 & 0x1040) != 0) {
                uVar5 = (uint)(local_70._1_1_ & 0x10);
                bVar1 = local_60;
                if ((local_70 & 0x1000) != 0) goto LAB_00103217;
                if ((char)uVar9 != (char)uVar3) goto LAB_0010323f;
                uVar5 = 0;
                uVar9 = (uint)(local_70._1_1_ & 0x10);
                goto LAB_001030f0;
              }
            }
            else {
              uVar3 = (uint)local_64._3_1_;
              if ((local_70 & 0x20) == 0) {
                if ((local_70 & 0x1040) != 0) {
                  uVar5 = (uint)local_64._2_1_;
                }
              }
              else {
                uVar3 = (uint)local_64._3_1_ | (uint)local_65 * 8 & 8;
                if ((local_70 & 0x1040) != 0) {
                  uVar5 = (uint)(local_65 * '\x02' & 8 | local_64._2_1_);
                }
              }
            }
          }
          if ((char)uVar9 != (char)uVar3) goto LAB_0010323f;
          uVar9 = uVar5;
        } while ((char)uVar5 != '\a');
        iVar2 = _Llzma_optimum_normal_0
                          (local_78 + local_80,uVar8,
                           *(undefined8 *)(*(long *)(param_6 + 0x20) + 0xa8),&local_80);
        if (iVar2 != 0) {
          *param_5 = uVar10;
          return;
        }
      }
LAB_0010324b:
      if (param_2 <= param_1) {
        return;
      }
    }
  }
  return;
}



long _Llzma_auto_decode_1
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 local_2c;
  
  local_2c = param_2;
  iVar1 = _Llzma_index_iter_rewind_cold(0xd2,4,0xd,0);
  if (iVar1 != 0) {
    lVar2 = 0;
    while (lVar2 = _Llzip_decode_0(param_1,&local_2c,lVar2), lVar2 != 0) {
      lVar3 = _Lstream_encode_1(param_3,param_4,lVar2);
      if (lVar3 != 0) {
        return lVar3;
      }
      lVar2 = lVar2 + 1;
    }
  }
  return 0;
}



undefined8
FUN_00103320(ulong param_1,ulong param_2,long param_3,ulong param_4,ulong *param_5,
            undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  byte bVar10;
  byte bVar11;
  long local_d8;
  long local_d0;
  undefined2 local_c8;
  byte local_bd;
  undefined4 local_bc;
  byte local_b8;
  uint local_b0;
  long local_a8;
  long local_98;
  long local_80;
  long local_78;
  undefined2 local_70;
  char local_65;
  uint local_64;
  byte local_60;
  int local_58;
  long local_50;
  
  bVar11 = 0;
  plVar9 = &local_d8;
  for (lVar5 = 0x16; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined4 *)plVar9 = 0;
    plVar9 = (long *)((long)plVar9 + 4);
  }
  *param_5 = 0;
  uVar3 = _Llzma_auto_decode_1(param_6,0x1e0,param_3,param_4);
  if (uVar3 != 0) {
    while (uVar3 < param_4) {
      iVar2 = _Lx86_code_part_0(&local_d8,uVar3,param_4);
      if (iVar2 == 0) {
        uVar3 = uVar3 + 1;
      }
      else {
        if ((local_b0 & 0xfffffffd) == 0xb1) {
          if (local_bc._1_1_ == '\x03') {
            if (((local_c8 & 0x20) == 0) || ((local_bd & 8) == 0)) {
              bVar1 = (byte)local_c8 & 0x40;
              if ((local_c8 & 0x1040) == 0) {
                if ((local_c8 & 0x40) != 0) {
                  bVar6 = 0;
                  bVar1 = local_bc._3_1_;
                  bVar10 = 0;
                  if ((local_c8 & 0x20) != 0) {
LAB_00103430:
                    bVar1 = local_bc._3_1_ | (byte)((local_bd & 1) << 3);
                    bVar10 = bVar6;
                  }
                  goto LAB_0010343d;
                }
                bVar10 = 0;
              }
              else {
                if ((local_c8 & 0x40) == 0) {
                  bVar10 = local_c8._1_1_ & 0x10;
                  if ((local_c8 & 0x1000) == 0) goto LAB_0010344b;
                  bVar10 = local_b8;
                  if ((local_c8 & 0x20) != 0) {
                    bVar10 = local_b8 | (byte)((local_bd & 1) << 3);
                  }
                }
                else {
                  bVar1 = local_bc._3_1_;
                  bVar10 = local_bc._2_1_;
                  if ((local_c8 & 0x20) != 0) {
                    bVar6 = local_bc._2_1_ | local_bd * '\x02' & 8;
                    goto LAB_00103430;
                  }
                }
LAB_0010343d:
                if (bVar1 != bVar10) goto LAB_001033b1;
              }
LAB_0010344b:
              plVar9 = &local_80;
              for (lVar5 = 0x16; lVar5 != 0; lVar5 = lVar5 + -1) {
                *(undefined4 *)plVar9 = 0;
                plVar9 = (long *)((long)plVar9 + (ulong)bVar11 * -8 + 4);
              }
              uVar8 = local_d0 + local_d8;
              uVar4 = 0;
              while (((uVar8 < param_4 && (uVar4 < 6)) &&
                     (iVar2 = _Lx86_code_part_0(&local_80,uVar8,param_4), iVar2 != 0))) {
                if (local_58 == 0x109) {
                  if ((local_64 & 0xff00ff00) == 0x5000000) {
                    bVar1 = 0;
                    if ((local_70 & 0x1040) != 0) {
                      if ((local_70 & 0x40) == 0) {
                        bVar1 = local_70._1_1_ & 0x10;
                        if (((local_70 & 0x1000) != 0) && (bVar1 = local_60, (local_70 & 0x20) != 0)
                           ) {
                          bVar6 = local_65 << 3;
                          goto LAB_00103533;
                        }
                      }
                      else {
                        bVar1 = (byte)(local_64 >> 0x10);
                        if ((local_70 & 0x20) != 0) {
                          bVar6 = local_65 * '\x02';
LAB_00103533:
                          bVar1 = bVar1 | bVar6 & 8;
                        }
                      }
                    }
                    if (bVar1 == bVar10) {
                      lVar5 = 0;
                      if ((local_70 & 0x100) != 0) {
                        lVar5 = local_50 + local_80 + local_78;
                      }
                      uVar7 = lVar5 - 0x18;
                      if ((param_1 <= uVar7 && lVar5 != 0x18) && (lVar5 + 4U <= param_2))
                      goto LAB_0010363f;
                    }
                  }
                }
                else if (local_58 == 0xa5fe) break;
                uVar8 = uVar8 + local_78;
                uVar4 = uVar4 + 1;
              }
            }
          }
        }
        else if (local_b0 == 0x147) {
          if (((((local_bd & 8) == 0) && (local_bc >> 8 == 0x50000)) && ((local_c8 & 0x800) != 0))
             && (local_98 == 0)) {
            lVar5 = 0;
            if ((local_c8 & 0x100) != 0) {
              lVar5 = local_a8 + local_d8 + local_d0;
            }
            uVar7 = lVar5 - 0x18;
            if (((lVar5 + 4U <= param_2) && (param_1 <= uVar7)) && (uVar7 != 0)) {
LAB_0010363f:
              *param_5 = uVar7;
              return 1;
            }
          }
        }
        else if ((local_b0 == 0xa5fe) && (param_3 != local_d8)) {
          return 0;
        }
LAB_001033b1:
        uVar3 = uVar3 + local_d0;
      }
    }
  }
  return 0;
}



undefined8
_Llzma_buf_cpy_0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,long param_5,ulong *param_6
                )

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  long local_100;
  long local_f8;
  ushort local_f0;
  byte local_e5;
  uint local_e4;
  byte local_e0;
  ulong local_d0;
  ulong local_a8 [16];
  
  *param_6 = 0;
  lVar4 = *(long *)(param_5 + 8);
  if (lVar4 == 0) {
    return 0;
  }
  uVar11 = 0xff;
  uVar8 = 0;
  bVar10 = 0;
  puVar6 = local_a8;
  for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined4 *)puVar6 = 0;
    puVar6 = (ulong *)((long)puVar6 + 4);
  }
  plVar7 = &local_100;
  for (lVar3 = 0x16; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined4 *)plVar7 = 0;
    plVar7 = (long *)((long)plVar7 + 4);
  }
LAB_001036cb:
  do {
    if ((param_4 <= param_3) || (iVar1 = _Llzma_optimum_normal_0(param_3,param_4,lVar4), iVar1 == 0)
       ) goto LAB_001037e2;
    param_3 = local_f8 + local_100;
    iVar1 = _Llzma_properties_size_0(param_3,param_3 + 0x20,&local_100,0x109,0);
  } while (iVar1 == 0);
  if ((local_f0 & 0x1040) == 0) {
LAB_00103768:
    if ((char)uVar11 != '\0') {
      param_3 = local_f8 + local_100;
      goto LAB_001036cb;
    }
  }
  else {
    if ((local_f0 & 0x40) != 0) {
      uVar11 = local_e4 >> 0x10 & 0xff;
      if ((local_f0 & 0x20) != 0) {
        uVar2 = (uint)local_e5 * 2;
LAB_00103762:
        uVar11 = uVar11 | uVar2 & 8;
      }
      goto LAB_00103768;
    }
    if ((local_f0 & 0x1000) != 0) {
      uVar11 = (uint)local_e0;
      if ((local_f0 & 0x20) != 0) {
        uVar2 = (uint)local_e5 << 3;
        goto LAB_00103762;
      }
      goto LAB_00103768;
    }
  }
  if (((local_f0 & 0x100) != 0) && (uVar8 = local_d0, (local_e4 & 0xff00ff00) == 0x5000000)) {
    uVar8 = local_d0 + local_100 + local_f8;
  }
  if ((param_1 <= uVar8) && (uVar8 < param_2)) {
    uVar9 = (ulong)bVar10;
    bVar10 = bVar10 + 1;
    local_a8[uVar9] = uVar8;
    if (0xf < bVar10) {
LAB_001037e2:
      lVar4 = 0;
      do {
        if ((uint)bVar10 <= (uint)lVar4) {
          return 0;
        }
        lVar3 = 0;
        do {
          lVar5 = 0;
          do {
            if ((local_a8[lVar4] == local_a8[lVar3] - 8) && (local_a8[lVar3] == local_a8[lVar5] - 8)
               ) {
              *param_6 = local_a8[lVar4];
              return 1;
            }
            lVar5 = lVar5 + 1;
          } while ((uint)lVar5 < (uint)bVar10);
          lVar3 = lVar3 + 1;
        } while ((uint)lVar3 < (uint)bVar10);
        lVar4 = lVar4 + 1;
      } while( true );
    }
  }
  uVar11 = 0;
  param_3 = local_f8 + local_100;
  goto LAB_001036cb;
}



char _Llzma_check_finish_0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  byte bVar7;
  long local_80;
  long local_78;
  
  bVar7 = 0;
  cVar6 = '\0';
  lVar1 = *(long *)(param_3 + 0x28);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x30);
    iVar3 = _Lstream_encoder_mt_init_1(lVar1,uVar2,0,param_1);
    cVar6 = iVar3 != 0;
    plVar5 = &local_80;
    for (lVar4 = 0x16; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined4 *)plVar5 = 0;
      plVar5 = (long *)((long)plVar5 + (ulong)bVar7 * -8 + 4);
    }
    iVar3 = _Lstream_encoder_mt_init_1(lVar1,uVar2,&local_80,param_1 + 0x10);
    if (iVar3 != 0) {
      iVar3 = _Lstream_encoder_mt_init_1(local_78 + local_80,uVar2,0,param_1 + 0x10);
      if (iVar3 == 0) {
        cVar6 = cVar6 + '\x01';
      }
      else {
        cVar6 = cVar6 + '\x02';
      }
    }
  }
  return cVar6;
}



undefined  [16]
_Llzma_decoder_init_1(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined auVar7 [16];
  
  uVar6 = 0;
  lVar1 = *(long *)(param_3 + 0x48);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x50);
    iVar3 = _Lstream_encoder_mt_init_1(lVar1,uVar2,0,param_1);
    iVar4 = _Lstream_encoder_mt_init_1(lVar1,uVar2,0,param_1 + 0x10);
    iVar5 = _Lstream_encoder_mt_init_1(lVar1,uVar2,0,param_1 + 8);
    uVar6 = (((uint)(iVar3 != 0) - (uint)(iVar4 == 0)) + 2) - (uint)(iVar5 == 0);
  }
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar6;
  auVar7._8_8_ = param_4;
  return auVar7;
}



undefined  [16] _Llzma_delta_coder_init_1(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  
  if (*(long *)(param_3 + 0x68) != 0) {
    iVar2 = _Lstream_encoder_mt_init_1
                      (*(long *)(param_3 + 0x68),*(undefined8 *)(param_3 + 0x70),0,param_1);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 3;
    }
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = uVar3;
    return auVar4;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}



ushort * _Llzma_encoder_init_0(char param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  
  if (param_1 == '-') {
    while( true ) {
      uVar1 = *param_2;
      uVar2 = uVar1 & 0xff00;
      if ((uVar2 == 0x6400) || (sVar3 = (short)((ulong)uVar1 << 8), sVar3 == 0x6400)) break;
      if ((((uVar1 & 0xdf00) == 0) ||
          (((uVar2 == 0x900 || (uVar2 == 0x3d00)) || (((ulong)uVar1 << 8 & 0xdf00) == 0)))) ||
         ((sVar3 == 0x3d00 || (sVar3 == 0x900)))) goto LAB_001039f7;
      param_2 = param_2 + 1;
    }
  }
  else {
LAB_001039f7:
    param_2 = (ushort *)0x0;
  }
  return param_2;
}



undefined8 FUN_00103a00(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long **pplVar8;
  long local_40 [2];
  
  if (((((&stack0xfffffffffffffff8 < param_2) &&
        ((ulong)((long)param_2 - (long)&stack0xfffffffffffffff8) < 0x2001)) &&
       (lVar1 = *param_2, lVar1 - 1U < 0x20)) &&
      ((plVar2 = (long *)param_2[1], param_2 < plVar2 && (plVar2 != (long *)0x0)))) &&
     ((ulong)((long)plVar2 - (long)param_2) < 0x4001)) {
    iVar3 = _Lsimple_coder_update_0(plVar2,0);
    lVar6 = 1;
    if (iVar3 == 0x108) {
      while (lVar7 = lVar6 + 1, lVar6 != lVar1) {
        plVar2 = (long *)param_2[lVar7];
        if (plVar2 <= param_2) {
          return 0;
        }
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        if (0x4000 < (ulong)((long)plVar2 - (long)param_2)) {
          return 0;
        }
        lVar4 = _Llzma_encoder_init_0(*(undefined2 *)plVar2);
        lVar6 = lVar7;
        if (lVar4 != 0) {
          return 0;
        }
      }
      if (param_2[lVar7] == 0) {
        pplVar8 = (long **)(param_2 + lVar6 + 2);
        do {
          plVar2 = *pplVar8;
          if (plVar2 == (long *)0x0) {
            return 0;
          }
          if ((plVar2 <= param_2) || (0x4000 < (ulong)((long)plVar2 - (long)param_2))) {
            local_40[0] = 0;
            plVar5 = (long *)_Lmicrolzma_decode_0(param_1,local_40,1);
            if (plVar5 == (long *)0x0) {
              return 0;
            }
            if ((undefined2 *)(local_40[0] + (long)plVar5) < (undefined2 *)((long)plVar2 + 0x2cU)) {
              return 0;
            }
            if (plVar2 < plVar5) {
              return 0;
            }
          }
          iVar3 = _Lsimple_coder_update_0(*pplVar8,0);
          if (iVar3 != 0) {
            return 0;
          }
          pplVar8 = pplVar8 + 1;
        } while (*pplVar8 != (long *)0x0);
        return 1;
      }
    }
  }
  return 0;
}



bool FUN_00103b60(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long local_6a0;
  long local_698;
  long local_690;
  long local_688;
  long local_680 [4];
  undefined local_660 [16];
  undefined4 local_650 [392];
  
  puVar4 = local_650;
  for (lVar2 = 0x186; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_660 = ZEXT816(0);
  if ((((param_1 != 0) && (param_4 != 0)) && (lVar2 = *(long *)(param_4 + 8), lVar2 != 0)) &&
     ((*(code **)(lVar2 + 0x30) != (code *)0x0 && (*(long *)(lVar2 + 0x38) != 0)))) {
    local_6a0 = 0;
    local_698 = 0;
    local_690 = 0;
    (**(code **)(lVar2 + 0x30))(param_1,&local_6a0,&local_698,&local_690);
    local_680[3] = (**(code **)(*(long *)(param_4 + 8) + 0x38))();
    if (((local_6a0 != 0) && ((local_698 != 0 && (local_690 != 0)))) && (local_680[3] != 0)) {
      local_680[0] = local_6a0;
      local_688 = 0;
      local_680[1] = local_698;
      local_680[2] = local_690;
      if (*(long *)(param_4 + 8) != 0) {
        lVar2 = 0;
        uVar3 = 0;
        while( true ) {
          iVar1 = FUN_00107340(local_660 + uVar3,0x628 - uVar3,&local_688,local_680[lVar2],
                               *(undefined8 *)(param_4 + 8));
          if ((iVar1 == 0) || (uVar3 = uVar3 + local_688, 0x628 < uVar3)) break;
          lVar2 = lVar2 + 1;
          if (lVar2 == 4) {
            iVar1 = FUN_001072d0(local_660,uVar3,param_2,param_3,*(undefined8 *)(param_4 + 8));
            return iVar1 != 0;
          }
        }
      }
    }
  }
  return false;
}



undefined  [16]
_Llzma_filter_decoder_is_supported_part_0
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined auVar5 [16];
  
  iVar1 = _Lget_literal_price_part_0(param_1[1],*(undefined8 *)(*param_1 + 8));
  if (iVar1 != 0) {
    lVar2 = _Lcrc_init_0(*(undefined8 *)(*param_1 + 8),0x2b0,0x8c0);
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)(*(long *)(lVar2 + 8) + **(long **)(*param_1 + 8));
      iVar1 = FUN_00103a00(*(long **)(*param_1 + 8),*puVar4);
      if (iVar1 != 0) {
        *(undefined8 *)param_1[2] = *puVar4;
        uVar3 = 1;
        goto LAB_00103d29;
      }
    }
  }
  uVar3 = 0;
LAB_00103d29:
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



int _Llzma_lzma2_encoder_memusage_0
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = _Llzma_delta_coder_init_1();
    iVar2 = _Llzma_decoder_init_1(param_1,param_2,param_3,param_4);
    iVar3 = _Llzma_check_finish_0(param_1,param_2,param_3,param_4);
    return iVar3 + (iVar1 + iVar2) * 2;
  }
  return 0;
}



undefined8 _Llzma_mf_bt4_find_0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  byte bVar12;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_a0 [8];
  long alStack_80 [11];
  
  bVar12 = 0;
  iVar1 = _Llzma_index_iter_rewind_cold(0xda,0x14,0xf,0);
  if ((iVar1 != 0) && (local_d0 = 0, *(long *)(*(long *)(param_3 + 0x20) + 0xa8) != 0)) {
    *(undefined8 *)(param_3 + 0x48) = 0;
    lVar2 = _Lmicrolzma_decode_0(param_1,&local_d0,0);
    if (lVar2 != 0) {
      lVar9 = 0;
      lVar3 = local_d0 + lVar2;
      local_c8 = 0x500000004;
      local_c0 = 0x700000006;
      local_b8 = 0x900000008;
      local_b0 = 0xb0000000a;
      local_a8 = 0xd0000000c;
      plVar10 = alStack_80 + 1;
      for (lVar6 = 0x14; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined4 *)plVar10 = 0;
        plVar10 = (long *)((long)plVar10 + ((ulong)bVar12 * -2 + 1) * 4);
      }
      do {
        lVar4 = (ulong)*(uint *)((long)&local_c8 + lVar9 * 4) * 0x20 + param_2;
        lVar6 = *(long *)(lVar4 + 8);
        if (lVar6 != 0) {
          FUN_00102fd0(lVar6,*(undefined8 *)(lVar4 + 0x10),lVar2,lVar3,alStack_80 + lVar9 + 1,
                       param_3);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 10);
      puVar11 = local_a0;
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + (ulong)bVar12 * -2 + 1;
      }
      lVar2 = 0;
      do {
        uVar8 = 0;
        do {
          uVar7 = uVar8 & 0xffffffff;
          if ((uint)lVar2 <= (uint)uVar8) {
            local_a0[lVar2] = local_a0[lVar2] + 1;
            goto LAB_00103ee7;
          }
          uVar8 = uVar8 + 1;
        } while (alStack_80[uVar8] != alStack_80[lVar2 + 1]);
        local_a0[uVar7] = local_a0[uVar7] + 1;
LAB_00103ee7:
        lVar2 = lVar2 + 1;
      } while (lVar2 != 10);
      uVar8 = 0;
      uVar7 = 0;
      uVar5 = 0;
      do {
        if (uVar5 < local_a0[uVar8]) {
          uVar7 = uVar8 & 0xffffffff;
          uVar5 = local_a0[uVar8];
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != 10);
      if ((4 < uVar5) && (alStack_80[uVar7 + 1] != 0)) {
        *(long *)(param_3 + 0x48) = alStack_80[uVar7 + 1];
        return 1;
      }
    }
  }
  return 0;
}



void _Llzma_stream_decoder_init_1(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



void _Llzma_stream_flags_compare_1(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffff9e18;
  return;
}



void _Llzma_stream_header_encode_part_0(undefined8 *param_1)

{
  long extraout_RDX;
  
  *param_1 = &_Lx86_coder_destroy;
  _Llzma_stream_flags_compare_1();
  param_1[1] = (long *)(extraout_RDX - param_1[4]);
  param_1[2] = *(long *)(extraout_RDX - param_1[4]) >> 0x38;
  param_1[3] = 0;
  return;
}



void _Llzma_block_param_decoder_0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 auStack_18 [3];
  
  iVar1 = 0;
  puVar2 = auStack_18 + 2;
  do {
    iVar1 = iVar1 + 1;
    *puVar2 = 0;
    puVar2 = puVar2 + -1;
  } while ((-(uint)(param_2 == 0) & 0xfffff098) + 0xfe8 != iVar1);
  return;
}



void _Lparse_delta_0(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffbe20;
  return;
}



void _Llzma_delta_props_decoder(undefined8 *param_1)

{
  *param_1 = &_Lrc_read_destroy;
  param_1[2] = *(undefined8 *)(param_1[5] + 0x18);
  _Lparse_delta_0();
  _Llzma_stream_decoder_init_1();
  param_1[1] = 0;
  return;
}



long _Lstream_decoder_memconfig_part_1(void)

{
  long lVar1;
  
  lVar1 = _Lstream_decoder_mt_end_0(0x21);
  return lVar1 + 8;
}



undefined8 _Llzma_delta_props_encode_part_0(long *param_1,long *param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long **pplVar11;
  long *plVar12;
  long **pplVar13;
  long *plVar14;
  long *plVar15;
  
  iVar4 = _Llzma2_decoder_end_1(0,0x6c,0x10,5);
  if (iVar4 != 0) {
    piVar1 = *(int **)(param_4 + 0x118);
    plVar15 = *(long **)(*param_1 + 0x10);
    lVar6 = _Lstream_decoder_memconfig_part_1(1);
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_1[1] + 0x10);
    lVar7 = lzma_alloc(0x8a8,lVar6);
    *(long *)(piVar1 + 6) = lVar7;
    if (lVar7 != 0) {
      *piVar1 = *piVar1 + 1;
    }
    lVar7 = lzma_alloc(0x428,lVar6);
    *(long *)(piVar1 + 0x16) = lVar7;
    if (lVar7 != 0) {
      *piVar1 = *piVar1 + 1;
    }
    lVar7 = lzma_alloc(0x5f0,lVar6);
    *(long *)(piVar1 + 8) = lVar7;
    if (lVar7 != 0) {
      *piVar1 = *piVar1 + 1;
    }
    lVar7 = _Lstream_decoder_memconfig_part_1(1);
    uVar2 = *(undefined8 *)(param_1[1] + 8);
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(param_1[1] + 0x20);
    lVar8 = _Lcrc_init_0(uVar2,0xa60,0);
    if (lVar8 != 0) {
      lVar9 = lzma_alloc(0x4e0,lVar7);
      *(long *)(param_4 + 0x68) = lVar9;
      if (lVar9 != 0) {
        *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
      }
      lVar9 = *(long *)(lVar8 + 8) + **(long **)(param_1[1] + 8);
      iVar4 = _Lparse_bcj_0(*(long **)(param_1[1] + 8),lVar9,*(undefined8 *)(lVar8 + 0x10),4);
      plVar12 = plVar15 + 300;
      if (iVar4 != 0) {
LAB_001041d0:
        if (plVar15 != plVar12) {
          lVar10 = *(long *)(param_1[1] + 0x18);
          if ((*plVar15 != *(long *)(lVar10 + 0x50)) || (plVar15[1] != *(long *)(lVar10 + 0x58)))
          goto LAB_001041cc;
          pplVar11 = (long **)0x0;
          plVar12 = (long *)0xffffffffffffffff;
          for (pplVar13 = *(long ***)(*param_1 + 0x10); pplVar13 < plVar15 + 3;
              pplVar13 = pplVar13 + 1) {
            plVar3 = *pplVar13;
            if (plVar15 + 3 <= plVar3) {
              plVar14 = plVar12;
              if (plVar15 + 0xd <= plVar12) {
                plVar14 = plVar15 + 0xd;
              }
              if (plVar3 < plVar14) {
                pplVar11 = pplVar13;
                plVar12 = plVar3;
              }
            }
          }
          if (plVar12 != (long *)0xffffffffffffffff) {
            *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_1[1] + 0x10);
            lVar10 = lzma_alloc(0xab8,lVar6);
            *(long *)(piVar1 + 10) = lVar10;
            if (lVar10 != 0) {
              *piVar1 = *piVar1 + 1;
            }
            pplVar13 = *(long ***)(*param_1 + 0x10);
            lVar10 = (long)plVar12 - (long)pplVar13;
            uVar5 = (int)pplVar13 - (int)pplVar11;
            if (pplVar13 <= pplVar11) {
              uVar5 = (int)pplVar11 - (int)pplVar13;
            }
            *(ulong *)(param_3 + 0xf8) = (ulong)uVar5 + *(long *)(*param_1 + 0x18);
            iVar4 = _Llzma_raw_encoder_0(lVar9,lVar9 + *(long *)(lVar8 + 0x10),lVar10);
            if (iVar4 == 0) {
              return 0;
            }
            iVar4 = _Llzma_raw_encoder_0
                              (*(long *)(param_3 + 0x100),
                               *(long *)(param_3 + 0x108) + *(long *)(param_3 + 0x100),lVar10);
            if (iVar4 == 0) {
              return 0;
            }
            *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_1[1] + 0x10);
            lVar8 = lzma_alloc(0x9f8,lVar6);
            *(long *)(piVar1 + 0xc) = lVar8;
            if (lVar8 != 0) {
              *piVar1 = *piVar1 + 1;
            }
            lVar6 = lzma_alloc(0x760,lVar6);
            *(long *)(piVar1 + 0x18) = lVar6;
            if (lVar6 != 0) {
              *piVar1 = *piVar1 + 1;
            }
            *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(param_1[1] + 0x20);
            *param_2 = lVar10;
            return 1;
          }
        }
      }
      lzma_free(*(undefined8 *)(param_4 + 0x68),lVar7);
    }
  }
  return 0;
LAB_001041cc:
  plVar15 = plVar15 + 1;
  goto LAB_001041d0;
}



undefined8 _Llzma_filter_flags_decode_0(long *param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  byte bVar13;
  undefined4 local_8c;
  long local_88;
  long local_80;
  long local_78;
  byte local_6f;
  byte local_65;
  uint local_64;
  int *local_50;
  byte local_30;
  
  bVar13 = 0;
  local_8c = 0;
  local_88 = 0;
  lVar2 = _Lcrc_init_0(param_1,0xa98,0);
  if (lVar2 != 0) {
    local_8c = 0x6a8;
    lVar3 = _Llzip_decode_0(param_1,&local_8c,0);
    if (lVar3 != 0) {
      lVar4 = _Lcrc_init_0(param_2,0x9d0,0);
      lVar5 = _Llzma_check_update_0(param_1,&local_88);
      if ((lVar5 != 0) && (uVar6 = _Lstream_encode_1(lVar5,local_88 + lVar5,lVar3), uVar6 != 0)) {
        if (lVar4 != 0) {
          lVar3 = *(long *)(lVar4 + 8);
          lVar4 = *param_2;
          *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
          *(long *)(param_4 + 0x30) = lVar3 + lVar4;
        }
        plVar9 = &local_80;
        for (lVar3 = 0x16; lVar3 != 0; lVar3 = lVar3 + -1) {
          *(undefined4 *)plVar9 = 0;
          plVar9 = (long *)((long)plVar9 + (ulong)bVar13 * -8 + 4);
        }
        piVar7 = (int *)(*(long *)(lVar2 + 8) + *param_1);
        lVar2 = *(long *)(lVar2 + 0x10);
        lVar3 = _Lstream_decoder_memconfig_part_1(1);
        *(long **)(lVar3 + 0x10) = param_2;
        lVar4 = lzma_alloc(0xd10,lVar3);
        *(long *)(param_4 + 0x90) = lVar4;
        if (lVar4 != 0) {
          *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
        }
        piVar12 = (int *)0x0;
        uVar11 = uVar6 - 0x80;
        while (uVar11 < uVar6) {
          iVar1 = _Llzma_properties_size_0(uVar11,uVar6,&local_80,0x10b,0);
          uVar11 = uVar11 + 1;
          if (iVar1 != 0) {
            if ((local_6f & 1) != 0) {
              piVar8 = local_50;
              if ((local_64 & 0xff00ff00) == 0x5000000) {
                piVar8 = (int *)((long)local_50 + local_78 + local_80);
              }
              if ((((local_65 & 0x48) != 0x48) && (piVar7 < piVar8)) &&
                 (piVar8 + 1 <= (int *)((long)piVar7 + lVar2))) {
                piVar12 = piVar8;
              }
            }
            uVar11 = local_80 + 1 + (ulong)local_30;
          }
        }
        if ((piVar12 == (int *)0x0) ||
           (iVar1 = _Llzma_properties_size_0
                              (*(long *)(param_3 + 0x100),
                               *(long *)(param_3 + 0x108) + *(long *)(param_3 + 0x100),0,0x10b,
                               piVar12), iVar1 == 0)) {
          uVar10 = *(undefined8 *)(param_4 + 0x90);
        }
        else {
          lVar2 = lzma_alloc(0x468,lVar3);
          *(long *)(param_4 + 0x38) = lVar2;
          if (lVar2 != 0) {
            *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
          }
          if ((*piVar12 == 0) && (*(long *)(piVar12 + -2) == 0)) {
            *(int **)(param_3 + 0x78) = piVar12;
            *(int **)(param_3 + 0x70) = piVar12 + -2;
            return 1;
          }
          lzma_free(*(undefined8 *)(param_4 + 0x90),lVar3);
          uVar10 = *(undefined8 *)(param_4 + 0x38);
        }
        lzma_free(uVar10,lVar3);
      }
    }
  }
  return 0;
}



ulong _Llzma_index_buffer_encode_0(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = _Lstream_decoder_memconfig_part_1(1);
  uVar2 = _Lget_literal_price_part_0(*param_1,param_2);
  if ((int)uVar2 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_2;
    lVar3 = lzma_alloc(0x308,lVar1);
    *(long *)(param_3 + 0x12) = lVar3;
    if (lVar3 != 0) {
      *param_3 = *param_3 + 1;
    }
    lVar1 = lzma_alloc(0x878,lVar1);
    *(long *)(param_3 + 0x14) = lVar1;
    if (lVar1 != 0) {
      *param_3 = *param_3 + 1;
    }
    uVar2 = (ulong)(*param_3 == 2);
  }
  return uVar2;
}



bool _Llzma_index_encoder_init_1(ulong *param_1,long **param_2)

{
  char cVar1;
  ulong **ppuVar2;
  ulong **ppuVar3;
  ulong **ppuVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong *puVar9;
  char *pcVar10;
  char *pcVar11;
  ulong local_30;
  
  if (param_1 == (ulong *)0x0) {
    return false;
  }
  lVar8 = _Lcrc_init_0(param_2[1][1],0x5b8,0);
  if (lVar8 == 0) {
    return false;
  }
  do {
    if (param_1[3] == 0) {
      plVar5 = *param_2;
      if (*plVar5 == 0) {
        return false;
      }
      if (plVar5[3] == 0) {
        return false;
      }
      if (plVar5[1] == 0) {
        return false;
      }
      if (plVar5[4] == 0) {
        return false;
      }
      if (plVar5[2] == 0) {
        return false;
      }
      if (plVar5[5] == 0) {
        return false;
      }
      break;
    }
    if (*param_1 == 0) {
      return false;
    }
    pcVar10 = (char *)param_1[1];
    if (pcVar10 == (char *)0x0) {
      return false;
    }
    if (param_1[2] == 0) {
      return false;
    }
    pcVar11 = pcVar10;
    if (*pcVar10 == '\0') {
      if ((ulong *)**param_2 != (ulong *)0x0) {
        return false;
      }
      **param_2 = (long)param_1;
    }
    else {
      while (cVar1 = *pcVar10, cVar1 != '\0') {
        pcVar10 = pcVar10 + 1;
        if (cVar1 == '/') {
          pcVar11 = pcVar10;
        }
      }
      uVar6 = _Lsimple_coder_update_0(pcVar11);
      plVar5 = *param_2;
      if (uVar6 == 2000) {
        if (plVar5[5] != 0) {
          return false;
        }
        plVar5[5] = (long)param_1;
      }
      else if (uVar6 < 0x7d1) {
        if (uVar6 == 0x590) {
          if (plVar5[2] != 0) {
            return false;
          }
          if (0x10463f < *param_1) {
            return false;
          }
          if ((code *)(*param_1 + 0x400000) < _Llzma_index_encoder_init_1) {
            return false;
          }
          if (param_1[3] == 0) {
            return false;
          }
          plVar5[2] = (long)param_1;
        }
        else if (uVar6 == 0x7c0) {
          if (plVar5[3] != 0) {
            return false;
          }
          plVar5[3] = (long)param_1;
        }
      }
      else if (uVar6 == 0x938) {
        if (plVar5[4] != 0) {
          return false;
        }
        plVar5[4] = (long)param_1;
      }
      else if (uVar6 == 0xa48) {
        if (plVar5[1] != 0) {
          return false;
        }
        puVar9 = (ulong *)(*(long *)(lVar8 + 8) + *(long *)param_2[1][1]);
        if (param_1 <= puVar9) {
          return false;
        }
        if (*(ulong *)(lVar8 + 0x10) < (ulong)((long)param_1 - (long)puVar9)) {
          return false;
        }
        if (param_1[2] != ((long *)param_2[1][1])[4]) {
          return false;
        }
        plVar5[1] = (long)param_1;
      }
    }
    plVar5 = *param_2;
    param_1 = (ulong *)param_1[3];
  } while ((((*plVar5 == 0) || (plVar5[3] == 0)) || (plVar5[1] == 0)) ||
          (((plVar5[4] == 0 || (plVar5[2] == 0)) || (plVar5[5] == 0))));
  ppuVar2 = (ulong **)param_2[4];
  ppuVar3 = (ulong **)param_2[3];
  ppuVar4 = (ulong **)param_2[2];
  lVar8 = *param_2[1];
  if ((undefined8 *)**param_2 == (undefined8 *)0x0) {
    return false;
  }
  iVar7 = _Lget_literal_price_part_0(*(undefined8 *)**param_2,lVar8);
  if (iVar7 == 0) {
    return false;
  }
  if (*(int *)(lVar8 + 0x4c) == 0) {
    return false;
  }
  if ((*(byte *)(lVar8 + 0xd0) & 0x20) == 0) {
    return false;
  }
  puVar9 = (ulong *)_Ldelta_coder_end_1(lVar8,0x1d0);
  *ppuVar4 = puVar9;
  if (puVar9 < (ulong *)0x1000000) {
    puVar9 = (ulong *)_Ldelta_coder_end_1(lVar8,0x510);
    *ppuVar3 = puVar9;
    if (((ulong *)0xffffff < puVar9) && (0xffffff < *puVar9)) {
      return false;
    }
    puVar9 = (ulong *)_Ldelta_coder_end_1(lVar8,0x798);
    *ppuVar2 = puVar9;
    if (puVar9 < (ulong *)0x1000000) goto LAB_00104904;
  }
  if (0xffffff < *puVar9) {
    return false;
  }
LAB_00104904:
  if (((undefined8 *)(*param_2)[3] != (undefined8 *)0x0) &&
     (iVar7 = _Lget_literal_price_part_0(*(undefined8 *)(*param_2)[3]), iVar7 != 0)) {
    plVar5 = param_2[5];
    local_30 = 0;
    lVar8 = param_2[1][3];
    if (((undefined8 *)(*param_2)[2] != (undefined8 *)0x0) &&
       (((iVar7 = _Lget_literal_price_part_0(*(undefined8 *)(*param_2)[2],lVar8), iVar7 != 0 &&
         ((*(byte *)(lVar8 + 0xd0) & 0x20) != 0)) &&
        (lVar8 = _Lmicrolzma_decode_0(lVar8,&local_30,1), 0x597 < local_30)))) {
      *plVar5 = lVar8 + 0x10;
      *(ulong *)(lVar8 + 0x590) = local_30 - 0x598;
      if (((undefined8 *)(*param_2)[5] != (undefined8 *)0x0) &&
         (iVar7 = _Lget_literal_price_part_0(*(undefined8 *)(*param_2)[5],param_2[1][2]), iVar7 != 0
         )) {
        iVar7 = _Llzma_index_buffer_encode_0((*param_2)[5],param_2[1][2],param_2[6]);
        return iVar7 != 0;
      }
    }
  }
  return false;
}



bool _Llzma_index_stream_flags_0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  bool bVar4;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar2 = _Lcrc_init_0(*(undefined8 *)(param_1[1] + 8),0x5b0,0x8c0);
  bVar4 = false;
  if (lVar2 != 0) {
    local_38 = param_1[1];
    piVar3 = (int *)(*(long *)(lVar2 + 8) + **(long **)(local_38 + 8));
    bVar4 = false;
    if (0 < *piVar3) {
      local_40 = *param_1;
      local_30 = param_1[2];
      local_28 = param_1[3];
      local_20 = param_1[4];
      local_18 = param_1[5];
      local_10 = param_1[6];
      iVar1 = _Llzma_index_encoder_init_1(*(undefined8 *)(piVar3 + 2),&local_40);
      bVar4 = iVar1 != 0;
    }
  }
  return bVar4;
}



undefined8 _Llzma_index_iter_locate_1(long **param_1,ulong *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  char cVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  long local_80;
  long local_78;
  undefined4 local_70;
  byte local_65;
  undefined4 local_64;
  byte local_60;
  uint local_58;
  ulong local_50;
  ulong local_40;
  
  bVar8 = 0;
  iVar3 = _Llzma2_decoder_end_1(0,0x97,0x1f,9);
  if (iVar3 != 0) {
    uVar15 = *param_2;
    plVar13 = &local_80;
    for (lVar10 = 0x16; lVar10 != 0; lVar10 = lVar10 + -1) {
      *(undefined4 *)plVar13 = 0;
      plVar13 = (long *)((long)plVar13 + (ulong)bVar8 * -8 + 4);
    }
    lVar10 = _Lstream_decoder_memconfig_part_1(1);
    *(long *)(lVar10 + 0x10) = param_1[1][4];
    lVar6 = lzma_alloc(0xc08,lVar10);
    uVar12 = param_2[7];
    *(long *)(uVar12 + 0xa8) = lVar6;
    if (lVar6 != 0) {
      *(int *)(uVar12 + 0x120) = *(int *)(uVar12 + 0x120) + 1;
    }
    piVar1 = *(int **)(uVar12 + 0x118);
    lVar6 = _Lstream_decoder_memconfig_part_1(1);
    *(long *)(lVar6 + 0x10) = param_1[1][2];
    lVar7 = lzma_alloc(0x348);
    *(long *)(piVar1 + 4) = lVar7;
    if (lVar7 != 0) {
      *piVar1 = *piVar1 + 1;
    }
    iVar3 = 0;
    uVar14 = 0xff;
    for (; uVar15 < param_2[1]; uVar15 = uVar15 + local_78) {
      iVar4 = _Lx86_code_part_0(&local_80,uVar15);
      if (iVar4 == 0) {
        return 0;
      }
      if (iVar3 == 0) {
        if (((local_58 == 0x1036) && (((ushort)local_70 & 0x140) == 0x140)) &&
           ((byte)(local_64._1_1_ - 1U) < 2)) {
          bVar8 = 0;
          if ((local_70 & 0x40) == 0) {
            bVar2 = 0;
            if (((local_70 & 0x1040) != 0) &&
               (bVar2 = local_70._1_1_ & 0x10, (local_70 & 0x1000) != 0)) {
              if ((local_70 & 0x20) == 0) {
                bVar8 = 0;
                bVar2 = local_60;
              }
              else {
                bVar2 = local_60 | (byte)((local_65 & 1) << 3);
              }
            }
          }
          else {
            bVar2 = (byte)local_70 & 0x20;
            if ((local_70 & 0x20) == 0) {
              bVar8 = local_64._3_1_;
              if ((local_70 & 0x1040) != 0) {
                bVar2 = local_64._2_1_;
              }
            }
            else {
              bVar8 = local_64._3_1_ | local_65 * '\b' & 8;
              bVar2 = 0;
              if ((local_70 & 0x1040) != 0) {
                bVar2 = local_64._2_1_ | local_65 * '\x02' & 8;
              }
            }
          }
          uVar12 = 0;
          if (((local_70 & 0x100) != 0) && (uVar12 = local_50, (local_64 & 0xff00ff00) == 0x5000000)
             ) {
            uVar12 = local_50 + local_80 + local_78;
          }
          if ((*(uint *)(param_2 + 2) == uVar12) &&
             (((int)(uint)*(ushort *)param_2[4] >> (bVar8 & 0x1f) & 1U) != 0)) {
            *(byte *)((ushort *)param_2[4] + 1) = bVar2;
            iVar3 = 1;
          }
        }
      }
      else if (iVar3 == 1) {
        if ((local_58 & 0xfffffffd) == 0x89) {
          uVar12 = param_2[3];
          uVar11 = local_70 & 0x40;
          if ((local_70 & 0x1040) == 0) {
            uVar5 = 0;
            if ((char)uVar11 != '\0') goto LAB_00104d63;
            if (*(char *)(uVar12 + 2) != '\0') goto LAB_00104e77;
            cVar9 = '\0';
LAB_00104d80:
            if (*(char *)(param_2[4] + 2) != (char)uVar11) goto LAB_00104d89;
          }
          else {
            if ((char)uVar11 == '\0') {
              if ((local_70 & 0x1000) == 0) {
                if (*(char *)(uVar12 + 2) == '\0') {
                  uVar5 = 0;
                  cVar9 = '\0';
                  goto LAB_00104d80;
                }
                goto LAB_00104e77;
              }
              uVar5 = (uint)local_60;
              if ((local_70 & 0x20) != 0) {
                uVar5 = (uint)local_60 | (local_65 & 1) << 3;
              }
            }
            else {
              uVar5 = (uint)local_64._2_1_;
              if ((local_70 & 0x20) != 0) {
                uVar5 = (uint)local_64._2_1_ | (uint)local_65 * 2 & 8;
              }
LAB_00104d63:
              uVar11 = (uint)local_64._3_1_;
              if ((local_70 & 0x20) != 0) {
                uVar11 = (uint)local_64._3_1_ | (local_65 & 1) << 3;
              }
            }
            cVar9 = *(char *)(uVar12 + 2);
            if (cVar9 == (char)uVar5) goto LAB_00104d80;
LAB_00104d89:
            if (((char)uVar11 != cVar9) || (*(char *)(param_2[4] + 2) != (char)uVar5))
            goto LAB_00104e77;
          }
          iVar3 = 2;
          uVar14 = uVar11;
          if (local_58 != 0x89) {
            uVar14 = uVar5;
          }
        }
      }
      else if (iVar3 == 2) {
        if (local_58 == 0x128) {
          bVar8 = 0;
        }
        else {
          if ((local_58 != 0x176) || (local_64._2_1_ != 0)) goto LAB_00104e77;
          bVar8 = 0;
          if ((local_70 & 0x1040) != 0) {
            if ((local_70 & 0x40) == 0) {
              bVar8 = local_70._1_1_ & 0x10;
              if (((local_70 & 0x1000) != 0) && (bVar8 = local_60, (local_70 & 0x20) != 0)) {
                bVar8 = local_60 | (byte)((local_65 & 1) << 3);
              }
            }
            else {
              bVar8 = (byte)local_70 & 0x20;
              if ((local_70 & 0x20) != 0) {
                bVar8 = local_65 * '\x02' & 8;
              }
            }
          }
        }
        if ((byte)uVar14 == bVar8) {
          if ((local_40 < 0x100) && (iVar3 = count_one_bits(), iVar3 == 1)) {
            uVar14 = *(uint *)(param_2 + 2);
            uVar15 = param_2[6];
            lVar10 = **param_1;
            *(byte **)(uVar15 + 0x60) = (byte *)((ulong)uVar14 + lVar10);
            *(char *)(uVar15 + 0x68) = (char)local_40;
            if ((*(byte *)((ulong)uVar14 + lVar10) & local_40) == 0) {
              return 1;
            }
          }
          *(undefined4 *)(param_2 + 5) = 1;
          return 0;
        }
      }
LAB_00104e77:
    }
    *(long *)(lVar10 + 0x10) = param_1[1][4];
    lzma_free(*(undefined8 *)(param_2[7] + 0xa8),lVar10);
    lzma_free(*(undefined8 *)(piVar1 + 4),lVar6);
  }
  return 0;
}



undefined8 _Llzma_index_hash_init_part_0(long param_1,ulong param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined4 *puVar10;
  byte bVar11;
  ulong uVar12;
  byte bVar13;
  undefined4 local_c8;
  undefined4 local_c4;
  long local_c0;
  ulong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 *local_a8;
  undefined4 *local_a0;
  int local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined4 local_70;
  byte local_65;
  undefined4 local_64;
  byte local_60;
  int local_58;
  ulong local_50;
  
  bVar13 = 0;
  iVar3 = _Llzma_index_iter_rewind_cold(0x85,0x12,8,0);
  if (iVar3 != 0) {
    piVar1 = *(int **)(param_4 + 0x118);
    plVar9 = &local_80;
    for (lVar5 = 0x16; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined4 *)plVar9 = 0;
      plVar9 = (long *)((long)plVar9 + (ulong)bVar13 * -8 + 4);
    }
    local_c8 = 0;
    local_c4 = 0;
    lVar5 = _Lstream_decoder_memconfig_part_1(1);
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
    lVar4 = lzma_alloc(0x380);
    uVar2 = local_c4;
    *(long *)(piVar1 + 0xe) = lVar4;
    if (lVar4 != 0) {
      *piVar1 = *piVar1 + 1;
    }
    uVar7 = *(ulong *)(param_3 + 0x100);
    local_c8._0_3_ = CONCAT12(0xff,(undefined2)local_c8);
    local_c8 = CONCAT22(local_c8._2_2_,(undefined2)local_c8) | 0x80;
    local_c4._0_2_ = (ushort)local_c4 | 2;
    uVar12 = *(long *)(param_3 + 0x108) + uVar7;
    local_c4._3_1_ = SUB41(uVar2,3);
    local_c4._0_3_ = CONCAT12(0xff,(ushort)local_c4);
    lVar5 = lzma_alloc(0x690,lVar5);
    *(long *)(piVar1 + 0x10) = lVar5;
    if (lVar5 != 0) {
      *piVar1 = *piVar1 + 1;
    }
    while ((uVar7 < uVar12 &&
           (iVar3 = _Lx86_code_part_0(&local_80,uVar7,uVar12), lVar5 = local_78, iVar3 != 0))) {
      if ((local_58 == 0x1036) &&
         ((((ushort)local_70 & 0x140) == 0x140 && ((byte)(local_64._1_1_ - 1U) < 2)))) {
        bVar11 = 0;
        if ((local_70 & 0x40) == 0) {
          bVar6 = 0;
          if ((((local_70 & 0x1040) != 0) &&
              (bVar6 = local_70._1_1_ & 0x10, (local_70 & 0x1000) != 0)) &&
             (bVar6 = local_60, (local_70 & 0x20) != 0)) {
            bVar6 = local_60 | (byte)((local_65 & 1) << 3);
          }
        }
        else {
          bVar6 = (byte)local_70 & 0x20;
          if ((local_70 & 0x20) == 0) {
            bVar11 = local_64._3_1_;
            if ((local_70 & 0x1040) != 0) {
              bVar6 = local_64._2_1_;
            }
          }
          else {
            bVar11 = local_64._3_1_ | local_65 * '\b' & 8;
            bVar6 = 0;
            if ((local_70 & 0x1040) != 0) {
              bVar6 = local_65 * '\x02' & 8 | local_64._2_1_;
            }
          }
        }
        if ((local_70 & 0x100) != 0) {
          uVar8 = local_50;
          if ((local_64 & 0xff00ff00) == 0x5000000) {
            uVar8 = local_50 + local_80 + local_78;
          }
          if ((uVar8 < param_2) && (uVar8 != 0)) {
            plVar9 = &local_c0;
            for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *(undefined4 *)plVar9 = 0;
              plVar9 = (long *)((long)plVar9 + (ulong)bVar13 * -8 + 4);
            }
            if (((int)(local_c8 & 0xffff) >> (bVar11 & 0x1f) & 1U) == 0) {
              if (((int)(local_c4 & 0xffff) >> (bVar11 & 0x1f) & 1U) == 0) goto LAB_00104fb8;
              local_c4._0_3_ = CONCAT12(bVar6,(ushort)local_c4);
              puVar10 = &local_ac;
              for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar10 = 0;
                puVar10 = puVar10 + (ulong)bVar13 * -2 + 1;
              }
              local_a8 = &local_c4;
              local_a0 = &local_c8;
            }
            else {
              local_c8._0_3_ = CONCAT12(bVar6,(undefined2)local_c8);
              puVar10 = &local_ac;
              for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar10 = 0;
                puVar10 = puVar10 + (ulong)bVar13 * -2 + 1;
              }
              local_a8 = &local_c8;
              local_a0 = &local_c4;
            }
            local_c0 = lVar5 + uVar7;
            local_b8 = uVar12;
            local_b0 = (int)uVar8;
            local_90 = param_3;
            local_88 = param_4;
            iVar3 = _Llzma_index_iter_locate_1(param_1,&local_c0);
            if (iVar3 != 0) {
              return 1;
            }
            if (local_98 != 0) {
              return 0;
            }
          }
        }
      }
LAB_00104fb8:
      uVar7 = uVar7 + local_78;
    }
  }
  return 0;
}



undefined8
_Llzma_lz_decoder_init_0(long param_1,undefined8 *param_2,undefined4 *param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  iVar4 = _Llzma_index_iter_rewind_cold(0,10,0,0);
  if (iVar4 != 0) {
    lVar5 = _Lstream_decoder_memconfig_part_1(1);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x20);
    *(undefined8 *)(lVar5 + 0x10) = uVar2;
    lVar6 = _Lcrc_init_0(uVar2,0x6e0,0);
    if (*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + 0x4c) != 0) {
      if (lVar6 != 0) {
        lVar6 = *(long *)(lVar6 + 8);
        lVar7 = **(long **)(*(long *)(param_1 + 8) + 0x20);
        *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
        *(long *)(param_4 + 0x40) = lVar6 + lVar7;
      }
      lVar6 = lzma_alloc(0x6f8,lVar5);
      *(long *)(param_4 + 0x98) = lVar6;
      if (lVar6 != 0) {
        *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
      }
      lVar6 = _Lcrc_init_0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x20),0x268,0);
      lVar7 = lzma_alloc(0x7e8,lVar5);
      *(long *)(param_4 + 0x50) = lVar7;
      if (lVar7 != 0) {
        *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
      }
      lVar7 = *(long *)(param_1 + 8);
      if (lVar6 != 0) {
        lVar6 = *(long *)(lVar6 + 8);
        lVar3 = **(long **)(lVar7 + 0x20);
        *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
        *(long *)(param_4 + 0x48) = lVar6 + lVar3;
      }
      lVar6 = _Lcrc_init_0(*(undefined8 *)(lVar7 + 8),0x9c8,0);
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 8);
        lVar3 = **(long **)(*(long *)(param_1 + 8) + 8);
        *(undefined8 *)(param_3 + 0x42) = *(undefined8 *)(lVar6 + 0x10);
        *(long *)(param_3 + 0x40) = lVar7 + lVar3;
        iVar4 = _Lparse_bcj_0();
        if ((iVar4 != 0) &&
           (iVar4 = _Llzma_delta_props_encode_part_0(param_1,param_2,param_3,param_4), iVar4 != 0))
        {
          lVar6 = lzma_alloc(0xb28,lVar5);
          *(long *)(param_4 + 0xc0) = lVar6;
          if (lVar6 != 0) {
            *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
          }
          iVar4 = _Llzma_filter_flags_decode_0
                            (*(undefined8 *)(*(long *)(param_1 + 8) + 8),
                             *(undefined8 *)(*(long *)(param_1 + 8) + 0x20),param_3,param_4);
          if ((iVar4 != 0) &&
             (iVar4 = _Llzma_index_hash_init_part_0(param_1,*param_2,param_3,param_4), iVar4 != 0))
          {
            puVar8 = param_3;
            for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
            }
            uVar1 = *(uint *)(*(long **)(param_3 + 0x3e) + 1);
            if (uVar1 < 9) {
              if (uVar1 != 0) {
                lVar5 = **(long **)(param_3 + 0x3e);
                lVar6 = 0;
                do {
                  *(undefined *)((long)param_3 + lVar6) = *(undefined *)(lVar5 + lVar6);
                  lVar6 = lVar6 + 1;
                } while ((ulong)uVar1 << 3 != lVar6);
              }
              return 1;
            }
          }
        }
      }
    }
    lzma_free(*(undefined8 *)(param_4 + 0x98),lVar5);
    lzma_free(*(undefined8 *)(param_4 + 0x50),lVar5);
    lzma_free(*(undefined8 *)(param_4 + 0xc0),lVar5);
  }
  return 0;
}



undefined8
_Llzma_lzma_optimum_fast_0
          (undefined8 param_1,long *param_2,undefined8 param_3,long param_4,uint *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar12;
  code **ppcVar13;
  byte bVar14;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  bVar14 = 0;
  iVar2 = _Llzma2_decoder_end_1(0,0x1c8,0,0x1d);
  if (iVar2 == 0) {
    return 0;
  }
  local_88 = _Llzip_decoder_memconfig_part_0;
  local_80 = 0x1c000001c8;
  local_70 = _Llzma_index_stream_size_1;
  local_78 = 0x100000000;
  local_60 = 0x100000000;
  local_48 = 0x100000000;
  local_58 = _Lindex_decode_1;
  local_40 = _Lindex_encode_1;
  local_38 = 0x19000001c4;
  local_68 = 0x1b000001c8;
  local_50 = 0x1a000001c8;
  local_30 = 0x100000004;
  iVar2 = _Llzma_index_memusage_0(&local_88,4,_Llzma_check_init_part_0);
  if (iVar2 == 0) {
    return 0;
  }
  ppcVar13 = &local_88;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined4 *)ppcVar13 = 0;
    ppcVar13 = (code **)((long)ppcVar13 + (ulong)bVar14 * -8 + 4);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  lVar11 = _Lstream_decoder_memconfig_part_1(1);
  *(long **)(lVar11 + 0x10) = param_2;
  lVar6 = lzma_alloc(0x118,lVar11);
  *(long *)(param_4 + 0x80) = lVar6;
  if (lVar6 != 0) {
    *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
  }
  lVar7 = _Llzma_check_update_0(param_1,&local_b8);
  lVar6 = local_b8;
  if (lVar7 == 0) {
    return 0;
  }
  lVar8 = _Lcrc_init_0(param_2,0x408,0);
  lVar9 = _Lcrc_init_0(param_2,0x188,0);
  if (lVar9 == 0) {
    return 0;
  }
  lVar10 = _Lmicrolzma_decode_0(param_1,&local_b0,0);
  lVar9 = local_b0;
  if (lVar10 == 0) {
    return 0;
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 8);
    lVar1 = *param_2;
    *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
    *(long *)(param_4 + 0x88) = lVar8 + lVar1;
  }
  lVar8 = lzma_alloc(0x838,lVar11);
  *(long *)(param_4 + 0xa0) = lVar8;
  if (lVar8 != 0) {
    *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
  }
  iVar2 = FUN_00102530(&local_a8,param_1,param_2,param_4);
  lVar8 = local_a8;
  if (iVar2 == 0) {
    return 0;
  }
  *(long *)(param_5 + 0x1e) = local_a8;
  iVar2 = _Llzma_block_buffer_encode_0(local_a8,local_a8 + 4,0xe230);
  *param_5 = (uint)(iVar2 != 0);
  lVar1 = lVar7 + lVar6;
  if ((iVar2 != 0) &&
     (iVar2 = _Llzma2_encoder_init_1(lVar8,0,&local_a0,lVar8,lVar7 + lVar6,1), lVar1 = local_a0,
     iVar2 == 0)) {
    return 0;
  }
  local_a0 = lVar1;
  uVar12 = param_1;
  iVar2 = _Llzma_buf_cpy_0(lVar10,lVar9 + lVar10,lVar8,local_a0,param_3,&local_90,param_1,param_5);
  iVar3 = FUN_00103320(lVar10,lVar9 + lVar10,lVar8,local_a0,&local_98,param_1);
  lVar7 = lzma_alloc(0xc28,lVar11);
  lVar6 = local_90;
  *(long *)(param_4 + 200) = lVar7;
  if (lVar7 != 0) {
    *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
  }
  if (iVar2 == 0) {
LAB_00105749:
    if (iVar3 == 0) goto LAB_001057aa;
    uVar4 = 0;
LAB_0010577d:
    uVar5 = _Llzma_lzma2_encoder_memusage_0(local_98,param_1,param_3,param_5);
    uVar12 = extraout_RDX_00;
  }
  else {
    if (iVar3 != 0) {
      if (local_90 == local_98) {
        uVar4 = _Llzma_lzma2_encoder_memusage_0(local_90,param_1,param_3,param_5);
        if (uVar4 < 8) {
          return 0;
        }
        goto LAB_00105735;
      }
      uVar4 = _Llzma_lzma2_encoder_memusage_0(local_90,param_1,param_3,param_5);
      goto LAB_0010577d;
    }
    if (iVar2 == 0) goto LAB_00105749;
    uVar4 = _Llzma_lzma2_encoder_memusage_0(local_90,param_1,param_3,param_5);
    uVar5 = 0;
    uVar12 = extraout_RDX;
  }
  if (((uVar5 <= uVar4) && (lVar6 = local_90, 7 < uVar4)) ||
     ((uVar4 <= uVar5 && (lVar6 = local_98, 7 < uVar5)))) {
LAB_00105735:
    *(long *)(param_5 + 10) = lVar6;
    return 1;
  }
LAB_001057aa:
  lzma_free(*(undefined8 *)(param_4 + 0x80),lVar11,uVar12);
  lzma_free(*(undefined8 *)(param_4 + 0xa0),lVar11);
  lzma_free(*(undefined8 *)(param_4 + 200),lVar11);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00105aaf)
// WARNING: Removing unreachable block (ram,0x00105aa0)

undefined  [16] _Lmicrolzma_encoder_init_1(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined4 *puVar23;
  ulong uVar24;
  ulong uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  ulong uVar30;
  undefined8 *puVar31;
  uint uVar32;
  byte bVar33;
  long lVar34;
  undefined8 *puVar35;
  ulong uVar36;
  byte bVar37;
  int iVar38;
  code *pcVar39;
  undefined *puVar40;
  ulong uVar41;
  ulong local_b20;
  undefined4 *local_b10;
  undefined4 local_acc;
  long local_ac8;
  undefined8 local_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  undefined8 local_aa8;
  long local_aa0;
  undefined8 local_a98;
  undefined8 local_a90;
  undefined **local_a88;
  ulong local_a80;
  undefined8 *local_a78;
  undefined8 local_a70;
  long *local_a68;
  undefined **local_a60;
  undefined8 *local_a58;
  undefined8 *local_a50;
  undefined8 *local_a48;
  undefined8 local_a40;
  undefined *local_a38;
  long local_a30;
  long local_a28;
  undefined2 local_a20;
  byte local_a15;
  undefined4 local_a14;
  byte local_a10;
  uint local_a08;
  long local_a00;
  long local_9f0;
  undefined8 local_9d8;
  undefined4 local_9d0;
  undefined4 uStack_9cc;
  undefined2 local_9c8;
  byte local_9bd;
  undefined4 local_9bc;
  byte local_9b8;
  ulong local_9a8;
  long local_998;
  long local_980 [3];
  long local_968;
  undefined *local_950;
  undefined *local_948;
  undefined *local_940;
  undefined *local_938;
  long *local_930;
  long *local_928;
  undefined **local_920;
  undefined local_918 [256];
  undefined local_818 [256];
  undefined local_718 [256];
  undefined local_618 [256];
  long local_518 [32];
  undefined local_418 [112];
  undefined local_3a8 [8];
  long alStack_3a0 [72];
  long local_160;
  undefined8 local_158;
  long local_80;
  ulong local_60;
  ulong local_58;
  undefined local_48 [24];
  long local_30;
  
  bVar37 = 0;
  local_acc = 0;
  plVar12 = local_980;
  for (lVar21 = 0x256; lVar21 != 0; lVar21 = lVar21 + -1) {
    *(undefined4 *)plVar12 = 0;
    plVar12 = (long *)((long)plVar12 + 4);
  }
  puVar26 = local_918;
  lVar21 = *(long *)(param_1 + 0x80);
  local_948 = local_818;
  local_940 = local_718;
  local_938 = local_618;
  local_ac8 = 0;
  local_ac0 = 0;
  local_ab8 = 0;
  local_ab0 = 0;
  local_aa8 = 0;
  local_930 = local_518;
  local_950 = puVar26;
  local_928 = local_980;
  local_920 = &local_950;
  _Llzma_stream_header_encode_part_0(lVar21);
  *(ulong *)(lVar21 + 0x18) = (ulong)*(byte *)(lVar21 + 0x10);
  uVar24 = *(ulong *)(*(long *)(lVar21 + 8) + 0x18 + (ulong)*(byte *)(lVar21 + 0x10) * 8);
  uVar30 = *(ulong *)(lVar21 + 0x28);
  lVar21 = uVar30 - uVar24;
  if (uVar30 <= uVar24) {
    lVar21 = uVar24 - uVar30;
  }
  if (lVar21 < 0x50001) {
    uVar24 = uVar24 & 0xfffffffffffff000;
    uVar30 = uVar24 - 0x20000;
LAB_0010592f:
    iVar9 = _Lsimple_coder_update_0(uVar24,0);
    if (iVar9 != 0x300) goto code_r0x00105940;
    local_a78 = &local_aa8;
    local_a70 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x28);
    local_a88 = &local_950;
    local_a80 = uVar24;
    iVar9 = _Llzma_filter_decoder_is_supported_part_0(&local_a88);
    if (iVar9 != 0) {
      local_30 = _Lstream_decoder_memconfig_part_1(1);
      lVar21 = 0;
      do {
        local_48[lVar21] = *(undefined *)(local_30 + lVar21);
        lVar21 = lVar21 + 1;
      } while (lVar21 != 0x18);
      local_a58 = &local_ac0;
      local_a50 = &local_ab8;
      local_a48 = &local_ab0;
      local_a40 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38);
      local_a68 = local_980;
      local_a60 = &local_950;
      local_a38 = local_418;
      iVar9 = _Llzma_index_stream_flags_0(&local_a68);
      if (iVar9 == 0) goto LAB_00105a3b;
      local_b10 = (undefined4 *)**(undefined8 **)(*(long *)(param_1 + 0x10) + 0x38);
      puVar23 = local_b10 + 0x4e;
      puVar29 = local_b10 + 0x146;
      puVar1 = local_b10 + 0xa8;
      puVar28 = puVar23;
      for (lVar21 = 0x5a; lVar21 != 0; lVar21 = lVar21 + -1) {
        *puVar28 = 0;
        puVar28 = puVar28 + (ulong)bVar37 * -2 + 1;
      }
      *(undefined4 **)(local_b10 + 0x5a) = puVar29;
      lVar21 = *(long *)(param_1 + 0x10);
      *(undefined4 **)(local_b10 + 0x50) = puVar1;
      *(undefined4 **)(local_b10 + 0x56) = local_b10 + 0xf2;
      plVar12 = *(long **)(lVar21 + 0x38);
      *(undefined4 **)(local_b10 + 0x52) = local_b10 + 0x12a;
      lVar21 = *plVar12;
      uVar27 = *(undefined8 *)(lVar21 + 0x580);
      *(undefined8 *)(local_b10 + 0x88) = 0;
      *(long *)(local_b10 + 0x8a) = lVar21 + 0x588;
      *(undefined8 *)(local_b10 + 0x86) = uVar27;
      FUN_00102d10(puVar26,local_3a8);
      local_aa0 = 0;
      lVar21 = _Llzma_check_update_0(local_938,&local_aa0);
      if (lVar21 != 0) {
        *(long *)(local_b10 + 0x6e) = lVar21;
        *(long *)(local_b10 + 0x70) = lVar21 + local_aa0;
        puVar28 = local_b10;
        for (lVar21 = 0x4e; lVar21 != 0; lVar21 = lVar21 + -1) {
          *puVar28 = 0;
          puVar28 = puVar28 + (ulong)bVar37 * -2 + 1;
        }
        *(undefined4 **)(local_b10 + 0x4a) = puVar1;
        uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50);
        *(undefined8 *)(local_b10 + 0x44) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48);
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
        *(undefined8 *)(local_b10 + 0x48) = uVar27;
        *(undefined8 *)(local_b10 + 0x46) = uVar2;
        puVar28 = local_b10 + 0xf2;
        for (lVar21 = 0x38; lVar21 != 0; lVar21 = lVar21 + -1) {
          *puVar28 = 0;
          puVar28 = puVar28 + (ulong)bVar37 * -2 + 1;
        }
        *(undefined8 *)(local_b10 + 0xf6) = **(undefined8 **)(param_1 + 8);
        uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78);
        *(undefined8 *)(local_b10 + 0xf8) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70);
        *(undefined8 *)(local_b10 + 0xfa) = uVar27;
        for (lVar21 = 0x1a; lVar21 != 0; lVar21 = lVar21 + -1) {
          *puVar29 = 0;
          puVar29 = puVar29 + (ulong)bVar37 * -2 + 1;
        }
        *(undefined8 *)(local_b10 + 0x15e) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58);
        **(undefined8 **)(*(long *)(param_1 + 8) + 0x10) = puVar23;
        puVar29 = puVar1;
        for (lVar21 = 0x4a; lVar21 != 0; lVar21 = lVar21 + -1) {
          *puVar29 = 0;
          puVar29 = puVar29 + (ulong)bVar37 * -2 + 1;
        }
        *(undefined8 *)(local_b10 + 0xae) = local_ac0;
        *(undefined8 *)(local_b10 + 0xb0) = local_ab8;
        *(undefined8 *)(local_b10 + 0xb2) = local_ab0;
        lVar21 = 0;
        do {
          *(undefined *)((long)local_b10 + lVar21 + 0x4a8) = local_418[lVar21];
          lVar21 = lVar21 + 1;
        } while (lVar21 != 0x70);
        *(undefined4 **)(local_b10 + 0xee) = local_b10 + 0x12a;
        *(undefined8 *)(local_b10 + 0x144) = local_aa8;
        lVar21 = _Lstream_decoder_memconfig_part_1(1);
        *(undefined **)(lVar21 + 0x10) = local_940;
        lVar11 = lzma_alloc(0x440,lVar21);
        *(long *)(local_b10 + 300) = lVar11;
        if (lVar11 != 0) {
          local_b10[0x12a] = local_b10[0x12a] + 1;
        }
        iVar9 = _Llzma_lz_decoder_init_0(&local_928,&local_ac8,local_b10,puVar1);
        if (iVar9 == 0) goto LAB_00105a42;
        lVar11 = _Lstream_decoder_memconfig_part_1(1);
        *(long **)(lVar11 + 0x10) = local_930;
        plVar12 = local_930;
        if (local_930 != (long *)0x0) {
          plVar12 = (long *)_Lcrc_init_0(local_930,0x798,0);
          lVar13 = lzma_alloc(0xaf8,lVar11);
          *(long *)(local_b10 + 0xc6) = lVar13;
          if (lVar13 != 0) {
            local_b10[0xf0] = local_b10[0xf0] + 1;
          }
        }
        local_a30 = 0;
        local_9d8 = 0;
        puVar26 = local_950;
        lVar13 = _Llzma_check_update_0(local_950,&local_a30);
        lVar34 = local_a30 + lVar13;
        lVar14 = _Lmicrolzma_decode_0(puVar26,&local_9d8,0);
        *(long *)(local_b10 + 100) = lVar13;
        *(long *)(local_b10 + 0x66) = lVar34;
        *(long *)(local_b10 + 0x68) = lVar14;
        *(long *)(local_b10 + 0x6a) = local_9d8 + lVar14;
        lVar13 = _Llzma_lz_encoder_memusage_1(3);
        if (((lVar13 == 0) || (pcVar39 = *(code **)(lVar13 + 0x20), pcVar39 == (code *)0x0)) ||
           (*(long *)(lVar13 + 0x30) == 0)) goto LAB_00105a42;
        lVar34 = 0;
        lVar14 = (*pcVar39)(local_930,0x418);
        *(long *)(local_b10 + 0xec) = lVar14;
        if (lVar14 != 0) {
          lVar34 = _Lcrc_init_0(local_930,0xc40,0);
        }
        local_acc = 0x2c8;
        lVar14 = _Llzip_decode_0(local_950,&local_acc,0);
        *(long *)(local_b10 + 0x5c) = lVar14;
        if (lVar14 == 0) goto LAB_00105a42;
        local_acc = 0x710;
        lVar14 = _Llzip_decode_0(local_950,&local_acc,0);
        *(long *)(local_b10 + 0x5e) = lVar14;
        if (lVar14 == 0) goto LAB_00105a42;
        lVar15 = 0;
        lVar14 = _Lcrc64_generic_0(local_930,0x6d0);
        *(long *)(local_b10 + 0xe8) = lVar14;
        if (lVar14 != 0) {
          lVar14 = _Lcrc_init_0(local_930,0x958,0);
          if (lVar14 != 0) {
            lVar14 = *(long *)(lVar14 + 8);
            lVar15 = *local_930;
            local_b10[0xf0] = local_b10[0xf0] + 1;
            *(long *)(local_b10 + 0xde) = lVar14 + lVar15;
          }
          lVar15 = _Lcrc_init_0(local_930,0x918,0);
          if (*(long *)(local_b10 + 0xec) != 0) {
            local_b10[0xf0] = local_b10[0xf0] + 1;
          }
        }
        lVar14 = _Lcrc_init_0(local_930,0xac0,0);
        lVar16 = (*pcVar39)(local_930,0x540);
        lVar17 = 0;
        *(long *)(local_b10 + 0xe2) = lVar16;
        if (lVar16 != 0) {
          local_b10[0xf0] = local_b10[0xf0] + 1;
          lVar17 = _Lcrc_init_0(local_930,0x8f8,0);
          if (plVar12 != (long *)0x0) {
            lVar16 = plVar12[1];
            lVar18 = *local_930;
            local_b10[0xf0] = local_b10[0xf0] + 1;
            *(long *)(local_b10 + 0xc0) = lVar16 + lVar18;
          }
        }
        if (*(long *)(local_b10 + 0xe8) != 0) {
          local_b10[0xf0] = local_b10[0xf0] + 1;
        }
        iVar9 = _Llzma_lzma_optimum_fast_0(local_950,local_930,local_3a8,puVar1);
        if (iVar9 == 0) goto LAB_00105a42;
        if (lVar34 != 0) {
          lVar34 = *(long *)(lVar34 + 8);
          lVar16 = *local_930;
          local_b10[0xf0] = local_b10[0xf0] + 1;
          *(long *)(local_b10 + 0xe0) = lVar34 + lVar16;
        }
        if (lVar15 != 0) {
          lVar34 = *(long *)(lVar15 + 8);
          lVar15 = *local_930;
          local_b10[0xf0] = local_b10[0xf0] + 1;
          *(long *)(local_b10 + 0xdc) = lVar34 + lVar15;
        }
        if (lVar14 != 0) {
          lVar14 = *(long *)(lVar14 + 8);
          lVar34 = *local_930;
          local_b10[0xf0] = local_b10[0xf0] + 1;
          *(long *)(local_b10 + 0xea) = lVar14 + lVar34;
        }
        if (lVar17 != 0) {
          lVar14 = *(long *)(lVar17 + 8);
          lVar34 = *local_930;
          local_b10[0xf0] = local_b10[0xf0] + 1;
          *(long *)(local_b10 + 0xe6) = lVar14 + lVar34;
        }
        lVar34 = _Lcrc_init_0(local_930,0x3f0,0);
        uVar27 = 0;
        puVar35 = *(undefined8 **)(local_b10 + 0x56);
        local_a30 = 0;
        local_a98 = local_a98 & 0xffffffff00000000;
        *puVar35 = 0;
        *(undefined4 *)(puVar35 + 1) = 0;
        puVar26 = local_950;
        lVar15 = _Lmicrolzma_decode_0(local_950,&local_a30,0);
        lVar14 = local_a30;
        if ((lVar15 != 0) && (local_160 != 0)) {
          puVar35[0x15] = local_160;
          puVar35[0x16] = local_158;
          local_a98 = CONCAT44(local_a98._4_4_,0x400);
          puVar40 = puVar26;
          lVar16 = _Llzip_decode_0(puVar26,&local_a98,0);
          puVar35[0x1a] = lVar16;
          if ((lVar16 != 0) &&
             (iVar9 = FUN_00102a30(0x16,puVar35 + 5,puVar35 + 6,puVar35 + 7,puVar40,local_3a8,
                                   puVar23,puVar26), iVar9 == 0)) {
            puVar35[5] = 0;
            puVar35[6] = 0;
            puVar35[7] = 0;
          }
          local_a98 = CONCAT44(local_a98._4_4_,0x7b8);
          lVar16 = _Llzip_decode_0(puVar40,&local_a98,0);
          puVar35[0x1b] = lVar16;
          if (lVar16 != 0) {
            puVar26 = local_3a8;
            iVar9 = FUN_00102a30(0x17,puVar35 + 9,puVar35 + 10,puVar35 + 0xb,puVar40,puVar26,puVar23
                                 ,lVar16,puVar40,puVar23,puVar26);
            if (iVar9 == 0) {
              puVar35[9] = 0;
              puVar35[10] = 0;
              puVar35[0xb] = 0;
            }
            else {
              iVar9 = FUN_00102a30(0x18,puVar35 + 0xd,puVar35 + 0xe,puVar35 + 0xf,puVar40,puVar26,
                                   puVar23,uVar27,puVar40,puVar23,puVar26);
              if (iVar9 == 0) {
                puVar35[0xd] = 0;
                puVar35[0xe] = 0;
                puVar35[0xf] = 0;
              }
            }
          }
          if ((puVar35[5] != 0) || (puVar35[9] != 0)) {
            lVar16 = *(long *)(local_b10 + 0x56);
            local_9d8 = 0;
            lVar17 = *(long *)(lVar16 + 0x28);
            if (lVar17 == 0) {
              lVar17 = *(long *)(lVar16 + 0x48);
              if (lVar17 == 0) goto LAB_001065aa;
              uVar27 = *(undefined8 *)(lVar16 + 0x50);
            }
            else {
              uVar27 = *(undefined8 *)(lVar16 + 0x30);
            }
            bVar7 = false;
            lVar16 = 0;
            local_a90 = CONCAT44(local_a90._4_4_,0x198);
            while (lVar16 = _Llzip_decode_0(puVar40,&local_a90,lVar16), lVar16 != 0) {
              local_9d8 = 0;
              lVar18 = _Lstream_encoder_update_0(puVar40,lVar16,0,0,&local_9d8);
              if (lVar18 == 0) {
                local_9d8 = 0;
                bVar7 = true;
                lVar18 = _Lstream_encoder_update_1(puVar40,lVar16,0,0,&local_9d8);
              }
              while (lVar18 != 0) {
                do {
                  iVar9 = _Lauto_decode_1(puVar40,lVar18,8);
                  if ((iVar9 != 0) &&
                     (iVar9 = _Llzma_properties_size_0(lVar17,uVar27,0,0x109,lVar18), iVar9 != 0)) {
                    lVar16 = puVar35[5];
                    *(long *)(*(long *)(local_b10 + 0x56) + 0xa0) = lVar18;
                    if (lVar16 != 0) {
                      *(undefined4 *)((long)puVar35 + 4) = 1;
                    }
                    if ((puVar35[9] != 0) && (*(undefined4 *)puVar35 = 1, puVar35[0xd] != 0)) {
                      *(undefined4 *)(puVar35 + 1) = 1;
                    }
                    lVar14 = lVar14 + lVar15;
                    lVar16 = FUN_00102c40(0x11,local_3a8,lVar15,lVar14);
                    if (lVar16 != 0) {
                      *(long *)(*(long *)(local_b10 + 0x56) + 0xc0) = lVar16;
                    }
                    puVar35 = &local_9d8;
                    bVar7 = false;
                    local_9d0 = 0x70;
                    local_9d8 = 0xc5800000948;
                    goto LAB_0010646c;
                  }
                  if (bVar7) goto LAB_001063c3;
                  lVar18 = _Lstream_encoder_update_0(puVar40,lVar16,0,0,&local_9d8);
                } while (lVar18 != 0);
                local_9d8 = 0;
LAB_001063c3:
                lVar18 = _Lstream_encoder_update_1(puVar40,lVar16,0,0,&local_9d8);
                bVar7 = true;
              }
              lVar16 = lVar16 + 8;
            }
          }
        }
        goto LAB_001065aa;
      }
      goto LAB_00105a42;
    }
  }
LAB_00105a3b:
  local_b10 = (undefined4 *)0x0;
  goto LAB_00105a42;
code_r0x00105940:
  uVar24 = uVar24 - 0x1000;
  if (uVar24 == uVar30) goto LAB_00105a3b;
  goto LAB_0010592f;
LAB_0010646c:
  do {
    lVar16 = _Llzip_decode_0(puVar40,puVar35,0);
    if (lVar16 != 0) {
      if (bVar7) {
        *(undefined4 *)(*(long *)(local_b10 + 0x56) + 0xb8) = 1;
        goto LAB_001064b3;
      }
      bVar7 = true;
    }
    puVar35 = (undefined8 *)((long)puVar35 + 4);
  } while (puVar35 != (undefined8 *)&uStack_9cc);
  *(undefined4 *)(*(long *)(local_b10 + 0x56) + 0xb8) = 0;
LAB_001064b3:
  lVar14 = FUN_00102c40(0x15,local_3a8,lVar15,lVar14);
  if (lVar14 != 0) {
    if ((*(int *)(*(long *)(local_b10 + 0x56) + 0xb8) != 0) && (local_b10[0x4e] != 0)) {
      iVar9 = 0;
      lVar15 = 0;
      local_9d0 = 0x10;
      local_9d8 = 0xf0000000e;
      uVar24 = 0;
      do {
        uVar30 = (ulong)*(uint *)((long)&local_9d8 + lVar15 * 4);
        lVar16 = alStack_3a0[uVar30 * 4];
        if (lVar16 != 0) {
          lVar17 = alStack_3a0[uVar30 * 4 + 1];
          iVar9 = iVar9 + 1;
          iVar10 = _Lstream_encoder_mt_init_1(lVar16,lVar17,0,lVar14);
          iVar38 = (int)uVar24;
          if (iVar10 == 0) {
            iVar10 = _Llzma_simple_x86_decoder_init_1(lVar16,lVar17,0,lVar14);
            iVar38 = (int)uVar24;
            if (iVar10 == 0) goto LAB_00106588;
          }
          uVar24 = (ulong)(iVar38 + 1);
        }
LAB_00106588:
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      if ((iVar9 != 0) && ((int)uVar24 == 0)) goto LAB_001065aa;
    }
    *(long *)(*(long *)(local_b10 + 0x56) + 200) = lVar14;
  }
LAB_001065aa:
  lVar14 = _Lcrc_init_0(local_930,0x2a8,0);
  iVar9 = _Llzma_mf_bt4_find_0(local_950,local_3a8,puVar23);
  if (iVar9 == 0) {
    local_b10[0xf2] = 0;
    local_b10[0xf4] = 0;
  }
  puVar35 = *(undefined8 **)(local_b10 + 0x5a);
  *(undefined **)(lVar21 + 0x10) = local_940;
  local_a98 = 0;
  *puVar35 = 0;
  lVar21 = _Llzma_check_update_0(local_918,&local_a98);
  uVar24 = local_a98;
  if ((((lVar21 != 0) && (0x10 < local_a98)) && (local_80 != 0)) &&
     ((local_b10[0x4e] == 0 ||
      (iVar9 = _Llzma_block_buffer_encode_0(local_80,local_80 + 4,0xe230), iVar9 != 0)))) {
    puVar35[0xb] = local_80;
    plVar12 = &local_a30;
    for (lVar15 = 0x16; lVar15 != 0; lVar15 = lVar15 + -1) {
      *(undefined4 *)plVar12 = 0;
      plVar12 = (long *)((long)plVar12 + (ulong)bVar37 * -8 + 4);
    }
    if (local_60 != 0) {
      local_b20 = 0;
      uVar36 = 0;
      uVar41 = local_58;
      uVar30 = local_60;
      do {
        while( true ) {
          if ((uVar41 <= uVar30) || ((local_b20 != 0 && (uVar36 != 0)))) goto LAB_00106beb;
          iVar9 = _Lx86_code_part_0(&local_a30,uVar30,uVar41);
          if (iVar9 != 0) break;
          uVar30 = uVar30 + 1;
        }
        if ((local_a08 & 0xfffffffd) == 0xb1) {
          if (local_a14._1_1_ != '\x03') goto LAB_00106730;
          if ((local_a20 & 0x1040) == 0) {
            if ((local_a20 & 0x40) != 0) {
              bVar8 = 0;
LAB_001067ca:
              bVar33 = local_a14._3_1_;
              if ((local_a20 & 0x20) != 0) {
                bVar33 = local_a14._3_1_ | (byte)((local_a15 & 1) << 3);
              }
              goto LAB_001067e8;
            }
            bVar33 = 0;
          }
          else {
            if ((local_a20 & 0x40) != 0) {
              bVar8 = (byte)(local_a14 >> 0x10);
              if ((local_a20 & 0x20) != 0) {
                bVar8 = bVar8 | local_a15 * '\x02' & 8;
              }
              goto LAB_001067ca;
            }
            bVar33 = local_a20._1_1_ & 0x10;
            if ((local_a20 & 0x1000) == 0) goto LAB_001067f6;
            bVar8 = local_a10;
            if ((local_a20 & 0x20) != 0) {
              bVar8 = local_a10 | (byte)((local_a15 & 1) << 3);
            }
            bVar33 = 0;
LAB_001067e8:
            if (bVar8 != bVar33) goto LAB_00106730;
          }
LAB_001067f6:
          uVar32 = 0;
          uVar5 = 0;
          uVar36 = 0;
          uVar25 = 0;
          puVar31 = &local_9d8;
          for (lVar15 = 0x16; uVar20 = uVar30, lVar15 != 0; lVar15 = lVar15 + -1) {
            *(undefined4 *)puVar31 = 0;
            puVar31 = (undefined8 *)((long)puVar31 + (ulong)bVar37 * -8 + 4);
          }
          for (; (uVar30 < uVar41 && (uVar5 < 5)); uVar5 = uVar5 + 1) {
            if ((uVar25 != 0) && (uVar36 != 0)) goto LAB_00106b37;
            iVar9 = _Llzma_filters_update_1(uVar30,uVar41,1,0);
            if (iVar9 == 0) break;
            if ((local_9c8 & 0x1040) != 0) {
              if ((local_9c8 & 0x40) == 0) {
                uVar32 = local_9c8._1_1_ & 0xffffff10;
                if (((local_9c8 & 0x1000) != 0) &&
                   (uVar32 = (uint)local_9b8, (local_9c8 & 0x20) != 0)) {
                  uVar32 = (uint)local_9bd << 3;
                  bVar8 = local_9b8;
                  goto LAB_001068df;
                }
              }
              else {
                uVar32 = (uint)local_9bc._2_1_;
                if ((local_9c8 & 0x20) != 0) {
                  uVar32 = (uint)local_9bd * 2;
                  bVar8 = local_9bc._2_1_;
LAB_001068df:
                  uVar32 = (uint)bVar8 | uVar32 & 8;
                }
              }
            }
            uVar30 = uVar36;
            if ((bVar33 == (byte)uVar32) && ((local_9c8 & 0x100) != 0)) {
              uVar22 = local_9a8;
              if ((local_9bc & 0xff00ff00) == 0x5000000) {
                uVar22 = local_9a8 + local_9d8 + CONCAT44(uStack_9cc,local_9d0);
              }
              local_a90 = 0;
              uVar19 = _Lmicrolzma_decode_0(local_918,&local_a90,0);
              if ((((uVar19 == 0) || (local_a90 + uVar19 <= uVar22)) || (uVar22 < uVar19)) ||
                 (((uVar22 == uVar36 && (uVar22 == uVar25)) || (uVar30 = uVar22, uVar25 != 0))))
              goto LAB_00106992;
            }
            else {
LAB_00106992:
              uVar22 = uVar25;
              uVar36 = uVar30;
            }
            uVar30 = CONCAT44(uStack_9cc,local_9d0) + local_9d8;
            uVar25 = uVar22;
          }
          if ((uVar25 == 0) || (uVar36 == 0)) {
LAB_00106aac:
            uVar36 = 0;
            local_b20 = 0;
            uVar30 = uVar20;
          }
          else {
LAB_00106b37:
            iVar9 = FUN_00102af0(uVar25,uVar36,lVar21,lVar21 + uVar24);
            local_b20 = uVar25;
            uVar30 = uVar20;
            if (iVar9 != 0) {
              puVar35[7] = uVar25;
              puVar35[8] = uVar36;
              *(undefined4 *)((long)puVar35 + 4) = 1;
              local_9d8 = CONCAT44(local_9d8._4_4_,0x708);
              lVar21 = _Llzip_decode_0(local_918,&local_9d8,0);
              puVar35[2] = lVar21;
              if (lVar21 != 0) {
                local_9d8 = CONCAT44(local_9d8._4_4_,0x790);
                lVar21 = _Llzip_decode_0(local_918,&local_9d8,0);
                puVar35[3] = lVar21;
                if (lVar21 != 0) {
                  local_9d8 = CONCAT44(local_9d8._4_4_,0x4f0);
                  lVar21 = _Llzip_decode_0(local_918,&local_9d8,0);
                  puVar35[4] = lVar21;
                  if (lVar21 != 0) {
                    local_9d8 = CONCAT44(local_9d8._4_4_,0x1d8);
                    lVar21 = _Llzip_decode_0(local_918,&local_9d8,0);
                    puVar35[5] = lVar21;
                    if (lVar21 != 0) {
                      local_9d8 = CONCAT44(local_9d8._4_4_,0xb10);
                      lVar21 = _Llzip_decode_0(local_918,&local_9d8,0);
                      puVar35[6] = lVar21;
                      if (lVar21 != 0) break;
                    }
                  }
                }
              }
              *(undefined4 *)puVar35 = 1;
              break;
            }
          }
        }
        else if ((((local_a08 == 0x147) && (local_a14 >> 8 == 0x50000)) &&
                 ((local_a20 & 0x800) != 0)) && (local_9f0 == 0)) {
          uVar25 = 0;
          if ((local_a20 & 0x100) != 0) {
            uVar25 = local_a00 + local_a30 + local_a28;
          }
          local_9d8 = 0;
          uVar20 = _Lmicrolzma_decode_0(local_918,&local_9d8,0);
          if (((uVar20 != 0) && (uVar25 < local_9d8 + uVar20)) && (uVar20 <= uVar25)) {
            puVar31 = &local_9d8;
            for (lVar15 = 0x16; uVar20 = uVar30, lVar15 != 0; lVar15 = lVar15 + -1) {
              *(undefined4 *)puVar31 = 0;
              puVar31 = (undefined8 *)((long)puVar31 + (ulong)bVar37 * -8 + 4);
            }
            do {
              iVar9 = _Llzma_properties_size_0(uVar30,uVar41,&local_9d8);
              if (iVar9 == 0) break;
              if ((local_998 == 0) && ((local_9c8 & 0x100) != 0)) {
                uVar36 = local_9a8;
                if ((local_9bc & 0xff00ff00) == 0x5000000) {
                  uVar36 = local_9a8 + local_9d8 + CONCAT44(uStack_9cc,local_9d0);
                }
                local_a90 = 0;
                uVar30 = _Lmicrolzma_decode_0(local_918,&local_a90,0);
                if ((((uVar30 != 0) && (uVar36 < local_a90 + uVar30)) && (uVar30 <= uVar36)) &&
                   (uVar25 != uVar36)) goto LAB_00106b37;
              }
              uVar30 = CONCAT44(uStack_9cc,local_9d0) + local_9d8;
            } while (uVar30 < uVar41);
            goto LAB_00106aac;
          }
        }
LAB_00106730:
        uVar30 = uVar30 + local_a28;
      } while( true );
    }
  }
LAB_00106beb:
  *(long **)(lVar11 + 0x10) = local_930;
  if (lVar34 != 0) {
    lVar21 = *(long *)(lVar34 + 8);
    lVar34 = *local_930;
    local_b10[0xf0] = local_b10[0xf0] + 1;
    *(long *)(local_b10 + 0xd4) = lVar21 + lVar34;
  }
  if (lVar14 != 0) {
    lVar21 = *(long *)(lVar14 + 8);
    lVar14 = *local_930;
    local_b10[0xf0] = local_b10[0xf0] + 1;
    *(long *)(local_b10 + 0xd6) = lVar21 + lVar14;
  }
  iVar9 = FUN_00102870(puVar1);
  if (((((((iVar9 != 0) &&
          (lzma_free(*(undefined8 *)(local_b10 + 0xc6),lVar11), local_b10[0x12a] == 0xc)) &&
         (iVar9 = _Llzma2_decoder_end_1(1,0x145,0x7f,0x18), iVar9 != 0)) &&
        ((iVar9 = _Llzma2_decoder_end_1
                            (*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40),0x12a,4,0x12),
         iVar9 != 0 &&
         (iVar9 = _Llzma_check_init_part_0
                            (0x12e,0x13,4,0x20,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48)),
         iVar9 != 0)))) &&
       (iVar9 = _Llzma2_decoder_end_1(*(undefined8 *)(*(long *)(param_1 + 8) + 8),0x132,6,0x14),
       iVar9 != 0)) &&
      ((iVar9 = _Llzma_check_init_part_0
                          (0x138,0x15,2,0x10,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50)),
       iVar9 != 0 &&
       (iVar9 = _Llzma_check_init_part_0
                          (0xee,0x10,0x26,0x20,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70)),
       iVar9 != 0)))) &&
     ((iVar9 = _Llzma_check_init_part_0
                         (0x140,0x17,5,0x20,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78)),
      iVar9 != 0 &&
      (((iVar9 = _Llzma_check_init_part_0(0x13a,0x16,6,0x20,**(undefined8 **)(param_1 + 8)),
        iVar9 != 0 &&
        (iVar9 = _Llzma_check_init_part_0(0x114,0x11,0x16,0x10,*(undefined8 *)(lVar13 + 0x30)),
        iVar9 != 0)) && (local_b10[0xa6] == 0x1c8)))))) {
    **(undefined8 **)(local_b10 + 0x3e) = local_b10;
    puVar23 = (undefined4 *)(local_980[0] + local_ac8 + 8);
    uVar4 = *puVar23;
    *(undefined4 **)(local_b10 + 0x14) = puVar23;
    local_b10[0x16] = uVar4;
    *puVar23 = 2;
    **(byte **)(local_b10 + 0x18) = **(byte **)(local_b10 + 0x18) | *(byte *)(local_b10 + 0x1a);
    puVar23 = (undefined4 *)(local_ac8 + 8 + local_968);
    uVar4 = *puVar23;
    *(undefined4 **)(local_b10 + 0x10) = puVar23;
    local_b10[0x12] = uVar4;
    *puVar23 = 1;
    puVar23 = local_b10 + 0x20;
    for (lVar21 = 0x1e; lVar21 != 0; lVar21 = lVar21 + -1) {
      *puVar23 = 0;
      puVar23 = puVar23 + (ulong)bVar37 * -2 + 1;
    }
    *(undefined8 *)(local_b10 + 0x28) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40);
    **(undefined8 **)(local_b10 + 0x1c) = local_b10 + 0x20;
    **(undefined4 **)(local_b10 + 0x1e) = 1;
    lVar11 = 0;
    lVar21 = local_30;
    while (lVar21 != 0) {
      *(undefined *)(local_30 + lVar11) = local_48[lVar11];
      lVar21 = lVar11 + -0x17;
      lVar11 = lVar11 + 1;
    }
    uVar27 = 1;
    plVar12 = local_980;
    for (lVar21 = 0x256; lVar21 != 0; lVar21 = lVar21 + -1) {
      *(undefined4 *)plVar12 = 0;
      plVar12 = (long *)((long)plVar12 + (ulong)bVar37 * -8 + 4);
    }
    puVar35 = *(undefined8 **)(param_1 + 0x80);
    goto LAB_00105a80;
  }
LAB_00105a42:
  puVar26 = local_48;
  FUN_00102750(local_b10);
  lVar11 = 0;
  lVar21 = local_30;
  while (lVar21 != 0) {
    *(undefined *)(local_30 + lVar11) = puVar26[lVar11];
    lVar21 = lVar11 + -0x17;
    lVar11 = lVar11 + 1;
  }
  uVar27 = 0;
  plVar12 = local_980;
  for (lVar21 = 0x256; lVar21 != 0; lVar21 = lVar21 + -1) {
    *(undefined4 *)plVar12 = 0;
    plVar12 = (long *)((long)plVar12 + (ulong)bVar37 * -8 + 4);
  }
  puVar35 = *(undefined8 **)(param_1 + 0x80);
LAB_00105a80:
  _Llzma_block_param_decoder_0(puVar35,uVar27);
  *puVar35 = 1;
  puVar35[1] = 0;
  puVar35[2] = 0;
  puVar35[3] = 0;
  puVar35[4] = 0;
  piVar3 = (int *)cpuid_basic_info(0);
  uVar5 = piVar3[2];
  if (*piVar3 != 0) {
    puVar23 = (undefined4 *)cpuid_Version_info(1);
    uVar4 = puVar23[1];
    uVar5 = puVar23[2];
    uVar6 = puVar23[3];
    *(undefined4 *)(puVar35 + 1) = *puVar23;
    *(undefined4 *)(puVar35 + 2) = uVar4;
    *(undefined4 *)(puVar35 + 3) = uVar6;
    *(uint *)(puVar35 + 4) = uVar5;
  }
  return ZEXT416(uVar5) << 0x40;
}



// WARNING: Removing unreachable block (ram,0x00107004)
// WARNING: Removing unreachable block (ram,0x00106ff9)

undefined8 _Llzma_delta_props_encoder(undefined8 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  code **ppcVar7;
  undefined4 *puVar8;
  undefined auVar9 [16];
  code *local_140;
  code *local_138;
  undefined8 *local_130;
  undefined4 local_128 [12];
  code **local_f8;
  undefined4 local_a0 [2];
  code **local_98;
  undefined8 local_90;
  undefined local_88 [104];
  undefined8 *local_20;
  
  puVar8 = local_128;
  for (lVar6 = 0x22; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = local_a0;
  for (lVar6 = 0x22; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_140 = _Llzma_code_part_1;
  local_138 = _Llzma_index_memusage_part_0;
  local_130 = &_Llzma12_coder_1;
  lzma_check_init(local_88,0);
  ppcVar7 = &local_140;
  auVar9 = _Llzma_delta_decoder_init_part_0(local_128);
  do {
    local_90 = auVar9._8_8_;
    if (auVar9._0_4_ == 0) {
      local_98 = ppcVar7;
      local_20 = param_1;
      uVar5 = _Lmicrolzma_encoder_init_1(local_a0);
      return uVar5;
    }
    local_f8 = ppcVar7;
    auVar9 = _Llzma_delta_decoder_init_part_0(local_90);
  } while (auVar9._0_4_ != 5);
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  piVar1 = (int *)cpuid_basic_info(0);
  if (*piVar1 != 0) {
    puVar8 = (undefined4 *)cpuid_Version_info(1);
    uVar2 = puVar8[1];
    uVar3 = puVar8[2];
    uVar4 = puVar8[3];
    *(undefined4 *)(param_1 + 1) = *puVar8;
    *(undefined4 *)(param_1 + 2) = uVar2;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  return 0;
}



long strlen(char *param_1)

{
  long lVar1;
  
  if (*param_1 != '\0') {
    lVar1 = 0;
    do {
      lVar1 = lVar1 + 1;
    } while (param_1[lVar1] != '\0');
    return lVar1;
  }
  return 0;
}



long strnlen(char *z,long maxlen)

{
  long lVar1;
  
  lVar1 = 0;
  if (maxlen == 0) {
    return maxlen;
  }
  do {
    if (z[lVar1] == '\0') {
      return lVar1;
    }
    lVar1 = lVar1 + 1;
  } while (maxlen != lVar1);
  return maxlen;
}



long FUN_001070a0(int param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  if ((((param_1 < 0) || (param_4 == 0)) || (*(long *)(param_4 + 0x48) == 0)) ||
     (lVar3 = param_3, *(long *)(param_4 + 0x50) == 0)) {
LAB_001070be:
    param_3 = -1;
  }
  else {
    do {
      while( true ) {
        lVar1 = (**(code **)(param_4 + 0x48))(param_1,param_2,lVar3);
        if (-1 < lVar1) break;
        piVar2 = (int *)(**(code **)(param_4 + 0x50))();
        if (*piVar2 != 4) goto LAB_001070be;
      }
      if (lVar1 == 0) goto LAB_001070be;
      param_2 = param_2 + lVar1;
      lVar3 = lVar3 - lVar1;
    } while (lVar3 != 0);
  }
  return param_3;
}



long FUN_00107110(undefined4 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  if (((((byte)(param_4 == 0 | (byte)((uint)param_1 >> 0x1f)) == 0) && (param_2 != 0)) &&
      (*(long *)(param_4 + 0x38) != 0)) && (lVar3 = param_3, *(long *)(param_4 + 0x50) != 0)) {
    do {
      while( true ) {
        lVar1 = (**(code **)(param_4 + 0x38))(param_1,param_2,lVar3);
        if (-1 < lVar1) break;
        piVar2 = (int *)(**(code **)(param_4 + 0x50))();
        if (*piVar2 != 4) goto LAB_0010713f;
      }
      if (lVar1 == 0) goto LAB_0010713f;
      param_2 = param_2 + lVar1;
      lVar3 = lVar3 - lVar1;
    } while (lVar3 != 0);
  }
  else {
LAB_0010713f:
    param_3 = -1;
  }
  return param_3;
}



undefined8 FUN_00107190(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (param_2 <= (uint)lVar1) {
      return 0;
    }
    lVar1 = lVar1 + 1;
  } while (*(long *)(param_1 + -8 + lVar1 * 8) != 0);
  return 1;
}



undefined4
FUN_001071b0(long param_1,uint param_2,undefined8 param_3,long param_4,long param_5,long param_6)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint local_3c [3];
  
  local_3c[0] = 0;
  if (((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) && ((param_5 != 0 && (param_6 != 0))))
     && ((lVar3 = param_6, iVar2 = FUN_00107190(param_6 + 0xa0,6), iVar2 == 0 &&
         (lVar3 = (**(code **)(lVar3 + 0xa0))(), lVar3 != 0)))) {
    pcVar1 = *(code **)(param_6 + 0xa8);
    uVar4 = (**(code **)(param_6 + 200))();
    iVar2 = (*pcVar1)(lVar3,uVar4,0,param_3,param_4);
    if (iVar2 == 1) {
      iVar2 = (**(code **)(param_6 + 0xb0))(lVar3,param_5,local_3c,param_1,param_2);
      if (((iVar2 == 1) && (-1 < (int)local_3c[0])) &&
         ((iVar2 = (**(code **)(param_6 + 0xb8))(lVar3,param_5 + (int)local_3c[0],local_3c),
          iVar2 == 1 && ((-1 < (int)local_3c[0] && (local_3c[0] <= param_2)))))) {
        (**(code **)(param_6 + 0xc0))(lVar3);
        return 1;
      }
    }
    if (*(code **)(param_6 + 0xc0) != (code *)0x0) {
      (**(code **)(param_6 + 0xc0))(lVar3);
    }
  }
  return 0;
}



bool FUN_001072d0(long param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_4 < 0x20)) || (param_5 == 0)) {
    bVar4 = false;
  }
  else {
    pcVar1 = *(code **)(param_5 + 0xf0);
    bVar4 = false;
    if ((pcVar1 != (code *)0x0) && (*(code **)(param_5 + 0x58) != (code *)0x0)) {
      uVar3 = (**(code **)(param_5 + 0x58))();
      iVar2 = (*pcVar1)(param_1,param_2,param_3,0,uVar3,0);
      bVar4 = iVar2 == 1;
    }
  }
  return bVar4;
}



undefined8 FUN_00107340(uint *param_1,ulong param_2,long *param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  ulong n;
  
  if (((param_5 != 0 && 5 < param_2) && (param_4 != 0)) && (*(long *)(param_5 + 0x100) != 0)) {
    *param_3 = 0;
    if (((*(code **)(param_5 + 0x68) != (code *)0x0) &&
        (uVar1 = (**(code **)(param_5 + 0x68))(param_4), uVar1 < 0x4001)) &&
       ((uVar1 = uVar1 + 7 >> 3, uVar1 != 0 && (n = (ulong)uVar1, n <= param_2 - 6)))) {
      *(undefined *)(param_1 + 1) = 0;
      iVar2 = (**(code **)(param_5 + 0x100))(param_4,(long)param_1 + 5);
      if ((long)iVar2 == n) {
        if (*(char *)((long)param_1 + 5) < '\0') {
          n = n + 1;
          uVar1 = uVar1 + 1;
        }
        else {
          memmove((byte *)(param_1 + 1),(long)param_1 + 5,n);
        }
        *param_1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        *param_3 = n + 4;
        return 1;
      }
    }
  }
  return 0;
}



void FUN_00107420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 long param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined local_d1;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined local_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_d1 = 0;
  local_c8 = &stack0x00000008;
  local_d0 = 0x18;
  local_c0 = local_b8;
  local_cc = 0x30;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  (**(code **)(param_9 + 0x58))(&local_d1,&local_d1,0,0,param_10,0,param_11,&local_d0);
  return;
}



undefined  [16] FUN_001074d0(long param_1,ulong *param_2,ulong param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined auVar6 [16];
  
  if (((param_1 == 0) || (param_3 == 0)) || (*(code **)(param_3 + 8) == (code *)0x0)) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    return auVar1 << 0x40;
  }
  uVar2 = (**(code **)(param_3 + 8))();
  if (uVar2 - 8 < 0x80) {
    uVar4 = 0;
    do {
      uVar5 = uVar4;
      if (*(long *)(param_1 + uVar4 * 8) == 0) break;
      uVar4 = (ulong)((int)uVar4 + 1);
      uVar5 = uVar2 >> 3;
    } while (uVar4 < uVar2 >> 3);
    *param_2 = uVar5;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



undefined8 FUN_00107530(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  ulong local_1060;
  long local_1058;
  long local_1050;
  undefined local_1042 [16];
  undefined local_1032 [4098];
  
  puVar5 = local_1032;
  for (lVar4 = 0xffa; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_1042 = ZEXT816(0);
  local_1060 = 0;
  if (((param_4 != 0) && (param_1 != 0)) && (*(code **)(param_4 + 0x60) != (code *)0x0)) {
    local_1058 = 0;
    local_1050 = 0;
    (**(code **)(param_4 + 0x60))(param_1,&local_1050,&local_1058,0);
    if ((local_1058 != 0) && (local_1050 != 0)) {
      iVar2 = FUN_00107340(local_1042,0x100a,&local_1060,local_1058,param_4);
      uVar1 = local_1060;
      if (((iVar2 != 0) &&
          ((local_1060 < 0x100a &&
           (iVar2 = FUN_00107340(local_1042 + local_1060,0x100a - local_1060,&local_1060,local_1050,
                                 param_4), iVar2 != 0)))) && (uVar1 + local_1060 < 0x100b)) {
        uVar3 = FUN_001072d0(local_1042,uVar1 + local_1060,param_2,param_3,param_4);
        return uVar3;
      }
    }
  }
  return 0;
}



undefined8
FUN_00107650(int *param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5,long param_6,
            long param_7)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined local_c1 [16];
  undefined4 local_b1 [32];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (0xffffffffffffffde < param_3) {
    return 0;
  }
  uVar1 = param_3 + 0x20;
  if (param_7 == 0) {
    return 0;
  }
  if (param_4 < uVar1) {
    return 0;
  }
  lVar2 = *(long *)(param_7 + 8);
  if (lVar2 == 0) {
    return 0;
  }
  iVar3 = *param_1;
  if (iVar3 == 2) {
    lVar9 = *(long *)(param_1 + 8);
    local_c1 = ZEXT816(0);
    puVar11 = local_b1;
    for (lVar10 = 0x79; lVar10 != 0; lVar10 = lVar10 + -1) {
      *(bool *)puVar11 = param_4 < uVar1;
      puVar11 = (undefined4 *)((long)puVar11 + 1);
    }
    if (lVar9 == 0) {
      return 0;
    }
    if (*(code **)(lVar2 + 0x48) == (code *)0x0) {
      return 0;
    }
    if (*(long *)(lVar2 + 0x50) == 0) {
      return 0;
    }
    if (*(long *)(lVar2 + 0x40) == 0) {
      return 0;
    }
    uVar5 = (**(code **)(lVar2 + 0x48))(lVar9);
    uVar6 = (**(code **)(lVar2 + 0x50))(lVar9);
    uVar7 = (**(code **)(lVar2 + 0x40))(uVar6,uVar5,4,0,0,0);
    if (0x85 < uVar7) {
      return 0;
    }
    uVar4 = (uint)uVar7;
    local_c1._0_4_ = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18
    ;
    uVar8 = (**(code **)(lVar2 + 0x40))(uVar6,uVar5,4,local_c1 + 4,uVar7,0);
    if (uVar7 != uVar8) {
      return 0;
    }
    lVar9 = uVar7 + 4;
  }
  else {
    if (iVar3 < 3) {
      if (iVar3 == 0) {
        iVar3 = FUN_00107530(*(undefined8 *)(param_1 + 2),param_2 + param_3,param_4 - param_3,lVar2)
        ;
      }
      else {
        if (iVar3 != 1) {
          return 0;
        }
        iVar3 = FUN_00103b60(*(undefined8 *)(param_1 + 4),param_2 + param_3,param_4 - param_3,
                             param_7);
      }
      goto LAB_00107718;
    }
    if (iVar3 != 3) {
      return 0;
    }
    lVar9 = *(long *)(param_1 + 0xc);
    puVar11 = local_b1;
    for (lVar10 = 5; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    if (lVar9 == 0) {
      return 0;
    }
    local_c1._4_12_ = SUB1612(ZEXT816(0),4);
    local_c1._0_4_ = 0x20000000;
    lVar10 = 0;
    do {
      local_c1[lVar10 + 4] = *(undefined *)(lVar9 + lVar10);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x20);
    lVar9 = 0x24;
  }
  iVar3 = FUN_001072d0(local_c1,lVar9,param_2 + param_3,param_4 - param_3,lVar2);
LAB_00107718:
  if ((((iVar3 != 0) && (lVar2 = *(long *)(param_7 + 8), lVar2 != 0)) &&
      (iVar3 = FUN_00107190(lVar2 + 0x70,6), iVar3 == 0)) &&
     ((param_6 != 0 && (lVar9 = (**(code **)(lVar2 + 0x70))(0x440,0,param_6,0x39), lVar9 != 0)))) {
    lVar10 = (**(code **)(lVar2 + 0x78))();
    if (lVar10 != 0) {
      iVar3 = (**(code **)(lVar2 + 0x80))(lVar10,0,0,0,lVar9);
      if ((iVar3 == 1) &&
         (iVar3 = (**(code **)(lVar2 + 0x88))(lVar10,param_5,0x72,param_2,uVar1), iVar3 == 1)) {
        (**(code **)(lVar2 + 0x90))(lVar10);
        (**(code **)(lVar2 + 0x98))(lVar9);
        return 1;
      }
      (**(code **)(lVar2 + 0x90))(lVar10);
    }
    (**(code **)(lVar2 + 0x98))(lVar9);
  }
  return 0;
}



undefined8 _Llength_encoder_reset_0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1[3] - 0x20U < 0x21) {
    lVar1 = 0;
    while (-1 < *(char *)(*param_1 + lVar1)) {
      lVar1 = lVar1 + 1;
      if (param_1[3] == lVar1) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



undefined  [16]
_Lstream_decoder_mt_get_progress_0
          (undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 param_5)

{
  undefined auVar1 [16];
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  
  if (param_2 == 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    return auVar1 << 0x40;
  }
  if (((param_1 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) &&
     (param_4 != (undefined8 *)0x0)) {
    if ((char)(*(byte *)(param_2 + 0x57) & *(byte *)(param_2 + 0x56)) < '\0') {
      uVar3 = 0;
      uVar4 = 0;
      lVar5 = 0x48;
    }
    else {
      uVar3 = (ulong)((int)(char)*(byte *)(param_2 + 0x57) << 3);
      uVar4 = (ulong)((int)(char)*(byte *)(param_2 + 0x56) << 3);
      lVar5 = uVar3 + 8;
      if (uVar3 < uVar4) {
        lVar5 = uVar4 + 8;
      }
    }
    iVar2 = _Lhc_find_func_1(param_1,lVar5,param_2);
    if (iVar2 != 0) {
      if (*(char *)(param_2 + 0x56) < '\0') {
        uVar7 = *param_1;
      }
      else {
        uVar7 = *(undefined8 *)(uVar4 + (long)param_1);
      }
      *param_3 = uVar7;
      if (*(char *)(param_2 + 0x57) < '\0') {
        uVar6 = param_1[3];
      }
      else {
        uVar6 = *(undefined8 *)((long)param_1 + uVar3);
      }
      *param_4 = uVar6;
      iVar2 = _Lhc_find_func_1(uVar7,uVar6,param_2);
      uVar3 = (ulong)(iVar2 != 0);
      goto LAB_00107a27;
    }
  }
  uVar3 = 0;
LAB_00107a27:
  auVar8._8_8_ = param_5;
  auVar8._0_8_ = uVar3;
  return auVar8;
}



undefined  [16] _Lthreads_stop_0(long *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined auVar2 [16];
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  undefined auVar10 [16];
  
  if (param_1 == (long *)0x0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    return auVar2 << 0x40;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x48) != 0)) {
    iVar3 = _Lhc_find_func_1(*(long *)(param_2 + 0x48),8,param_2);
    if (iVar3 != 0) {
      lVar8 = **(long **)(param_2 + 0x48);
      iVar3 = _Lhc_find_func_1(lVar8,0x20,param_2);
      if (iVar3 != 0) {
        plVar6 = *(long **)(lVar8 + 0x10);
        if (-1 < *(char *)(param_2 + 0x55)) {
          plVar6 = *(long **)(lVar8 + ((int)*(char *)(param_2 + 0x55) << 2));
        }
        lVar8 = 0x48;
        if (-1 < (char)(*(byte *)(param_2 + 0x56) & *(byte *)(param_2 + 0x57))) {
          uVar5 = (ulong)((int)(char)*(byte *)(param_2 + 0x57) << 3);
          uVar4 = (ulong)((int)(char)*(byte *)(param_2 + 0x56) << 3);
          lVar8 = uVar5 + 8;
          if (uVar5 < uVar4) {
            lVar8 = uVar4 + 8;
          }
        }
        iVar3 = _Lhc_find_func_1(plVar6,8,param_2);
        if (iVar3 != 0) {
          iVar3 = _Lhc_find_func_1(*plVar6,0x400,param_2);
          if (iVar3 != 0) {
            puVar7 = (undefined8 *)*plVar6;
            if (*(char *)(param_2 + 0x54) < '\0') {
              uVar9 = 0;
              puVar1 = puVar7 + 0x80;
              for (; puVar7 < puVar1; puVar7 = puVar7 + 1) {
                iVar3 = _Lhc_find_func_1(puVar7,lVar8,param_2);
                if (iVar3 != 0) {
                  iVar3 = _Lstream_decoder_mt_get_progress_0(*puVar7,param_2,param_1,param_1 + 3);
                  if (iVar3 != 0) {
                    if (uVar9 < 2) {
                      iVar3 = _Lsimple_coder_update_0(*param_1,*param_1 + 7);
                      if ((iVar3 == 0x990) || (iVar3 == 0xd08)) {
                        uVar9 = uVar9 + 1;
                      }
                    }
                    else {
                      iVar3 = _Llength_encoder_reset_0(param_1);
                      if (iVar3 != 0) {
                        uVar4 = 1;
                        goto LAB_00107bc8;
                      }
                    }
                  }
                }
              }
            }
            else {
              iVar3 = _Lstream_decoder_mt_get_progress_0
                                (*(undefined8 *)
                                  ((long)((int)*(char *)(param_2 + 0x54) << 3) + (long)puVar7),
                                 param_2,param_1,param_1 + 3);
              if (iVar3 != 0) {
                iVar3 = _Llength_encoder_reset_0(param_1);
                uVar4 = (ulong)(iVar3 != 0);
                goto LAB_00107bc8;
              }
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_00107bc8:
  auVar10._8_8_ = param_4;
  auVar10._0_8_ = uVar4;
  return auVar10;
}



undefined8 _Lindex_decode_1(int *param_1,int param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_3c [3];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_3 != 0) {
    iVar4 = -1;
    iVar3 = 0;
    do {
      local_3c[0] = 0;
      if ((*(code **)(param_3 + 0x60) != (code *)0x0) && (*(long *)(param_3 + 0x50) != 0)) {
        iVar1 = (**(code **)(param_3 + 0x60))(iVar3,0x7fffffff);
        if (iVar1 < 0) {
          piVar2 = (int *)(**(code **)(param_3 + 0x50))();
LAB_00107c41:
          if ((*piVar2 != 0x16) && (*piVar2 != 0x6b)) goto LAB_00107c60;
        }
        else {
          piVar2 = local_3c;
          if (iVar1 != 0) goto LAB_00107c41;
        }
        iVar4 = iVar4 + 1;
        if (iVar4 == param_2) {
          *param_1 = iVar3;
          return 1;
        }
      }
LAB_00107c60:
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x40);
  }
  return 0;
}



undefined8 _Lindex_encode_1(long param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  undefined local_39 [9];
  
  if (((param_1 == 0) || (lVar5 = *(long *)(param_1 + 0x10), lVar5 == 0)) || (param_2 == (int *)0x0)
     ) {
    return 0;
  }
  if (*(int ***)(param_1 + 0x48) != (int **)0x0) {
    piVar4 = **(int ***)(param_1 + 0x48);
    iVar1 = _Lhc_find_func_1(piVar4,4,param_1);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = *piVar4;
      }
      else {
        if (param_4 != 1) {
          return 0;
        }
        iVar1 = piVar4[1];
      }
      local_39[0] = 0;
      lVar5 = *(long *)(param_1 + 0x10);
      if (((-1 < iVar1) && (lVar5 != 0)) &&
         ((*(long *)(lVar5 + 0x48) != 0 && (*(long *)(lVar5 + 0x50) != 0)))) {
        do {
          iVar2 = (**(code **)(lVar5 + 0x48))(iVar1,local_39,0);
          piVar4 = (int *)(**(code **)(lVar5 + 0x50))();
          if (-1 < iVar2) goto LAB_00107d54;
        } while (*piVar4 == 4);
        if (*piVar4 != 9) {
LAB_00107d54:
          *param_2 = iVar1;
          return 1;
        }
      }
    }
    lVar5 = *(long *)(param_1 + 0x10);
  }
  uVar3 = _Lindex_decode_1(param_2,param_3,lVar5);
  return uVar3;
}



undefined8
_Llzma_block_unpadded_size_1(int param_1,int param_2,int param_3,int param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  uint *puVar5;
  
  if ((((param_5 == 0) || (lVar2 = *(long *)(param_5 + 0x20), lVar2 == 0)) ||
      (lVar3 = *(long *)(lVar2 + 0x10), lVar3 == 0)) || (*(int *)(lVar2 + 4) == 0)) {
    return 0;
  }
  if (param_1 == 0) {
    piVar4 = *(int **)(lVar2 + 200);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    iVar1 = *piVar4;
    if (iVar1 < 3) {
      if (iVar1 < 0) {
        return 0;
      }
      *piVar4 = 3;
    }
    else if (iVar1 != 3) {
      return 0;
    }
  }
  if (param_2 != 0) {
    puVar5 = *(uint **)(lVar2 + 0xc0);
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    if (1 < *puVar5) {
      return 0;
    }
    *puVar5 = 0;
  }
  if (param_3 == 0) {
    param_4 = *(int *)(*(long **)(lVar2 + 0x38) + -1) + 1;
  }
  *(int *)(lVar2 + 0x40) = param_4;
  **(long **)(lVar2 + 0x38) = lVar3;
  return 1;
}



undefined8 _Llzma_rc_prices_1(byte *param_1,long param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  byte bVar7;
  
  puVar2 = *(undefined4 **)(param_2 + 0x30);
  if (((((param_1 == (byte *)0x0) || (puVar2 == (undefined4 *)0x0)) ||
       (puVar6 = *(ulong **)(puVar2 + 0xe), puVar6 == (ulong *)0x0)) ||
      ((puVar3 = *(ulong **)(puVar2 + 0x10), puVar3 == (ulong *)0x0 ||
       (*(ulong *)(puVar2 + 0x18) == 0)))) || (puVar2[1] == 0)) {
    return 0;
  }
  bVar1 = *param_1;
  bVar7 = bVar1 & 8;
  if ((bVar7 == 0) || (*(int *)(param_2 + 0x90) == 0)) {
    uVar4 = *puVar3;
    puVar5 = puVar3;
    if ((uVar4 != 0) &&
       ((*(ulong *)(param_2 + 0x58) <= uVar4 && (uVar4 < *(ulong *)(param_2 + 0x60))))) {
      *(ulong **)(puVar2 + 0xe) = puVar3;
      *(ulong **)(puVar2 + 0x10) = puVar6;
      puVar5 = puVar6;
      puVar6 = puVar3;
    }
    uVar4 = *puVar5;
    *(ulong *)(puVar2 + 0x12) = *puVar6;
    *(ulong *)(puVar2 + 0x14) = uVar4;
    if (bVar7 == 0) {
      *puVar2 = 1;
    }
    else if ((bVar1 & 0x10) != 0) {
      if (*(long *)(puVar2 + 4) == 0) {
        return 0;
      }
      if (*(long *)(puVar2 + 6) == 0) {
        return 0;
      }
      if (*(long *)(puVar2 + 8) == 0) {
        return 0;
      }
    }
    *puVar6 = *(ulong *)(puVar2 + 0x18);
  }
  return 1;
}



undefined8 _Lstream_encoder_mt_init_part_0(long param_1)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x104);
  if (iVar1 < 3) {
    if (0 < iVar1) {
      if (((*(ushort **)(param_1 + 0xf8) != (ushort *)0x0) && (0xad < *(ulong *)(param_1 + 0xe8)))
         && (uVar2 = (ulong)**(ushort **)(param_1 + 0xf8), *(ulong *)(param_1 + 0xe8) <= uVar2)) {
        if (uVar2 <= uVar2 + 0x60) {
          uVar2 = uVar2 + 0x60;
        }
        if (uVar2 <= *(ulong *)(param_1 + 0xe0)) {
          return 1;
        }
      }
      goto LAB_00107f31;
    }
    if (iVar1 != 0) goto LAB_00107f31;
    bVar3 = *(ulong *)(param_1 + 0xe8) < 0xae;
    bVar4 = *(ulong *)(param_1 + 0xe8) == 0xae;
  }
  else {
    bVar3 = iVar1 == 3;
    bVar4 = iVar1 == 4;
  }
  if (bVar3 || bVar4) {
    return 1;
  }
LAB_00107f31:
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  return 0;
}



undefined8 _Lworker_start_0(uint **param_1,ulong param_2,ulong *param_3,long param_4)

{
  uint *puVar1;
  char cVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  char *z;
  uint *puVar7;
  ulong maxlen;
  
  if ((param_1 == (uint **)0x0) || (param_2 < 7)) {
    return 0;
  }
  if ((param_3 != (ulong *)0x0) && (param_4 != 0)) {
    if (*(long *)(param_4 + 0x38) == 0) {
      return 0;
    }
    if (*(long *)(param_4 + 0x40) == 0) {
      return 0;
    }
    puVar7 = *param_1;
    if (CARRY8((ulong)puVar7,param_2)) {
      return 0;
    }
    uVar3 = 0;
    do {
      z = (char *)((long)puVar7 + uVar3);
      lVar6 = 0;
      maxlen = param_2 - uVar3;
      while( true ) {
        cVar2 = *(char *)(*(long *)(param_4 + 0x38) + lVar6);
        if ((z[lVar6] < cVar2) || (cVar2 < z[lVar6])) break;
        lVar6 = lVar6 + 1;
        if (lVar6 == 7) goto LAB_00107ff1;
      }
      lVar6 = 0;
      while( true ) {
        cVar2 = *(char *)(*(long *)(param_4 + 0x40) + lVar6);
        if ((z[lVar6] < cVar2) || (cVar2 < z[lVar6])) break;
        lVar6 = lVar6 + 1;
        if (lVar6 == 7) goto LAB_00107ff1;
      }
      uVar3 = uVar3 + 1;
    } while (param_2 - uVar3 != 6);
    z = (char *)0x0;
    maxlen = 6;
LAB_00107ff1:
    if ((7 < uVar3) && (z != (char *)0x0)) {
      uVar5 = *(uint *)(z + -8);
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      if (0x10000 < uVar5) {
        return 0;
      }
      puVar1 = (uint *)(z + ((ulong)uVar5 - 8));
      if ((uint *)((long)puVar7 + param_2) < puVar1) {
        return 0;
      }
      uVar3 = strnlen(z,maxlen);
      if (maxlen <= uVar3) {
        return 0;
      }
      puVar7 = (uint *)(z + uVar3);
      if (puVar1 <= puVar7) {
        return 0;
      }
      uVar5 = *puVar7;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      if (0x10000 < uVar5) {
        return 0;
      }
      puVar7 = (uint *)((long)puVar7 + (ulong)(uVar5 + 4));
      if (puVar1 <= puVar7) {
        return 0;
      }
      uVar5 = *puVar7;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      if (0x10000 < uVar5) {
        return 0;
      }
      puVar4 = puVar7 + 1;
      if ((uint *)((ulong)uVar5 + (long)puVar4) <= puVar1) {
        return 0;
      }
      if (*(char *)(puVar7 + 1) == '\0') {
        puVar4 = (uint *)((long)puVar7 + 5);
        uVar5 = uVar5 - 1;
      }
      *param_1 = puVar4;
      *param_3 = (ulong)uVar5;
      return 1;
    }
  }
  return 0;
}



undefined  [16]
_Lbt_skip_func_part_0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined auVar4 [16];
  long lVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  
  if (_Llzma12_coder_1 == 0) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_3;
    return auVar4 << 0x40;
  }
  lVar1 = *(long *)(_Llzma12_coder_1 + 0x10);
  if ((lVar1 != 0) && (lVar2 = *(long *)(_Llzma12_coder_1 + 0x20), lVar2 != 0)) {
    if (*(short *)(lVar2 + 0x84) != 0) {
      if (*(long *)(lVar2 + 0x88) != 0) {
        lVar5 = FUN_00107110();
        if (-1 < lVar5) {
          **(undefined8 **)(lVar2 + 0xa0) = *(undefined8 *)(lVar2 + 0xd8);
          uVar6 = 1;
          goto LAB_00108113;
        }
      }
    }
    pcVar3 = *(code **)(lVar1 + 0x18);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(0);
    }
  }
  uVar6 = 0;
LAB_00108113:
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = uVar6;
  return auVar7;
}



undefined8 _Llzma_code_part_1(long param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *puVar5;
  uint local_15;
  uint uStack_11;
  undefined uStack_d;
  undefined4 uStack_c;
  
  local_15 = 0;
  lVar1 = *(long *)(_Llzma12_coder_1 + 0x20);
  uStack_11 = 0;
  uStack_d = 0;
  uStack_c = 0;
  if (((byte)(param_3 == 0 | (byte)((uint)param_2 >> 0x1f)) == 0) && (param_1 != 0)) {
    uVar4 = (uint)*(ushort *)(lVar1 + 0x90);
    if ((*(ushort *)(lVar1 + 0x90) == 0) ||
       (puVar5 = *(uint **)(lVar1 + 0x98), puVar5 == (uint *)0x0)) {
      puVar5 = &local_15;
      uStack_d = 1;
      uStack_11 = *(uint *)(lVar1 + 0x40) & 0xff;
      local_15 = (-(uint)(*(int *)(lVar1 + 0xb8) == 0) & 0xfc000000) + 0x9000000;
      uVar4 = (local_15 >> 0x18) + 4;
    }
    FUN_00107110(param_2,puVar5,uVar4);
    **(undefined8 **)(lVar1 + 0xa0) = *(undefined8 *)(lVar1 + 0xd0);
    uVar3 = 1;
  }
  else {
    if ((*(long *)(_Llzma12_coder_1 + 0x10) != 0) &&
       (pcVar2 = *(code **)(*(long *)(_Llzma12_coder_1 + 0x10) + 0x18), pcVar2 != (code *)0x0)) {
      (*pcVar2)(0);
    }
    uVar3 = 0;
  }
  return uVar3;
}



bool _Lparse_lzma12_0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 auStack_b8 [8];
  undefined local_98 [16];
  undefined4 local_88 [8];
  undefined local_68 [80];
  
  if (param_1 == 0) {
    return false;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    puVar3 = auStack_b8;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    puVar3 = local_88;
    for (lVar2 = 0x1c; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    iVar1 = FUN_001071b0(auStack_b8,0x30,auStack_b8,local_98,local_88);
    if (iVar1 != 0) {
      iVar1 = FUN_001071b0(param_2 + 0x108,0x39,local_88,local_68,param_1,
                           *(undefined8 *)(param_2 + 8));
      return iVar1 != 0;
    }
  }
  return false;
}



undefined8 _Llzip_decoder_memconfig_part_0(uint *param_1,long param_2)

{
  char cVar1;
  char cVar2;
  long **pplVar3;
  code *pcVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined extraout_DL;
  uint uVar18;
  byte bVar19;
  undefined4 *puVar20;
  ulong uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  undefined *puVar26;
  ulong *puVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  byte bVar32;
  long **pplVar33;
  undefined local_e81;
  int local_e80;
  int local_e7c;
  ulong local_e78;
  long local_e70 [2];
  undefined local_e60 [16];
  undefined local_e50 [16];
  undefined local_e40 [16];
  undefined4 local_e30 [57];
  undefined local_d4a;
  undefined local_d41;
  undefined local_d40 [16];
  undefined4 local_d30 [60];
  undefined8 local_c40;
  undefined8 local_c38;
  undefined4 local_c30;
  undefined4 local_c2c;
  ulong local_c28 [33];
  undefined local_b20 [5];
  undefined auStack_b1b [11];
  undefined local_b10;
  uint uStack_b0f;
  undefined4 uStack_b0b;
  undefined4 uStack_b07;
  uint uStack_b03;
  undefined4 uStack_aff;
  undefined4 uStack_afb;
  undefined4 uStack_af7;
  undefined4 uStack_af3;
  undefined4 uStack_aef;
  undefined4 local_aeb;
  undefined4 local_ac7;
  undefined local_ac3;
  undefined local_ac1;
  undefined4 local_ac0;
  undefined4 local_abb [66];
  undefined4 local_9b3;
  uint local_98b;
  undefined4 local_987;
  undefined4 local_983;
  undefined4 uStack_97f;
  undefined local_920 [16];
  undefined4 local_910;
  undefined local_90b [399];
  undefined4 local_77c [467];
  
  bVar32 = 0;
  local_920 = ZEXT816(0);
  puVar23 = &local_910;
  for (lVar15 = 0x236; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar23 = 0;
    puVar23 = puVar23 + 1;
  }
  local_e80 = -1;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  lVar15 = *(long *)(param_1 + 4);
  if (lVar15 == 0) {
    return 0;
  }
  lVar17 = *(long *)(param_1 + 6);
  if (lVar17 == 0) {
    return 0;
  }
  uVar9 = *param_1;
  if ((uVar9 == 3) && ((*(byte *)(*(long *)(param_1 + 2) + 1) & 0x40) == 0)) {
    if (*(long *)(param_1 + 0xc) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    if (*(short *)(param_1 + 10) != 0x30) {
      return 0;
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  lVar13 = *(long *)(param_2 + 8);
  if (lVar13 == 0) {
    return 0;
  }
  lVar16 = *(long *)(param_2 + 0x10);
  if (lVar16 == 0) {
    return 0;
  }
  if (*(long *)(lVar16 + 0x40) == 0) {
    return 0;
  }
  if (*(long *)(lVar16 + 0x50) == 0) {
    return 0;
  }
  piVar12 = *(int **)(param_2 + 0x20);
  if (*piVar12 == 0) {
    if (uVar9 == 0) {
      return 0;
    }
    pbVar10 = *(byte **)(param_1 + 2);
    if (uVar9 == 3) {
      if ((pbVar10[2] & 0x20) != 0) {
        return 0;
      }
      uVar18 = 0x16;
      if (*(long *)(piVar12 + 0x16) != 0) {
        uVar18 = *(uint *)(*(long *)(piVar12 + 0x16) + -8);
      }
LAB_0010846c:
      bVar19 = pbVar10[3];
      goto LAB_00108470;
    }
    if (pbVar10 == (byte *)0x0) {
      uVar18 = 0x16;
      if (uVar9 != 1) goto LAB_0010847f;
    }
    else {
      if (uVar9 != 1) {
        if (uVar9 != 2) {
LAB_001083d5:
          uVar18 = 0x16;
          if (*(long *)(piVar12 + 0x16) != 0) {
            uVar18 = *(uint *)(*(long *)(piVar12 + 0x16) + -8);
          }
          goto LAB_00108467;
        }
LAB_0010840f:
        uVar18 = (uint)pbVar10[2];
        if (pbVar10[2] == 0) {
          uVar18 = 0x16;
          if (*(long *)(piVar12 + 0x16) != 0) {
            uVar18 = *(uint *)(*(long *)(piVar12 + 0x16) + -8);
          }
        }
        goto LAB_0010847f;
      }
LAB_001083f7:
      uVar18 = (uint)pbVar10[2];
      if (pbVar10[2] == 0) {
        if (*(long *)(piVar12 + 0x16) == 0) {
          uVar18 = 0x16;
        }
        else {
          uVar18 = *(uint *)(*(long *)(piVar12 + 0x16) + -8);
        }
      }
    }
LAB_0010845f:
    if ((pbVar10[1] & 1) != 0) goto LAB_0010847f;
  }
  else {
    pbVar10 = *(byte **)(param_1 + 2);
    if (pbVar10 == (byte *)0x0) {
      uVar18 = 0x16;
      if (uVar9 != 0) {
        if (uVar9 == 1) goto LAB_0010845f;
LAB_00108467:
        if (uVar9 != 3) goto LAB_0010847f;
        goto LAB_0010846c;
      }
    }
    else {
      if (uVar9 == 1) goto LAB_001083f7;
      if (uVar9 == 2) goto LAB_0010840f;
      if (uVar9 != 0) goto LAB_001083d5;
      if ((pbVar10[2] & 0x3f) == 0) {
        if (*(long *)(piVar12 + 0x16) == 0) {
          uVar18 = 0x16;
        }
        else {
          uVar18 = *(uint *)(*(long *)(piVar12 + 0x16) + -8);
        }
      }
      else {
        uVar18 = (uint)(pbVar10[2] & 0x3f) * 2;
      }
    }
    bVar19 = pbVar10[1];
LAB_00108470:
    if ((char)bVar19 < '\0') goto LAB_0010847f;
  }
  **(undefined4 **)(piVar12 + 0x32) = 3;
LAB_0010847f:
  if ((*param_1 < 2) || (*param_1 == 3)) {
    if ((*pbVar10 & 0x40) != 0) {
      puVar24 = (undefined8 *)(piVar12 + 0x30);
      if ((undefined4 *)*puVar24 == (undefined4 *)0x0) {
        return 0;
      }
      piVar12 = (int *)0x0;
      *(undefined4 *)*puVar24 = 0;
    }
    if ((*param_1 == 3) && ((pbVar10[1] & 0xc0) != 0xc0)) {
      if ((pbVar10[1] & 0xc0) == 0x40) {
        if (*(code **)(lVar16 + 0x18) == (code *)0x0) {
          return 0;
        }
        (**(code **)(lVar16 + 0x18))(0,piVar12,uVar18);
        return 0;
      }
      if (*(ushort *)(param_1 + 10) < 0x30) {
        return 0;
      }
      plVar30 = *(long **)(param_1 + 8);
      lVar15 = *plVar30;
      lVar17 = plVar30[1];
      if (0x3fef < lVar17 - 0x11U) {
        return 0;
      }
      pplVar3 = *(long ***)(lVar16 + 0x68);
      pplVar33 = (long **)register0x00000020;
      do {
        if (pplVar3 <= pplVar33) {
          return 0;
        }
        plVar29 = *pplVar33;
        if ((long *)0xffffff < plVar29) {
          iVar8 = _Lhc_find_func_1(plVar29,0x4001 - lVar17,param_2);
          if (iVar8 != 0) {
            plVar11 = (long *)((0x4001 - lVar17) + (long)plVar29);
            for (; plVar29 < plVar11; plVar29 = (long *)((long)plVar29 + 1)) {
              _local_b20 = ZEXT816(0);
              local_b10 = 0;
              uStack_b0f = 0;
              uStack_b0b = SUB164(ZEXT816(0),5);
              uStack_b07 = 0;
              uStack_b03 = uStack_b03 & 0xff000000;
              if ((*plVar29 == lVar15) &&
                 (iVar8 = FUN_001072d0(plVar29,lVar17,local_b20,0x20,*(undefined8 *)(param_2 + 8)),
                 iVar8 != 0)) {
                lVar13 = 0;
                while( true ) {
                  cVar1 = *(char *)((long)plVar30 + lVar13 + 0x10);
                  cVar2 = local_b20[lVar13];
                  if ((cVar1 < cVar2) || (cVar2 < cVar1)) break;
                  lVar13 = lVar13 + 1;
                  if (lVar13 == 0x20) {
                    _local_b20 = ZEXT816(0);
                    puVar26 = &local_b10;
                    for (lVar15 = 0x29; lVar15 != 0; lVar15 = lVar15 + -1) {
                      *puVar26 = 0;
                      puVar26 = puVar26 + (ulong)bVar32 * -2 + 1;
                    }
                    iVar8 = _Lparse_lzma12_0(local_b20,param_2);
                    if (iVar8 == 0) {
                      return 0;
                    }
                    uVar21 = lVar17 - 0x10;
                    plVar30 = plVar29 + 2;
                    iVar8 = FUN_001071b0(plVar30,uVar21 & 0xffffffff,local_b20,plVar29,plVar30,
                                         *(undefined8 *)(param_2 + 8));
                    if (iVar8 == 0) {
                      return 0;
                    }
                    goto LAB_00108881;
                  }
                }
              }
            }
          }
        }
        pplVar33 = pplVar33 + 1;
      } while( true );
    }
  }
  puVar23 = *(undefined4 **)(param_2 + 0x38);
  local_d40 = ZEXT816(0);
  puVar22 = (undefined4 *)local_b20;
  for (lVar16 = 0x69; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar22 = 0;
    puVar22 = puVar22 + 1;
  }
  local_e81 = 1;
  puVar24 = &local_c40;
  for (lVar16 = 0x47; lVar16 != 0; lVar16 = lVar16 + -1) {
    *(undefined4 *)puVar24 = 0;
    puVar24 = (undefined8 *)((long)puVar24 + 4);
  }
  local_e7c = 0;
  puVar22 = local_e30;
  for (lVar16 = 0x3c; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar22 = 0;
    puVar22 = puVar22 + 1;
  }
  local_e60 = ZEXT816(0);
  puVar22 = local_d30;
  for (lVar16 = 0x3c; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar22 = 0;
    puVar22 = puVar22 + 1;
  }
  puVar22 = (undefined4 *)local_b20;
  local_e50 = ZEXT816(0);
  local_e40 = ZEXT816(0);
  if (((puVar23 != (undefined4 *)0x0) && (*(long *)(param_2 + 0x40) != 0)) &&
     (iVar8 = FUN_00107190(lVar13 + 0xd0,9), auVar6 = _local_b20, iVar8 == 0)) {
    plVar30 = (long *)local_920;
    lVar31 = 0;
    uVar28 = 0;
    local_b20[4] = extraout_DL;
    auStack_b1b._4_7_ = auVar6._9_7_;
    auStack_b1b._0_4_ = 0x2000000;
    plVar29 = plVar30;
    for (lVar16 = 0x23a; lVar16 != 0; lVar16 = lVar16 + -1) {
      *(undefined4 *)plVar29 = 0;
      plVar29 = (long *)((long)plVar29 + (ulong)bVar32 * -8 + 4);
    }
    uStack_b0b = 0x1c000000;
    local_e70[0] = lVar17;
    local_e40[0] = 0x80;
    local_e70[1] = lVar15;
    uStack_b07 = *puVar23;
    uStack_b03 = puVar23[1];
    uStack_aff = puVar23[2];
    local_aeb = 0x20000000;
    local_d4a = 8;
    local_d41 = 1;
    local_ac7 = 0x3000000;
    local_ac3 = 1;
    local_ac1 = 1;
    local_ac0 = 0x1010000;
    uStack_afb = puVar23[3];
    uStack_af7 = puVar23[4];
    uStack_af3 = puVar23[5];
    uStack_aef = puVar23[6];
    puVar20 = (undefined4 *)local_e40;
    puVar25 = local_abb;
    for (lVar15 = 0x40; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar25 = *puVar20;
      puVar20 = puVar20 + (ulong)bVar32 * -2 + 1;
      puVar25 = puVar25 + (ulong)bVar32 * -2 + 1;
    }
    uVar21 = 0x628;
    local_9b3 = 0x1000000;
    local_987 = 0x7000000;
    while( true ) {
      local_e78 = 0;
      iVar8 = FUN_00107340((long)local_77c + uVar28,uVar21,&local_e78,local_e70[lVar31],lVar13);
      if ((iVar8 == 0) || (uVar21 < local_e78)) break;
      uVar28 = uVar28 + local_e78;
      uVar21 = uVar21 - local_e78;
      if (lVar31 != 0) {
        if (0x628 < uVar28) {
          return 0;
        }
        iVar8 = (int)uVar28;
        uVar9 = iVar8 + 0xb;
        local_98b = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                    uVar9 * 0x1000000;
        uVar9 = iVar8 + 0x2a7;
        uStack_b0f = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                     uVar9 * 0x1000000;
        uVar9 = iVar8 + 700;
        local_b20._0_4_ =
             uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
        lVar15 = *(long *)(param_2 + 8);
        plVar29 = plVar30;
        for (lVar17 = 0x69; lVar17 != 0; lVar17 = lVar17 + -1) {
          *(undefined4 *)plVar29 = *puVar22;
          puVar22 = puVar22 + (ulong)bVar32 * -2 + 1;
          plVar29 = (long *)((long)plVar29 + (ulong)bVar32 * -8 + 4);
        }
        lVar15 = (**(code **)(lVar15 + 0xd0))();
        if (lVar15 == 0) {
          return 0;
        }
        puVar26 = &local_e81;
        lVar17 = (**(code **)(*(long *)(param_2 + 8) + 0xe0))(puVar26,1,0);
        if (lVar17 != 0) {
          lVar13 = (**(code **)(*(long *)(param_2 + 8) + 0xe0))(local_e40,0x100,0);
          lVar16 = (**(code **)(*(long *)(param_2 + 8) + 0xe0))(puVar26,1,0);
          iVar8 = (**(code **)(*(long *)(param_2 + 8) + 0xe8))(lVar15,lVar13,lVar17,lVar16);
          if (iVar8 != 1) goto LAB_00108cf2;
          pcVar4 = *(code **)(*(long *)(param_2 + 8) + 0xf0);
          uVar14 = (**(code **)(*(long *)(param_2 + 8) + 0x58))();
          iVar8 = (*pcVar4)(local_90b,uVar28 + 399,local_e60,0,uVar14,0);
          if (iVar8 == 1) {
            iVar8 = (**(code **)(*(long *)(param_2 + 8) + 0xf8))
                              (0x2a0,local_e60,0x20,local_d40,&local_e7c,lVar15);
            if ((iVar8 == 1) && (local_e7c == 0x100)) {
              local_c40 = 0xc00000014010000;
              local_c2c = 0x10000;
              local_c38 = **(undefined8 **)(param_2 + 0x40);
              local_c30 = *(undefined4 *)(*(undefined8 **)(param_2 + 0x40) + 1);
              uVar21 = uVar28 + 0x2c0;
              puVar23 = (undefined4 *)local_d40;
              puVar27 = local_c28;
              for (lVar17 = 0x40; lVar17 != 0; lVar17 = lVar17 + -1) {
                *(undefined4 *)puVar27 = *puVar23;
                puVar23 = puVar23 + (ulong)bVar32 * -2 + 1;
                puVar27 = (ulong *)((long)puVar27 + (ulong)bVar32 * -8 + 4);
              }
              lVar17 = *(long *)(param_2 + 8);
              puVar24 = &local_c40;
              puVar23 = (undefined4 *)((long)local_77c + uVar28);
              for (lVar13 = 0x47; lVar13 != 0; lVar13 = lVar13 + -1) {
                *puVar23 = *(undefined4 *)puVar24;
                puVar24 = (undefined8 *)((long)puVar24 + (ulong)bVar32 * -8 + 4);
                puVar23 = puVar23 + (ulong)bVar32 * -2 + 1;
              }
              (**(code **)(lVar17 + 0x108))(lVar15);
LAB_00108881:
              pbVar10 = *(byte **)(param_1 + 2);
              uVar9 = *param_1;
              if (pbVar10 == (byte *)0x0) {
                return 0;
              }
              if ((*pbVar10 & 0x20) == 0) {
                iVar8 = _Lindex_encode_1(param_2,&local_e80,1,0);
              }
              else {
                if (uVar9 == 2) {
                  bVar19 = pbVar10[1] >> 1;
                }
                else if (uVar9 < 3) {
                  if (uVar9 == 0) {
                    bVar19 = pbVar10[1] >> 3 & 0xf;
                  }
                  else {
                    bVar19 = pbVar10[1] >> 2;
                  }
                }
                else {
                  bVar19 = 1;
                  if (uVar9 == 3) {
                    bVar19 = pbVar10[2] & 0x1f;
                  }
                }
                iVar8 = _Lindex_decode_1(&local_e80,bVar19,*(undefined8 *)(param_2 + 0x10));
              }
              iVar7 = local_e80;
              if (iVar8 == 0) {
                return 0;
              }
              pbVar10 = *(byte **)(param_1 + 2);
              uVar9 = *param_1;
              lVar15 = *(long *)(param_2 + 0x10);
              puVar24 = &local_c40;
              for (lVar17 = 0x12; lVar17 != 0; lVar17 = lVar17 + -1) {
                *(undefined4 *)puVar24 = 0;
                puVar24 = (undefined8 *)((long)puVar24 + (ulong)bVar32 * -8 + 4);
              }
              if (local_e80 < 0) {
                return 0;
              }
              if (pbVar10 == (byte *)0x0) {
                return 0;
              }
              if (lVar15 == 0) {
                return 0;
              }
              if (*(long *)(lVar15 + 0x18) == 0) {
                return 0;
              }
              if ((uVar9 == 0) || ((uVar9 == 3 && ((pbVar10[2] & 0x20) != 0)))) {
                iVar8 = _Lthreads_stop_0(&local_c40,param_2);
                if (iVar8 == 0) {
                  return 0;
                }
                *(uint *)(param_2 + 0x50) = *pbVar10 & 1;
              }
              lVar17 = FUN_00107110(iVar7,plVar30,uVar21,lVar15);
              if (lVar17 < 0) {
                return 0;
              }
              if (uVar9 == 0) {
LAB_001089d5:
                auVar6._11_5_ = 0;
                auVar6._0_11_ = auStack_b1b;
                _local_b20 = auVar6 << 0x28;
                uVar21 = local_c28[0];
                if (0x40 < local_c28[0]) {
                  uVar21 = 0x40;
                }
                uVar18 = (int)uVar21 + 1;
                local_b20._0_4_ =
                     uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                     uVar18 * 0x1000000;
                lVar17 = FUN_00107110(iVar7,local_b20,5,lVar15);
                if (lVar17 < 0) {
                  return 0;
                }
                lVar17 = FUN_00107110(iVar7,local_c40,uVar21,lVar15);
                if (lVar17 < 0) {
                  return 0;
                }
                if (uVar9 != 3) goto LAB_0010899e;
              }
              else {
                if (uVar9 != 3) goto LAB_0010899e;
                if ((pbVar10[2] & 0x20) != 0) goto LAB_001089d5;
              }
              if (-1 < (char)*pbVar10) {
                return 1;
              }
LAB_0010899e:
              auVar5._12_4_ = 0;
              auVar5._0_12_ = local_d40._4_12_;
              local_d40 = auVar5 << 0x20;
              lVar17 = FUN_001070a0(iVar7,local_d40,4,lVar15);
              if (lVar17 < 0) {
                return 0;
              }
              uVar18 = (uint)local_d40._0_4_ >> 0x18 | (local_d40._0_4_ & 0xff0000) >> 8 |
                       (local_d40._0_4_ & 0xff00) << 8 | local_d40._0_4_ << 0x18;
              local_d40._0_4_ = uVar18;
              uVar21 = (ulong)uVar18;
              if (uVar21 != 0) {
                if (*(long *)(lVar15 + 0x48) == 0) {
                  return 0;
                }
                if (*(long *)(lVar15 + 0x50) == 0) {
                  return 0;
                }
                do {
                  while( true ) {
                    uVar28 = 0x200;
                    if (uVar21 < 0x201) {
                      uVar28 = uVar21;
                    }
                    lVar17 = (**(code **)(lVar15 + 0x48))(iVar7,local_b20,uVar28);
                    if (-1 < lVar17) break;
                    piVar12 = (int *)(**(code **)(lVar15 + 0x50))();
                    if (*piVar12 != 4) {
                      return 0;
                    }
                  }
                  if (lVar17 == 0) {
                    return 0;
                  }
                  uVar21 = uVar21 - lVar17;
                } while (uVar21 != 0);
              }
              if (uVar9 != 2) {
                return 1;
              }
              if (*(code **)(lVar15 + 0x18) == (code *)0x0) {
                return 0;
              }
              (**(code **)(lVar15 + 0x18))(0);
              return 1;
            }
          }
        }
        lVar13 = 0;
        lVar17 = 0;
        lVar16 = 0;
LAB_00108cf2:
        (**(code **)(*(long *)(param_2 + 8) + 0x108))(lVar15);
        if (lVar17 != 0) {
          (**(code **)(*(long *)(param_2 + 8) + 0x110))(lVar17);
        }
        if (lVar13 != 0) {
          (**(code **)(*(long *)(param_2 + 8) + 0x110))(lVar13);
        }
        if (lVar16 == 0) {
          return 0;
        }
        (**(code **)(*(long *)(param_2 + 8) + 0x110))(lVar16);
        return 0;
      }
      lVar31 = 1;
    }
  }
  return 0;
}



undefined8 _Ldecode_buffer_part_0(undefined4 *param_1,ulong param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 local_81;
  undefined4 uStack_7d;
  undefined4 uStack_79;
  undefined4 uStack_75;
  undefined local_71 [16];
  undefined local_61 [49];
  
  local_71 = ZEXT816(0);
  puVar7 = local_61;
  for (lVar5 = 0x29; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  if (param_1 == (undefined4 *)0x0) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if (*(uint *)(param_3 + 0x104) == 3) {
      return 1;
    }
    if ((0x12 < param_2) && (*(uint *)(param_3 + 0x104) < 2)) {
      local_81 = *param_1;
      uStack_7d = param_1[1];
      uStack_79 = param_1[2];
      uStack_75 = param_1[3];
      iVar3 = _Lparse_lzma12_0(local_71,param_3);
      if (iVar3 != 0) {
        puVar1 = param_1 + 4;
        iVar8 = (int)param_2 + -0x10;
        iVar3 = FUN_001071b0(puVar1,iVar8,local_71,&local_81,puVar1,*(undefined8 *)(param_3 + 8));
        if (((iVar3 != 0) && (uVar6 = (ulong)*(ushort *)(param_1 + 4), uVar6 <= param_2 - 0x12)) &&
           (lVar5 = *(long *)(param_3 + 0xe8), uVar6 < (ulong)(*(long *)(param_3 + 0xe0) - lVar5)))
        {
          lVar2 = *(long *)(param_3 + 0xf0);
          for (uVar4 = 0; uVar6 != uVar4; uVar4 = uVar4 + 1) {
            *(undefined *)(lVar5 + lVar2 + uVar4) = *(undefined *)((long)param_1 + uVar4 + 0x12);
          }
          *(long *)(param_3 + 0xe8) = *(long *)(param_3 + 0xe8) + uVar6;
          iVar3 = FUN_001071b0(puVar1,iVar8,local_71,&local_81,puVar1,*(undefined8 *)(param_3 + 8));
          if (iVar3 != 0) {
            return 1;
          }
        }
      }
    }
  }
  *(undefined4 *)(param_3 + 0x104) = 0xffffffff;
  return 0;
}



undefined8 _Lfile_info_decode_0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  ushort *puVar17;
  byte bVar18;
  undefined8 local_140;
  undefined local_131 [16];
  undefined local_121 [41];
  undefined8 local_f8 [3];
  undefined8 local_e0 [6];
  undefined local_aa [16];
  undefined local_9a [106];
  
  lVar7 = _Llzma12_coder_1;
  bVar18 = 0;
  if (_Llzma12_coder_1 == 0) {
    return 0;
  }
  lVar11 = *(long *)(_Llzma12_coder_1 + 0x10);
  if (lVar11 == 0) {
    return 0;
  }
  lVar12 = *(long *)(_Llzma12_coder_1 + 0x20);
  if (lVar12 == 0) {
    return 0;
  }
  if (*(long *)(_Llzma12_coder_1 + 0xf0) == 0) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x48);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00109491;
  if (*(int *)(_Llzma12_coder_1 + 0x104) == 4) goto LAB_0010946f;
  iVar4 = _Lstream_encoder_mt_init_part_0(_Llzma12_coder_1);
  if (((iVar4 == 0) || (*(int *)(lVar7 + 0x104) == 4)) || (*(int *)(lVar7 + 0x104) == -1))
  goto LAB_00109449;
  puVar15 = local_f8;
  for (lVar10 = 0x12; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined4 *)puVar15 = 0;
    puVar15 = (undefined8 *)((long)puVar15 + (ulong)bVar18 * -8 + 4);
  }
  local_140 = 0;
  iVar4 = _Lstream_decoder_mt_get_progress_0(param_3,lVar7,local_f8,local_e0);
  if ((iVar4 == 0) || (iVar4 = _Lworker_start_0(local_f8,local_e0[0],&local_140,lVar7), iVar4 == 0))
  goto LAB_0010946f;
  _Ldecode_buffer_part_0(local_f8[0],local_140,lVar7);
  iVar4 = *(int *)(lVar7 + 0x104);
  if (iVar4 == 3) {
LAB_00109236:
    puVar17 = *(ushort **)(lVar7 + 0xf8);
    if (puVar17 != (ushort *)0x0) {
      uVar8 = (ulong)*puVar17;
      cVar1 = *(char *)((long)puVar17 + 0x3b);
      uVar14 = uVar8 - 0x120;
      if (cVar1 == '\x02') {
        if ((((*(long *)(*(long *)(lVar7 + 0x20) + 0x78) != 0) && (4 < uVar14)) &&
            (uVar14 = (ulong)puVar17[0x57], puVar17[0x57] != 0)) &&
           ((uVar14 < uVar8 - 0x122 && (uVar8 = (uVar8 - 0x122) - uVar14, 2 < uVar8)))) {
          puVar16 = (undefined *)((long)puVar17 + uVar14 + 0xb0);
          *(undefined *)(lVar12 + 0x84) = *puVar16;
          *(undefined *)(lVar12 + 0x85) = puVar16[1];
          if ((*(ushort *)(lVar12 + 0x84) == 0) || (uVar8 - 2 < (ulong)*(ushort *)(lVar12 + 0x84)))
          {
            *(undefined2 *)(lVar12 + 0x84) = 0;
          }
          else {
            lVar11 = *(long *)(lVar7 + 0x20);
            uVar9 = *(undefined8 *)(lVar7 + 0x10);
            *(ulong *)(lVar12 + 0x88) = (long)puVar17 + uVar14 + 0xb2;
            lVar12 = *(long *)(lVar11 + 0x20);
            if (lVar12 != 0) {
              **(long **)(lVar11 + 0x78) = lVar12;
              lVar7 = FUN_00107110(param_2,puVar17 + 0x58,uVar14,uVar9);
              if (-1 < lVar7) {
                return 0;
              }
              goto LAB_0010946f;
            }
          }
        }
      }
      else if (cVar1 == '\x03') {
        if (((*(long *)(lVar11 + 0x30) != 0) && (8 < uVar14)) &&
           (*(char *)((long)puVar17 + (uVar8 - 0x73)) == '\0')) {
          uVar14 = *(ulong *)(puVar17 + 0x57);
          uVar8 = uVar14 >> 0x20;
          if ((((int)(uVar14 >> 0x20) == 0) ||
              (iVar4 = (**(code **)(lVar11 + 0x20))(uVar8,uVar8,uVar8), iVar4 != -1)) &&
             (((int)uVar14 == 0 ||
              (iVar4 = (**(code **)(lVar11 + 0x28))
                                 (uVar14 & 0xffffffff,uVar14 & 0xffffffff,uVar14 & 0xffffffff),
              iVar4 != -1)))) {
            (**(code **)(lVar11 + 0x30))(puVar17 + 0x5b);
            *(undefined4 *)(lVar7 + 0x104) = 4;
            goto LAB_0010946f;
          }
        }
      }
      else if (((cVar1 == '\x01') && (*(long *)(*(long *)(lVar7 + 0x20) + 0x38) != 0)) &&
              (1 < uVar14)) {
        *(undefined *)(lVar12 + 0x90) = *(undefined *)(puVar17 + 0x57);
        *(undefined *)(lVar12 + 0x91) = *(undefined *)((long)puVar17 + 0xaf);
        if (*(ushort *)(lVar12 + 0x90) == 0) {
          puVar17 = (ushort *)0x0;
        }
        else {
          puVar17 = puVar17 + 0x58;
          if (uVar8 - 0x122 < (ulong)*(ushort *)(lVar12 + 0x90)) {
            *(undefined2 *)(lVar12 + 0x90) = 0;
            goto LAB_00109449;
          }
        }
        *(ushort **)(lVar12 + 0x98) = puVar17;
        *(undefined4 *)(lVar7 + 0x104) = 4;
        iVar4 = _Llzma_block_unpadded_size_1(1,0,0,0,lVar7);
LAB_00109305:
        if (iVar4 != 0) goto LAB_0010946f;
      }
    }
  }
  else if (iVar4 < 4) {
    if (iVar4 == 0) {
      if (*(ulong *)(lVar7 + 0xe8) < 0xae) goto LAB_0010946f;
      puVar16 = local_121;
      for (lVar11 = 0x29; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar16 = 0;
        puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
      }
      lVar11 = *(long *)(lVar7 + 0xf0);
      local_131 = ZEXT816(0);
      if (((lVar11 != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
         ((*(long *)(*(long *)(lVar7 + 0x28) + 8) != 0 && (*(long *)(lVar7 + 0xf8) == 0)))) {
        *(long *)(lVar7 + 0xf8) = lVar11;
        local_aa = ZEXT816(0);
        puVar16 = local_9a;
        for (lVar12 = 0x4a; lVar12 != 0; lVar12 = lVar12 + -1) {
          *puVar16 = 0;
          puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
        }
        lVar12 = 0;
        do {
          local_aa[lVar12] = *(undefined *)(lVar11 + 2 + lVar12);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x3a);
        iVar4 = _Lparse_lzma12_0(local_131,lVar7);
        if ((iVar4 != 0) &&
           (iVar4 = FUN_00107650(*(undefined8 *)
                                  (*(long *)(*(long *)(lVar7 + 0x28) + 8) +
                                  (ulong)*(uint *)(lVar7 + 0x100) * 8),local_aa,0x3a,0x5a,
                                 *(long *)(lVar7 + 0xf8) + 0x3c,local_131,lVar7), iVar4 != 0)) {
          *(undefined4 *)(lVar7 + 0x104) = 1;
          puVar16 = local_131;
          for (lVar11 = 0x39; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar16 = 0;
            puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
          }
          iVar4 = _Lstream_encoder_mt_init_part_0(lVar7);
          goto LAB_00109305;
        }
      }
      *(undefined4 *)(lVar7 + 0x104) = 0xffffffff;
      *(undefined8 *)(lVar7 + 0xf8) = 0;
    }
    else if ((iVar4 == 1) && (*(ushort **)(lVar7 + 0xf8) != (ushort *)0x0)) {
      uVar8 = (ulong)**(ushort **)(lVar7 + 0xf8);
      uVar14 = *(ulong *)(lVar7 + 0xe8);
      if (uVar14 <= uVar8) {
        if (uVar14 != uVar8) goto LAB_0010946f;
        uVar8 = *(ulong *)(lVar7 + 0xe0);
        uVar2 = *(ulong *)(lVar7 + 0x98);
        if ((uVar8 < uVar2) || (uVar14 = uVar14 - 0x72, uVar8 - uVar2 <= uVar14)) {
LAB_00109491:
          if (*(code **)(lVar11 + 0x18) != (code *)0x0) {
            (**(code **)(lVar11 + 0x18))(0);
          }
          return 0;
        }
        local_aa = ZEXT816(0);
        puVar16 = local_9a;
        for (lVar10 = 0x62; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar16 = 0;
          puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
        }
        lVar13 = *(long *)(lVar7 + 0xf0) + uVar14;
        lVar10 = 0;
        do {
          lVar5 = lVar10 + 1;
          local_aa[lVar10] = *(undefined *)(lVar13 + lVar10);
          lVar10 = lVar5;
        } while (lVar5 != 0x72);
        if ((uVar8 < uVar14) || (uVar6 = 0, uVar8 - uVar14 < uVar2)) goto LAB_00109491;
        for (; uVar2 != uVar6; uVar6 = uVar6 + 1) {
          *(undefined *)(lVar13 + uVar6) = *(undefined *)(lVar7 + 0xa0 + uVar6);
        }
        iVar4 = FUN_00107650(*(undefined8 *)
                              (*(long *)(*(long *)(lVar7 + 0x28) + 8) +
                              (ulong)*(uint *)(lVar7 + 0x100) * 8),*(undefined8 *)(lVar7 + 0xf0),
                             uVar14 + *(long *)(lVar7 + 0x98),*(undefined8 *)(lVar7 + 0xe0),local_aa
                             ,*(long *)(lVar7 + 0xf8) + 2,lVar7,(ulong)*(uint *)(lVar7 + 0x100));
        if (iVar4 == 0) {
          *(undefined4 *)(lVar7 + 0x104) = 0xffffffff;
          goto LAB_00109491;
        }
        *(undefined4 *)(lVar7 + 0x104) = 3;
        goto LAB_00109236;
      }
    }
  }
  else if (iVar4 == 4) goto LAB_0010946f;
LAB_00109449:
  if (((*(long *)(lVar7 + 0x10) != 0) &&
      (pcVar3 = *(code **)(*(long *)(lVar7 + 0x10) + 0x18), pcVar3 != (code *)0x0)) &&
     (*(undefined4 *)(lVar7 + 0x104) = 0xffffffff, *(int *)(lVar7 + 0x50) != 0)) {
    (*pcVar3)(0);
  }
LAB_0010946f:
                    // WARNING: Could not recover jumptable at 0x0010948f. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar9 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return uVar9;
}



undefined8 _Llzma_index_stream_size_1(long param_1,long param_2,undefined4 *param_3)

{
  code *pcVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  undefined4 *puVar18;
  long *plVar19;
  undefined *puVar20;
  byte bVar21;
  long lVar22;
  ulong uVar23;
  byte bVar24;
  ulong local_5f8;
  long local_5e0;
  uint local_5c0;
  undefined local_5a1;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined local_590 [16];
  undefined local_580 [48];
  undefined local_550 [4];
  undefined auStack_54c [12];
  long local_540;
  long local_538;
  int *local_530;
  undefined2 local_528;
  long local_520;
  undefined local_45a;
  undefined local_451;
  long local_2f0;
  long local_2e8;
  byte local_2e0;
  byte bStack_2df;
  byte bStack_2de;
  byte bStack_2dd;
  undefined auStack_2dc [3];
  undefined auStack_2d9 [2];
  uint auStack_2d7 [3];
  undefined local_2cb [114];
  uint local_259;
  undefined local_255;
  undefined local_254 [465];
  undefined4 local_83;
  uint uStack_7f;
  undefined4 uStack_7b;
  undefined4 uStack_77;
  undefined local_73 [67];
  
  bVar24 = 0;
  plVar19 = &local_2f0;
  for (lVar11 = 0xae; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined4 *)plVar19 = 0;
    plVar19 = (long *)((long)plVar19 + 4);
  }
  if (param_2 != 0) {
    if ((((*(int *)(param_2 + 0x18) == 0) && (param_1 != 0)) &&
        (lVar11 = *(long *)(param_2 + 8), lVar11 != 0)) &&
       ((pcVar1 = *(code **)(lVar11 + 0x60), pcVar1 != (code *)0x0 &&
        (*(long *)(lVar11 + 0x100) != 0)))) {
      if (param_3 == (undefined4 *)0x0) {
        *(undefined4 *)(param_2 + 0x18) = 1;
        return 0;
      }
      *param_3 = 1;
      (*pcVar1)(param_1,&local_2f0,&local_2e8,0);
      if ((((local_2f0 != 0) && (local_2e8 != 0)) &&
          ((*(long *)(param_2 + 8) != 0 &&
           (((pcVar1 = *(code **)(*(long *)(param_2 + 8) + 0x68), pcVar1 != (code *)0x0 &&
             (uVar4 = (*pcVar1)(), uVar4 < 0x4001)) &&
            (uVar4 = uVar4 + 7 >> 3, uVar4 - 0x14 < 0x205)))))) &&
         (iVar5 = (**(code **)(*(long *)(param_2 + 8) + 0x100))(local_2f0,auStack_2dc + 1),
         -1 < iVar5)) {
        uVar10 = (ulong)uVar4;
        if ((ulong)(long)iVar5 <= uVar10) {
          if ((ulong)(long)iVar5 < 0x11) goto LAB_0010a13a;
          if (((CONCAT13(auStack_2d9[1],stack0xfffffffffffffd25) == 0) || (auStack_2d7[0] == 0)) ||
             (uVar16 = (ulong)CONCAT13(auStack_2d9[1],stack0xfffffffffffffd25) *
                       (ulong)auStack_2d7[0] + CONCAT44(auStack_2d7[2],auStack_2d7[1]), 3 < uVar16))
          goto LAB_0010a13a;
          lVar11 = *(long *)(param_2 + 0x10);
          if (((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) &&
             ((*(long *)(lVar11 + 0x18) != 0 &&
              ((*(long *)(param_2 + 0x30) != 0 && (*(int *)(param_2 + 0x160) == 0x1c8)))))) {
            local_83 = CONCAT13(auStack_2d9[1],stack0xfffffffffffffd25);
            uStack_7f = auStack_2d7[0];
            uStack_7b = auStack_2d7[1];
            uStack_77 = auStack_2d7[2];
            iVar5 = _Lparse_lzma12_0(local_73,param_2);
            if ((iVar5 != 0) &&
               (iVar5 = FUN_001071b0(local_2cb,uVar4 - 0x10,local_73,&local_83,local_2cb,
                                     *(undefined8 *)(param_2 + 8)), iVar5 != 0)) {
              _local_550 = ZEXT816(0);
              puVar20 = local_73;
              for (lVar11 = 0x39; lVar11 != 0; lVar11 = lVar11 + -1) {
                *puVar20 = 0;
                puVar20 = puVar20 + (ulong)bVar24 * -2 + 1;
              }
              local_590 = ZEXT816(0);
              plVar19 = &local_540;
              for (lVar11 = 0x93; lVar11 != 0; lVar11 = lVar11 + -1) {
                *(undefined4 *)plVar19 = 0;
                plVar19 = (long *)((long)plVar19 + (ulong)bVar24 * -8 + 4);
              }
              plVar19 = *(long **)(param_2 + 0x28);
              puVar20 = local_580;
              for (lVar11 = 0x29; lVar11 != 0; lVar11 = lVar11 + -1) {
                *puVar20 = 0;
                puVar20 = puVar20 + (ulong)bVar24 * -2 + 1;
              }
              if ((((plVar19 != (long *)0x0) && (plVar19[1] != 0)) && (*(long *)(param_2 + 8) != 0))
                 && (0x71 < uVar10 - 0x10)) {
                iVar5 = (int)uVar16;
                local_550 = (undefined  [4])iVar5;
                if (4 < uVar10 - 0x82) {
                  local_2e0 = (byte)local_259;
                  bStack_2df = (byte)(local_259 >> 8);
                  bStack_2de = (byte)(local_259 >> 0x10);
                  bStack_2dd = (byte)(local_259 >> 0x18);
                  _auStack_2dc = CONCAT31(stack0xfffffffffffffd25,local_255);
                  local_5f8 = uVar10 - 0x87;
                  if (uVar16 == 2) {
                    uVar8 = (ulong)CONCAT11(local_255,bStack_2dd);
                    if ((char)local_2e0 < '\0') {
                      if (CONCAT11(local_255,bStack_2dd) != 0) goto LAB_0010a132;
                      uVar15 = 0;
                      uVar8 = 0x39;
                      puVar20 = local_254;
                      lVar11 = 0;
                    }
                    else {
                      if ((local_259 & 0x100) != 0) {
                        uVar8 = uVar8 + 8;
                      }
                      puVar20 = (undefined *)0x0;
                      lVar11 = 0x87;
                      uVar15 = uVar8;
                    }
                    if (local_5f8 < uVar8) goto LAB_0010a132;
                    local_5e0 = uVar8 + 5;
                    local_5f8 = local_5f8 - uVar8;
                    uVar23 = uVar8 + 0x87;
                    iVar6 = (int)uVar8 + 4;
                  }
                  else if ((iVar5 == 3) && ((local_259 & 0x4000) == 0)) {
                    if (local_5f8 < 0x30) goto LAB_0010a132;
                    uVar15 = 0x30;
                    lVar11 = 0x87;
                    puVar20 = (undefined *)0x0;
                    local_5e0 = 0x35;
                    uVar23 = 0x87;
                    iVar6 = 0x34;
                  }
                  else {
                    uVar15 = 0;
                    lVar11 = 0;
                    uVar23 = 0x87;
                    puVar20 = (undefined *)0x0;
                    local_5e0 = 5;
                    iVar6 = 4;
                  }
                  puVar17 = &local_259;
                  puVar18 = (undefined4 *)auStack_54c;
                  for (uVar8 = (ulong)(iVar6 + 1); uVar8 != 0; uVar8 = uVar8 - 1) {
                    *(undefined *)puVar18 = *(undefined *)puVar17;
                    puVar17 = (uint *)((long)puVar17 + (ulong)bVar24 * -2 + 1);
                    puVar18 = (undefined4 *)((long)puVar18 + (ulong)bVar24 * -2 + 1);
                  }
                  local_5a0 = 0;
                  lVar22 = *plVar19;
                  local_598 = 0;
                  if (((lVar22 != 0) && (plVar19[1] != 0)) &&
                     ((lVar22 != plVar19[1] &&
                      ((((*(uint *)(plVar19 + 3) < 2 &&
                         (iVar6 = FUN_001074d0(lVar22,&local_5a0,*(undefined8 *)(param_2 + 0x10)),
                         iVar6 != 0)) &&
                        (iVar6 = FUN_001074d0(*(undefined8 *)(*(long *)(param_2 + 0x28) + 8),
                                              &local_598,*(undefined8 *)(param_2 + 0x10)),
                        uVar8 = local_5a0, iVar6 != 0)) && (local_5a0 == local_598)))))) {
                    iVar6 = _Lparse_lzma12_0(local_590,param_2);
                    if (iVar6 != 0) {
                      lVar22 = 0;
                      do {
                        local_5c0 = (uint)uVar8;
                        uVar4 = (uint)lVar22;
                        if (local_5c0 <= uVar4) goto LAB_0010a132;
                        lVar14 = *(long *)(*(long *)(param_2 + 0x28) + 8);
                        iVar6 = FUN_00107650(*(undefined8 *)(lVar14 + lVar22 * 8),local_550,
                                             local_5e0 + 4,0x25c,local_2cb,local_590,param_2,lVar14)
                        ;
                        lVar22 = lVar22 + 1;
                      } while (iVar6 == 0);
                      *(uint *)(param_2 + 0x100) = uVar4;
                      if ((uVar16 != 2) || (-1 < (char)local_2e0)) {
                        if (lVar11 == 0) {
LAB_00109ab7:
                          if (uVar23 <= uVar10) goto LAB_00109ac2;
                        }
                        else {
                          uVar23 = 0x87;
LAB_00109ac2:
                          if (uVar15 <= uVar10 - uVar23) {
                            if ((((local_2e0 & 4) == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
                               (pcVar1 = *(code **)(*(long *)(param_2 + 0x10) + 0x58),
                               pcVar1 == (code *)0x0)) {
                              *(undefined4 *)(*(long *)(param_2 + 0x30) + 8) = 0;
                              if ((local_2e0 & 5) == 5) goto LAB_0010a1da;
                            }
                            else {
                              (*pcVar1)();
                              *(undefined4 *)(*(long *)(param_2 + 0x30) + 8) = 1;
                            }
                            iVar6 = (**(code **)(*(long *)(param_2 + 0x10) + 0x10))();
                            bVar3 = local_2e0;
                            *(int *)(param_2 + 0x90) = iVar6;
                            bVar21 = local_2e0 & 0x10;
                            if (((bVar21 == 0) || (*(int *)(*(long *)(param_2 + 0x30) + 4) != 0)) &&
                               (((local_2e0 & 2) == 0 ||
                                ((iVar7 = _Llzma_rc_prices_1(&local_2e0,param_2), iVar7 != 0 ||
                                 (bVar21 == 0)))))) {
                              if (uVar16 == 0) {
                                if (((char)bStack_2df < '\0') ||
                                   (*(long *)(*(long *)(param_2 + 0x20) + 200) != 0)) {
                                  bVar21 = 0xff;
                                  if ((bStack_2df & 2) != 0) {
                                    bVar21 = (byte)(CONCAT11(bStack_2dd,bStack_2de) >> 6) & 0x7f;
                                  }
                                  bVar12 = 0xff;
                                  if ((char)bVar3 < '\0') {
                                    bVar12 = (byte)(((ulong)CONCAT41(_auStack_2dc,bStack_2dd) <<
                                                    0x18) >> 0x1d) & 0x1f;
                                  }
                                  uVar4 = (uint)CONCAT11(bVar12,bVar21);
                                  if ((bStack_2df & 4) == 0) {
LAB_00109c76:
                                    uVar4 = uVar4 | 0xff0000;
                                    uVar13 = 0xff;
                                  }
                                  else {
                                    uVar13 = (uint)(auStack_2dc[0] >> 5);
                                    uVar4 = uVar4 | (auStack_2dc[0] >> 2 & 7) << 0x10;
                                  }
LAB_00109c9b:
                                  uVar4 = uVar4 | uVar13 << 0x18;
LAB_00109caa:
                                  *(uint *)(param_2 + 0x54) = uVar4;
                                  piVar9 = (int *)(auStack_2dc + uVar23 + 1);
                                  if (iVar6 == 0) {
                                    lVar11 = *(long *)(param_2 + 0x10);
                                    if ((((lVar11 != 0) &&
                                         (*(code **)(lVar11 + 0x20) != (code *)0x0)) &&
                                        (*(long *)(lVar11 + 0x28) != 0)) &&
                                       (*(long *)(lVar11 + 0x30) != 0)) {
                                      if (uVar16 == 0) {
                                        piVar9 = *(int **)(param_2 + 0x20);
                                        if (((piVar9 != (int *)0x0) &&
                                            (*(long *)(piVar9 + 0x16) != 0)) && (*piVar9 != 0)) {
                                          if ((char)bStack_2df < '\0') goto LAB_00109d56;
                                          piVar2 = *(int **)(piVar9 + 0x32);
                                          if (piVar2 != (int *)0x0) {
                                            iVar5 = *piVar2;
                                            if (iVar5 < 3) {
                                              if (-1 < iVar5) {
                                                *piVar2 = 3;
LAB_00109d56:
                                                if ((bVar3 & 0x40) != 0) {
                                                  puVar17 = *(uint **)(piVar9 + 0x30);
                                                  if ((puVar17 == (uint *)0x0) || (1 < *puVar17))
                                                  goto LAB_0010a1da;
                                                  *puVar17 = 0;
                                                }
                                                local_5a0 = CONCAT44(local_5a0._4_4_,0xffffffff);
                                                if ((bVar3 & 0x20) == 0) {
                                                  iVar5 = _Lindex_encode_1(param_2,&local_5a0,1,1);
                                                }
                                                else {
                                                  iVar5 = _Lindex_decode_1(&local_5a0,
                                                                           bStack_2df >> 3 & 0xf,
                                                                           lVar11);
                                                }
                                                uVar10 = local_5a0;
                                                if (iVar5 != 0) {
                                                  iVar5 = (int)local_5a0;
                                                  local_5a1 = 0;
                                                  local_598 = local_598 & 0xffffffff00000000;
                                                  local_590 = ZEXT816(0);
                                                  if (((-1 < (int)local_5a0) &&
                                                      (lVar11 = *(long *)(param_2 + 0x10),
                                                      lVar11 != 0)) &&
                                                     ((*(long *)(lVar11 + 0x40) != 0 &&
                                                      (*(long *)(lVar11 + 0x50) != 0)))) {
                                                    iVar6 = (int)local_5a0 >> 6;
                                                    uVar16 = 1L << ((byte)local_5a0 & 0x3f);
                                                    do {
                                                      puVar18 = (undefined4 *)local_550;
                                                      for (lVar22 = 0x20; lVar22 != 0;
                                                          lVar22 = lVar22 + -1) {
                                                        *puVar18 = 0;
                                                        puVar18 = puVar18 + (ulong)bVar24 * -2 + 1;
                                                      }
                                                      *(ulong *)(local_550 + (long)iVar6 * 8) =
                                                           uVar16;
                                                      local_590 = ZEXT816(500000000) << 0x40;
                                                      iVar7 = (**(code **)(lVar11 + 0x40))
                                                                        (iVar5 + 1,local_550,0,0,
                                                                         local_590,0);
                                                      if (-1 < iVar7) {
                                                        if (((iVar7 != 0) &&
                                                            ((uVar16 & *(ulong *)(local_550 +
                                                                                 (long)iVar6 * 8))
                                                             != 0)) &&
                                                           (lVar22 = FUN_001070a0(uVar10 & 
                                                  0xffffffff,&local_598,4,lVar11), -1 < lVar22)) {
                                                    uVar4 = (uint)local_598 >> 0x18 |
                                                            ((uint)local_598 & 0xff0000) >> 8 |
                                                            ((uint)local_598 & 0xff00) << 8 |
                                                            (uint)local_598 << 0x18;
                                                    local_598 = CONCAT44(local_598._4_4_,uVar4);
                                                    if ((uVar4 - 1 < 0x41) &&
                                                       (lVar22 = FUN_001070a0(uVar10 & 0xffffffff,
                                                                              &local_5a1,1,lVar11),
                                                       -1 < lVar22)) {
                                                      *(ulong *)(param_2 + 0x98) =
                                                           (ulong)((uint)local_598 - 1);
                                                      lVar11 = FUN_001070a0(uVar10 & 0xffffffff,
                                                                            param_2 + 0xa0,
                                                                            (ulong)((uint)local_598
                                                                                   - 1),lVar11);
                                                      if (-1 < lVar11) {
                                                        lVar11 = *(long *)(param_2 + 0x20);
                                                        if (*(long *)(lVar11 + 0x18) != 0) {
                                                          plVar19 = *(long **)(lVar11 + 0x58);
                                                          if ((bStack_2de & 0x3f) == 0) {
                                                            iVar5 = 0x16;
                                                            if (plVar19 != (long *)0x0) {
                                                              iVar5 = *(int *)(plVar19 + -1);
                                                            }
                                                          }
                                                          else {
                                                            iVar5 = (uint)(bStack_2de & 0x3f) * 2;
                                                          }
                                                          *(int *)(lVar11 + 0x60) = iVar5 + 1;
                                                          *plVar19 = *(long *)(lVar11 + 0x18);
                                                          goto LAB_0010a096;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  break;
                                                  }
                                                  piVar9 = (int *)(**(code **)(lVar11 + 0x50))();
                                                  } while (*piVar9 == 4);
                                                  }
                                                }
                                              }
                                            }
                                            else if (iVar5 == 3) goto LAB_00109d56;
                                          }
                                        }
                                      }
                                      else if (iVar5 == 1) {
                                        iVar5 = _Llzma_block_unpadded_size_1
                                                          (bStack_2df & 1,local_2e0 >> 6 & 1,
                                                           bStack_2df >> 1 & 1,bStack_2dd,param_2);
                                        if (iVar5 != 0) {
LAB_0010a096:
                                          local_590[0] = 1;
                                          plVar19 = &local_540;
                                          for (lVar11 = 0x3c; lVar11 != 0; lVar11 = lVar11 + -1) {
                                            *(undefined4 *)plVar19 = 0;
                                            plVar19 = (long *)((long)plVar19 +
                                                              (ulong)bVar24 * -8 + 4);
                                          }
                                          stack0xfffffffffffffab1 = SUB1615(ZEXT816(0),1);
                                          local_550[0] = 0x80;
                                          local_45a = 8;
                                          local_451 = 1;
                                          lVar11 = (**(code **)(*(long *)(param_2 + 8) + 0xe0))
                                                             (local_590,1,0);
                                          if (((lVar11 != 0) &&
                                              (lVar22 = (**(code **)(*(long *)(param_2 + 8) + 0xe0))
                                                                  (local_550,0x100,0), lVar22 != 0))
                                             && (iVar5 = (**(code **)(*(long *)(param_2 + 8) + 0xe8)
                                                         )(param_1,lVar22,lVar11,0), iVar5 == 1))
                                          goto LAB_0010a132;
                                        }
                                      }
                                      else if (iVar5 == 2) {
                                        uVar15 = uVar15 & 0xffff;
                                        if ((bStack_2df & 1) == 0) {
                                          iVar6 = 0;
                                          lVar22 = 0;
                                          iVar5 = 0;
                                        }
                                        else {
                                          if (uVar15 < 9) goto LAB_0010a1da;
                                          iVar5 = *piVar9;
                                          iVar6 = *(int *)((long)auStack_2d7 + uVar23);
                                          uVar15 = uVar15 - 8;
                                          lVar22 = 8;
                                        }
                                        if ((char)bVar3 < '\0') {
                                          if (2 < uVar15) {
                                            uVar10 = (ulong)*(ushort *)((long)piVar9 + lVar22);
                                            uVar15 = uVar15 - 2;
                                            lVar22 = lVar22 + 2;
                                            if (uVar15 <= uVar10) goto LAB_00109fd9;
                                          }
                                        }
                                        else {
                                          uVar10 = (ulong)CONCAT11(auStack_2dc[0],bStack_2dd);
LAB_00109fd9:
                                          if ((((uVar10 <= uVar15) &&
                                               ((iVar6 == 0 ||
                                                (iVar6 = (**(code **)(lVar11 + 0x20))
                                                                   (iVar6,iVar6,iVar6), iVar6 != -1)
                                                ))) && ((iVar5 == 0 ||
                                                        (iVar5 = (**(code **)(*(long *)(param_2 +
                                                                                       0x10) + 0x28)
                                                                 )(iVar5,iVar5,iVar5), iVar5 != -1))
                                                       )) &&
                                             (*(char *)((long)piVar9 + lVar22) != '\0')) {
                                            (**(code **)(*(long *)(param_2 + 0x10) + 0x30))();
                                            goto LAB_0010a096;
                                          }
                                        }
                                      }
                                      else if ((((bStack_2df & 0xc0) == 0xc0) &&
                                               (*(long *)(lVar11 + 0x18) != 0)) &&
                                              (*(code **)(lVar11 + 0x40) != (code *)0x0)) {
                                        _local_550 = ZEXT816(5);
                                        (**(code **)(lVar11 + 0x40))(0,0,0,0,local_550,0);
                                        (**(code **)(lVar11 + 0x18))(0);
                                      }
                                    }
                                  }
                                  else {
                                    puVar18 = (undefined4 *)auStack_54c;
                                    for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                                      *puVar18 = 0;
                                      puVar18 = puVar18 + (ulong)bVar24 * -2 + 1;
                                    }
                                    auStack_54c._4_8_ = &local_2e0;
                                    local_540 = local_2f0;
                                    local_538 = local_2e8;
                                    local_530 = piVar9;
                                    local_528 = (short)uVar15;
                                    local_520 = param_1;
                                    iVar5 = _Llzip_decoder_memconfig_part_0(local_550,param_2);
                                    if (iVar5 != 0) {
                                      *(undefined4 *)(param_2 + 0x18) = 1;
                                      *param_3 = 0;
                                      return 1;
                                    }
                                  }
                                }
                              }
                              else if (iVar5 == 1) {
                                if (((bStack_2df & 1) != 0) ||
                                   (*(long *)(*(long *)(param_2 + 0x20) + 200) != 0))
                                goto LAB_00109b8c;
                              }
                              else {
                                if (iVar5 != 3) {
LAB_00109b8c:
                                  uVar4 = 0;
                                  goto LAB_00109caa;
                                }
                                if (((char)bStack_2dd < '\0') ||
                                   (*(long *)(*(long *)(param_2 + 0x20) + 200) != 0)) {
                                  if ((bStack_2de & 0x20) != 0) {
                                    bVar21 = 0xff;
                                    if ((char)bStack_2de < '\0') {
                                      bVar21 = auStack_2dc[0];
                                    }
                                    bVar12 = 0xff;
                                    if ((bStack_2de & 0x40) != 0) {
                                      bVar12 = bStack_2dd & 0x3f;
                                    }
                                    uVar4 = (uint)CONCAT11(bVar12,bVar21);
                                    if ((bStack_2dd & 0x40) == 0) goto LAB_00109c76;
                                    uVar13 = bStack_2df >> 3 & 7;
                                    uVar4 = uVar4 | (bStack_2df & 7) << 0x10;
                                    goto LAB_00109c9b;
                                  }
                                  uVar4 = 0xffffffff;
                                  goto LAB_00109caa;
                                }
                              }
                            }
                          }
                        }
LAB_0010a1da:
                        *(undefined4 *)(param_2 + 0x18) = 1;
                        puVar20 = local_73;
                        for (lVar11 = 0x39; lVar11 != 0; lVar11 = lVar11 + -1) {
                          *puVar20 = 0;
                          puVar20 = puVar20 + (ulong)bVar24 * -2 + 1;
                        }
                        if ((local_2e0 & 1) != 0) {
                          if (*(long *)(param_2 + 0x10) == 0) {
                            return 0;
                          }
                          pcVar1 = *(code **)(*(long *)(param_2 + 0x10) + 0x18);
                          if (pcVar1 == (code *)0x0) {
                            return 0;
                          }
                          (*pcVar1)(0);
                          return 0;
                        }
                        goto LAB_0010a13a;
                      }
                      if (puVar20 != (undefined *)0x0) {
                        if ((bStack_2df & 1) == 0) {
                          lVar11 = 0;
                        }
                        else {
                          lVar11 = 8;
                          if (local_5f8 < 9) goto LAB_0010a132;
                        }
                        if (((lVar11 + 2U <= local_5f8) &&
                            (uVar15 = (ulong)*(ushort *)(auStack_2dc + uVar23 + lVar11 + 1) +
                                      lVar11 + 2U, uVar15 < local_5f8)) &&
                           (0x71 < local_5f8 - uVar15)) {
                          if (((*(ulong *)(param_2 + 0xe8) <= *(ulong *)(param_2 + 0xe0)) &&
                              (uVar8 = *(ulong *)(param_2 + 0xe0) - *(ulong *)(param_2 + 0xe8),
                              0x38 < uVar8)) && (uVar15 <= uVar8 - 0x39)) {
                            lVar11 = *(long *)(param_2 + 0xf0);
                            uVar8 = 0;
                            do {
                              *(undefined *)(lVar11 + uVar8) = auStack_2dc[uVar8 + uVar23 + 1];
                              uVar8 = uVar8 + 1;
                            } while (uVar15 != uVar8);
                            lVar11 = *(long *)(*(long *)(param_2 + 0x28) + 8);
                            lVar14 = *(long *)(param_2 + 0xe8) + uVar15;
                            *(long *)(param_2 + 0xe8) = lVar14;
                            iVar6 = FUN_00107650(*(undefined8 *)
                                                  (lVar11 + (ulong)*(uint *)(param_2 + 0x100) * 8),
                                                 *(undefined8 *)(param_2 + 0xf0),lVar14,
                                                 *(undefined8 *)(param_2 + 0xe0),
                                                 auStack_2dc + uVar15 + uVar23 + 1,puVar20,param_2,
                                                 lVar22);
                            if (iVar6 != 0) goto LAB_00109ab7;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0010a132:
      *(undefined4 *)(param_2 + 0x18) = 1;
      goto LAB_0010a13a;
    }
    *(undefined4 *)(param_2 + 0x18) = 1;
  }
  if (param_3 == (undefined4 *)0x0) {
    return 0;
  }
LAB_0010a13a:
  *param_3 = 1;
  return 0;
}



undefined8
_Llzma_index_prealloc_0
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  int local_2c [3];
  
  if (((_Llzma12_coder_1 != 0) && (*(code ***)(_Llzma12_coder_1 + 8) != (code **)0x0)) &&
     (UNRECOVERED_JUMPTABLE = **(code ***)(_Llzma12_coder_1 + 8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    if (param_4 != 0) {
      local_2c[0] = 1;
      uVar1 = _Llzma_index_stream_size_1(param_4,_Llzma12_coder_1,local_2c);
      param_5 = param_5 & 0xffffffff;
      if (local_2c[0] == 0) {
        return uVar1;
      }
    }
                    // WARNING: Could not recover jumptable at 0x0010a2dd. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}



undefined8 _Llzma_index_memusage_part_0(undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined local_1c [4];
  
  if (((_Llzma12_coder_1 != 0) && (*(long *)(_Llzma12_coder_1 + 8) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(_Llzma12_coder_1 + 8) + 8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    if (param_2 != 0) {
      _Llzma_index_stream_size_1(param_2,_Llzma12_coder_1,local_1c);
    }
                    // WARNING: Could not recover jumptable at 0x0010a343. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return uVar1;
  }
  return 0;
}



void _Llzma_index_init_0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined local_1c [4];
  
  if (((_Llzma12_coder_1 != 0) && (*(long *)(_Llzma12_coder_1 + 8) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(_Llzma12_coder_1 + 8) + 0x10),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    if (param_1 != 0) {
      _Llzma_index_stream_size_1(param_1,_Llzma12_coder_1,local_1c);
    }
                    // WARNING: Could not recover jumptable at 0x0010a3b4. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void _Llzma12_mode_map_part_1(undefined4 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  byte bVar16;
  undefined local_438 [16];
  undefined4 local_428 [60];
  undefined local_338 [16];
  undefined4 local_328 [60];
  undefined local_238 [16];
  undefined4 local_228;
  undefined local_223 [14];
  undefined local_215;
  undefined local_214 [4];
  undefined local_210;
  undefined local_20f;
  undefined local_20e;
  undefined local_20d;
  undefined local_20c;
  undefined local_20b;
  undefined2 local_20a;
  undefined local_208 [7];
  undefined local_201;
  
  bVar16 = 0;
  piVar2 = *(int **)(_Llzma12_coder_1 + 0x30);
  lVar3 = *(long *)(_Llzma12_coder_1 + 0x10);
  local_438 = ZEXT816(0);
  puVar10 = local_428;
  for (lVar7 = 0x3c; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_338 = ZEXT816(0);
  puVar10 = local_328;
  for (lVar7 = 0x3c; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_238 = ZEXT816(0);
  puVar10 = &local_228;
  for (lVar7 = 0x7c; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  if (param_3 != 0) {
    if (*piVar2 == 1) {
      return;
    }
    if (*(int *)(_Llzma12_coder_1 + 0x90) != 0) {
      return;
    }
    if ((*(long *)(piVar2 + 0x12) != 0) && (*(long *)(piVar2 + 0x14) == 0)) {
      return;
    }
    lVar7 = strlen(param_3);
    uVar1 = param_3 + lVar7;
    while( true ) {
      if (uVar1 <= param_3) {
        return;
      }
      iVar4 = _Lsimple_coder_update_0(param_3,uVar1);
      if (iVar4 == 0x790) break;
      if ((iVar4 == 0x870) || (iVar4 == 0x1a0)) {
        puVar13 = (undefined *)(param_3 + 0x17);
        if (iVar4 == 0x870) {
          puVar13 = (undefined *)(param_3 + 0x16);
        }
        uVar14 = 0;
        puVar12 = (undefined *)0x0;
        uVar15 = 0;
        goto LAB_0010a524;
      }
      param_3 = param_3 + 1;
    }
    local_238._0_2_ = **(undefined2 **)(piVar2 + 4);
    *piVar2 = 1;
    if (((piVar2[2] != 0) && (lVar3 != 0)) && (*(code **)(lVar3 + 0x58) != (code *)0x0)) {
      (**(code **)(lVar3 + 0x58))(0xff);
    }
    FUN_00107420(piVar2,param_1,local_238,param_3);
    iVar4 = piVar2[2];
    goto joined_r0x0010a4e2;
  }
  goto LAB_0010a6fa;
LAB_0010a524:
  do {
    iVar4 = _Lsimple_coder_update_0(param_3,uVar1);
    if (iVar4 == 0x678) {
      if (puVar12 != (undefined *)0x0) {
        uVar14 = param_3 - (long)puVar12;
        uVar8 = uVar14;
        puVar9 = puVar12;
        puVar11 = local_438;
        if (0xff < uVar14) goto LAB_0010a6fa;
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + (ulong)bVar16 * -2 + 1;
          puVar11 = puVar11 + (ulong)bVar16 * -2 + 1;
        }
      }
    }
    else if (iVar4 == 0x810) {
      uVar15 = param_3 - (long)puVar13;
      if (0xff < uVar15) goto LAB_0010a6fa;
      puVar12 = (undefined *)(param_3 + 6);
      puVar9 = puVar13;
      puVar11 = local_338;
      for (uVar8 = uVar15; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + (ulong)bVar16 * -2 + 1;
        puVar11 = puVar11 + (ulong)bVar16 * -2 + 1;
      }
    }
    param_3 = param_3 + 1;
  } while (param_3 < uVar1);
  if ((uVar15 != 0) && (uVar14 != 0)) {
    lVar7 = *(long *)(piVar2 + 6);
    lVar6 = 0;
    do {
      lVar5 = lVar6 + 1;
      local_238[lVar6] = *(undefined *)(lVar7 + lVar6);
      lVar6 = lVar5;
    } while (lVar5 != 0x15);
    lVar7 = *(long *)(piVar2 + 10);
    lVar6 = 0;
    do {
      local_223[lVar6] = *(undefined *)(lVar7 + lVar6);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0xe);
    local_215 = 0x20;
    lVar7 = *(long *)(piVar2 + 0xc);
    lVar6 = 0;
    do {
      local_214[lVar6] = *(undefined *)(lVar7 + lVar6);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 4);
    local_210 = 0x20;
    local_20f = **(undefined **)(piVar2 + 4);
    local_20e = (*(undefined **)(piVar2 + 4))[1];
    local_20d = 0x20;
    local_20c = **(undefined **)(piVar2 + 4);
    local_20b = (*(undefined **)(piVar2 + 4))[1];
    local_20a = 0x5b20;
    lVar7 = *(long *)(piVar2 + 8);
    lVar6 = 0;
    do {
      local_208[lVar6] = *(undefined *)(lVar7 + lVar6);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 7);
    local_201 = 0x5d;
    *piVar2 = 1;
    if (((piVar2[2] != 0) && (lVar3 != 0)) && (*(code **)(lVar3 + 0x58) != (code *)0x0)) {
      (**(code **)(lVar3 + 0x58))(0xff);
    }
    FUN_00107420(piVar2,3,local_238,local_338,local_438);
    iVar4 = piVar2[2];
joined_r0x0010a4e2:
    if (iVar4 == 0) {
      return;
    }
    if (lVar3 == 0) {
      return;
    }
    if (*(code **)(lVar3 + 0x58) == (code *)0x0) {
      return;
    }
    (**(code **)(lVar3 + 0x58))(0x80000000);
    return;
  }
LAB_0010a6fa:
  *piVar2 = 1;
  return;
}



void _cpuid(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
           undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)cpuid_basic_info(0);
  }
  else if (param_1 == 1) {
    puVar1 = (undefined4 *)cpuid_Version_info(1);
  }
  else if (param_1 == 2) {
    puVar1 = (undefined4 *)cpuid_cache_tlb_info(2);
  }
  else if (param_1 == 3) {
    puVar1 = (undefined4 *)cpuid_serial_info(3);
  }
  else if (param_1 == 4) {
    puVar1 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (param_1 == 5) {
    puVar1 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (param_1 == 6) {
    puVar1 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
  }
  else if (param_1 == 7) {
    puVar1 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (param_1 == 9) {
    puVar1 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
  }
  else if (param_1 == 10) {
    puVar1 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (param_1 == 0xb) {
    puVar1 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
  }
  else if (param_1 == 0xd) {
    puVar1 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
  }
  else if (param_1 == 0xf) {
    puVar1 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
  }
  else if (param_1 == -0x7ffffffe) {
    puVar1 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
  }
  else if (param_1 == -0x7ffffffd) {
    puVar1 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
  }
  else if (param_1 == -0x7ffffffc) {
    puVar1 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
  }
  else {
    puVar1 = (undefined4 *)cpuid(param_1);
  }
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *param_2 = *puVar1;
  *param_3 = uVar2;
  *param_4 = uVar4;
  *param_5 = uVar3;
  return;
}



undefined4 FUN_0010a740(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_54;
  undefined local_50 [4];
  undefined local_4c [4];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = 0;
  if (DAT_0010cb50 == 1) {
    local_48 = 1;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = param_2;
    _Llzma_block_param_encoder_0(&local_48);
    uVar1 = param_2;
  }
  DAT_0010cb50 = DAT_0010cb50 + 1;
  _cpuid(param_1,&local_54,local_50,local_4c,&local_48,uVar1);
  return local_54;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _Llzma_block_param_encoder_0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  param_1[4] = (long)param_1;
  _Llzma_delta_props_decoder();
  lVar2 = _DAT_0010e000;
  param_1[5] = param_1[2];
  lVar3 = *param_1 - param_1[4];
  param_1[1] = lVar3;
  plVar4 = (long *)(lVar3 + *(long *)(lVar2 + 8));
  param_1[2] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    lVar1 = *plVar4;
    *plVar4 = lVar3 + *(long *)(lVar2 + 0x10);
    (*_DAT_0010e008)();
    *plVar4 = lVar1;
  }
  return;
}



undefined8
_get_cpuid(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010a740(param_1 & 0x80000000,param_6);
  if ((uVar1 == 0) || (uVar1 < param_1)) {
    uVar2 = 0;
  }
  else {
    _cpuid(param_1,param_2,param_3,param_4,param_5,0);
    uVar2 = 1;
  }
  return uVar2;
}



// Count number of one bits in value

int count_one_bits(ulong value)

{
  int nbits;
  
  nbits = 0;
  for (; value != 0; value = value & value - 1) {
    nbits = nbits + 1;
  }
  return nbits;
}



undefined  [16]
_Lsimple_coder_update_0(byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  ushort *puVar1;
  byte bVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  ushort uVar8;
  uint uVar9;
  ulong *puVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  undefined auVar14 [16];
  
  iVar6 = _Llzma2_decoder_end_1(0,10,8,1);
  uVar7 = 0;
  if (iVar6 != 0) {
    pbVar11 = param_1 + 0x2c;
    if ((param_2 != (byte *)0x0) && (param_2 < pbVar11)) {
      pbVar11 = param_2;
    }
    lVar12 = 0x10c2c8;
    puVar10 = (ulong *)(_Lcrc64_clmul_1 + 0x760);
    for (; param_1 <= pbVar11; param_1 = param_1 + 1) {
      bVar2 = *param_1;
      uVar9 = (uint)bVar2;
      if ((char)bVar2 < '\0') break;
      if (bVar2 < 0x40) {
        uVar13 = *puVar10;
        uVar7 = 0;
        if ((uVar13 >> (bVar2 & 0x3f) & 1) == 0) goto LAB_0010a9a1;
      }
      else {
        uVar13 = puVar10[1];
        uVar9 = uVar9 - 0x40;
        if ((uVar13 >> ((byte)uVar9 & 0x3f) & 1) == 0) break;
        uVar7 = count_one_bits(*puVar10);
      }
      while( true ) {
        lVar3 = 0;
        if (uVar13 != 0) {
          for (; (uVar13 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
          }
        }
        if ((uint)lVar3 == (uVar9 & 0xff)) break;
        uVar7 = (ulong)((int)uVar7 + 1);
        uVar13 = uVar13 & uVar13 - 1;
      }
      puVar1 = (ushort *)(lVar12 + (uVar7 & 0xffffffff) * 4);
      uVar8 = *puVar1;
      uVar5 = puVar1[1];
      uVar7 = (ulong)(uint)(int)(short)uVar5;
      if ((uVar8 & 4) != 0) goto LAB_0010a9a1;
      if ((uVar8 & 2) == 0) {
        uVar5 = -uVar5;
      }
      else {
        uVar8 = uVar8 & 0xfffd;
      }
      uVar4 = uVar8 & 0xfffe;
      if ((uVar8 & 1) == 0) {
        uVar4 = -uVar8;
      }
      lVar12 = lVar12 + (short)(uVar5 - 4);
      puVar10 = (ulong *)((long)puVar10 + (long)(short)(uVar4 - 0x10));
    }
    uVar7 = 0;
  }
LAB_0010a9a1:
  auVar14._8_8_ = param_4;
  auVar14._0_8_ = uVar7;
  return auVar14;
}



undefined8 _Llzma_lzma_encoder_init_0(long param_1,uint *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *param_2;
  if (uVar2 < 0x1c8) {
    iVar3 = *(int *)(param_1 + 0x28);
    if (((iVar3 != 0x109) && (iVar3 != 0xbb)) &&
       ((0x2e < iVar3 - 0x83U || ((0x410100000101U >> ((byte)(iVar3 - 0x83U) & 0x3f) & 1) == 0)))) {
      pbVar1 = (byte *)(_Llzma12_coder_1 + 0x108 + (ulong)(uVar2 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar2 & 7));
    }
    *param_2 = uVar2 + 1;
  }
  return 1;
}



bool _Llzma_memlimit_get_1
               (long param_1,undefined8 param_2,undefined4 param_3,uint param_4,int param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 local_9c [3];
  long local_90;
  long local_88;
  
  plVar3 = &local_90;
  for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined4 *)plVar3 = 0;
    plVar3 = (long *)((long)plVar3 + 4);
  }
  local_9c[0] = param_3;
  if (param_5 != 0) {
    iVar1 = _Llzma_optimum_normal_0(param_1,param_2,0,&local_90);
    if (iVar1 == 0) {
      return false;
    }
    param_1 = local_88 + local_90;
  }
  uVar4 = 0;
  do {
    iVar1 = _Llzma_block_total_size_0(param_1,param_2,&local_90);
    if (iVar1 == 0) {
LAB_0010aaa0:
      return param_4 == (uint)uVar4;
    }
    if (uVar4 == param_4) {
      if (param_4 < (uint)uVar4) {
        return false;
      }
      goto LAB_0010aaa0;
    }
    uVar4 = uVar4 + 1;
    iVar1 = _Llzma_lzma_encoder_init_0(&local_90,local_9c);
    if (iVar1 == 0) {
      return false;
    }
    param_1 = local_88 + local_90;
  } while( true );
}



undefined8
_Lrc_read_init_part_0(long param_1,undefined8 param_2,undefined4 param_3,int param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  
  lVar1 = _Llzma12_coder_1;
  local_30[0] = 0;
  if ((_Llzma12_coder_1 == 0) || (*(char *)(_Llzma12_coder_1 + 0x141 + (ulong)param_5) != '\0')) {
LAB_0010ab80:
    uVar3 = 1;
  }
  else {
    *(undefined *)(_Llzma12_coder_1 + 0x141 + (ulong)param_5) = 1;
    iVar2 = _Llzma2_encoder_init_1
                      (param_2,local_30,0,*(undefined8 *)(lVar1 + 0x80),
                       *(undefined8 *)(lVar1 + 0x88),1);
    if (iVar2 != 0) {
      iVar2 = _Llzma_memlimit_get_1
                        (local_30[0],*(undefined8 *)(_Llzma12_coder_1 + 0x88),param_3,param_4,
                         param_1 == 0);
      if (iVar2 != 0) {
        *(int *)(_Llzma12_coder_1 + 0x160) = *(int *)(_Llzma12_coder_1 + 0x160) + param_4;
        goto LAB_0010ab80;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



undefined8
_Llzma_check_init_part_0
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    uVar1 = _Lrc_read_init_part_0(param_5,param_5,param_1,param_3,param_2);
    return uVar1;
  }
  return 0;
}



undefined  [16]
_Llzma2_decoder_end_1
          (ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5
          )

{
  int iVar1;
  ulong uVar2;
  undefined auVar3 [16];
  ulong unaff_retaddr;
  
  uVar2 = param_1;
  if (param_1 < 2) {
    uVar2 = unaff_retaddr;
  }
  iVar1 = _Lrc_read_init_part_0(param_1,uVar2,param_2,param_3,param_4);
  auVar3._1_7_ = 0;
  auVar3[0] = 0 < iVar1;
  auVar3._8_8_ = param_5;
  return auVar3;
}



uint _Llzma_index_iter_rewind_cold
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 unaff_retaddr;
  
  uVar1 = _Lrc_read_init_part_0(0,unaff_retaddr,param_1,param_2,param_3);
  return uVar1 | param_4;
}



undefined8 _Llzma_index_memusage_0(long param_1,ulong param_2,code *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  while( true ) {
    while( true ) {
      if (param_2 <= uVar5) {
        return 1;
      }
      lVar1 = uVar5 * 0x18;
      uVar5 = (ulong)((int)uVar5 + 1);
      puVar2 = (undefined8 *)(lVar1 + param_1);
      if (*(int *)((long)puVar2 + 0x14) != 0) break;
      *(int *)((long)puVar2 + 0x14) = iVar4;
    }
    uVar3 = (*param_3)(*(undefined4 *)(puVar2 + 1),*(undefined4 *)((long)puVar2 + 0xc),
                       *(undefined4 *)(puVar2 + 2),uVar5,*puVar2);
    if ((int)uVar3 == 0) break;
    iVar4 = iVar4 + 1;
  }
  return uVar3;
}



undefined8 _Llzma_block_total_size_0(ulong param_1,ulong param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 == (long *)0x0) {
    return 0;
  }
  while( true ) {
    if ((param_2 <= param_1) || (iVar1 = _Lx86_code_part_0(param_3,param_1,param_2), iVar1 == 0)) {
      return 0;
    }
    if (((((*(uint *)(param_3 + 5) & 0xfffffffd) == 0x109) ||
         ((uVar2 = *(uint *)(param_3 + 5) - 0x81, uVar2 < 0x3b &&
          ((0x505050500000505U >> ((byte)uVar2 & 0x3f) & 1) != 0)))) &&
        ((*(ushort *)(param_3 + 2) & 0xf80) == 0)) &&
       (((*(byte *)((long)param_3 + 0x1b) & 5) == 0 && (*(char *)((long)param_3 + 0x1d) == '\x03')))
       ) break;
    param_1 = param_3[1] + *param_3;
  }
  return 1;
}


