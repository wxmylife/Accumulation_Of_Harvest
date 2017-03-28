//
// Created by wxmylife on 2017/3/28.
//

#include <stdio.h>

union Mix{
    long i;//length=4
    int k;//length=4
    char ii;//length=1
};

main(){
    printf("mix:%d\n", sizeof(union Mix));

    union Mix m;
    m.k=123;
    m.i=100;
    printf("m.i==%d\n",m.i);
    printf("m.k==%d\n",m.k);
};