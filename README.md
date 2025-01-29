# Buildroot powerpc-gcc-toolchain for cross-compilation

## General Information

As per https://buildroot.org/:

>Buildroot is a simple, efficient and easy-to-use tool to generate embedded Linux systems through cross-compilation. 

With buildroot we are able to generate cross-compilation toolchains, root filesystems, kernel image compilation and bootloader compilation. In this repo you can find the cross-compilation toolchain for PowerPC (PPC) 32-Bit. The main repo makes use of this toolchain for the compilation of various benchmarks for the target PPC. You can find this repo here: https://github.com/tdh0ang/powerpc_benchmarks/. 

What is also important is the kernel image, which is used for a QEMU emulation. 

## How it works

There is not much to say here, the star of the show is the `powerpc-buildroot-linux-uclibcspe-gcc` compiler. The other folders in the toolchain folder are simply dependencies and libraries. Just point your compiler to this path

```
toolchain/lib/powerpc-buildroot-linux-uclibcspe-gcc
```

and you're good to go. The kernel is not included, but can be easily compiled and configured by using buildroot. Download it and follow the instructions here: https://github.com/tdh0ang/powerpc_benchmarks/blob/main/README.md. This one is specific for the project, but the process it pretty much the same for different targets. 
