#ifndef _sun_util_locale_LocaleObjectCache_h_
#define _sun_util_locale_LocaleObjectCache_h_
//$ class sun.util.locale.LocaleObjectCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {

class LocaleObjectCache : public ::java::lang::Object {
	$class(LocaleObjectCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LocaleObjectCache();
	void init$();
	void init$(int32_t initialCapacity, float loadFactor, int32_t concurrencyLevel);
	void cleanStaleEntries();
	virtual $Object* createObject(Object$* key) {return nullptr;}
	virtual $Object* get(Object$* key);
	virtual $Object* normalizeKey(Object$* key);
	virtual $Object* put(Object$* key, Object$* value);
	::java::util::concurrent::ConcurrentMap* map = nullptr;
	::java::lang::ref::ReferenceQueue* queue = nullptr;
};

		} // locale
	} // util
} // sun

#endif // _sun_util_locale_LocaleObjectCache_h_