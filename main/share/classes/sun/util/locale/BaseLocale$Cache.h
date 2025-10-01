#ifndef _sun_util_locale_BaseLocale$Cache_h_
#define _sun_util_locale_BaseLocale$Cache_h_
//$ class sun.util.locale.BaseLocale$Cache
//$ extends sun.util.locale.LocaleObjectCache

#include <sun/util/locale/LocaleObjectCache.h>

#pragma push_macro("CACHE")
#undef CACHE

namespace sun {
	namespace util {
		namespace locale {
			class BaseLocale;
			class BaseLocale$Key;
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {

class BaseLocale$Cache : public ::sun::util::locale::LocaleObjectCache {
	$class(BaseLocale$Cache, 0, ::sun::util::locale::LocaleObjectCache)
public:
	BaseLocale$Cache();
	void init$();
	virtual ::sun::util::locale::BaseLocale* createObject(::sun::util::locale::BaseLocale$Key* key);
	virtual $Object* createObject(Object$* key) override;
	virtual ::sun::util::locale::BaseLocale$Key* normalizeKey(::sun::util::locale::BaseLocale$Key* key);
	virtual $Object* normalizeKey(Object$* key) override;
	static ::sun::util::locale::BaseLocale$Cache* CACHE;
};

		} // locale
	} // util
} // sun

#pragma pop_macro("CACHE")

#endif // _sun_util_locale_BaseLocale$Cache_h_