package com.wxmylife.morgan;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView textView= (TextView) findViewById(R.id.text1);



        String result=new JNI().getMessage();
        textView.setText(result);
        System.out.print("result----->"+result);

    }
}
