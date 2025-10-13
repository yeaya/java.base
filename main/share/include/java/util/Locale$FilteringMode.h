#ifndef _java_util_Locale$FilteringMode_h_
#define _java_util_Locale$FilteringMode_h_
//$ class java.util.Locale$FilteringMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("AUTOSELECT_FILTERING")
#undef AUTOSELECT_FILTERING
#pragma push_macro("EXTENDED_FILTERING")
#undef EXTENDED_FILTERING
#pragma push_macro("IGNORE_EXTENDED_RANGES")
#undef IGNORE_EXTENDED_RANGES
#pragma push_macro("MAP_EXTENDED_RANGES")
#undef MAP_EXTENDED_RANGES
#pragma push_macro("REJECT_EXTENDED_RANGES")
#undef REJECT_EXTENDED_RANGES

namespace java {
	namespace util {

class $import Locale$FilteringMode : public ::java::lang::Enum {
	$class(Locale$FilteringMode, 0, ::java::lang::Enum)
public:
	Locale$FilteringMode();
	static $Array<::java::util::Locale$FilteringMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::util::Locale$FilteringMode* valueOf($String* name);
	static $Array<::java::util::Locale$FilteringMode>* values();
	static ::java::util::Locale$FilteringMode* AUTOSELECT_FILTERING;
	static ::java::util::Locale$FilteringMode* EXTENDED_FILTERING;
	static ::java::util::Locale$FilteringMode* IGNORE_EXTENDED_RANGES;
	static ::java::util::Locale$FilteringMode* MAP_EXTENDED_RANGES;
	static ::java::util::Locale$FilteringMode* REJECT_EXTENDED_RANGES;
	static $Array<::java::util::Locale$FilteringMode>* $VALUES;
};

	} // util
} // java

#pragma pop_macro("AUTOSELECT_FILTERING")
#pragma pop_macro("EXTENDED_FILTERING")
#pragma pop_macro("IGNORE_EXTENDED_RANGES")
#pragma pop_macro("MAP_EXTENDED_RANGES")
#pragma pop_macro("REJECT_EXTENDED_RANGES")

#endif // _java_util_Locale$FilteringMode_h_