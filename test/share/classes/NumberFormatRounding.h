#ifndef _NumberFormatRounding_h_
#define _NumberFormatRounding_h_
//$ class NumberFormatRounding
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AE")
#undef AE

namespace java {
	namespace math {
		class RoundingMode;
	}
}

class $export NumberFormatRounding : public ::java::lang::Object {
	$class(NumberFormatRounding, 0, ::java::lang::Object)
public:
	NumberFormatRounding();
	void init$();
	static void basicTest();
	static void main($StringArray* args);
	static void roundTest(::java::math::RoundingMode* rm, $StringArray* expected);
	static $String* AE;
	static $doubles* src;
	static $StringArray* up;
	static $StringArray* down;
	static $StringArray* ceiling;
	static $StringArray* floor;
	static $StringArray* half_up;
	static $StringArray* half_down;
	static $StringArray* half_even;
	static $StringArray* unnecessary;
};

#pragma pop_macro("AE")

#endif // _NumberFormatRounding_h_