#include <linux/init.h>    // 包含模块初始化和清理函数的宏
#include <linux/module.h>  // 包含内核模块相关的函数和宏
#include <linux/kernel.h>  // 包含内核打印函数 printk()

// 模块信息（可选但推荐）
MODULE_LICENSE("GPL");              // 许可证类型
MODULE_AUTHOR("Your Name");         // 作者信息
MODULE_DESCRIPTION("A simple Linux driver"); // 模块描述
MODULE_VERSION("0.1");              // 模块版本

// 模块加载函数
static int __init hello_init(void)
{
    printk(KERN_INFO "Hello, World!\n"); // 内核日志输出
    return 0; // 返回0表示成功
}

// 模块卸载函数
static void __exit hello_exit(void)
{
    printk(KERN_INFO "Goodbye, World!\n");
}

// 注册模块加载/卸载函数
module_init(hello_init);
module_exit(hello_exit);
