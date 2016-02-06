#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

int some_integer = 4;

static int __init hello_init(void)
{
	printk(KERN_ALERT "Some integer = %d", some_integer);
	return 0;
}


static void __exit hello_exit(void)
{
	printk(KERN_INFO "Goodbye cruel world\n");
}


module_init(hello_init);
module_exit(hello_exit);
