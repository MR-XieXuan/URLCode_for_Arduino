#ifndef _URLCODE_H_
#define _URLCODE_H_

#include <string.h>


class URLCode{
private:
    char dec2hex(short int c);
    int hex2dec(char c);
public:
    String urlcode; // URL 编码后
    String strcode; // URL 编码前
    void urlencode();   // 编码URL
    void urldecode();   // 解码URL
};

#include "URLCode.cpp"




#endif








