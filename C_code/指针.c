//
// Created by wxmylife on 2017/3/22.
//

#include <stdio.h>

main() {

    //定义一个int类型的变量，并赋值111
    int i = 111;
    //定义一个int类型的一级指针变量p
    int *p;
    //把i对应的地址赋值给p变量
    p = &i;
    //指针取值*p，把p对应地址的值打印出来
    printf("*p====%d\n", *p);
    *p = 100;
    printf("*p====%d\n", *p);
    printf("i====%d\n", i);
}