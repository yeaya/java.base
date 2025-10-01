#ifndef _java_text_spi_DecimalFormatSymbolsProvider_h_
#define _java_text_spi_DecimalFormatSymbolsProvider_h_
//$ class java.text.spi.DecimalFormatSymbolsProvider
//$ extends java.util.spi.LocaleServiceProvider

#include <java/util/spi/LocaleServiceProvider.h>

namespace java {
	namespace text {
		class DecimalFormatSymbols;
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

class $export DecimalFormatSymbolsProvider : public ::java::util::spi::LocaleServiceProvider {
	$class(DecimalFormatSymbolsProvider, $NO_CLASS_INIT, ::java::util::spi::LocaleServiceProvider)
public:
	DecimalFormatSymbolsProvider();
	void init$();
	virtual ::java::text::DecimalFormatSymbols* getInstance(::java::util::Locale* locale) {return nullptr;}
};

		} // spi
	} // text
} // java

#endif // _java_text_spi_DecimalFormatSymbolsProvider_h_