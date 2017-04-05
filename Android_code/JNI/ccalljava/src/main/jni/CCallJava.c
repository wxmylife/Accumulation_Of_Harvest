//
// Created by wxmylife on 2017/4/4.
//

#include "com_wxmylife_ccalljava_JNI.h"
#include <stdlib.h>
#include <stdio.h>

#include <android/log.h>
#define LOG_TAG "wxmylife"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

JNIEXPORT void JNICALL Java_com_wxmylife_ccalljava_JNI_callbackAdd
(JNIEnv *env, jobject jobj){
    //1.得到字节码
    jclass jclazz=(*env)->FindClass(env,"com/wxmylife/ccalljava/JNI");
    //2.得到方法
    jmethodID  jmethodID1=(*env)->GetMethodID(env,jclazz,"add","(II)I");
    //3.实例化该类
    jobject jobject=(*env)->AllocObject(env,jclazz);
    //4.调用方法
    jint value=(*env)->CallIntMethod(env,jobject,jmethodID1,500,20);
    LOGE("value=====%d\n",value);
};