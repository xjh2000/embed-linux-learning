//
// Created by xjh on 4/24/23.
//

#include <stdio.h>
#include <linux/wmi.h>
#include "hello_world.h"
#include <linux/kernel.h>

int main() {
    printf("hello world, xjh !!!, this is a test\n");
    printk("hello world, xjh !!!, this is a test\n");
    return 0;
}