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

$FieldInfo _Locale$Cache_FieldInfo_[] = {
	{"LOCALECACHE", "Ljava/util/Locale$Cache;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Locale$Cache, LOCALECACHE)},
	{}
};

$MethodInfo _Locale$Cache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Locale$Cache::*)()>(&Locale$Cache::init$))},
	{"createObject", "(Ljava/lang/Object;)Ljava/util/Locale;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _Locale$Cache_InnerClassesInfo_[] = {
	{"java.util.Locale$Cache", "java.util.Locale", "Cache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Locale$Cache_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Locale$Cache",
	"sun.util.locale.LocaleObjectCache",
	nullptr,
	_Locale$Cache_FieldInfo_,
	_Locale$Cache_MethodInfo_,
	"Lsun/util/locale/LocaleObjectCache<Ljava/lang/Object;Ljava/util/Locale;>;",
	nullptr,
	_Locale$Cache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Locale"
};

$Object* allocate$Locale$Cache($Class* clazz) {
	return $of($alloc(Locale$Cache));
}

Locale$Cache* Locale$Cache::LOCALECACHE = nullptr;

void Locale$Cache::init$() {
	$LocaleObjectCache::init$();
}

$Object* Locale$Cache::createObject(Object$* key) {
	if ($instanceOf($BaseLocale, key)) {
		return $of($new($Locale, $cast($BaseLocale, key), ($LocaleExtensions*)nullptr));
	} else {
		$var($Locale$LocaleKey, lk, $cast($Locale$LocaleKey, key));
		return $of($new($Locale, $nc(lk)->base, lk->exts));
	}
}

void clinit$Locale$Cache($Class* class$) {
	$assignStatic(Locale$Cache::LOCALECACHE, $new(Locale$Cache));
}

Locale$Cache::Locale$Cache() {
}

$Class* Locale$Cache::load$($String* name, bool initialize) {
	$loadClass(Locale$Cache, name, initialize, &_Locale$Cache_ClassInfo_, clinit$Locale$Cache, allocate$Locale$Cache);
	return class$;
}

$Class* Locale$Cache::class$ = nullptr;

	} // util
} // java