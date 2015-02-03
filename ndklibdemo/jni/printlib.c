#include "com_cafelinear_ndkdemo_PrintLib.h"

JNIEXPORT jstring JNICALL Java_com_cafelinear_ndkdemo_PrintLib_helloWorld (JNIEnv *env, jclass clazz) {
    jstring result = (*env)->NewStringUTF(env, "Hello Native World");
    return result;
}
