#ifndef _java_text_spi_DateFormatProvider_h_
#define _java_text_spi_DateFormatProvider_h_
//$ class java.text.spi.DateFormatProvider
//$ extends java.util.spi.LocaleServiceProvider

#include <java/util/spi/LocaleServiceProvider.h>

namespace java {
	namespace text {
		class DateFormat;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace java {
	namespace text {
		namespace spi {

class $export DateFormatProvider : public ::java::util::spi::LocaleServiceProvider {
	$class(DateFormatProvider, $NO_CLASS_INIT, ::java::util::spi::LocaleServiceProvider)
public:
	DateFormatProvider();
	void init$();
	virtual ::java::text::DateFormat* getDateInstance(int32_t style, ::java::util::Locale* locale) {return nullptr;}
	virtual ::java::text::DateFormat* getDateTimeInstance(int32_t dateStyle, int32_t timeStyle, ::java::util::Locale* locale) {return nullptr;}
	virtual ::java::text::DateFormat* getTimeInstance(int32_t style, ::java::util::Locale* locale) {return nullptr;}
};

		} // spi
	} // text
} // java

#endif // _java_text_spi_DateFormatProvider_h_