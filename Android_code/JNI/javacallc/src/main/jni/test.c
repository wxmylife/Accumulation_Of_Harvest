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


JNIEXPORT jintArray JNICALL Java_com_wxmylife_javacallc_JNI_increaseArrayEles
        (JNIEnv *env, jobject jobject, jintArray array){
    int size =(*env)->GetArrayLength(env,array);
    jint* intArray=(*env)->GetIntArrayElements(env,array,JNI_FALSE);
    int i;
    for ( i = 0; i < size; i++) {
        *(intArray+i)=*(intArray+i)+6;
//        *(intArray+i)+=5;
    }
    return array;
}

JNIEXPORT jint JNICALL Java_com_wxmylife_javacallc_JNI_checkPwd
        (JNIEnv *env, jobject jobject, jstring jstring){
    char* pwd="12345";
    char* txt=_JString2CStr(env,jstring);
    int code =strcmp(pwd,txt);
    if(code==0){
        return 200;
    } else{
        return 400;
    }
}
