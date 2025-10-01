#ifndef _TieRoundingTest_h_
#define _TieRoundingTest_h_
//$ class TieRoundingTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {
		class NumberFormat;
	}
}

class $export TieRoundingTest : public ::java::lang::Object {
	$class(TieRoundingTest, 0, ::java::lang::Object)
public:
	TieRoundingTest();
	void init$();
	static void formatOutputTestDouble(::java::text::NumberFormat* nf, double doubleToTest, $String* tiePosition, $String* inputDigits, $String* expectedOutput);
	static void formatOutputTestLong(::java::text::NumberFormat* nf, int64_t longToTest, $String* tiePosition, $String* inputDigits, $String* expectedOutput);
	static void formatOutputTestObject(::java::text::NumberFormat* nf, Object$* someNumber, $String* tiePosition, $String* inputDigits, $String* expectedOutput);
	static void main($StringArray* args);
	static int32_t testCounter;
	static int32_t errorCounter;
	static bool allPassed;
};

#endif // _TieRoundingTest_h_