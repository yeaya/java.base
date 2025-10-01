#ifndef _OpenStream_h_
#define _OpenStream_h_
//$ class OpenStream
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export OpenStream : public ::java::lang::Object {
	$class(OpenStream, 0, ::java::lang::Object)
public:
	OpenStream();
	void init$();
	static void checkThrows($String* url);
	static void main($StringArray* args);
	static void testHttp();
	static void testUnc();
	static $String* badHttp;
	static $String* badUnc;
};

#endif // _OpenStream_h_