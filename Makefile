obj-m += hello.o
KVERSION = $(shell uname -r)
KERNEL_DIR = /lib/modules/$(KVERSION)/build
PWD = $(shell pwd)

all:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) clean
