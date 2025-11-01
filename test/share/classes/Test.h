#ifndef _Test_h_
#define _Test_h_
//$ class Test
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Test : public ::java::lang::Object {
	$class(Test, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Test();
	void init$();
	virtual int32_t aa();
	virtual int32_t aa2();
	static void main($StringArray* args);
};

#endif // _Test_h_