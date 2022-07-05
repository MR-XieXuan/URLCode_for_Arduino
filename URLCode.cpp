#ifndef _URLCODE_CPP_
#define _URLCODE_CPP_

#include "URLCode.h"



int URLCode :: hex2dec(char c){
    if ('0' <= c && c <= '9') 
    {
        return c - '0';
    } 
    else if ('a' <= c && c <= 'f')
    {
        return c - 'a' + 10;
    } 
    else if ('A' <= c && c <= 'F')
    {
        return c - 'A' + 10;
    } 
    else 
    {
        return -1;
    }
}



char URLCode :: dec2hex(short int c)
{
    if (0 <= c && c <= 9) 
    {
        return c + '0';
    } 
    else if (10 <= c && c <= 15) 
    {
        return c + 'A' - 10;
    } 
    else 
    {
        return -1;
    }
}


//编码一个url
void URLCode :: urlencode()
{
    urlcode = "";
    int i = 0;
    int len = urlcode.length();
    for (i = 0; i < len; ++i) 
    {
        char c = urlcode[i];
        if (    ('0' <= c && c <= '9') ||
                ('a' <= c && c <= 'z') ||
                ('A' <= c && c <= 'Z') || 
                c == '/' || c == '.') 
        {
            strcode += String(c);
        } 
        else 
        {
            int j = (short int)c;
            if (j < 0)
                j += 256;
            int i1, i0;
            i1 = j / 16;
            i0 = j - i1 * 16;
            strcode += String('%');
            strcode += String((char)dec2hex(i1));
            strcode += String((char)dec2hex(i0));
        }
    }
}

// 解码url
void URLCode :: urldecode()
{
    strcode = "";
    int i = 0;
    int len = urlcode.length();
    for (i = 0; i < len; ++i) 
    {
        ESP.wdtFeed();
        char c = urlcode[i];
        if (c != '%') {
            strcode += String(c);
        } else {
            char c1 = urlcode[++i];
            char c0 = urlcode[++i];
            int num = 0;
            num = hex2dec(c1) * 16 + hex2dec(c0);
            strcode += String((char)num);
        }
    }
}



#endif
