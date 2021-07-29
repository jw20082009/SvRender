//
// Created by wilbert on 2021/7/29.
//

#ifndef MY_APPLICATION_FILTER_H
#define MY_APPLICATION_FILTER_H


class Filter {
protected:
    const char *VERTEX_SHADER = "attribute vec4 aPosition;"
                                "attribute vec4 aTextureCoord;"
                                "varying vec2 textureCoordinate;"
                                "void main() {"
                                "   gl_Position = aPosition;"
                                "   textureCoordinate = aTextureCoord.xy;"
                                "}";

    const char* FRAGMENT_SHADER = "precision mediump float;"
                                  "varying vec2 textureCoordinate;"
                                  "uniform sampler2D inputTexture;"
                                  "void main() {"
                                  "    gl_FragColor = texture2D(inputTexture, textureCoordinate);"
                                  "}";
};


#endif //MY_APPLICATION_FILTER_H
