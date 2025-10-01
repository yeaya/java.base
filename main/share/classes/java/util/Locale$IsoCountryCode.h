#ifndef _java_util_Locale$IsoCountryCode_h_
#define _java_util_Locale$IsoCountryCode_h_
//$ class java.util.Locale$IsoCountryCode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("PART3")
#undef PART3
#pragma push_macro("PART1_ALPHA2")
#undef PART1_ALPHA2
#pragma push_macro("PART1_ALPHA3")
#undef PART1_ALPHA3

namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace java {
	namespace util {

class $export Locale$IsoCountryCode : public ::java::lang::Enum {
	$class(Locale$IsoCountryCode, 0, ::java::lang::Enum)
public:
	Locale$IsoCountryCode();
	static $Array<::java::util::Locale$IsoCountryCode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::java::util::Set* createCountryCodeSet() {return nullptr;}
	static ::java::util::Set* retrieveISOCountryCodes(::java::util::Locale$IsoCountryCode* type);
	static ::java::util::Locale$IsoCountryCode* valueOf($String* name);
	static $Array<::java::util::Locale$IsoCountryCode>* values();
	static ::java::util::Locale$IsoCountryCode* PART1_ALPHA2;
	static ::java::util::Locale$IsoCountryCode* PART1_ALPHA3;
	static ::java::util::Locale$IsoCountryCode* PART3;
	static $Array<::java::util::Locale$IsoCountryCode>* $VALUES;
	static ::java::util::Map* iso3166CodesMap;
};

	} // util
} // java

#pragma pop_macro("PART3")
#pragma pop_macro("PART1_ALPHA2")
#pragma pop_macro("PART1_ALPHA3")

#endif // _java_util_Locale$IsoCountryCode_h_