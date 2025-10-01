#ifndef _GoldenDoubleValues_h_
#define _GoldenDoubleValues_h_
//$ class GoldenDoubleValues
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PROPERTY_CHECK_NEGATIVE_VALUE")
#undef PROPERTY_CHECK_NEGATIVE_VALUE
#pragma push_macro("PROPERTY_CHECK_POSITIVE_VALUE")
#undef PROPERTY_CHECK_POSITIVE_VALUE

namespace java {
	namespace util {
		class Locale;
	}
}

class GoldenDoubleValues : public ::java::lang::Object {
	$class(GoldenDoubleValues, 0, ::java::lang::Object)
public:
	GoldenDoubleValues();
	void init$();
	static ::java::util::Locale* TestLocale;
	static ::java::util::Locale* FullLocalizationTestLocale;
	static double PROPERTY_CHECK_NEGATIVE_VALUE;
	static double PROPERTY_CHECK_POSITIVE_VALUE;
	static $doubles* DecimalLocalizationValues;
	static $doubles* DecimalGoldenValues;
	static $doubles* CurrencyGoldenValues;
};

#pragma pop_macro("PROPERTY_CHECK_NEGATIVE_VALUE")
#pragma pop_macro("PROPERTY_CHECK_POSITIVE_VALUE")

#endif // _GoldenDoubleValues_h_