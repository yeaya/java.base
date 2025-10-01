#ifndef _java_util_Locale$Cache_h_
#define _java_util_Locale$Cache_h_
//$ class java.util.Locale$Cache
//$ extends sun.util.locale.LocaleObjectCache

#include <sun/util/locale/LocaleObjectCache.h>

#pragma push_macro("LOCALECACHE")
#undef LOCALECACHE

namespace java {
	namespace util {

class Locale$Cache : public ::sun::util::locale::LocaleObjectCache {
	$class(Locale$Cache, 0, ::sun::util::locale::LocaleObjectCache)
public:
	Locale$Cache();
	void init$();
	virtual $Object* createObject(Object$* key) override;
	static ::java::util::Locale$Cache* LOCALECACHE;
};

	} // util
} // java

#pragma pop_macro("LOCALECACHE")

#endif // _java_util_Locale$Cache_h_