#ifndef _java_util_spi_CalendarDataProvider_h_
#define _java_util_spi_CalendarDataProvider_h_
//$ class java.util.spi.CalendarDataProvider
//$ extends java.util.spi.LocaleServiceProvider

#include <java/util/spi/LocaleServiceProvider.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace java {
	namespace util {
		namespace spi {

class $export CalendarDataProvider : public ::java::util::spi::LocaleServiceProvider {
	$class(CalendarDataProvider, $NO_CLASS_INIT, ::java::util::spi::LocaleServiceProvider)
public:
	CalendarDataProvider();
	void init$();
	virtual int32_t getFirstDayOfWeek(::java::util::Locale* locale) {return 0;}
	virtual int32_t getMinimalDaysInFirstWeek(::java::util::Locale* locale) {return 0;}
};

		} // spi
	} // util
} // java

#endif // _java_util_spi_CalendarDataProvider_h_