//
// Created by wxmylife on 2017/3/24.
//
#include <stdio.h>
#include <stdlib.h>


main() {

    char cArray[] = {'h', 'e', 'l', 'l', 'o'};
    int iArray[] = {1, 2, 3, 4, 5};

    printf("cArray[0]====%c\n", cArray[0]);
    printf("cArray[1]====%c\n", cArray[1]);

    printf("iArray[0]====%d\n", iArray[0]);
    printf("iArray[1]====%d\n", iArray[1]);

    printf("cArray地址====%#x\n", &cArray);
    printf("cArray[0]地址====%#x\n", &cArray[0]);
    printf("cArray[1]地址====%#x\n", &cArray[1]);
    printf("cArray[2]地址====%#x\n", &cArray[2]);
    printf("cArray[3]地址====%#x\n", &cArray[3]);
    printf("cArray[4]地址====%#x\n", &cArray[4]);

    printf("iArray地址====%#x\n", &iArray);
    printf("iArray[0]地址====%#x\n", &iArray[0]);
    printf("iArray[1]地址====%#x\n", &iArray[1]);
    printf("iArray[2]地址====%#x\n", &iArray[2]);
    printf("iArray[3]地址====%#x\n", &iArray[3]);
    printf("iArray[4]地址====%#x\n", &iArray[4]);

    printf("iArray====%d\n", *iArray);
    printf("iArray[0]====%d\n", *iArray+0);
    printf("iArray[1]====%d\n", *iArray+1);
    printf("iArray[2]====%d\n", *iArray+2);
    printf("iArray[3]====%d\n", *iArray+3);
    printf("iArray[4]====%d\n", *iArray+4);

    printf("iArray[0]====%d\n", *(iArray+0));
    printf("iArray[1]====%d\n", *(iArray+1));
    printf("iArray[2]====%d\n", *(iArray+2));
    printf("iArray[3]====%d\n", *(iArray+3));
    printf("iArray[4]====%d\n", *(iArray+4));
}
