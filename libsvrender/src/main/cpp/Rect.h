//
// Created by wilbert on 2021/7/29.
//

#ifndef MY_APPLICATION_RECT_H
#define MY_APPLICATION_RECT_H


class Rect {
public:
    int left;
    int top;
    int right;
    int bottom;

    Rect(int l, int t, int r, int b) : left(l), top(t), right(r), bottom(b) {}

    ~ Rect(){};
};


#endif //MY_APPLICATION_RECT_H
