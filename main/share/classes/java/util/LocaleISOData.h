#ifndef _java_util_LocaleISOData_h_
#define _java_util_LocaleISOData_h_
//$ class java.util.LocaleISOData
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ISO3166_3")
#undef ISO3166_3

namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace util {

class LocaleISOData : public ::java::lang::Object {
	$class(LocaleISOData, 0, ::java::lang::Object)
public:
	LocaleISOData();
	void init$();
	static ::java::util::Set* computeISO3166_1Alpha3Countries();
	static $String* isoLanguageTable;
	static $String* isoCountryTable;
	static $StringArray* ISO3166_3;
};

	} // util
} // java

#pragma pop_macro("ISO3166_3")

#endif // _java_util_LocaleISOData_h_