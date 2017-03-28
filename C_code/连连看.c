//
// Created by wxmylife on 2017/3/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

main() {

    printf("玩游戏倒计时开始了:\n");

    int i;

    for (i = 100; i > 0; i--) {
        sleep(1000);
        printf("还剩下多少秒:%d\n", &i);
    }

    printf("完成\n");
}

