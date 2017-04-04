//
// Created by wxmylife on 2017/4/4.
//

#include "com_wxmylife_ccalljava_JNI.h"
#include <stdlib.h>
#include <stdio.h>

JNIEXPORT void JNICALL Java_com_wxmylife_ccalljava_JNI_callbackAdd
(JNIEnv *env, jobject jobject){
    //1.得到字节码
    jclass jclazz=(*env)->FindClass(env,"com/wxmylife/ccalljava/JNI");
    //2.得到方法
    (*env)->GetMethodID(env,jclazz,"add","")
    //3.实例化该类
    //4.调用方法
};