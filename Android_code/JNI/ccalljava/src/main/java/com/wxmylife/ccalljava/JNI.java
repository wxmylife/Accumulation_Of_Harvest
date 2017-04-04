package com.wxmylife.ccalljava;

/**
 * Created by wxmylife on 2017/4/4.
 */

public class JNI {


    {
        System.loadLibrary("ccalljava");
    }

    public native void callbackAdd();

    public native void callBackHelloFromJava();

    public native void callBackPrintString();

    public native void callBacksayHello();

    public int add(int x,int y){
        return x+y;
    }

}
