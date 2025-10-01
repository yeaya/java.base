#ifndef _java_lang_Float2_ParseFloat_h_
#define _java_lang_Float2_ParseFloat_h_
//$ class java.lang.Float2.ParseFloat
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HALF")
#undef HALF

namespace java {
	namespace math {
		class BigDecimal;
	}
}

namespace java {
	namespace lang {
		namespace Float2 {

class $export ParseFloat : public ::java::lang::Object {
	$class(ParseFloat, 0, ::java::lang::Object)
public:
	ParseFloat();
	void init$();
	static void check($String* val);
	static void check($String* val, float expected);
	static void fail($String* val, float n);
	static void main($StringArray* args);
	static void rudimentaryTest();
	static void testParsing($StringArray* input, bool exceptionalInput);
	static void testPowers();
	static ::java::math::BigDecimal* HALF;
	static $StringArray* badStrings;
	static $StringArray* goodStrings;
	static $StringArray* paddedBadStrings;
	static $StringArray* paddedGoodStrings;
};

		} // Float2
	} // lang
} // java

#pragma pop_macro("HALF")

#endif // _java_lang_Float2_ParseFloat_h_