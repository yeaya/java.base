#ifndef _java_util_spi_CalendarNameProvider_h_
#define _java_util_spi_CalendarNameProvider_h_
//$ class java.util.spi.CalendarNameProvider
//$ extends java.util.spi.LocaleServiceProvider

#include <java/util/spi/LocaleServiceProvider.h>

namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}

namespace java {
	namespace util {
		namespace spi {

class $import CalendarNameProvider : public ::java::util::spi::LocaleServiceProvider {
	$class(CalendarNameProvider, $NO_CLASS_INIT, ::java::util::spi::LocaleServiceProvider)
public:
	CalendarNameProvider();
	void init$();
	virtual $String* getDisplayName($String* calendarType, int32_t field, int32_t value, int32_t style, ::java::util::Locale* locale) {return nullptr;}
	virtual ::java::util::Map* getDisplayNames($String* calendarType, int32_t field, int32_t style, ::java::util::Locale* locale) {return nullptr;}
};

		} // spi
	} // util
} // java

#endif // _java_util_spi_CalendarNameProvider_h_