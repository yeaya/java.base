#ifndef _sun_util_locale_provider_SPILocaleProviderAdapter$1_h_
#define _sun_util_locale_provider_SPILocaleProviderAdapter$1_h_
//$ class sun.util.locale.provider.SPILocaleProviderAdapter$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {
				class SPILocaleProviderAdapter;
			}
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class SPILocaleProviderAdapter$1 : public ::java::security::PrivilegedExceptionAction {
	$class(SPILocaleProviderAdapter$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	SPILocaleProviderAdapter$1();
	void init$(::sun::util::locale::provider::SPILocaleProviderAdapter* this$0, $Class* val$c);
	virtual $Object* run() override;
	::sun::util::locale::provider::SPILocaleProviderAdapter* this$0 = nullptr;
	$Class* val$c = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_SPILocaleProviderAdapter$1_h_