/*
    Encoding.ino
    created 3 July 2022
    By MR-XieXuan
    The code is public domain :
    https://github.com/MR-XieXuan/URLCode_for_Arduino
    
    QQ:3325629928
*/

#include <URLCode.h>

// Define URL Object
URLCode url;

void setup(){
  Serial.begin(9600); 
  // Let input the urlcode in URL Object http://www.mrxie.xyz/{"json":"I'm json"}
  url.strcode = "http://www.mrxie.xyz/{\"json\":\"I'm json\"}";
  // Encoding the urlcode
  url.urlencode();
  // Gain the encoded URL 
  string st = url.urlcode;
  // http://www.mrxie.xyz/%7B%22json%22:%22I'm%20json%22%7D
  Serial.println( st );
}

void loop(){
  Serial.println( "StrCode is " + url.strcode );
  Serial.println( "URLCode is " + url.urlcode );
  Serial.println();
  delay(1000);
}
