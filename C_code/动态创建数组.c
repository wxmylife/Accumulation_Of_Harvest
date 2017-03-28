//
// Created by wxmylife on 2017/3/28.
//

#include <stdio.h>


main() {
    printf("请输入数组的长度：\n");
    int length;
    scanf("%d", &length);
    printf("您输入的数组长度为：%d\n", length);

    //更据长度分配内存空间
    int *iArray = malloc(sizeof(length * 4));

    int i;

    for (i = 0; i < length; i++) {
        printf("请输入iArray[%d]的值:\n", i);
        scanf("%d", iArray + i);
    }

    int supLength;
    printf("请输入您要扩展数组的长度：\n");
    scanf("%d", &supLength);
    printf("您要扩展的数组长度为：%d\n", supLength);

    iArray = realloc(iArray, (length + supLength) * 4);

    for (i = length; i < length + supLength; i++) {
        printf("请输入iArray[%d]的值:\n", i);
        scanf("%d", iArray + i);
    }

    for (i = 0; i < length + supLength; i++) {
        printf("iArray[%d]==%d\n", i, *(iArray + i));
    }
}