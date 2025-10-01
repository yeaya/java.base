#ifndef _sun_util_locale_provider_ResourceBundleBasedAdapter_h_
#define _sun_util_locale_provider_ResourceBundleBasedAdapter_h_
//$ interface sun.util.locale.provider.ResourceBundleBasedAdapter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
		class Locale;
	}
}
namespace sun {
	namespace util {
		namespace resources {
			class LocaleData;
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class $export ResourceBundleBasedAdapter : public ::java::lang::Object {
	$interface(ResourceBundleBasedAdapter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::List* getCandidateLocales($String* baseName, ::java::util::Locale* locale) {return nullptr;}
	virtual ::sun::util::resources::LocaleData* getLocaleData() {return nullptr;}
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_ResourceBundleBasedAdapter_h_