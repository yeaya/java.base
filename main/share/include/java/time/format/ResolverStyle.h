#ifndef _java_time_format_ResolverStyle_h_
#define _java_time_format_ResolverStyle_h_
//$ class java.time.format.ResolverStyle
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("LENIENT")
#undef LENIENT
#pragma push_macro("SMART")
#undef SMART
#pragma push_macro("STRICT")
#undef STRICT

namespace java {
	namespace time {
		namespace format {

class $import ResolverStyle : public ::java::lang::Enum {
	$class(ResolverStyle, 0, ::java::lang::Enum)
public:
	ResolverStyle();
	static $Array<::java::time::format::ResolverStyle>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::time::format::ResolverStyle* valueOf($String* name);
	static $Array<::java::time::format::ResolverStyle>* values();
	static ::java::time::format::ResolverStyle* STRICT;
	static ::java::time::format::ResolverStyle* SMART;
	static ::java::time::format::ResolverStyle* LENIENT;
	static $Array<::java::time::format::ResolverStyle>* $VALUES;
};

		} // format
	} // time
} // java

#pragma pop_macro("LENIENT")
#pragma pop_macro("SMART")
#pragma pop_macro("STRICT")

#endif // _java_time_format_ResolverStyle_h_