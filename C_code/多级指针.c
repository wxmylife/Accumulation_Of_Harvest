//
// Created by wxmylife on 2017/3/24.
//

#include <stdio.h>
#include <stdlib.h>


main(){
    int i=100;
    int* address1=&i;
    int** address2=&address1;
    int*** address3=&address2;
    int**** address4=&address3;

    printf("****address3==%d\n",***address3);
    printf("****address4==%#x\n",****address4);

    ****address4=2000;

    printf("****address4==%d\n",****address4);
    printf("****address4==%#x\n",****address4);
    printf("****i==%d\n",i);

    printf("****address3==%d\n",***address3);
}