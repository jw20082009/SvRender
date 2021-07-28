package com.wilbert.svrender;

/**
 * @author wilbert
 * @Date 2021/7/28 20:37
 * @email jiangwang.wilbert@bigo.sg
 **/
public class SvRenderJni {

    static {
        System.loadLibrary("svrender");
    }

    public static native void Test();
}
