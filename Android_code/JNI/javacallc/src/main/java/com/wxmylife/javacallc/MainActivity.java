package com.wxmylife.javacallc;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private TextView textView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        textView= (TextView) findViewById(R.id.contentTxt);
    }


    public void add(View view){
        textView.setText(new JNI().add(10,20)+"");
    }

    public void string(View view){
       String result= new JNI().sayHello("i love u");
        // Log.e("wxmylife",result);
        textView.setText(result);
    }

    public void array(View view){
        int[] array={1,2,3,4,5,6};
        int[] result=  new JNI().increaseArrayEles(array);
        StringBuffer stringBuffer=new StringBuffer();
        for (int i : result) {
            stringBuffer.append(i+",");
        }
        textView.setText(stringBuffer.toString());
    }

    public void checkpwd(View view){
        int code=new JNI().checkPwd("12345");

        textView.setText(code==200?"true":"false");
    }
}
