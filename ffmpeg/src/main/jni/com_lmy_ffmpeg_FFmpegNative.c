#include <stdio.h>
#include <string.h>
#include "com_lmy_ffmpeg_FFmpegNative.h"

/*
 * Class:     com_lmy_ffmpeg_FFmpegNative
 * Method:    avcodec_find_decoder
 * Signature: (I)I
 */
JNIEXPORT jintJNICALL Java_com_lmy_ffmpeg_FFmpegNative_avcodec_1find_1decoder
        (JNIEnv *env, jobject obj, jint codec_id) {
    AVCodec *codec = NULL;
    /*register all formats and codecs */
    av_register_all();
    codec = avcodec_find_decoder(codecID);
    if (codec != NULL) {
        return0;
    }
    else {
        return -1;
    }
}