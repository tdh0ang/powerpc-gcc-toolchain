/* WARNING!!! AUTO-GENERATED FILE!!! DO NOT EDIT!!! */
/* See extra/scripts/gen_bits_syscall_h.sh for more information. */

#ifndef _BITS_SYSNUM_H
#define _BITS_SYSNUM_H

#ifndef _SYSCALL_H
# error "Never use <bits/sysnum.h> directly; include <sys/syscall.h> instead."
#endif

#undef __NR_restart_syscall
#define __NR_restart_syscall 0
#define SYS_restart_syscall __NR_restart_syscall
#undef __NR_exit
#define __NR_exit 1
#define SYS_exit __NR_exit
#undef __NR_fork
#define __NR_fork 2
#define SYS_fork __NR_fork
#undef __NR_read
#define __NR_read 3
#define SYS_read __NR_read
#undef __NR_write
#define __NR_write 4
#define SYS_write __NR_write
#undef __NR_open
#define __NR_open 5
#define SYS_open __NR_open
#undef __NR_close
#define __NR_close 6
#define SYS_close __NR_close
#undef __NR_waitpid
#define __NR_waitpid 7
#define SYS_waitpid __NR_waitpid
#undef __NR_creat
#define __NR_creat 8
#define SYS_creat __NR_creat
#undef __NR_link
#define __NR_link 9
#define SYS_link __NR_link
#undef __NR_unlink
#define __NR_unlink 10
#define SYS_unlink __NR_unlink
#undef __NR_execve
#define __NR_execve 11
#define SYS_execve __NR_execve
#undef __NR_chdir
#define __NR_chdir 12
#define SYS_chdir __NR_chdir
#undef __NR_time
#define __NR_time 13
#define SYS_time __NR_time
#undef __NR_mknod
#define __NR_mknod 14
#define SYS_mknod __NR_mknod
#undef __NR_chmod
#define __NR_chmod 15
#define SYS_chmod __NR_chmod
#undef __NR_lchown
#define __NR_lchown 16
#define SYS_lchown __NR_lchown
#undef __NR_break
#define __NR_break 17
#define SYS_break __NR_break
#undef __NR_oldstat
#define __NR_oldstat 18
#define SYS_oldstat __NR_oldstat
#undef __NR_lseek
#define __NR_lseek 19
#define SYS_lseek __NR_lseek
#undef __NR_getpid
#define __NR_getpid 20
#define SYS_getpid __NR_getpid
#undef __NR_mount
#define __NR_mount 21
#define SYS_mount __NR_mount
#undef __NR_umount
#define __NR_umount 22
#define SYS_umount __NR_umount
#undef __NR_setuid
#define __NR_setuid 23
#define SYS_setuid __NR_setuid
#undef __NR_getuid
#define __NR_getuid 24
#define SYS_getuid __NR_getuid
#undef __NR_stime
#define __NR_stime 25
#define SYS_stime __NR_stime
#undef __NR_ptrace
#define __NR_ptrace 26
#define SYS_ptrace __NR_ptrace
#undef __NR_alarm
#define __NR_alarm 27
#define SYS_alarm __NR_alarm
#undef __NR_oldfstat
#define __NR_oldfstat 28
#define SYS_oldfstat __NR_oldfstat
#undef __NR_pause
#define __NR_pause 29
#define SYS_pause __NR_pause
#undef __NR_utime
#define __NR_utime 30
#define SYS_utime __NR_utime
#undef __NR_stty
#define __NR_stty 31
#define SYS_stty __NR_stty
#undef __NR_gtty
#define __NR_gtty 32
#define SYS_gtty __NR_gtty
#undef __NR_access
#define __NR_access 33
#define SYS_access __NR_access
#undef __NR_nice
#define __NR_nice 34
#define SYS_nice __NR_nice
#undef __NR_ftime
#define __NR_ftime 35
#define SYS_ftime __NR_ftime
#undef __NR_sync
#define __NR_sync 36
#define SYS_sync __NR_sync
#undef __NR_kill
#define __NR_kill 37
#define SYS_kill __NR_kill
#undef __NR_rename
#define __NR_rename 38
#define SYS_rename __NR_rename
#undef __NR_mkdir
#define __NR_mkdir 39
#define SYS_mkdir __NR_mkdir
#undef __NR_rmdir
#define __NR_rmdir 40
#define SYS_rmdir __NR_rmdir
#undef __NR_dup
#define __NR_dup 41
#define SYS_dup __NR_dup
#undef __NR_pipe
#define __NR_pipe 42
#define SYS_pipe __NR_pipe
#undef __NR_times
#define __NR_times 43
#define SYS_times __NR_times
#undef __NR_prof
#define __NR_prof 44
#define SYS_prof __NR_prof
#undef __NR_brk
#define __NR_brk 45
#define SYS_brk __NR_brk
#undef __NR_setgid
#define __NR_setgid 46
#define SYS_setgid __NR_setgid
#undef __NR_getgid
#define __NR_getgid 47
#define SYS_getgid __NR_getgid
#undef __NR_signal
#define __NR_signal 48
#define SYS_signal __NR_signal
#undef __NR_geteuid
#define __NR_geteuid 49
#define SYS_geteuid __NR_geteuid
#undef __NR_getegid
#define __NR_getegid 50
#define SYS_getegid __NR_getegid
#undef __NR_acct
#define __NR_acct 51
#define SYS_acct __NR_acct
#undef __NR_umount2
#define __NR_umount2 52
#define SYS_umount2 __NR_umount2
#undef __NR_lock
#define __NR_lock 53
#define SYS_lock __NR_lock
#undef __NR_ioctl
#define __NR_ioctl 54
#define SYS_ioctl __NR_ioctl
#undef __NR_fcntl
#define __NR_fcntl 55
#define SYS_fcntl __NR_fcntl
#undef __NR_mpx
#define __NR_mpx 56
#define SYS_mpx __NR_mpx
#undef __NR_setpgid
#define __NR_setpgid 57
#define SYS_setpgid __NR_setpgid
#undef __NR_ulimit
#define __NR_ulimit 58
#define SYS_ulimit __NR_ulimit
#undef __NR_oldolduname
#define __NR_oldolduname 59
#define SYS_oldolduname __NR_oldolduname
#undef __NR_umask
#define __NR_umask 60
#define SYS_umask __NR_umask
#undef __NR_chroot
#define __NR_chroot 61
#define SYS_chroot __NR_chroot
#undef __NR_ustat
#define __NR_ustat 62
#define SYS_ustat __NR_ustat
#undef __NR_dup2
#define __NR_dup2 63
#define SYS_dup2 __NR_dup2
#undef __NR_getppid
#define __NR_getppid 64
#define SYS_getppid __NR_getppid
#undef __NR_getpgrp
#define __NR_getpgrp 65
#define SYS_getpgrp __NR_getpgrp
#undef __NR_setsid
#define __NR_setsid 66
#define SYS_setsid __NR_setsid
#undef __NR_sigaction
#define __NR_sigaction 67
#define SYS_sigaction __NR_sigaction
#undef __NR_sgetmask
#define __NR_sgetmask 68
#define SYS_sgetmask __NR_sgetmask
#undef __NR_ssetmask
#define __NR_ssetmask 69
#define SYS_ssetmask __NR_ssetmask
#undef __NR_setreuid
#define __NR_setreuid 70
#define SYS_setreuid __NR_setreuid
#undef __NR_setregid
#define __NR_setregid 71
#define SYS_setregid __NR_setregid
#undef __NR_sigsuspend
#define __NR_sigsuspend 72
#define SYS_sigsuspend __NR_sigsuspend
#undef __NR_sigpending
#define __NR_sigpending 73
#define SYS_sigpending __NR_sigpending
#undef __NR_sethostname
#define __NR_sethostname 74
#define SYS_sethostname __NR_sethostname
#undef __NR_setrlimit
#define __NR_setrlimit 75
#define SYS_setrlimit __NR_setrlimit
#undef __NR_getrlimit
#define __NR_getrlimit 76
#define SYS_getrlimit __NR_getrlimit
#undef __NR_getrusage
#define __NR_getrusage 77
#define SYS_getrusage __NR_getrusage
#undef __NR_gettimeofday
#define __NR_gettimeofday 78
#define SYS_gettimeofday __NR_gettimeofday
#undef __NR_settimeofday
#define __NR_settimeofday 79
#define SYS_settimeofday __NR_settimeofday
#undef __NR_getgroups
#define __NR_getgroups 80
#define SYS_getgroups __NR_getgroups
#undef __NR_setgroups
#define __NR_setgroups 81
#define SYS_setgroups __NR_setgroups
#undef __NR_select
#define __NR_select 82
#define SYS_select __NR_select
#undef __NR_symlink
#define __NR_symlink 83
#define SYS_symlink __NR_symlink
#undef __NR_oldlstat
#define __NR_oldlstat 84
#define SYS_oldlstat __NR_oldlstat
#undef __NR_readlink
#define __NR_readlink 85
#define SYS_readlink __NR_readlink
#undef __NR_uselib
#define __NR_uselib 86
#define SYS_uselib __NR_uselib
#undef __NR_swapon
#define __NR_swapon 87
#define SYS_swapon __NR_swapon
#undef __NR_reboot
#define __NR_reboot 88
#define SYS_reboot __NR_reboot
#undef __NR_readdir
#define __NR_readdir 89
#define SYS_readdir __NR_readdir
#undef __NR_mmap
#define __NR_mmap 90
#define SYS_mmap __NR_mmap
#undef __NR_munmap
#define __NR_munmap 91
#define SYS_munmap __NR_munmap
#undef __NR_truncate
#define __NR_truncate 92
#define SYS_truncate __NR_truncate
#undef __NR_ftruncate
#define __NR_ftruncate 93
#define SYS_ftruncate __NR_ftruncate
#undef __NR_fchmod
#define __NR_fchmod 94
#define SYS_fchmod __NR_fchmod
#undef __NR_fchown
#define __NR_fchown 95
#define SYS_fchown __NR_fchown
#undef __NR_getpriority
#define __NR_getpriority 96
#define SYS_getpriority __NR_getpriority
#undef __NR_setpriority
#define __NR_setpriority 97
#define SYS_setpriority __NR_setpriority
#undef __NR_profil
#define __NR_profil 98
#define SYS_profil __NR_profil
#undef __NR_statfs
#define __NR_statfs 99
#define SYS_statfs __NR_statfs
#undef __NR_fstatfs
#define __NR_fstatfs 100
#define SYS_fstatfs __NR_fstatfs
#undef __NR_ioperm
#define __NR_ioperm 101
#define SYS_ioperm __NR_ioperm
#undef __NR_socketcall
#define __NR_socketcall 102
#define SYS_socketcall __NR_socketcall
#undef __NR_syslog
#define __NR_syslog 103
#define SYS_syslog __NR_syslog
#undef __NR_setitimer
#define __NR_setitimer 104
#define SYS_setitimer __NR_setitimer
#undef __NR_getitimer
#define __NR_getitimer 105
#define SYS_getitimer __NR_getitimer
#undef __NR_stat
#define __NR_stat 106
#define SYS_stat __NR_stat
#undef __NR_lstat
#define __NR_lstat 107
#define SYS_lstat __NR_lstat
#undef __NR_fstat
#define __NR_fstat 108
#define SYS_fstat __NR_fstat
#undef __NR_olduname
#define __NR_olduname 109
#define SYS_olduname __NR_olduname
#undef __NR_iopl
#define __NR_iopl 110
#define SYS_iopl __NR_iopl
#undef __NR_vhangup
#define __NR_vhangup 111
#define SYS_vhangup __NR_vhangup
#undef __NR_idle
#define __NR_idle 112
#define SYS_idle __NR_idle
#undef __NR_vm86
#define __NR_vm86 113
#define SYS_vm86 __NR_vm86
#undef __NR_wait4
#define __NR_wait4 114
#define SYS_wait4 __NR_wait4
#undef __NR_swapoff
#define __NR_swapoff 115
#define SYS_swapoff __NR_swapoff
#undef __NR_sysinfo
#define __NR_sysinfo 116
#define SYS_sysinfo __NR_sysinfo
#undef __NR_ipc
#define __NR_ipc 117
#define SYS_ipc __NR_ipc
#undef __NR_fsync
#define __NR_fsync 118
#define SYS_fsync __NR_fsync
#undef __NR_sigreturn
#define __NR_sigreturn 119
#define SYS_sigreturn __NR_sigreturn
#undef __NR_clone
#define __NR_clone 120
#define SYS_clone __NR_clone
#undef __NR_setdomainname
#define __NR_setdomainname 121
#define SYS_setdomainname __NR_setdomainname
#undef __NR_uname
#define __NR_uname 122
#define SYS_uname __NR_uname
#undef __NR_modify_ldt
#define __NR_modify_ldt 123
#define SYS_modify_ldt __NR_modify_ldt
#undef __NR_adjtimex
#define __NR_adjtimex 124
#define SYS_adjtimex __NR_adjtimex
#undef __NR_mprotect
#define __NR_mprotect 125
#define SYS_mprotect __NR_mprotect
#undef __NR_sigprocmask
#define __NR_sigprocmask 126
#define SYS_sigprocmask __NR_sigprocmask
#undef __NR_create_module
#define __NR_create_module 127
#define SYS_create_module __NR_create_module
#undef __NR_init_module
#define __NR_init_module 128
#define SYS_init_module __NR_init_module
#undef __NR_delete_module
#define __NR_delete_module 129
#define SYS_delete_module __NR_delete_module
#undef __NR_get_kernel_syms
#define __NR_get_kernel_syms 130
#define SYS_get_kernel_syms __NR_get_kernel_syms
#undef __NR_quotactl
#define __NR_quotactl 131
#define SYS_quotactl __NR_quotactl
#undef __NR_getpgid
#define __NR_getpgid 132
#define SYS_getpgid __NR_getpgid
#undef __NR_fchdir
#define __NR_fchdir 133
#define SYS_fchdir __NR_fchdir
#undef __NR_bdflush
#define __NR_bdflush 134
#define SYS_bdflush __NR_bdflush
#undef __NR_sysfs
#define __NR_sysfs 135
#define SYS_sysfs __NR_sysfs
#undef __NR_personality
#define __NR_personality 136
#define SYS_personality __NR_personality
#undef __NR_afs_syscall
#define __NR_afs_syscall 137
#define SYS_afs_syscall __NR_afs_syscall
#undef __NR_setfsuid
#define __NR_setfsuid 138
#define SYS_setfsuid __NR_setfsuid
#undef __NR_setfsgid
#define __NR_setfsgid 139
#define SYS_setfsgid __NR_setfsgid
#undef __NR__llseek
#define __NR__llseek 140
#define SYS__llseek __NR__llseek
#undef __NR_getdents
#define __NR_getdents 141
#define SYS_getdents __NR_getdents
#undef __NR__newselect
#define __NR__newselect 142
#define SYS__newselect __NR__newselect
#undef __NR_flock
#define __NR_flock 143
#define SYS_flock __NR_flock
#undef __NR_msync
#define __NR_msync 144
#define SYS_msync __NR_msync
#undef __NR_readv
#define __NR_readv 145
#define SYS_readv __NR_readv
#undef __NR_writev
#define __NR_writev 146
#define SYS_writev __NR_writev
#undef __NR_getsid
#define __NR_getsid 147
#define SYS_getsid __NR_getsid
#undef __NR_fdatasync
#define __NR_fdatasync 148
#define SYS_fdatasync __NR_fdatasync
#undef __NR__sysctl
#define __NR__sysctl 149
#define SYS__sysctl __NR__sysctl
#undef __NR_mlock
#define __NR_mlock 150
#define SYS_mlock __NR_mlock
#undef __NR_munlock
#define __NR_munlock 151
#define SYS_munlock __NR_munlock
#undef __NR_mlockall
#define __NR_mlockall 152
#define SYS_mlockall __NR_mlockall
#undef __NR_munlockall
#define __NR_munlockall 153
#define SYS_munlockall __NR_munlockall
#undef __NR_sched_setparam
#define __NR_sched_setparam 154
#define SYS_sched_setparam __NR_sched_setparam
#undef __NR_sched_getparam
#define __NR_sched_getparam 155
#define SYS_sched_getparam __NR_sched_getparam
#undef __NR_sched_setscheduler
#define __NR_sched_setscheduler 156
#define SYS_sched_setscheduler __NR_sched_setscheduler
#undef __NR_sched_getscheduler
#define __NR_sched_getscheduler 157
#define SYS_sched_getscheduler __NR_sched_getscheduler
#undef __NR_sched_yield
#define __NR_sched_yield 158
#define SYS_sched_yield __NR_sched_yield
#undef __NR_sched_get_priority_max
#define __NR_sched_get_priority_max 159
#define SYS_sched_get_priority_max __NR_sched_get_priority_max
#undef __NR_sched_get_priority_min
#define __NR_sched_get_priority_min 160
#define SYS_sched_get_priority_min __NR_sched_get_priority_min
#undef __NR_sched_rr_get_interval
#define __NR_sched_rr_get_interval 161
#define SYS_sched_rr_get_interval __NR_sched_rr_get_interval
#undef __NR_nanosleep
#define __NR_nanosleep 162
#define SYS_nanosleep __NR_nanosleep
#undef __NR_mremap
#define __NR_mremap 163
#define SYS_mremap __NR_mremap
#undef __NR_setresuid
#define __NR_setresuid 164
#define SYS_setresuid __NR_setresuid
#undef __NR_getresuid
#define __NR_getresuid 165
#define SYS_getresuid __NR_getresuid
#undef __NR_query_module
#define __NR_query_module 166
#define SYS_query_module __NR_query_module
#undef __NR_poll
#define __NR_poll 167
#define SYS_poll __NR_poll
#undef __NR_nfsservctl
#define __NR_nfsservctl 168
#define SYS_nfsservctl __NR_nfsservctl
#undef __NR_setresgid
#define __NR_setresgid 169
#define SYS_setresgid __NR_setresgid
#undef __NR_getresgid
#define __NR_getresgid 170
#define SYS_getresgid __NR_getresgid
#undef __NR_prctl
#define __NR_prctl 171
#define SYS_prctl __NR_prctl
#undef __NR_rt_sigreturn
#define __NR_rt_sigreturn 172
#define SYS_rt_sigreturn __NR_rt_sigreturn
#undef __NR_rt_sigaction
#define __NR_rt_sigaction 173
#define SYS_rt_sigaction __NR_rt_sigaction
#undef __NR_rt_sigprocmask
#define __NR_rt_sigprocmask 174
#define SYS_rt_sigprocmask __NR_rt_sigprocmask
#undef __NR_rt_sigpending
#define __NR_rt_sigpending 175
#define SYS_rt_sigpending __NR_rt_sigpending
#undef __NR_rt_sigtimedwait
#define __NR_rt_sigtimedwait 176
#define SYS_rt_sigtimedwait __NR_rt_sigtimedwait
#undef __NR_rt_sigqueueinfo
#define __NR_rt_sigqueueinfo 177
#define SYS_rt_sigqueueinfo __NR_rt_sigqueueinfo
#undef __NR_rt_sigsuspend
#define __NR_rt_sigsuspend 178
#define SYS_rt_sigsuspend __NR_rt_sigsuspend
#undef __NR_pread64
#define __NR_pread64 179
#define SYS_pread64 __NR_pread64
#undef __NR_pwrite64
#define __NR_pwrite64 180
#define SYS_pwrite64 __NR_pwrite64
#undef __NR_chown
#define __NR_chown 181
#define SYS_chown __NR_chown
#undef __NR_getcwd
#define __NR_getcwd 182
#define SYS_getcwd __NR_getcwd
#undef __NR_capget
#define __NR_capget 183
#define SYS_capget __NR_capget
#undef __NR_capset
#define __NR_capset 184
#define SYS_capset __NR_capset
#undef __NR_sigaltstack
#define __NR_sigaltstack 185
#define SYS_sigaltstack __NR_sigaltstack
#undef __NR_sendfile
#define __NR_sendfile 186
#define SYS_sendfile __NR_sendfile
#undef __NR_getpmsg
#define __NR_getpmsg 187
#define SYS_getpmsg __NR_getpmsg
#undef __NR_putpmsg
#define __NR_putpmsg 188
#define SYS_putpmsg __NR_putpmsg
#undef __NR_vfork
#define __NR_vfork 189
#define SYS_vfork __NR_vfork
#undef __NR_ugetrlimit
#define __NR_ugetrlimit 190
#define SYS_ugetrlimit __NR_ugetrlimit
#undef __NR_readahead
#define __NR_readahead 191
#define SYS_readahead __NR_readahead
#undef __NR_mmap2
#define __NR_mmap2 192
#define SYS_mmap2 __NR_mmap2
#undef __NR_truncate64
#define __NR_truncate64 193
#define SYS_truncate64 __NR_truncate64
#undef __NR_ftruncate64
#define __NR_ftruncate64 194
#define SYS_ftruncate64 __NR_ftruncate64
#undef __NR_stat64
#define __NR_stat64 195
#define SYS_stat64 __NR_stat64
#undef __NR_lstat64
#define __NR_lstat64 196
#define SYS_lstat64 __NR_lstat64
#undef __NR_fstat64
#define __NR_fstat64 197
#define SYS_fstat64 __NR_fstat64
#undef __NR_pciconfig_read
#define __NR_pciconfig_read 198
#define SYS_pciconfig_read __NR_pciconfig_read
#undef __NR_pciconfig_write
#define __NR_pciconfig_write 199
#define SYS_pciconfig_write __NR_pciconfig_write
#undef __NR_pciconfig_iobase
#define __NR_pciconfig_iobase 200
#define SYS_pciconfig_iobase __NR_pciconfig_iobase
#undef __NR_multiplexer
#define __NR_multiplexer 201
#define SYS_multiplexer __NR_multiplexer
#undef __NR_getdents64
#define __NR_getdents64 202
#define SYS_getdents64 __NR_getdents64
#undef __NR_pivot_root
#define __NR_pivot_root 203
#define SYS_pivot_root __NR_pivot_root
#undef __NR_fcntl64
#define __NR_fcntl64 204
#define SYS_fcntl64 __NR_fcntl64
#undef __NR_madvise
#define __NR_madvise 205
#define SYS_madvise __NR_madvise
#undef __NR_mincore
#define __NR_mincore 206
#define SYS_mincore __NR_mincore
#undef __NR_gettid
#define __NR_gettid 207
#define SYS_gettid __NR_gettid
#undef __NR_tkill
#define __NR_tkill 208
#define SYS_tkill __NR_tkill
#undef __NR_setxattr
#define __NR_setxattr 209
#define SYS_setxattr __NR_setxattr
#undef __NR_lsetxattr
#define __NR_lsetxattr 210
#define SYS_lsetxattr __NR_lsetxattr
#undef __NR_fsetxattr
#define __NR_fsetxattr 211
#define SYS_fsetxattr __NR_fsetxattr
#undef __NR_getxattr
#define __NR_getxattr 212
#define SYS_getxattr __NR_getxattr
#undef __NR_lgetxattr
#define __NR_lgetxattr 213
#define SYS_lgetxattr __NR_lgetxattr
#undef __NR_fgetxattr
#define __NR_fgetxattr 214
#define SYS_fgetxattr __NR_fgetxattr
#undef __NR_listxattr
#define __NR_listxattr 215
#define SYS_listxattr __NR_listxattr
#undef __NR_llistxattr
#define __NR_llistxattr 216
#define SYS_llistxattr __NR_llistxattr
#undef __NR_flistxattr
#define __NR_flistxattr 217
#define SYS_flistxattr __NR_flistxattr
#undef __NR_removexattr
#define __NR_removexattr 218
#define SYS_removexattr __NR_removexattr
#undef __NR_lremovexattr
#define __NR_lremovexattr 219
#define SYS_lremovexattr __NR_lremovexattr
#undef __NR_fremovexattr
#define __NR_fremovexattr 220
#define SYS_fremovexattr __NR_fremovexattr
#undef __NR_futex
#define __NR_futex 221
#define SYS_futex __NR_futex
#undef __NR_sched_setaffinity
#define __NR_sched_setaffinity 222
#define SYS_sched_setaffinity __NR_sched_setaffinity
#undef __NR_sched_getaffinity
#define __NR_sched_getaffinity 223
#define SYS_sched_getaffinity __NR_sched_getaffinity
#undef __NR_tuxcall
#define __NR_tuxcall 225
#define SYS_tuxcall __NR_tuxcall
#undef __NR_sendfile64
#define __NR_sendfile64 226
#define SYS_sendfile64 __NR_sendfile64
#undef __NR_io_setup
#define __NR_io_setup 227
#define SYS_io_setup __NR_io_setup
#undef __NR_io_destroy
#define __NR_io_destroy 228
#define SYS_io_destroy __NR_io_destroy
#undef __NR_io_getevents
#define __NR_io_getevents 229
#define SYS_io_getevents __NR_io_getevents
#undef __NR_io_submit
#define __NR_io_submit 230
#define SYS_io_submit __NR_io_submit
#undef __NR_io_cancel
#define __NR_io_cancel 231
#define SYS_io_cancel __NR_io_cancel
#undef __NR_set_tid_address
#define __NR_set_tid_address 232
#define SYS_set_tid_address __NR_set_tid_address
#undef __NR_fadvise64
#define __NR_fadvise64 233
#define SYS_fadvise64 __NR_fadvise64
#undef __NR_exit_group
#define __NR_exit_group 234
#define SYS_exit_group __NR_exit_group
#undef __NR_lookup_dcookie
#define __NR_lookup_dcookie 235
#define SYS_lookup_dcookie __NR_lookup_dcookie
#undef __NR_epoll_create
#define __NR_epoll_create 236
#define SYS_epoll_create __NR_epoll_create
#undef __NR_epoll_ctl
#define __NR_epoll_ctl 237
#define SYS_epoll_ctl __NR_epoll_ctl
#undef __NR_epoll_wait
#define __NR_epoll_wait 238
#define SYS_epoll_wait __NR_epoll_wait
#undef __NR_remap_file_pages
#define __NR_remap_file_pages 239
#define SYS_remap_file_pages __NR_remap_file_pages
#undef __NR_timer_create
#define __NR_timer_create 240
#define SYS_timer_create __NR_timer_create
#undef __NR_timer_settime
#define __NR_timer_settime 241
#define SYS_timer_settime __NR_timer_settime
#undef __NR_timer_gettime
#define __NR_timer_gettime 242
#define SYS_timer_gettime __NR_timer_gettime
#undef __NR_timer_getoverrun
#define __NR_timer_getoverrun 243
#define SYS_timer_getoverrun __NR_timer_getoverrun
#undef __NR_timer_delete
#define __NR_timer_delete 244
#define SYS_timer_delete __NR_timer_delete
#undef __NR_clock_settime
#define __NR_clock_settime 245
#define SYS_clock_settime __NR_clock_settime
#undef __NR_clock_gettime
#define __NR_clock_gettime 246
#define SYS_clock_gettime __NR_clock_gettime
#undef __NR_clock_getres
#define __NR_clock_getres 247
#define SYS_clock_getres __NR_clock_getres
#undef __NR_clock_nanosleep
#define __NR_clock_nanosleep 248
#define SYS_clock_nanosleep __NR_clock_nanosleep
#undef __NR_swapcontext
#define __NR_swapcontext 249
#define SYS_swapcontext __NR_swapcontext
#undef __NR_tgkill
#define __NR_tgkill 250
#define SYS_tgkill __NR_tgkill
#undef __NR_utimes
#define __NR_utimes 251
#define SYS_utimes __NR_utimes
#undef __NR_statfs64
#define __NR_statfs64 252
#define SYS_statfs64 __NR_statfs64
#undef __NR_fstatfs64
#define __NR_fstatfs64 253
#define SYS_fstatfs64 __NR_fstatfs64
#undef __NR_fadvise64_64
#define __NR_fadvise64_64 254
#define SYS_fadvise64_64 __NR_fadvise64_64
#undef __NR_rtas
#define __NR_rtas 255
#define SYS_rtas __NR_rtas
#undef __NR_sys_debug_setcontext
#define __NR_sys_debug_setcontext 256
#define SYS_sys_debug_setcontext __NR_sys_debug_setcontext
#undef __NR_migrate_pages
#define __NR_migrate_pages 258
#define SYS_migrate_pages __NR_migrate_pages
#undef __NR_mbind
#define __NR_mbind 259
#define SYS_mbind __NR_mbind
#undef __NR_get_mempolicy
#define __NR_get_mempolicy 260
#define SYS_get_mempolicy __NR_get_mempolicy
#undef __NR_set_mempolicy
#define __NR_set_mempolicy 261
#define SYS_set_mempolicy __NR_set_mempolicy
#undef __NR_mq_open
#define __NR_mq_open 262
#define SYS_mq_open __NR_mq_open
#undef __NR_mq_unlink
#define __NR_mq_unlink 263
#define SYS_mq_unlink __NR_mq_unlink
#undef __NR_mq_timedsend
#define __NR_mq_timedsend 264
#define SYS_mq_timedsend __NR_mq_timedsend
#undef __NR_mq_timedreceive
#define __NR_mq_timedreceive 265
#define SYS_mq_timedreceive __NR_mq_timedreceive
#undef __NR_mq_notify
#define __NR_mq_notify 266
#define SYS_mq_notify __NR_mq_notify
#undef __NR_mq_getsetattr
#define __NR_mq_getsetattr 267
#define SYS_mq_getsetattr __NR_mq_getsetattr
#undef __NR_kexec_load
#define __NR_kexec_load 268
#define SYS_kexec_load __NR_kexec_load
#undef __NR_add_key
#define __NR_add_key 269
#define SYS_add_key __NR_add_key
#undef __NR_request_key
#define __NR_request_key 270
#define SYS_request_key __NR_request_key
#undef __NR_keyctl
#define __NR_keyctl 271
#define SYS_keyctl __NR_keyctl
#undef __NR_waitid
#define __NR_waitid 272
#define SYS_waitid __NR_waitid
#undef __NR_ioprio_set
#define __NR_ioprio_set 273
#define SYS_ioprio_set __NR_ioprio_set
#undef __NR_ioprio_get
#define __NR_ioprio_get 274
#define SYS_ioprio_get __NR_ioprio_get
#undef __NR_inotify_init
#define __NR_inotify_init 275
#define SYS_inotify_init __NR_inotify_init
#undef __NR_inotify_add_watch
#define __NR_inotify_add_watch 276
#define SYS_inotify_add_watch __NR_inotify_add_watch
#undef __NR_inotify_rm_watch
#define __NR_inotify_rm_watch 277
#define SYS_inotify_rm_watch __NR_inotify_rm_watch
#undef __NR_spu_run
#define __NR_spu_run 278
#define SYS_spu_run __NR_spu_run
#undef __NR_spu_create
#define __NR_spu_create 279
#define SYS_spu_create __NR_spu_create
#undef __NR_pselect6
#define __NR_pselect6 280
#define SYS_pselect6 __NR_pselect6
#undef __NR_ppoll
#define __NR_ppoll 281
#define SYS_ppoll __NR_ppoll
#undef __NR_unshare
#define __NR_unshare 282
#define SYS_unshare __NR_unshare
#undef __NR_splice
#define __NR_splice 283
#define SYS_splice __NR_splice
#undef __NR_tee
#define __NR_tee 284
#define SYS_tee __NR_tee
#undef __NR_vmsplice
#define __NR_vmsplice 285
#define SYS_vmsplice __NR_vmsplice
#undef __NR_openat
#define __NR_openat 286
#define SYS_openat __NR_openat
#undef __NR_mkdirat
#define __NR_mkdirat 287
#define SYS_mkdirat __NR_mkdirat
#undef __NR_mknodat
#define __NR_mknodat 288
#define SYS_mknodat __NR_mknodat
#undef __NR_fchownat
#define __NR_fchownat 289
#define SYS_fchownat __NR_fchownat
#undef __NR_futimesat
#define __NR_futimesat 290
#define SYS_futimesat __NR_futimesat
#undef __NR_fstatat64
#define __NR_fstatat64 291
#define SYS_fstatat64 __NR_fstatat64
#undef __NR_unlinkat
#define __NR_unlinkat 292
#define SYS_unlinkat __NR_unlinkat
#undef __NR_renameat
#define __NR_renameat 293
#define SYS_renameat __NR_renameat
#undef __NR_linkat
#define __NR_linkat 294
#define SYS_linkat __NR_linkat
#undef __NR_symlinkat
#define __NR_symlinkat 295
#define SYS_symlinkat __NR_symlinkat
#undef __NR_readlinkat
#define __NR_readlinkat 296
#define SYS_readlinkat __NR_readlinkat
#undef __NR_fchmodat
#define __NR_fchmodat 297
#define SYS_fchmodat __NR_fchmodat
#undef __NR_faccessat
#define __NR_faccessat 298
#define SYS_faccessat __NR_faccessat
#undef __NR_get_robust_list
#define __NR_get_robust_list 299
#define SYS_get_robust_list __NR_get_robust_list
#undef __NR_set_robust_list
#define __NR_set_robust_list 300
#define SYS_set_robust_list __NR_set_robust_list
#undef __NR_move_pages
#define __NR_move_pages 301
#define SYS_move_pages __NR_move_pages
#undef __NR_getcpu
#define __NR_getcpu 302
#define SYS_getcpu __NR_getcpu
#undef __NR_epoll_pwait
#define __NR_epoll_pwait 303
#define SYS_epoll_pwait __NR_epoll_pwait
#undef __NR_utimensat
#define __NR_utimensat 304
#define SYS_utimensat __NR_utimensat
#undef __NR_signalfd
#define __NR_signalfd 305
#define SYS_signalfd __NR_signalfd
#undef __NR_timerfd_create
#define __NR_timerfd_create 306
#define SYS_timerfd_create __NR_timerfd_create
#undef __NR_eventfd
#define __NR_eventfd 307
#define SYS_eventfd __NR_eventfd
#undef __NR_sync_file_range2
#define __NR_sync_file_range2 308
#define SYS_sync_file_range2 __NR_sync_file_range2
#undef __NR_fallocate
#define __NR_fallocate 309
#define SYS_fallocate __NR_fallocate
#undef __NR_subpage_prot
#define __NR_subpage_prot 310
#define SYS_subpage_prot __NR_subpage_prot
#undef __NR_timerfd_settime
#define __NR_timerfd_settime 311
#define SYS_timerfd_settime __NR_timerfd_settime
#undef __NR_timerfd_gettime
#define __NR_timerfd_gettime 312
#define SYS_timerfd_gettime __NR_timerfd_gettime
#undef __NR_signalfd4
#define __NR_signalfd4 313
#define SYS_signalfd4 __NR_signalfd4
#undef __NR_eventfd2
#define __NR_eventfd2 314
#define SYS_eventfd2 __NR_eventfd2
#undef __NR_epoll_create1
#define __NR_epoll_create1 315
#define SYS_epoll_create1 __NR_epoll_create1
#undef __NR_dup3
#define __NR_dup3 316
#define SYS_dup3 __NR_dup3
#undef __NR_pipe2
#define __NR_pipe2 317
#define SYS_pipe2 __NR_pipe2
#undef __NR_inotify_init1
#define __NR_inotify_init1 318
#define SYS_inotify_init1 __NR_inotify_init1
#undef __NR_perf_event_open
#define __NR_perf_event_open 319
#define SYS_perf_event_open __NR_perf_event_open
#undef __NR_preadv
#define __NR_preadv 320
#define SYS_preadv __NR_preadv
#undef __NR_pwritev
#define __NR_pwritev 321
#define SYS_pwritev __NR_pwritev
#undef __NR_rt_tgsigqueueinfo
#define __NR_rt_tgsigqueueinfo 322
#define SYS_rt_tgsigqueueinfo __NR_rt_tgsigqueueinfo
#undef __NR_fanotify_init
#define __NR_fanotify_init 323
#define SYS_fanotify_init __NR_fanotify_init
#undef __NR_fanotify_mark
#define __NR_fanotify_mark 324
#define SYS_fanotify_mark __NR_fanotify_mark
#undef __NR_prlimit64
#define __NR_prlimit64 325
#define SYS_prlimit64 __NR_prlimit64
#undef __NR_socket
#define __NR_socket 326
#define SYS_socket __NR_socket
#undef __NR_bind
#define __NR_bind 327
#define SYS_bind __NR_bind
#undef __NR_connect
#define __NR_connect 328
#define SYS_connect __NR_connect
#undef __NR_listen
#define __NR_listen 329
#define SYS_listen __NR_listen
#undef __NR_accept
#define __NR_accept 330
#define SYS_accept __NR_accept
#undef __NR_getsockname
#define __NR_getsockname 331
#define SYS_getsockname __NR_getsockname
#undef __NR_getpeername
#define __NR_getpeername 332
#define SYS_getpeername __NR_getpeername
#undef __NR_socketpair
#define __NR_socketpair 333
#define SYS_socketpair __NR_socketpair
#undef __NR_send
#define __NR_send 334
#define SYS_send __NR_send
#undef __NR_sendto
#define __NR_sendto 335
#define SYS_sendto __NR_sendto
#undef __NR_recv
#define __NR_recv 336
#define SYS_recv __NR_recv
#undef __NR_recvfrom
#define __NR_recvfrom 337
#define SYS_recvfrom __NR_recvfrom
#undef __NR_shutdown
#define __NR_shutdown 338
#define SYS_shutdown __NR_shutdown
#undef __NR_setsockopt
#define __NR_setsockopt 339
#define SYS_setsockopt __NR_setsockopt
#undef __NR_getsockopt
#define __NR_getsockopt 340
#define SYS_getsockopt __NR_getsockopt
#undef __NR_sendmsg
#define __NR_sendmsg 341
#define SYS_sendmsg __NR_sendmsg
#undef __NR_recvmsg
#define __NR_recvmsg 342
#define SYS_recvmsg __NR_recvmsg
#undef __NR_recvmmsg
#define __NR_recvmmsg 343
#define SYS_recvmmsg __NR_recvmmsg
#undef __NR_accept4
#define __NR_accept4 344
#define SYS_accept4 __NR_accept4
#undef __NR_name_to_handle_at
#define __NR_name_to_handle_at 345
#define SYS_name_to_handle_at __NR_name_to_handle_at
#undef __NR_open_by_handle_at
#define __NR_open_by_handle_at 346
#define SYS_open_by_handle_at __NR_open_by_handle_at
#undef __NR_clock_adjtime
#define __NR_clock_adjtime 347
#define SYS_clock_adjtime __NR_clock_adjtime
#undef __NR_syncfs
#define __NR_syncfs 348
#define SYS_syncfs __NR_syncfs
#undef __NR_sendmmsg
#define __NR_sendmmsg 349
#define SYS_sendmmsg __NR_sendmmsg
#undef __NR_setns
#define __NR_setns 350
#define SYS_setns __NR_setns
#undef __NR_process_vm_readv
#define __NR_process_vm_readv 351
#define SYS_process_vm_readv __NR_process_vm_readv
#undef __NR_process_vm_writev
#define __NR_process_vm_writev 352
#define SYS_process_vm_writev __NR_process_vm_writev
#undef __NR_finit_module
#define __NR_finit_module 353
#define SYS_finit_module __NR_finit_module
#undef __NR_kcmp
#define __NR_kcmp 354
#define SYS_kcmp __NR_kcmp
#undef __NR_sched_setattr
#define __NR_sched_setattr 355
#define SYS_sched_setattr __NR_sched_setattr
#undef __NR_sched_getattr
#define __NR_sched_getattr 356
#define SYS_sched_getattr __NR_sched_getattr
#undef __NR_renameat2
#define __NR_renameat2 357
#define SYS_renameat2 __NR_renameat2
#undef __NR_seccomp
#define __NR_seccomp 358
#define SYS_seccomp __NR_seccomp
#undef __NR_getrandom
#define __NR_getrandom 359
#define SYS_getrandom __NR_getrandom
#undef __NR_memfd_create
#define __NR_memfd_create 360
#define SYS_memfd_create __NR_memfd_create
#undef __NR_bpf
#define __NR_bpf 361
#define SYS_bpf __NR_bpf
#undef __NR_execveat
#define __NR_execveat 362
#define SYS_execveat __NR_execveat
#undef __NR_switch_endian
#define __NR_switch_endian 363
#define SYS_switch_endian __NR_switch_endian
#undef __NR_userfaultfd
#define __NR_userfaultfd 364
#define SYS_userfaultfd __NR_userfaultfd
#undef __NR_membarrier
#define __NR_membarrier 365
#define SYS_membarrier __NR_membarrier
#undef __NR_mlock2
#define __NR_mlock2 378
#define SYS_mlock2 __NR_mlock2
#undef __NR_copy_file_range
#define __NR_copy_file_range 379
#define SYS_copy_file_range __NR_copy_file_range
#undef __NR_preadv2
#define __NR_preadv2 380
#define SYS_preadv2 __NR_preadv2
#undef __NR_pwritev2
#define __NR_pwritev2 381
#define SYS_pwritev2 __NR_pwritev2
#undef __NR_kexec_file_load
#define __NR_kexec_file_load 382
#define SYS_kexec_file_load __NR_kexec_file_load
#undef __NR_statx
#define __NR_statx 383
#define SYS_statx __NR_statx
#undef __NR_pkey_alloc
#define __NR_pkey_alloc 384
#define SYS_pkey_alloc __NR_pkey_alloc
#undef __NR_pkey_free
#define __NR_pkey_free 385
#define SYS_pkey_free __NR_pkey_free
#undef __NR_pkey_mprotect
#define __NR_pkey_mprotect 386
#define SYS_pkey_mprotect __NR_pkey_mprotect
#undef __NR_rseq
#define __NR_rseq 387
#define SYS_rseq __NR_rseq
#undef __NR_io_pgetevents
#define __NR_io_pgetevents 388
#define SYS_io_pgetevents __NR_io_pgetevents
#undef __NR_semget
#define __NR_semget 393
#define SYS_semget __NR_semget
#undef __NR_semctl
#define __NR_semctl 394
#define SYS_semctl __NR_semctl
#undef __NR_shmget
#define __NR_shmget 395
#define SYS_shmget __NR_shmget
#undef __NR_shmctl
#define __NR_shmctl 396
#define SYS_shmctl __NR_shmctl
#undef __NR_shmat
#define __NR_shmat 397
#define SYS_shmat __NR_shmat
#undef __NR_shmdt
#define __NR_shmdt 398
#define SYS_shmdt __NR_shmdt
#undef __NR_msgget
#define __NR_msgget 399
#define SYS_msgget __NR_msgget
#undef __NR_msgsnd
#define __NR_msgsnd 400
#define SYS_msgsnd __NR_msgsnd
#undef __NR_msgrcv
#define __NR_msgrcv 401
#define SYS_msgrcv __NR_msgrcv
#undef __NR_msgctl
#define __NR_msgctl 402
#define SYS_msgctl __NR_msgctl
#undef __NR_clock_gettime64
#define __NR_clock_gettime64 403
#define SYS_clock_gettime64 __NR_clock_gettime64
#undef __NR_clock_settime64
#define __NR_clock_settime64 404
#define SYS_clock_settime64 __NR_clock_settime64
#undef __NR_clock_adjtime64
#define __NR_clock_adjtime64 405
#define SYS_clock_adjtime64 __NR_clock_adjtime64
#undef __NR_clock_getres_time64
#define __NR_clock_getres_time64 406
#define SYS_clock_getres_time64 __NR_clock_getres_time64
#undef __NR_clock_nanosleep_time64
#define __NR_clock_nanosleep_time64 407
#define SYS_clock_nanosleep_time64 __NR_clock_nanosleep_time64
#undef __NR_timer_gettime64
#define __NR_timer_gettime64 408
#define SYS_timer_gettime64 __NR_timer_gettime64
#undef __NR_timer_settime64
#define __NR_timer_settime64 409
#define SYS_timer_settime64 __NR_timer_settime64
#undef __NR_timerfd_gettime64
#define __NR_timerfd_gettime64 410
#define SYS_timerfd_gettime64 __NR_timerfd_gettime64
#undef __NR_timerfd_settime64
#define __NR_timerfd_settime64 411
#define SYS_timerfd_settime64 __NR_timerfd_settime64
#undef __NR_utimensat_time64
#define __NR_utimensat_time64 412
#define SYS_utimensat_time64 __NR_utimensat_time64
#undef __NR_pselect6_time64
#define __NR_pselect6_time64 413
#define SYS_pselect6_time64 __NR_pselect6_time64
#undef __NR_ppoll_time64
#define __NR_ppoll_time64 414
#define SYS_ppoll_time64 __NR_ppoll_time64
#undef __NR_io_pgetevents_time64
#define __NR_io_pgetevents_time64 416
#define SYS_io_pgetevents_time64 __NR_io_pgetevents_time64
#undef __NR_recvmmsg_time64
#define __NR_recvmmsg_time64 417
#define SYS_recvmmsg_time64 __NR_recvmmsg_time64
#undef __NR_mq_timedsend_time64
#define __NR_mq_timedsend_time64 418
#define SYS_mq_timedsend_time64 __NR_mq_timedsend_time64
#undef __NR_mq_timedreceive_time64
#define __NR_mq_timedreceive_time64 419
#define SYS_mq_timedreceive_time64 __NR_mq_timedreceive_time64
#undef __NR_semtimedop_time64
#define __NR_semtimedop_time64 420
#define SYS_semtimedop_time64 __NR_semtimedop_time64
#undef __NR_rt_sigtimedwait_time64
#define __NR_rt_sigtimedwait_time64 421
#define SYS_rt_sigtimedwait_time64 __NR_rt_sigtimedwait_time64
#undef __NR_futex_time64
#define __NR_futex_time64 422
#define SYS_futex_time64 __NR_futex_time64
#undef __NR_sched_rr_get_interval_time64
#define __NR_sched_rr_get_interval_time64 423
#define SYS_sched_rr_get_interval_time64 __NR_sched_rr_get_interval_time64
#undef __NR_pidfd_send_signal
#define __NR_pidfd_send_signal 424
#define SYS_pidfd_send_signal __NR_pidfd_send_signal
#undef __NR_io_uring_setup
#define __NR_io_uring_setup 425
#define SYS_io_uring_setup __NR_io_uring_setup
#undef __NR_io_uring_enter
#define __NR_io_uring_enter 426
#define SYS_io_uring_enter __NR_io_uring_enter
#undef __NR_io_uring_register
#define __NR_io_uring_register 427
#define SYS_io_uring_register __NR_io_uring_register
#undef __NR_open_tree
#define __NR_open_tree 428
#define SYS_open_tree __NR_open_tree
#undef __NR_move_mount
#define __NR_move_mount 429
#define SYS_move_mount __NR_move_mount
#undef __NR_fsopen
#define __NR_fsopen 430
#define SYS_fsopen __NR_fsopen
#undef __NR_fsconfig
#define __NR_fsconfig 431
#define SYS_fsconfig __NR_fsconfig
#undef __NR_fsmount
#define __NR_fsmount 432
#define SYS_fsmount __NR_fsmount
#undef __NR_fspick
#define __NR_fspick 433
#define SYS_fspick __NR_fspick
#undef __NR_pidfd_open
#define __NR_pidfd_open 434
#define SYS_pidfd_open __NR_pidfd_open
#undef __NR_clone3
#define __NR_clone3 435
#define SYS_clone3 __NR_clone3
#undef __NR_close_range
#define __NR_close_range 436
#define SYS_close_range __NR_close_range
#undef __NR_openat2
#define __NR_openat2 437
#define SYS_openat2 __NR_openat2
#undef __NR_pidfd_getfd
#define __NR_pidfd_getfd 438
#define SYS_pidfd_getfd __NR_pidfd_getfd
#undef __NR_faccessat2
#define __NR_faccessat2 439
#define SYS_faccessat2 __NR_faccessat2
#undef __NR_process_madvise
#define __NR_process_madvise 440
#define SYS_process_madvise __NR_process_madvise
#undef __NR_epoll_pwait2
#define __NR_epoll_pwait2 441
#define SYS_epoll_pwait2 __NR_epoll_pwait2
#undef __NR_mount_setattr
#define __NR_mount_setattr 442
#define SYS_mount_setattr __NR_mount_setattr
#undef __NR_quotactl_fd
#define __NR_quotactl_fd 443
#define SYS_quotactl_fd __NR_quotactl_fd
#undef __NR_landlock_create_ruleset
#define __NR_landlock_create_ruleset 444
#define SYS_landlock_create_ruleset __NR_landlock_create_ruleset
#undef __NR_landlock_add_rule
#define __NR_landlock_add_rule 445
#define SYS_landlock_add_rule __NR_landlock_add_rule
#undef __NR_landlock_restrict_self
#define __NR_landlock_restrict_self 446
#define SYS_landlock_restrict_self __NR_landlock_restrict_self
#undef __NR_process_mrelease
#define __NR_process_mrelease 448
#define SYS_process_mrelease __NR_process_mrelease
#undef __NR_futex_waitv
#define __NR_futex_waitv 449
#define SYS_futex_waitv __NR_futex_waitv
#undef __NR_set_mempolicy_home_node
#define __NR_set_mempolicy_home_node 450
#define SYS_set_mempolicy_home_node __NR_set_mempolicy_home_node

#endif
