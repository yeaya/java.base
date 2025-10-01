#ifndef _java_time_format_TextStyle_h_
#define _java_time_format_TextStyle_h_
//$ class java.time.format.TextStyle
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("SHORT_STANDALONE")
#undef SHORT_STANDALONE
#pragma push_macro("NARROW_STANDALONE")
#undef NARROW_STANDALONE
#pragma push_macro("FULL_STANDALONE")
#undef FULL_STANDALONE
#pragma push_macro("FULL")
#undef FULL
#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("NARROW")
#undef NARROW

namespace java {
	namespace time {
		namespace format {

class $export TextStyle : public ::java::lang::Enum {
	$class(TextStyle, 0, ::java::lang::Enum)
public:
	TextStyle();
	static $Array<::java::time::format::TextStyle>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t calendarStyle, int32_t zoneNameStyleIndex);
	virtual ::java::time::format::TextStyle* asNormal();
	virtual ::java::time::format::TextStyle* asStandalone();
	virtual bool isStandalone();
	virtual int32_t toCalendarStyle();
	static ::java::time::format::TextStyle* valueOf($String* name);
	static $Array<::java::time::format::TextStyle>* values();
	virtual int32_t zoneNameStyleIndex();
	static ::java::time::format::TextStyle* FULL;
	static ::java::time::format::TextStyle* FULL_STANDALONE;
	static ::java::time::format::TextStyle* SHORT;
	static ::java::time::format::TextStyle* SHORT_STANDALONE;
	static ::java::time::format::TextStyle* NARROW;
	static ::java::time::format::TextStyle* NARROW_STANDALONE;
	static $Array<::java::time::format::TextStyle>* $VALUES;
	int32_t calendarStyle = 0;
	int32_t zoneNameStyleIndex$ = 0;
};

		} // format
	} // time
} // java

#pragma pop_macro("SHORT_STANDALONE")
#pragma pop_macro("NARROW_STANDALONE")
#pragma pop_macro("FULL_STANDALONE")
#pragma pop_macro("FULL")
#pragma pop_macro("SHORT")
#pragma pop_macro("NARROW")

#endif // _java_time_format_TextStyle_h_