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

$FieldInfo _BaseLocale$Cache_FieldInfo_[] = {
	{"CACHE", "Lsun/util/locale/BaseLocale$Cache;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BaseLocale$Cache, CACHE)},
	{}
};

$MethodInfo _BaseLocale$Cache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaseLocale$Cache::*)()>(&BaseLocale$Cache::init$))},
	{"createObject", "(Lsun/util/locale/BaseLocale$Key;)Lsun/util/locale/BaseLocale;", nullptr, $PROTECTED},
	{"createObject", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{"normalizeKey", "(Lsun/util/locale/BaseLocale$Key;)Lsun/util/locale/BaseLocale$Key;", nullptr, $PROTECTED},
	{"normalizeKey", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _BaseLocale$Cache_InnerClassesInfo_[] = {
	{"sun.util.locale.BaseLocale$Cache", "sun.util.locale.BaseLocale", "Cache", $PRIVATE | $STATIC},
	{"sun.util.locale.BaseLocale$Key", "sun.util.locale.BaseLocale", "Key", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _BaseLocale$Cache_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.BaseLocale$Cache",
	"sun.util.locale.LocaleObjectCache",
	nullptr,
	_BaseLocale$Cache_FieldInfo_,
	_BaseLocale$Cache_MethodInfo_,
	"Lsun/util/locale/LocaleObjectCache<Lsun/util/locale/BaseLocale$Key;Lsun/util/locale/BaseLocale;>;",
	nullptr,
	_BaseLocale$Cache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.BaseLocale"
};

$Object* allocate$BaseLocale$Cache($Class* clazz) {
	return $of($alloc(BaseLocale$Cache));
}

BaseLocale$Cache* BaseLocale$Cache::CACHE = nullptr;

void BaseLocale$Cache::init$() {
	$LocaleObjectCache::init$();
}

$BaseLocale$Key* BaseLocale$Cache::normalizeKey($BaseLocale$Key* key) {
	return $BaseLocale$Key::normalize(key);
}

$BaseLocale* BaseLocale$Cache::createObject($BaseLocale$Key* key) {
	return $nc($($BaseLocale$Key::normalize(key)))->getBaseLocale();
}

$Object* BaseLocale$Cache::normalizeKey(Object$* key) {
	return $of(this->normalizeKey($cast($BaseLocale$Key, key)));
}

$Object* BaseLocale$Cache::createObject(Object$* key) {
	return $of(this->createObject($cast($BaseLocale$Key, key)));
}

void clinit$BaseLocale$Cache($Class* class$) {
	$assignStatic(BaseLocale$Cache::CACHE, $new(BaseLocale$Cache));
}

BaseLocale$Cache::BaseLocale$Cache() {
}

$Class* BaseLocale$Cache::load$($String* name, bool initialize) {
	$loadClass(BaseLocale$Cache, name, initialize, &_BaseLocale$Cache_ClassInfo_, clinit$BaseLocale$Cache, allocate$BaseLocale$Cache);
	return class$;
}

$Class* BaseLocale$Cache::class$ = nullptr;

		} // locale
	} // util
} // sun