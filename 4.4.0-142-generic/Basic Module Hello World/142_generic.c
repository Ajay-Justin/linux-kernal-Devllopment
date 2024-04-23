#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

static int __init generic_entry(void){
    printk(KERN_INFO "4.4.0-142-generic Rootkit simple Hello World Program\n");
    return 0;
}

static void __exit generic_exit(void){
    printk(KERN_INFO "4.4.0-142-generic Rootkit  Exiting Good Bye! \n");
}

module_init(generic_entry);
module_exit(generic_exit);
