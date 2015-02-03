package com.cafelinear.ndkdemo;

public class PrintLib {
    public native static String helloWorld();

    static {
        System.loadLibrary("PrintLib");
    }
}
