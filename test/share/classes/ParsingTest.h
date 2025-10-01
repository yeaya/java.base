#ifndef _ParsingTest_h_
#define _ParsingTest_h_
//$ class ParsingTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ParsingTest : public ::java::lang::Object {
	$class(ParsingTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ParsingTest();
	void init$();
	static void check(int64_t expected, $String* val);
	static void check(int64_t expected, $String* val, int32_t start, int32_t end, int32_t radix);
	static void checkFailure($String* val);
	static void checkIndexOutOfBoundsException($String* val, int32_t start, int32_t end, int32_t radix);
	static void checkNull(int32_t start, int32_t end, int32_t radix);
	static void checkNumberFormatException($String* val, int32_t start, int32_t end, int32_t radix);
	static void main($StringArray* argv);
};

#endif // _ParsingTest_h_