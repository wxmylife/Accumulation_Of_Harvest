//
// Created by wxmylife on 2017/3/30.
//

#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
/**
*jstring :返回值
* Java_全类名_方法名
* JNIEnv* env:里面有很多方法，相当于环境变量
* jobject jobj：谁调用了这个方法就是谁的实例
*
**/
  jstring  Java_com_wxmylife_morgan_JNI_getMessage(JNIEnv* env,jobject jobj){
  char* text="i love u";
  return (*env)->NewStringUTF(env,text);
}
