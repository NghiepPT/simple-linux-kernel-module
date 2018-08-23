#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>

MODULE_AUTHOR("SanDan");
MODULE_LICENSE("GPL");

static int __init simple_init(void)
{
 	printk(KERN_INFO "Hello, world!\n");
 	return 0;
}

static void __exit simple_exit(void)
{
 	printk(KERN_INFO "Bye bye!\n");
	
}

module_init(simple_init);
module_exit(simple_exit);
