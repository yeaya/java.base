#ifndef _java_util_spi_CurrencyNameProvider_h_
#define _java_util_spi_CurrencyNameProvider_h_
//$ class java.util.spi.CurrencyNameProvider
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

class $import CurrencyNameProvider : public ::java::util::spi::LocaleServiceProvider {
	$class(CurrencyNameProvider, $NO_CLASS_INIT, ::java::util::spi::LocaleServiceProvider)
public:
	CurrencyNameProvider();
	void init$();
	virtual $String* getDisplayName($String* currencyCode, ::java::util::Locale* locale);
	virtual $String* getSymbol($String* currencyCode, ::java::util::Locale* locale) {return nullptr;}
};

		} // spi
	} // util
} // java

#endif // _java_util_spi_CurrencyNameProvider_h_