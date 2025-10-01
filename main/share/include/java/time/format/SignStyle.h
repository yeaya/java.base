#ifndef _java_time_format_SignStyle_h_
#define _java_time_format_SignStyle_h_
//$ class java.time.format.SignStyle
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EXCEEDS_PAD")
#undef EXCEEDS_PAD
#pragma push_macro("NEVER")
#undef NEVER
#pragma push_macro("ALWAYS")
#undef ALWAYS
#pragma push_macro("NORMAL")
#undef NORMAL
#pragma push_macro("NOT_NEGATIVE")
#undef NOT_NEGATIVE

namespace java {
	namespace time {
		namespace format {

class $import SignStyle : public ::java::lang::Enum {
	$class(SignStyle, 0, ::java::lang::Enum)
public:
	SignStyle();
	static $Array<::java::time::format::SignStyle>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool parse(bool positive, bool strict, bool fixedWidth);
	static ::java::time::format::SignStyle* valueOf($String* name);
	static $Array<::java::time::format::SignStyle>* values();
	static ::java::time::format::SignStyle* NORMAL;
	static ::java::time::format::SignStyle* ALWAYS;
	static ::java::time::format::SignStyle* NEVER;
	static ::java::time::format::SignStyle* NOT_NEGATIVE;
	static ::java::time::format::SignStyle* EXCEEDS_PAD;
	static $Array<::java::time::format::SignStyle>* $VALUES;
};

		} // format
	} // time
} // java

#pragma pop_macro("EXCEEDS_PAD")
#pragma pop_macro("NEVER")
#pragma pop_macro("ALWAYS")
#pragma pop_macro("NORMAL")
#pragma pop_macro("NOT_NEGATIVE")

#endif // _java_time_format_SignStyle_h_