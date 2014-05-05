obj-m := ncm.o
KDIR := /home/ixonos/src/kernel/3.0.35
PWD := $(shell pwd)
CFLAGS_ncm.o := -DDEBUG

default:
	$(MAKE) ARCH=arm CROSS_COMPILE=/opt/poky/1.4+snapshot/sysroots/x86_64-pokysdk-linux/usr/bin/armv7a-vfp-neon-poky-linux-gnueabi/arm-poky-linux-gnueabi- -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	rm -rf *.o Module.symvers modules.order ncm.mod.c .ncm.* .tmp_versions
