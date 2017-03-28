//
// Created by wxmylife on 2017/3/22.
//

#include <stdio.h>

main() {

    char cArray[5];
    printf("请输入长度为5的字符串\n");
    scanf("%s",&cArray);

    for (int k = 0; k < 5; k++) {
        printf("cArray[%d]==%c\n",k,cArray[k]);
    }

    printf("cArray==%s\n",cArray);


}
