#ifndef _RoundingTests_h_
#define _RoundingTests_h_
//$ class RoundingTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export RoundingTests : public ::java::lang::Object {
	$class(RoundingTests, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RoundingTests();
	void init$();
	static void main($StringArray* argv);
	static int32_t roundingTests();
};

#endif // _RoundingTests_h_