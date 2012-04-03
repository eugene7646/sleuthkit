/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_sleuthkit_datamodel_SleuthkitJNI */

#ifndef _Included_org_sleuthkit_datamodel_SleuthkitJNI
#define _Included_org_sleuthkit_datamodel_SleuthkitJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    getVersionNat
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_getVersionNat
  (JNIEnv *, jclass);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    startVerboseLoggingNat
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_startVerboseLoggingNat
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    newCaseDbNat
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_newCaseDbNat
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    openCaseDbNat
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_openCaseDbNat
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    closeCaseDbNat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_closeCaseDbNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    setDbNSRLNat
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_setDbNSRLNat
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    setDbKnownBadNat
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_setDbKnownBadNat
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    closeDbLookupsNat
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_closeDbLookupsNat
  (JNIEnv *, jclass);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDBLookup
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDBLookup
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    initAddImgNat
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_initAddImgNat
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    runAddImgNat
 * Signature: (J[Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_runAddImgNat
  (JNIEnv *, jclass, jlong, jobjectArray, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    stopAddImgNat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_stopAddImgNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    revertAddImgNat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_revertAddImgNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    commitAddImgNat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_commitAddImgNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    openImgNat
 * Signature: ([Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_openImgNat
  (JNIEnv *, jclass, jobjectArray, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    openVsNat
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_openVsNat
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    openVolNat
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_openVolNat
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    openFsNat
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_openFsNat
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    openFileNat
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_openFileNat
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    readImgNat
 * Signature: (J[BJJ)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_readImgNat
  (JNIEnv *, jclass, jlong, jbyteArray, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    readVsNat
 * Signature: (J[BJJ)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_readVsNat
  (JNIEnv *, jclass, jlong, jbyteArray, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    readVolNat
 * Signature: (J[BJJ)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_readVolNat
  (JNIEnv *, jclass, jlong, jbyteArray, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    readFsNat
 * Signature: (J[BJJ)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_readFsNat
  (JNIEnv *, jclass, jlong, jbyteArray, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    readFileNat
 * Signature: (J[BJJ)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_readFileNat
  (JNIEnv *, jclass, jlong, jbyteArray, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    closeImgNat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_closeImgNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    closeVsNat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_closeVsNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    closeFsNat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_closeFsNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    closeFileNat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_closeFileNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    createLookupIndexNat
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_createLookupIndexNat
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    lookupIndexExistsNat
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_lookupIndexExistsNat
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
