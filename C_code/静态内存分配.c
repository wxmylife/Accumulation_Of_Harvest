//
// Created by wxmylife on 2017/3/27.
//

#include <stdio.h>

void func(int **pInt);

main(){
    //定义int类型的一级指针变量
    int* iPoint;
    func(&iPoint);
    printf("*iPoint=====%d\n",*iPoint);
    printf("*iPoint=====%d\n",*iPoint);
    printf("*iPoint=====%d\n",*iPoint);
}

void func(int** address) {
    //定义int类型的i变量，并且赋值100
    int i=100;
    //把i 对应的地址赋值给iPoint变量
    *address=&i;
}