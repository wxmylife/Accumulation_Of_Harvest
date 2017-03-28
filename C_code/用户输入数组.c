//
// Created by wxmylife on 2017/3/24.
//
#include <stdio.h>

main() {

    printf("请输入数组的长度\n");
    int length;
    scanf("%d", &length);
    printf("您输入的数组长度为---->%d\n", length);

    int array[length];

    for (int i = 0; i < length; i++) {
        printf("请输入array[%d]的值:\n", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < length; i++) {
        printf("array[%d]===%d\n",i,array[i]);
    }


}
