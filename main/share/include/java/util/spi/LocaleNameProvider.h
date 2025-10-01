#ifndef _java_util_spi_LocaleNameProvider_h_
#define _java_util_spi_LocaleNameProvider_h_
//$ class java.util.spi.LocaleNameProvider
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

class $import LocaleNameProvider : public ::java::util::spi::LocaleServiceProvider {
	$class(LocaleNameProvider, $NO_CLASS_INIT, ::java::util::spi::LocaleServiceProvider)
public:
	LocaleNameProvider();
	void init$();
	virtual $String* getDisplayCountry($String* countryCode, ::java::util::Locale* locale) {return nullptr;}
	virtual $String* getDisplayLanguage($String* languageCode, ::java::util::Locale* locale) {return nullptr;}
	virtual $String* getDisplayScript($String* scriptCode, ::java::util::Locale* locale);
	virtual $String* getDisplayUnicodeExtensionKey($String* key, ::java::util::Locale* locale);
	virtual $String* getDisplayUnicodeExtensionType($String* type, $String* key, ::java::util::Locale* locale);
	virtual $String* getDisplayVariant($String* variant, ::java::util::Locale* locale) {return nullptr;}
};

		} // spi
	} // util
} // java

#endif // _java_util_spi_LocaleNameProvider_h_