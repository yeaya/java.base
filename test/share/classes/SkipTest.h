#ifndef _SkipTest_h_
#define _SkipTest_h_
//$ class SkipTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BLOCK_SIZE")
#undef BLOCK_SIZE

class $export SkipTest : public ::java::lang::Object {
	$class(SkipTest, 0, ::java::lang::Object)
public:
	SkipTest();
	void init$();
	static void main($StringArray* args);
	static $String* javaExe;
	static $String* classpath;
	static const int32_t BLOCK_SIZE = 10000;
};

#pragma pop_macro("BLOCK_SIZE")

#endif // _SkipTest_h_