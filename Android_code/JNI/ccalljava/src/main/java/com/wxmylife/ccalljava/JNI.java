package com.wxmylife.ccalljava;

import android.util.Log;


/**
 * Created by wxmylife on 2017/4/4.
 */

public class JNI {

    private static final String TAG=JNI.class.getSimpleName();

    {
        System.loadLibrary("ccalljava");
    }

    public native void callbackAdd();

    public native void callBackHelloFromJava();

    public native void callBackPrintString();

    public native void callBackSayHello();

    public int add(int x,int y){
        Log.e(TAG,"add()");
        return x+y;
    }

    public void helloFromJava(){
        Log.e(TAG,"HelloFromJava()");
    }

    public void printString(String s){
        Log.e(TAG,"c中输入的s---->"+s);
    }

    public static void sayHello(String s){
        Log.e(TAG,"我是java代码中的JNI."+"java中的sayHello(String s)静态方法，被c调用."+s);
    }
}
