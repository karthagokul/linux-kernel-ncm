obj-m := cdc_ncm.o
KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)
CFLAGS_cdc_ncm.o := -DDEBUG

default:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	rm -rf *.o Module.symvers modules.order cdc_ncm.mod.c .cdc_* .tmp_versions
