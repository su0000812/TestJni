package com.Jsu.testjni;

/**
 * Created by JSu on 2016/6/12.
 */

public class NdkJniUtils {
    static{
        System.loadLibrary("JsuFirstJniLibrary");
    }

    public native String getCLanguageString();
}
