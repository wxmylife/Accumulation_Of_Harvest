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


JNIEXPORT void JNICALL Java_com_wxmylife_ccalljava_JNI_callBackHelloFromJava
        (JNIEnv *env, jobject jobj){
    jclass jclazz=(*env)->FindClass(env,"com/wxmylife/ccalljava/JNI");
    jmethodID  jmethodID1=(*env)->GetMethodID(env,jclazz,"helloFromJava","()V");
    jobject jobject=(*env)->AllocObject(env,jclazz);
    (*env)->CallVoidMethod(env,jobject,jmethodID1);
};

JNIEXPORT void JNICALL Java_com_wxmylife_ccalljava_JNI_callBackPrintString
        (JNIEnv *env, jobject jobj){
    jclass jclazz=(*env)->FindClass(env,"com/wxmylife/ccalljava/JNI");
    jmethodID  jmethodID1=(*env)->GetMethodID(env,jclazz,"printString","(Ljava/lang/String;)V");
    jobject jobject=(*env)->AllocObject(env,jclazz);
    jstring jst=(*env)->NewStringUTF(env,"i love wxmylife");
    (*env)->CallVoidMethod(env,jobject,jmethodID1,jst);
};


JNIEXPORT void JNICALL Java_com_wxmylife_ccalljava_JNI_callBackSayHello
        (JNIEnv *env, jobject jobj){
    jclass jclazz=(*env)->FindClass(env,"com/wxmylife/ccalljava/JNI");
    jmethodID  jmethodID1=(*env)->GetStaticMethodID(env,jclazz,"sayHello","(Ljava/lang/String;)V");
    jstring jst=(*env)->NewStringUTF(env,"i love wxmylife");
    (*env)->CallStaticVoidMethod(env,jclazz,jmethodID1,jst);
}

 void Java_com_wxmylife_ccalljava_MainActivity_callBackShowToast(JNIEnv *env, jobject instance) {

    jclass jclazz=(*env)->FindClass(env,"com/wxmylife/ccalljava/MainActivity");
    jmethodID  jmethodID1=(*env)->GetMethodID(env,jclazz,"showToast","()V");

    (*env)->CallVoidMethod(env,instance,jmethodID1);

};