//
// Created by wxmylife on 2017/3/28.
//
#include <stdio.h>


int add(int x,int y){
    return x+y;
}

main(){
    //定义函数指针
    int (*a)(int x,int y);
    //函数指针赋值
    a=add;
    //使用函数指针
    int result=a(30,18);
    printf("Result====%d",result);

}

