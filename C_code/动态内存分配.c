//
// Created by wxmylife on 2017/3/27.
//

#include <stdio.h>

void func(int** address);

main(){

    //定义int类型的一级指针变量
    int* iPoint;
    printf("iPoint地址=====%#x\n",&iPoint);
    func(&iPoint);
    printf("iPoint地址=====%#x\n",&iPoint);
    printf("*iPoint=====%d\n",*iPoint);
    printf("*iPoint=====%d\n",*iPoint);
    printf("*iPoint=====%d\n",*iPoint);
}

void func(int** address) {
    //定义int类型的i变量，并且赋值100
    int i=100;

    int* temp;

    //malloc(int)--内存地址
    temp=malloc(sizeof(int));
//    printf("temp地址======%#x\n",&temp);
    //把i对应的值，赋值给temp地址对应的值
    *temp=i;
    //把adress对应地址的值修改成temp
//    printf("temp地址======%#x\n",&temp);
    *address=temp;

    free(temp);

}