#ifndef _java_text_NumberFormat$Field_h_
#define _java_text_NumberFormat$Field_h_
//$ class java.text.NumberFormat$Field
//$ extends java.text.Format$Field

#include <java/text/Format$Field.h>

#pragma push_macro("CURRENCY")
#undef CURRENCY
#pragma push_macro("EXPONENT_SIGN")
#undef EXPONENT_SIGN
#pragma push_macro("SUFFIX")
#undef SUFFIX
#pragma push_macro("FRACTION")
#undef FRACTION
#pragma push_macro("DECIMAL_SEPARATOR")
#undef DECIMAL_SEPARATOR
#pragma push_macro("GROUPING_SEPARATOR")
#undef GROUPING_SEPARATOR
#pragma push_macro("PERMILLE")
#undef PERMILLE
#pragma push_macro("PREFIX")
#undef PREFIX
#pragma push_macro("PERCENT")
#undef PERCENT
#pragma push_macro("EXPONENT")
#undef EXPONENT
#pragma push_macro("SIGN")
#undef SIGN
#pragma push_macro("INTEGER")
#undef INTEGER
#pragma push_macro("EXPONENT_SYMBOL")
#undef EXPONENT_SYMBOL

namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace text {

class $import NumberFormat$Field : public ::java::text::Format$Field {
	$class(NumberFormat$Field, 0, ::java::text::Format$Field)
public:
	NumberFormat$Field();
	void init$($String* name);
	virtual $Object* readResolve() override;
	static const int64_t serialVersionUID = (int64_t)0x6802A038193FF37A;
	static ::java::util::Map* instanceMap;
	static ::java::text::NumberFormat$Field* INTEGER;
	static ::java::text::NumberFormat$Field* FRACTION;
	static ::java::text::NumberFormat$Field* EXPONENT;
	static ::java::text::NumberFormat$Field* DECIMAL_SEPARATOR;
	static ::java::text::NumberFormat$Field* SIGN;
	static ::java::text::NumberFormat$Field* GROUPING_SEPARATOR;
	static ::java::text::NumberFormat$Field* EXPONENT_SYMBOL;
	static ::java::text::NumberFormat$Field* PERCENT;
	static ::java::text::NumberFormat$Field* PERMILLE;
	static ::java::text::NumberFormat$Field* CURRENCY;
	static ::java::text::NumberFormat$Field* EXPONENT_SIGN;
	static ::java::text::NumberFormat$Field* PREFIX;
	static ::java::text::NumberFormat$Field* SUFFIX;
};

	} // text
} // java

#pragma pop_macro("CURRENCY")
#pragma pop_macro("EXPONENT_SIGN")
#pragma pop_macro("SUFFIX")
#pragma pop_macro("FRACTION")
#pragma pop_macro("DECIMAL_SEPARATOR")
#pragma pop_macro("GROUPING_SEPARATOR")
#pragma pop_macro("PERMILLE")
#pragma pop_macro("PREFIX")
#pragma pop_macro("PERCENT")
#pragma pop_macro("EXPONENT")
#pragma pop_macro("SIGN")
#pragma pop_macro("INTEGER")
#pragma pop_macro("EXPONENT_SYMBOL")

#endif // _java_text_NumberFormat$Field_h_