obj-m := cdc_ncm.o
KDIR := /home/ixonos/ltib/rpm/BUILD/linux-2.6.35.3
PWD := $(shell pwd)
CFLAGS_cdc_ncm.o := -DDEBUG

default:
	$(MAKE) ARCH=arm CROSS_COMPILE=arm-none-linux-gnueabi- -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	rm -rf *.o Module.symvers modules.order cdc_ncm.mod.c .cdc_* .tmp_versions
