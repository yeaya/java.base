#include <sun/util/locale/LocaleObjectCache$CacheEntry.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <sun/util/locale/LocaleObjectCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;

namespace sun {
	namespace util {
		namespace locale {

void LocaleObjectCache$CacheEntry::init$(Object$* key, Object$* value, $ReferenceQueue* queue) {
	$SoftReference::init$(value, queue);
	$set(this, key, key);
}

$Object* LocaleObjectCache$CacheEntry::getKey() {
	return this->key;
}

LocaleObjectCache$CacheEntry::LocaleObjectCache$CacheEntry() {
}

$Class* LocaleObjectCache$CacheEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljava/lang/Object;", "TK;", $PRIVATE, $field(LocaleObjectCache$CacheEntry, key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TK;TV;Ljava/lang/ref/ReferenceQueue<TV;>;)V", 0, $method(LocaleObjectCache$CacheEntry, init$, void, Object$*, Object$*, $ReferenceQueue*)},
		{"getKey", "()Ljava/lang/Object;", "()TK;", 0, $virtualMethod(LocaleObjectCache$CacheEntry, getKey, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.LocaleObjectCache$CacheEntry", "sun.util.locale.LocaleObjectCache", "CacheEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.locale.LocaleObjectCache$CacheEntry",
		"java.lang.ref.SoftReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/ref/SoftReference<TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.locale.LocaleObjectCache"
	};
	$loadClass(LocaleObjectCache$CacheEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleObjectCache$CacheEntry);
	});
	return class$;
}

$Class* LocaleObjectCache$CacheEntry::class$ = nullptr;

		} // locale
	} // util
} // sun