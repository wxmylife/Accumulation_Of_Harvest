//
// Created by wxmylife on 2017/3/31.
//

#include <com_wxmylife_javacallc_JNI.h>

jint Java_com_wxmylife_javacallc_JNI_add
        (JNIEnv *env, jobject jobject, jint x, jint y) {

    int result = x + y;
    return result;
}