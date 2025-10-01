#ifndef _sun_util_locale_provider_AvailableLanguageTags_h_
#define _sun_util_locale_provider_AvailableLanguageTags_h_
//$ interface sun.util.locale.provider.AvailableLanguageTags
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Set;
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class $export AvailableLanguageTags : public ::java::lang::Object {
	$interface(AvailableLanguageTags, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Set* getAvailableLanguageTags() {return nullptr;}
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_AvailableLanguageTags_h_