#ifndef _DivideMcTests_h_
#define _DivideMcTests_h_
//$ class DivideMcTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export DivideMcTests : public ::java::lang::Object {
	$class(DivideMcTests, 0, ::java::lang::Object)
public:
	DivideMcTests();
	void init$();
	static void initResults1();
	static void initResults2();
	static void main($StringArray* argv);
	static int32_t mcDivideTests();
	static $StringArray* value;
	static $Array<::java::lang::String, 2>* results;
};

#endif // _DivideMcTests_h_