#ifndef _java_text_NumberFormat$Style_h_
#define _java_text_NumberFormat$Style_h_
//$ class java.text.NumberFormat$Style
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("LONG")
#undef LONG

namespace java {
	namespace text {

class $export NumberFormat$Style : public ::java::lang::Enum {
	$class(NumberFormat$Style, 0, ::java::lang::Enum)
public:
	NumberFormat$Style();
	static $Array<::java::text::NumberFormat$Style>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::text::NumberFormat$Style* valueOf($String* name);
	static $Array<::java::text::NumberFormat$Style>* values();
	static ::java::text::NumberFormat$Style* SHORT;
	static ::java::text::NumberFormat$Style* LONG;
	static $Array<::java::text::NumberFormat$Style>* $VALUES;
};

	} // text
} // java

#pragma pop_macro("SHORT")
#pragma pop_macro("LONG")

#endif // _java_text_NumberFormat$Style_h_