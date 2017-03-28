//
// Created by wxmylife on 2017/3/28.
//

struct student{
    int age;
    float score;
    char sex;

};

main(){
    struct student stu={18,98.9,'W'};

    //指针结构体
    struct student* point=&stu;

    struct student** point2=&point;

    //取值运算(*point).age 等价于point -> age
    printf("(*point).age===%d\n",(*point).age);
    printf("point->age===%d\n",point->age);
    printf("point->score===%.f\n",point->score);
    printf("point->sex===%c\n",point->sex);

    //赋值运算
    point->age=20;
    point->score=100;
    point->sex='M';


    printf("(*point).age===%d\n",(*point).age);
    printf("point->age===%d\n",point->age);
    printf("point->score===%.f\n",point->score);
    printf("point->sex===%c\n",point->sex);

    //二级结构体指针取值(*point).age等价于point->age
    //所以(**point).age等价于(*point)->age
    printf("(**point2).age===%d\n",(**point2).age);
    printf("(*point2).age===%d\n",(*point2)->age);

    //二级指针赋值
    (**point2).age=2000;
    printf("(**point2).age===%d\n",(**point2).age);
    printf("(*point2).age===%d\n",(*point2)->age);


}