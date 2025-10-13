#ifndef _java_time_format_FormatStyle_h_
#define _java_time_format_FormatStyle_h_
//$ class java.time.format.FormatStyle
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("FULL")
#undef FULL
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("MEDIUM")
#undef MEDIUM
#pragma push_macro("SHORT")
#undef SHORT

namespace java {
	namespace time {
		namespace format {

class $export FormatStyle : public ::java::lang::Enum {
	$class(FormatStyle, 0, ::java::lang::Enum)
public:
	FormatStyle();
	static $Array<::java::time::format::FormatStyle>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::time::format::FormatStyle* valueOf($String* name);
	static $Array<::java::time::format::FormatStyle>* values();
	static ::java::time::format::FormatStyle* FULL;
	static ::java::time::format::FormatStyle* LONG;
	static ::java::time::format::FormatStyle* MEDIUM;
	static ::java::time::format::FormatStyle* SHORT;
	static $Array<::java::time::format::FormatStyle>* $VALUES;
};

		} // format
	} // time
} // java

#pragma pop_macro("FULL")
#pragma pop_macro("LONG")
#pragma pop_macro("MEDIUM")
#pragma pop_macro("SHORT")

#endif // _java_time_format_FormatStyle_h_