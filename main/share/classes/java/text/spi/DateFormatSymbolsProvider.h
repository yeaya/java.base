#ifndef _java_text_spi_DateFormatSymbolsProvider_h_
#define _java_text_spi_DateFormatSymbolsProvider_h_
//$ class java.text.spi.DateFormatSymbolsProvider
//$ extends java.util.spi.LocaleServiceProvider

#include <java/util/spi/LocaleServiceProvider.h>

namespace java {
	namespace text {
		class DateFormatSymbols;
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

class $export DateFormatSymbolsProvider : public ::java::util::spi::LocaleServiceProvider {
	$class(DateFormatSymbolsProvider, $NO_CLASS_INIT, ::java::util::spi::LocaleServiceProvider)
public:
	DateFormatSymbolsProvider();
	void init$();
	virtual ::java::text::DateFormatSymbols* getInstance(::java::util::Locale* locale) {return nullptr;}
};

		} // spi
	} // text
} // java

#endif // _java_text_spi_DateFormatSymbolsProvider_h_