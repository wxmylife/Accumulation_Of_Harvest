//
// Created by wxmylife on 2017/3/22.
//
#include <stdio.h>

main() {
    int i;
    printf("请你输入一个数字:\n");
    scanf("%d",&i);
    printf("您输入的数字是%d\n",i);


    char cArray[]={'H','E','L','L','O'};

    for (int k = 0; k < 5; k++) {
        printf("cArray[%d]==%c\n",k,cArray[k]);
    }

    printf("cArray==%s\n",cArray);


}
