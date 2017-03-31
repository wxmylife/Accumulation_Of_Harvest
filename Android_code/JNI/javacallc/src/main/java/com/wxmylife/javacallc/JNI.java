package com.wxmylife.javacallc;

/**
 * Created by wxmylife on 2017/3/31.
 */

public class JNI {

    public native int add(int x,int y);

    public native String sayHello(String s);

    public native int[] increaseArrayEles(int[] array);

    public native int checkPwd(String pwd);

}
