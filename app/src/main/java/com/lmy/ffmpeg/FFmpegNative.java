package com.lmy.ffmpeg;

/**
 * Created by 李明艺 on 2016/1/14.
 *
 * @author lrlmy@foxmail.com
 */
public class FFmpegNative {
    static {
        System.loadLibrary("avutil-54");
        System.loadLibrary("avcodec");
        System.loadLibrary("swresample-1");
        System.loadLibrary("avformat-56");
        System.loadLibrary("swscale-3");
        System.loadLibrary("avfilter-5");
        System.loadLibrary("ffmpeg_codec");
    }

    public native int avcodec_find_decoder(int codecID);
}
