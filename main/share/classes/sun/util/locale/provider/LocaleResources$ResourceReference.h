#ifndef _sun_util_locale_provider_LocaleResources$ResourceReference_h_
#define _sun_util_locale_provider_LocaleResources$ResourceReference_h_
//$ class sun.util.locale.provider.LocaleResources$ResourceReference
//$ extends java.lang.ref.SoftReference

#include <java/lang/ref/SoftReference.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class LocaleResources$ResourceReference : public ::java::lang::ref::SoftReference {
	$class(LocaleResources$ResourceReference, $NO_CLASS_INIT, ::java::lang::ref::SoftReference)
public:
	LocaleResources$ResourceReference();
	void init$($String* cacheKey, Object$* o, ::java::lang::ref::ReferenceQueue* q);
	virtual $String* getCacheKey();
	$String* cacheKey = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_LocaleResources$ResourceReference_h_