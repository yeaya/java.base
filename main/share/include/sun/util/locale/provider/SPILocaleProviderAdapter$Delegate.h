#ifndef _sun_util_locale_provider_SPILocaleProviderAdapter$Delegate_h_
#define _sun_util_locale_provider_SPILocaleProviderAdapter$Delegate_h_
//$ interface sun.util.locale.provider.SPILocaleProviderAdapter$Delegate
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace spi {
			class LocaleServiceProvider;
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class $import SPILocaleProviderAdapter$Delegate : public ::java::lang::Object {
	$interface(SPILocaleProviderAdapter$Delegate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addImpl(::java::util::spi::LocaleServiceProvider* impl);
	virtual $Array<::java::util::Locale>* getAvailableLocalesDelegate();
	virtual ::java::util::Map* getDelegateMap() {return nullptr;}
	virtual ::java::util::spi::LocaleServiceProvider* getImpl(::java::util::Locale* locale);
	virtual bool isSupportedLocaleDelegate(::java::util::Locale* locale);
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_SPILocaleProviderAdapter$Delegate_h_