#ifndef _java_lang_Math2_AbsTests_h_
#define _java_lang_Math2_AbsTests_h_
//$ class java.lang.Math2.AbsTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace function {
			class IntUnaryOperator;
			class LongUnaryOperator;
		}
	}
}

namespace java {
	namespace lang {
		namespace Math2 {

class $export AbsTests : public ::java::lang::Object {
	$class(AbsTests, 0, ::java::lang::Object)
public:
	AbsTests();
	void init$();
	static void main($StringArray* args);
	static int32_t testInRangeIntAbs();
	static int64_t testInRangeLongAbs();
	static int32_t testIntAbs(::java::util::function::IntUnaryOperator* absFunc, int32_t argument, int32_t expected);
	static int32_t testIntMinValue();
	static int32_t testLongAbs(::java::util::function::LongUnaryOperator* absFunc, int64_t argument, int64_t expected);
	static int32_t testLongMinValue();
	static int32_t errors;
};

		} // Math2
	} // lang
} // java

#endif // _java_lang_Math2_AbsTests_h_