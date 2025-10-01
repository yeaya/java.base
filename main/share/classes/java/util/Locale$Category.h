#ifndef _java_util_Locale$Category_h_
#define _java_util_Locale$Category_h_
//$ class java.util.Locale$Category
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DISPLAY")
#undef DISPLAY
#pragma push_macro("FORMAT")
#undef FORMAT

namespace java {
	namespace util {

class $export Locale$Category : public ::java::lang::Enum {
	$class(Locale$Category, 0, ::java::lang::Enum)
public:
	Locale$Category();
	static $Array<::java::util::Locale$Category>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* languageKey, $String* scriptKey, $String* countryKey, $String* variantKey, $String* extensionsKey);
	static ::java::util::Locale$Category* valueOf($String* name);
	static $Array<::java::util::Locale$Category>* values();
	static ::java::util::Locale$Category* DISPLAY;
	static ::java::util::Locale$Category* FORMAT;
	static $Array<::java::util::Locale$Category>* $VALUES;
	$String* languageKey = nullptr;
	$String* scriptKey = nullptr;
	$String* countryKey = nullptr;
	$String* variantKey = nullptr;
	$String* extensionsKey = nullptr;
};

	} // util
} // java

#pragma pop_macro("DISPLAY")
#pragma pop_macro("FORMAT")

#endif // _java_util_Locale$Category_h_