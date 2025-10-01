#ifndef _java_util_Locale$IsoCountryCode$2_h_
#define _java_util_Locale$IsoCountryCode$2_h_
//$ class java.util.Locale$IsoCountryCode$2
//$ extends java.util.Locale$IsoCountryCode

#include <java/util/Locale$IsoCountryCode.h>

namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace util {

class Locale$IsoCountryCode$2 : public ::java::util::Locale$IsoCountryCode {
	$class(Locale$IsoCountryCode$2, $NO_CLASS_INIT, ::java::util::Locale$IsoCountryCode)
public:
	Locale$IsoCountryCode$2();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::java::util::Set* createCountryCodeSet() override;
};

	} // util
} // java

#endif // _java_util_Locale$IsoCountryCode$2_h_