#ifndef _CompareIC_h_
#define _CompareIC_h_
//$ class CompareIC
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export CompareIC : public ::java::lang::Object {
	$class(CompareIC, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CompareIC();
	void init$();
	static void main($StringArray* args);
	void testTriplet($String* one, $String* two, $String* three);
};

#endif // _CompareIC_h_