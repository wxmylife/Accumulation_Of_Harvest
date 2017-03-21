## JNI的学习

-------


### 什么是JNI
	
    java native interface(java本地开发接口)。相当于桥梁的左右，也可称为一种协议。是通过jni让java调用c语言或者c++代码，并且可以让c代表调java代码

-------

### 什么是NDK

    ndk: native develop kits(本地开发工具包).
    
    
-------

### C语言基本类型

#### 长度

| 类型 | 长度 |
| :-: | :-: |
| int | 4 |
| char | 1 |
| float | 4 |
| double | 8 |
| long | 8 |
| short | 2 |
| signed | 4 |
| unsigned | 4 | 
| void | 1 |

#### java基本数据类型和c语言的一些区别

**c99标准规定：long类型的规定，不小于整形**

1. java中**char**类型的长度为**2**个字节，c语言中的长度为**1**个字节
2. java中**long**类型的长度为**8**个字节，c语言中的长度为**4**个字节
3. c语言中没有**byte**
4. c语言中boolean类型，0表示false，非零表示true
5. **unsigned**表示无符号，为正数，长度在0～255，-2^7 ~2^7 -1
6. **signed**表示有符号，为负数，长度在-128～127，0~2^8 -1
7. **void**表示无类型，代表任意类型


