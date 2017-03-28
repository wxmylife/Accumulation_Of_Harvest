//
// Created by wxmylife on 2017/3/23.
//

#include <stdio.h>

void sitch(int* a, int* b) {
    int temp = a;
    a = b;
    b = temp;

    printf("sitch方法a的地址---->>>%#x\n", &a);
    printf("sitch方法b的地址---->>>%#x\n", &a);
}

void sitchAddress(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("sitchAddress方法a的地址---->>>%#x\n", a);
    printf("sitchAddress方法b的地址---->>>%#x\n", a);
}

main() {
    int a = 100;
    int b = 200;


    printf("main方法a的地址---->>>%#x\n", &a);
    printf("main方法b的地址---->>>%#x\n", &a);

    printf("a=====%d,b=====%d\n", a, b);
//    int temp = a;
//    a = b;
//    b = temp;
//
//    printf("a=====%d,b=====%d\n", a, b);

//    sitch(a, b);

//    printf("a=====%d,b=====%d\n", a, b);


    sitchAddress(&a, &b);
    printf("a=====%d,b=====%d\n", a, b);
}

