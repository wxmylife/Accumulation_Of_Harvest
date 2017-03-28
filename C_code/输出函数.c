//
// Created by wxmylife on 2017/3/22.
//

#include <stdio.h>

main() {
    char c = 'a';
    int i = 12345678;
    long l = 123456789;
    float f = 3.1415;
    double d = 3.1415926535;

    printf("c==%c\n", c);
    printf("i==%d\n", i);
    printf("l==%ld\n", l);
    printf("f==%f\n", f);
    printf("d==%lf\n", d);
    printf("f==%.4f\n", f);
    printf("d==%.10lf\n", d);

    char cArray[]={'a','b'};

    printf("cArray内存地址==%x\n",&cArray);
    printf("cArray内容==%s\n",cArray);

    char* text="i love you";
    printf("text内容==%s\n",text);

}

