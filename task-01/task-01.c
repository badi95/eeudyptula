#include <linux/init.h>
#include <linux/module.h>

static int hello_world_init(void)
{
    printk(KERN_DEBUG "Hello world\n");
    return 0;
}
static void hello_world_exit(void)
{
    return;
}
module_init(hello_world_init);
module_exit(hello_world_exit);
