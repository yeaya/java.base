#ifndef _One_h_
#define _One_h_
//$ class One
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export One : public ::java::lang::Object {
	$class(One, $NO_CLASS_INIT, ::java::lang::Object)
public:
	One();
	void init$();
	static void main($StringArray* args);
	static void test($String* expect);
};

#endif // _One_h_