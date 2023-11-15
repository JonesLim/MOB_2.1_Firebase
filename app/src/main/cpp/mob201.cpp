#include <jni.h>

// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.



extern "C"
JNIEXPORT jstring JNICALL
Java_com_jones_mob201_core_utils_NativeUtils_greet(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF("Hello From Native (CPP)");
}