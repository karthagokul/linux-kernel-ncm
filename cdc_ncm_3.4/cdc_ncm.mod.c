#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf6628fc9, "module_layout" },
	{ 0x46c0f9b3, "usbnet_get_link" },
	{ 0x6cee7ee9, "usbnet_nway_reset" },
	{ 0xfbe68429, "usbnet_set_msglevel" },
	{ 0xc9dc5985, "usbnet_get_msglevel" },
	{ 0xcb0c6280, "usbnet_set_settings" },
	{ 0x38a527ee, "usbnet_get_settings" },
	{ 0xcdff963, "usbnet_resume" },
	{ 0x9c452f8a, "usbnet_suspend" },
	{ 0x3ac8c215, "usb_deregister" },
	{ 0x63afefa5, "usb_register_driver" },
	{ 0x8b99deaf, "_dev_info" },
	{ 0x78f4de52, "usbnet_get_ethernet_addr" },
	{ 0xd6dbe3b3, "usb_control_msg" },
	{ 0xfd1e3796, "usb_set_interface" },
	{ 0x4bacb6e5, "usb_driver_claim_interface" },
	{ 0x6632100c, "usb_ifnum_to_if" },
	{ 0xab029199, "hrtimer_init" },
	{ 0x4a21112a, "kmem_cache_alloc_trace" },
	{ 0x53822150, "kmalloc_caches" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x77782dca, "__alloc_skb" },
	{ 0x5caf4af1, "skb_put" },
	{ 0xde0bdcff, "memset" },
	{ 0x236c8c64, "memcpy" },
	{ 0xed05ad29, "usbnet_probe" },
	{ 0x654f9519, "usbnet_disconnect" },
	{ 0xb2798ef9, "dev_get_drvdata" },
	{ 0x62696c70, "hrtimer_start" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xe7683d3, "__netif_schedule" },
	{ 0xd74f2242, "usbnet_start_xmit" },
	{ 0xadaabe1b, "pv_lock_ops" },
	{ 0x47c7b0d2, "cpu_number" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0x50720c5f, "snprintf" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x14c81595, "usb_driver_release_interface" },
	{ 0xdcb845b3, "hrtimer_cancel" },
	{ 0xdb97fba0, "dev_set_drvdata" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x37a0cba, "kfree" },
	{ 0xffc49657, "dev_kfree_skb_any" },
	{ 0x327207e3, "netif_carrier_off" },
	{ 0xde1c9b0e, "dev_err" },
	{ 0x546fa66c, "netif_carrier_on" },
	{ 0x6e3fade2, "usbnet_skb_return" },
	{ 0x84a24445, "skb_clone" },
	{ 0x27e1a049, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00*");

MODULE_INFO(srcversion, "7F2551E8BA202D9E29C13EB");
