package com.wxmylife.morgan;

/**
 * Created by wxmylife on 2017/3/30.
 */

public class JNI {

    {
        System.loadLibrary("HelloJni");
    }

    public  native String getMessage();

}
