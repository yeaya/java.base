#ifndef _Bug6970930_h_
#define _Bug6970930_h_
//$ class Bug6970930
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Bug6970930 : public ::java::lang::Object {
	$class(Bug6970930, 0, ::java::lang::Object)
public:
	Bug6970930();
	void init$();
	static void main($StringArray* args);
	static void test1($String* s1, $String* s2);
	static bool err;
};

#endif // _Bug6970930_h_