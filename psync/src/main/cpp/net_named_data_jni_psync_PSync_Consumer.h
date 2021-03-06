/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_named_data_jni_psync_PSync_Consumer */

#ifndef _Included_net_named_data_jni_psync_PSync_Consumer
#define _Included_net_named_data_jni_psync_PSync_Consumer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_named_data_jni_psync_PSync_Consumer
 * Method:    initializeConsumer
 * Signature: (Ljava/lang/String;IDJJ)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_net_named_1data_jni_psync_PSync_00024Consumer_initializeConsumer
  (JNIEnv *, jobject, jstring, jint, jdouble, jlong, jlong);

/*
 * Class:     net_named_data_jni_psync_PSync_Consumer
 * Method:    sendHelloInterest
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_net_named_1data_jni_psync_PSync_00024Consumer_sendHelloInterest
  (JNIEnv *, jobject, jobject);

/*
 * Class:     net_named_data_jni_psync_PSync_Consumer
 * Method:    sendSyncInterest
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_net_named_1data_jni_psync_PSync_00024Consumer_sendSyncInterest
  (JNIEnv *, jobject, jobject);

/*
 * Class:     net_named_data_jni_psync_PSync_Consumer
 * Method:    addSubscription
 * Signature: (Ljava/nio/ByteBuffer;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_named_1data_jni_psync_PSync_00024Consumer_addSubscription
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     net_named_data_jni_psync_PSync_Consumer
 * Method:    getSubscriptionList
 * Signature: (Ljava/nio/ByteBuffer;)Ljava/util/ArrayList;
 */
JNIEXPORT jobject JNICALL Java_net_named_1data_jni_psync_PSync_00024Consumer_getSubscriptionList
  (JNIEnv *, jobject, jobject);

/*
 * Class:     net_named_data_jni_psync_PSync_Consumer
 * Method:    isSubscribed
 * Signature: (Ljava/nio/ByteBuffer;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_named_1data_jni_psync_PSync_00024Consumer_isSubscribed
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     net_named_data_jni_psync_PSync_Consumer
 * Method:    getSeqNo
 * Signature: (Ljava/nio/ByteBuffer;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_net_named_1data_jni_psync_PSync_00024Consumer_getSeqNo
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     net_named_data_jni_psync_PSync_Consumer
 * Method:    stop
 * Signature: (Ljava/nio/ByteBuffer;Ljava/lang/String;)J
 */
JNIEXPORT void JNICALL Java_net_named_1data_jni_psync_PSync_00024Consumer_stop
  (JNIEnv *env, jobject obj, jobject handle);

#ifdef __cplusplus
}
#endif
#endif
