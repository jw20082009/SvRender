//
// Created by wilbert on 2021/7/28.
//
#include "jni.h"
#include "TraceLog.h"

extern "C" JNIEXPORT void
JNICALL Java_com_wilbert_svrender_SvRenderJni_Test(JNIEnv * env, jclass cls)
{
    LOGE("[%s] ",__FUNCTION__ );
}