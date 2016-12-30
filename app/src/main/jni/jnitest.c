//
// Created by Administrator on 2016/6/12.
//

#include "com_Jsu_testjni_NdkJniUtils.h"

JNIEXPORT jstring JNICALL Java_com_Jsu_testjni_NdkJniUtils_getCLanguageString
    (JNIEnv *env, jobject obj){
        return (*env) -> NewStringUTF(env,"This just a test for Android Studio NDK JNI developer!");
    }
