#ifndef _sun_util_locale_provider_LocaleServiceProviderPool$LocalizedObjectGetter_h_
#define _sun_util_locale_provider_LocaleServiceProviderPool$LocalizedObjectGetter_h_
//$ interface sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Locale;
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

class $export LocaleServiceProviderPool$LocalizedObjectGetter : public ::java::lang::Object {
	$interface(LocaleServiceProviderPool$LocalizedObjectGetter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getObject(::java::util::spi::LocaleServiceProvider* lsp, ::java::util::Locale* locale, $String* key, $ObjectArray* params) {return nullptr;}
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_LocaleServiceProviderPool$LocalizedObjectGetter_h_