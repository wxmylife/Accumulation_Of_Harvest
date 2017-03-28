//
// Created by wxmylife on 2017/3/24.
//

#include <stdio.h>


void close(int* a,int* b){
    *a=0;
    *b=0;
}

main(){
    int a=1;
    int b=2;

    close(&a,&b);

    printf("a=====%d\n",a);
    printf("b=====%d\n",b);

}