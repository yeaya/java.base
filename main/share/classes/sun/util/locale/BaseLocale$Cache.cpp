#include <sun/util/locale/BaseLocale$Cache.h>
#include <sun/util/locale/BaseLocale$Key.h>
#include <sun/util/locale/BaseLocale.h>
#include <sun/util/locale/LocaleObjectCache.h>
#include <jcpp.h>

#undef CACHE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaseLocale = ::sun::util::locale::BaseLocale;
using $BaseLocale$Key = ::sun::util::locale::BaseLocale$Key;
using $LocaleObjectCache = ::sun::util::locale::LocaleObjectCache;

namespace sun {
	namespace util {
		namespace locale {

BaseLocale$Cache* BaseLocale$Cache::CACHE = nullptr;

void BaseLocale$Cache::init$() {
	$LocaleObjectCache::init$();
}

$BaseLocale$Key* BaseLocale$Cache::normalizeKey($BaseLocale$Key* key) {
	return $BaseLocale$Key::normalize(key);
}

$BaseLocale* BaseLocale$Cache::createObject($BaseLocale$Key* key) {
	return $$nc($BaseLocale$Key::normalize(key))->getBaseLocale();
}

$Object* BaseLocale$Cache::normalizeKey(Object$* key) {
	return this->normalizeKey($cast($BaseLocale$Key, key));
}

$Object* BaseLocale$Cache::createObject(Object$* key) {
	return this->createObject($cast($BaseLocale$Key, key));
}

void BaseLocale$Cache::clinit$($Class* clazz) {
	$assignStatic(BaseLocale$Cache::CACHE, $new(BaseLocale$Cache));
}

BaseLocale$Cache::BaseLocale$Cache() {
}

$Class* BaseLocale$Cache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CACHE", "Lsun/util/locale/BaseLocale$Cache;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BaseLocale$Cache, CACHE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaseLocale$Cache, init$, void)},
		{"createObject", "(Lsun/util/locale/BaseLocale$Key;)Lsun/util/locale/BaseLocale;", nullptr, $PROTECTED, $virtualMethod(BaseLocale$Cache, createObject, $BaseLocale*, $BaseLocale$Key*)},
		{"createObject", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(BaseLocale$Cache, createObject, $Object*, Object$*)},
		{"normalizeKey", "(Lsun/util/locale/BaseLocale$Key;)Lsun/util/locale/BaseLocale$Key;", nullptr, $PROTECTED, $virtualMethod(BaseLocale$Cache, normalizeKey, $BaseLocale$Key*, $BaseLocale$Key*)},
		{"normalizeKey", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(BaseLocale$Cache, normalizeKey, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.BaseLocale$Cache", "sun.util.locale.BaseLocale", "Cache", $PRIVATE | $STATIC},
		{"sun.util.locale.BaseLocale$Key", "sun.util.locale.BaseLocale", "Key", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.locale.BaseLocale$Cache",
		"sun.util.locale.LocaleObjectCache",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lsun/util/locale/LocaleObjectCache<Lsun/util/locale/BaseLocale$Key;Lsun/util/locale/BaseLocale;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.locale.BaseLocale"
	};
	$loadClass(BaseLocale$Cache, name, initialize, &classInfo$$, BaseLocale$Cache::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BaseLocale$Cache);
	});
	return class$;
}

$Class* BaseLocale$Cache::class$ = nullptr;

		} // locale
	} // util
} // sun