//
// Created by wxmylife on 2017/3/28.
//

#include <stdio.h>

struct Student{
    int age;
    float score;
    char sex;
};


main(){
    struct Student student={14,98.9,'W'};
    printf("student.age====%d\n",student.age);
    printf("student.name====%.1f\n",student.score);
    printf("student.sex====%c\n",student.sex);

    student.age=20;
    student.score=100;
    student.sex='M';
    printf("student.age====%d\n",student.age);
    printf("student.name====%.1f\n",student.score);
    printf("student.sex====%c\n",student.sex);

    printf("struct Student长度为==%d\n", sizeof(struct Student));
}