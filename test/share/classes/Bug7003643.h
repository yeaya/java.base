#ifndef _Bug7003643_h_
#define _Bug7003643_h_
//$ class Bug7003643
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("N")
#undef N

class $export Bug7003643 : public ::java::lang::Object {
	$class(Bug7003643, 0, ::java::lang::Object)
public:
	Bug7003643();
	void init$();
	static void main($StringArray* args);
	static const int32_t N = 5;
	static $StringArray* elements;
};

#pragma pop_macro("N")

#endif // _Bug7003643_h_