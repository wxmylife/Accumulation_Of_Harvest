# JNI的学习
 
## 什么是JNI
	
> java native interface(java本地开发接口)。相当于桥梁的左右，也可称为一种协议。是通过jni让java调用c语言或者c++代码，并且可以让c代表调java代码


## 什么是NDK

> ndk: native develop kits(本地开发工具包).

## JNI协议


|Java类型| JNI别名 | 本地类型 |  
| :-: | :-: | :-: | :-: |
| boolean | jboolean | unsigned char |
| byte | jbyte | signed char | 
| char | jchar  | unsigned short | 
| short | jshort | short |  
| int | jint | int |
| long | jlong | long long | 
| float | jfloat | float |  
| double | jdouble | double |  


## 使用流程

- 安装配置NDk
    1. 解压NDK的Zip包到非中文目录；
    2. 配置Path：解压后NDK的根目录--->ndk-build 
- 给AnroidStudio配置NDk
    1. ***local.properties***中添加配置ndk.dir=G\:\\android-ndk
    2. ***gradle.properties***中添加配置：
    
        ~~~
        android.useDeprecatedNdk=true //兼容老版本NDk
        ~~~
- 编写native方法

    ~~~
    public class JNI{
        public native String getMessage();
    }   
    ~~~
- 定义对应的JIN
    1. 在main下创建jni文件夹
    2. 生成native方法对应的JNI函数声明头文件：
       
       ~~~
       1. 进入java文件夹；
       2. 执行命令:
            **javah com.wxmylife.morgan.JNI**
       3. 生成头文件: 
            **com_wxmylife_morgan_JIN.h**
       ~~~

