#include <java/util/Locale$Cache.h>
#include <java/util/Locale$LocaleKey.h>
#include <java/util/Locale.h>
#include <sun/util/locale/BaseLocale.h>
#include <sun/util/locale/LocaleExtensions.h>
#include <sun/util/locale/LocaleObjectCache.h>
#include <jcpp.h>

#undef LOCALECACHE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Locale$LocaleKey = ::java::util::Locale$LocaleKey;
using $BaseLocale = ::sun::util::locale::BaseLocale;
using $LocaleExtensions = ::sun::util::locale::LocaleExtensions;
using $LocaleObjectCache = ::sun::util::locale::LocaleObjectCache;

namespace java {
	namespace util {

Locale$Cache* Locale$Cache::LOCALECACHE = nullptr;

void Locale$Cache::init$() {
	$LocaleObjectCache::init$();
}

$Object* Locale$Cache::createObject(Object$* key) {
	if ($instanceOf($BaseLocale, key)) {
		return $of($new($Locale, $cast($BaseLocale, key), nullptr));
	} else {
		$var($Locale$LocaleKey, lk, $cast($Locale$LocaleKey, key));
		return $of($new($Locale, $nc(lk)->base, $nc(lk)->exts));
	}
}

void Locale$Cache::clinit$($Class* clazz) {
	$assignStatic(Locale$Cache::LOCALECACHE, $new(Locale$Cache));
}

Locale$Cache::Locale$Cache() {
}

$Class* Locale$Cache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOCALECACHE", "Ljava/util/Locale$Cache;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Locale$Cache, LOCALECACHE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Locale$Cache, init$, void)},
		{"createObject", "(Ljava/lang/Object;)Ljava/util/Locale;", nullptr, $PROTECTED, $virtualMethod(Locale$Cache, createObject, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Locale$Cache", "java.util.Locale", "Cache", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Locale$Cache",
		"sun.util.locale.LocaleObjectCache",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lsun/util/locale/LocaleObjectCache<Ljava/lang/Object;Ljava/util/Locale;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Locale"
	};
	$loadClass(Locale$Cache, name, initialize, &classInfo$$, Locale$Cache::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Locale$Cache);
	});
	return class$;
}

$Class* Locale$Cache::class$ = nullptr;

	} // util
} // java