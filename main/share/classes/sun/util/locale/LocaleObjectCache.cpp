#include <sun/util/locale/LocaleObjectCache.h>

#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <sun/util/locale/LocaleObjectCache$CacheEntry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $LocaleObjectCache$CacheEntry = ::sun::util::locale::LocaleObjectCache$CacheEntry;

namespace sun {
	namespace util {
		namespace locale {

$FieldInfo _LocaleObjectCache_FieldInfo_[] = {
	{"map", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<TK;Lsun/util/locale/LocaleObjectCache$CacheEntry<TK;TV;>;>;", $PRIVATE | $FINAL, $field(LocaleObjectCache, map)},
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<TV;>;", $PRIVATE | $FINAL, $field(LocaleObjectCache, queue)},
	{}
};

$MethodInfo _LocaleObjectCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleObjectCache, init$, void)},
	{"<init>", "(IFI)V", nullptr, $PUBLIC, $method(LocaleObjectCache, init$, void, int32_t, float, int32_t)},
	{"cleanStaleEntries", "()V", nullptr, $PRIVATE, $method(LocaleObjectCache, cleanStaleEntries, void)},
	{"createObject", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", $PROTECTED | $ABSTRACT, $virtualMethod(LocaleObjectCache, createObject, $Object*, Object$*)},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", $PUBLIC, $virtualMethod(LocaleObjectCache, get, $Object*, Object$*)},
	{"normalizeKey", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TK;", $PROTECTED, $virtualMethod(LocaleObjectCache, normalizeKey, $Object*, Object$*)},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PROTECTED, $virtualMethod(LocaleObjectCache, put, $Object*, Object$*, Object$*)},
	{}
};

$InnerClassInfo _LocaleObjectCache_InnerClassesInfo_[] = {
	{"sun.util.locale.LocaleObjectCache$CacheEntry", "sun.util.locale.LocaleObjectCache", "CacheEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LocaleObjectCache_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.util.locale.LocaleObjectCache",
	"java.lang.Object",
	nullptr,
	_LocaleObjectCache_FieldInfo_,
	_LocaleObjectCache_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_LocaleObjectCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.util.locale.LocaleObjectCache$CacheEntry"
};

$Object* allocate$LocaleObjectCache($Class* clazz) {
	return $of($alloc(LocaleObjectCache));
}

void LocaleObjectCache::init$() {
	LocaleObjectCache::init$(16, 0.75f, 16);
}

void LocaleObjectCache::init$(int32_t initialCapacity, float loadFactor, int32_t concurrencyLevel) {
	$set(this, queue, $new($ReferenceQueue));
	$set(this, map, $new($ConcurrentHashMap, initialCapacity, loadFactor, concurrencyLevel));
}

$Object* LocaleObjectCache::get(Object$* key$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Object, key, key$renamed);
	$var($Object, value, nullptr);
	cleanStaleEntries();
	$var($LocaleObjectCache$CacheEntry, entry, $cast($LocaleObjectCache$CacheEntry, $nc(this->map)->get(key)));
	if (entry != nullptr) {
		$assign(value, entry->get());
	}
	if (value == nullptr) {
		$assign(key, normalizeKey(key));
		$var($Object, newVal, createObject(key));
		if (key == nullptr || newVal == nullptr) {
			return $of(nullptr);
		}
		$var($LocaleObjectCache$CacheEntry, newEntry, $new($LocaleObjectCache$CacheEntry, key, newVal, this->queue));
		$assign(entry, $cast($LocaleObjectCache$CacheEntry, $nc(this->map)->putIfAbsent(key, newEntry)));
		if (entry == nullptr) {
			$assign(value, newVal);
		} else {
			$assign(value, $nc(entry)->get());
			if (value == nullptr) {
				$nc(this->map)->put(key, newEntry);
				$assign(value, newVal);
			}
		}
	}
	return $of(value);
}

$Object* LocaleObjectCache::put(Object$* key, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($LocaleObjectCache$CacheEntry, entry, $new($LocaleObjectCache$CacheEntry, key, value, this->queue));
	$var($LocaleObjectCache$CacheEntry, oldEntry, $cast($LocaleObjectCache$CacheEntry, $nc(this->map)->put(key, entry)));
	return $of((oldEntry == nullptr) ? ($Object*)nullptr : $nc(oldEntry)->get());
}

void LocaleObjectCache::cleanStaleEntries() {
	$useLocalCurrentObjectStackCache();
	$var($LocaleObjectCache$CacheEntry, entry, nullptr);
	while (($assign(entry, $cast($LocaleObjectCache$CacheEntry, $nc(this->queue)->poll()))) != nullptr) {
		$nc(this->map)->remove($($nc(entry)->getKey()), entry);
	}
}

$Object* LocaleObjectCache::normalizeKey(Object$* key) {
	return $of(key);
}

LocaleObjectCache::LocaleObjectCache() {
}

$Class* LocaleObjectCache::load$($String* name, bool initialize) {
	$loadClass(LocaleObjectCache, name, initialize, &_LocaleObjectCache_ClassInfo_, allocate$LocaleObjectCache);
	return class$;
}

$Class* LocaleObjectCache::class$ = nullptr;

		} // locale
	} // util
} // sun