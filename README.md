# URLCode_for_Arduino
Encoding Or Decoding

## 构建 URLCode 对象
如果你需要解码URL或者编码URL都需要先构建一个URLCode对象
> URLCode urlobject

## 解码URL代码 EnCoding URLcode
构建好URLCode对象后，即可使用URLCode方法 URLCode.urldecode();
1. 先将编码后的URL传入对象中
> urlobject.urlcode = "https://main.mrxie.xyz";
2. 调用解码URL方法
> urlobject.urldecode();
3. 解码后的url在URLCode对象中的strcode中
> String strcode = urlobject.strcode;

## 编码URL代码 Encoding URLcode
构建好URLCode对象后，即可使用URLCode方法 URLCode.urlencode();
1. 先将编码前的URL传入对象中
> urlobject.strcode = "https://main.mrxie.xyz";
2. 调用编码URL方法
> urlobject.urlencode();
3. 解码后的url在URLCode对象中的urlcode中
> String urlcode = urlobject.urlcode;
