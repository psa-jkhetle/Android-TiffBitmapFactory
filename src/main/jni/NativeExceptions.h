//
// Created by alexeyba on 09.11.15.
//

#ifdef __cplusplus
extern "C" {
#endif

#ifndef TIFFEXAMPLE_NATIVEEXCEPTIONS_H
#define TIFFEXAMPLE_NATIVEEXCEPTIONS_H

#endif //TIFFEXAMPLE_NATIVEEXCEPTIONS_H

#include <jni.h>



void throw_not_enought_memory_exception(JNIEnv *, int, int);
void throw_decode_file_exception(JNIEnv *, jstring);
void throw_cant_open_file_exception(JNIEnv *, jstring);

#ifdef __cplusplus
}
#endif

