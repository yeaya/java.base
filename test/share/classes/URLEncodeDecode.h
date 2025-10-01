#ifndef _URLEncodeDecode_h_
#define _URLEncodeDecode_h_
//$ class URLEncodeDecode
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export URLEncodeDecode : public ::java::lang::Object {
	$class(URLEncodeDecode, 0, ::java::lang::Object)
public:
	URLEncodeDecode();
	void init$();
	static $String* getHexBytes($String* s);
	static void main($StringArray* args);
	static void test($String* enc, $String* correctEncoded);
	static $chars* chars;
	static $String* str;
	static $String* correctEncodedUTF8;
};

#endif // _URLEncodeDecode_h_