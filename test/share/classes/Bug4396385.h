#ifndef _Bug4396385_h_
#define _Bug4396385_h_
//$ class Bug4396385
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Bug4396385 : public ::java::lang::Object {
	$class(Bug4396385, 0, ::java::lang::Object)
public:
	Bug4396385();
	void init$();
	static void main($StringArray* args);
	static void test($String* pattern, $String* src);
	static int32_t errorCount;
	static $Array<::java::lang::String, 2>* data;
};

#endif // _Bug4396385_h_