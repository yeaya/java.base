#ifndef _PowTests_h_
#define _PowTests_h_
//$ class PowTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export PowTests : public ::java::lang::Object {
	$class(PowTests, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PowTests();
	void init$();
	static void main($StringArray* argv);
	static int32_t zeroAndOneTests();
};

#endif // _PowTests_h_