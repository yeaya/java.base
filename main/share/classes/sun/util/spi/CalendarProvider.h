#ifndef _sun_util_spi_CalendarProvider_h_
#define _sun_util_spi_CalendarProvider_h_
//$ class sun.util.spi.CalendarProvider
//$ extends java.util.spi.LocaleServiceProvider

#include <java/util/spi/LocaleServiceProvider.h>

namespace java {
	namespace util {
		class Calendar;
		class Locale;
		class TimeZone;
	}
}

namespace sun {
	namespace util {
		namespace spi {

class $export CalendarProvider : public ::java::util::spi::LocaleServiceProvider {
	$class(CalendarProvider, $NO_CLASS_INIT, ::java::util::spi::LocaleServiceProvider)
public:
	CalendarProvider();
	void init$();
	virtual ::java::util::Calendar* getInstance(::java::util::TimeZone* zone, ::java::util::Locale* locale) {return nullptr;}
};

		} // spi
	} // util
} // sun

#endif // _sun_util_spi_CalendarProvider_h_