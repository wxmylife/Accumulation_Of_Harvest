//
// Created by wxmylife on 2017/3/31.
//

#include <com_wxmylife_javacallc_JNI.h>
#include <string.h>

char *_JString2CStr(JNIEnv *env, jstring jstr) {
    char *rtn = NULL;
    jclass clsstring = (*env)->FindClass(env, "java/lang/String");
    jstring strencode = (*env)->NewStringUTF(env, "GB2312");
    jmethodID mid = (*env)->GetMethodID(env, clsstring, "getBytes", "(Ljava/lang/String;)[B");
    jbyteArray barr = (jbyteArray)(*env)->CallObjectMethod(env, jstr, mid,
                                                           strencode);//String.getByte("GB2312");
    jsize alen = (*env)->GetArrayLength(env, barr);
    jbyte *ba = (*env)->GetByteArrayElements(env, barr, JNI_FALSE);
    if (alen > 0) {
        rtn = (char *) malloc(alen + 1);
        memcpy(rtn, ba, alen);
        rtn[alen] = 0;
    }
    (*env)->ReleaseByteArrayElements(env, barr, ba, 0);
    return rtn;

}


jint Java_com_wxmylife_javacallc_JNI_add
        (JNIEnv *env, jobject jobject, jint x, jint y) {

    int result = x + y;
    return result;
}


jstring Java_com_wxmylife_javacallc_JNI_sayHello
        (JNIEnv *env, jobject jobject, jstring text) {

    char *fromJava = _JString2CStr(env, text);

    char *fromC = "yes i love you,too";
    //拼接函数strcat
    strcat(fromJava, fromC);//把拼接的结果放在第一个参数中

    return (*env)->NewStringUTF(env, fromJava);
}


