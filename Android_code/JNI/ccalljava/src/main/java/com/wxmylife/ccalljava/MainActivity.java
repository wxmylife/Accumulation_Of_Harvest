package com.wxmylife.ccalljava;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void add(View view){
        new JNI().callbackAdd();
    }


    public void string(View view){
        new JNI().callBackHelloFromJava();
    }

    public void print(View view){
        new JNI().callBackPrintString();
    }

    public void staticPrint(View view){
        new JNI().callBackSayHello();
    }
}
