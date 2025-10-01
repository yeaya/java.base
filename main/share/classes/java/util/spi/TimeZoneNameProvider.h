#ifndef _java_util_spi_TimeZoneNameProvider_h_
#define _java_util_spi_TimeZoneNameProvider_h_
//$ class java.util.spi.TimeZoneNameProvider
//$ extends java.util.spi.LocaleServiceProvider

#include <java/util/spi/LocaleServiceProvider.h>

#pragma push_macro("ID")
#undef ID

namespace java {
	namespace util {
		class Locale;
	}
}

namespace java {
	namespace util {
		namespace spi {

class $export TimeZoneNameProvider : public ::java::util::spi::LocaleServiceProvider {
	$class(TimeZoneNameProvider, $NO_CLASS_INIT, ::java::util::spi::LocaleServiceProvider)
public:
	TimeZoneNameProvider();
	void init$();
	virtual $String* getDisplayName($String* ID, bool daylight, int32_t style, ::java::util::Locale* locale) {return nullptr;}
	virtual $String* getGenericDisplayName($String* ID, int32_t style, ::java::util::Locale* locale);
};

		} // spi
	} // util
} // java

#pragma pop_macro("ID")

#endif // _java_util_spi_TimeZoneNameProvider_h_