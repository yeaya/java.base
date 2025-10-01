#ifndef _sun_util_locale_LocaleObjectCache$CacheEntry_h_
#define _sun_util_locale_LocaleObjectCache$CacheEntry_h_
//$ class sun.util.locale.LocaleObjectCache$CacheEntry
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

class LocaleObjectCache$CacheEntry : public ::java::lang::ref::SoftReference {
	$class(LocaleObjectCache$CacheEntry, $NO_CLASS_INIT, ::java::lang::ref::SoftReference)
public:
	LocaleObjectCache$CacheEntry();
	void init$(Object$* key, Object$* value, ::java::lang::ref::ReferenceQueue* queue);
	virtual $Object* getKey();
	$Object* key = nullptr;
};

		} // locale
	} // util
} // sun

#endif // _sun_util_locale_LocaleObjectCache$CacheEntry_h_