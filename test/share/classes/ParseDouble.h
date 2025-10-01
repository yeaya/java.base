#ifndef _ParseDouble_h_
#define _ParseDouble_h_
//$ class ParseDouble
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HALF")
#undef HALF

namespace java {
	namespace math {
		class BigDecimal;
	}
}

class $export ParseDouble : public ::java::lang::Object {
	$class(ParseDouble, 0, ::java::lang::Object)
public:
	ParseDouble();
	void init$();
	static void check($String* val);
	static void check($String* val, double expected);
	static void fail($String* val, double n);
	static void main($StringArray* args);
	static void rudimentaryTest();
	static void testParsing($StringArray* input, bool exceptionalInput);
	static void testPowers();
	static void testRegex($StringArray* input, bool exceptionalInput);
	static void testStrictness();
	static void testSubnormalPowers();
	static ::java::math::BigDecimal* HALF;
	static $StringArray* badStrings;
	static $StringArray* goodStrings;
	static $StringArray* paddedBadStrings;
	static $StringArray* paddedGoodStrings;
};

#pragma pop_macro("HALF")

#endif // _ParseDouble_h_