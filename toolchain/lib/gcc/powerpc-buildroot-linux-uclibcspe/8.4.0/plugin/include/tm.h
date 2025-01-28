#ifndef GCC_TM_H
#define GCC_TM_H
#define TARGET_CPU_DEFAULT ("8548")
#ifndef LIBC_GLIBC
# define LIBC_GLIBC 1
#endif
#ifndef LIBC_UCLIBC
# define LIBC_UCLIBC 2
#endif
#ifndef LIBC_BIONIC
# define LIBC_BIONIC 3
#endif
#ifndef LIBC_MUSL
# define LIBC_MUSL 4
#endif
#ifndef DEFAULT_LIBC
# define DEFAULT_LIBC LIBC_UCLIBC
#endif
#ifndef ANDROID_DEFAULT
# define ANDROID_DEFAULT 0
#endif
#ifdef IN_GCC
# include "options.h"
# include "insn-constants.h"
# include "config/powerpcspe/powerpcspe.h"
# include "config/dbxelf.h"
# include "config/elfos.h"
# include "config/gnu-user.h"
# include "config/freebsd-spec.h"
# include "config/powerpcspe/sysv4.h"
# include "config/powerpcspe/linux.h"
# include "config/glibc-stdint.h"
# include "config/powerpcspe/linuxspe.h"
# include "config/powerpcspe/e500.h"
# include "config/powerpcspe/option-defaults.h"
# include "config/initfini-array.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE && !defined USED_FOR_TARGET
# include "insn-flags.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE
# include "insn-modes.h"
#endif
# include "defaults.h"
#endif /* GCC_TM_H */
