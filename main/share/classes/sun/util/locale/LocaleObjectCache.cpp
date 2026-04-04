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
using $LocaleObjectCache$CacheEntry = ::sun::util::locale::LocaleObjectCache$CacheEntry;

namespace sun {
	namespace util {
		namespace locale {

void LocaleObjectCache::init$() {
	LocaleObjectCache::init$(16, 0.75f, 16);
}

void LocaleObjectCache::init$(int32_t initialCapacity, float loadFactor, int32_t concurrencyLevel) {
	$set(this, queue, $new($ReferenceQueue));
	$set(this, map, $new($ConcurrentHashMap, initialCapacity, loadFactor, concurrencyLevel));
}

$Object* LocaleObjectCache::get(Object$* key$renamed) {
	$useLocalObjectStack();
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
			return nullptr;
		}
		$var($LocaleObjectCache$CacheEntry, newEntry, $new($LocaleObjectCache$CacheEntry, key, newVal, this->queue));
		$assign(entry, $cast($LocaleObjectCache$CacheEntry, this->map->putIfAbsent(key, newEntry)));
		if (entry == nullptr) {
			$assign(value, newVal);
		} else {
			$assign(value, entry->get());
			if (value == nullptr) {
				this->map->put(key, newEntry);
				$assign(value, newVal);
			}
		}
	}
	return value;
}

$Object* LocaleObjectCache::put(Object$* key, Object$* value) {
	$useLocalObjectStack();
	$var($LocaleObjectCache$CacheEntry, entry, $new($LocaleObjectCache$CacheEntry, key, value, this->queue));
	$var($LocaleObjectCache$CacheEntry, oldEntry, $cast($LocaleObjectCache$CacheEntry, $nc(this->map)->put(key, entry)));
	return (oldEntry == nullptr) ? ($Object*)nullptr : oldEntry->get();
}

void LocaleObjectCache::cleanStaleEntries() {
	$useLocalObjectStack();
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
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<TK;Lsun/util/locale/LocaleObjectCache$CacheEntry<TK;TV;>;>;", $PRIVATE | $FINAL, $field(LocaleObjectCache, map)},
		{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<TV;>;", $PRIVATE | $FINAL, $field(LocaleObjectCache, queue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleObjectCache, init$, void)},
		{"<init>", "(IFI)V", nullptr, $PUBLIC, $method(LocaleObjectCache, init$, void, int32_t, float, int32_t)},
		{"cleanStaleEntries", "()V", nullptr, $PRIVATE, $method(LocaleObjectCache, cleanStaleEntries, void)},
		{"createObject", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", $PROTECTED | $ABSTRACT, $virtualMethod(LocaleObjectCache, createObject, $Object*, Object$*)},
		{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", $PUBLIC, $virtualMethod(LocaleObjectCache, get, $Object*, Object$*)},
		{"normalizeKey", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TK;", $PROTECTED, $virtualMethod(LocaleObjectCache, normalizeKey, $Object*, Object$*)},
		{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PROTECTED, $virtualMethod(LocaleObjectCache, put, $Object*, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.LocaleObjectCache$CacheEntry", "sun.util.locale.LocaleObjectCache", "CacheEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.util.locale.LocaleObjectCache",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.util.locale.LocaleObjectCache$CacheEntry"
	};
	$loadClass(LocaleObjectCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleObjectCache);
	});
	return class$;
}

$Class* LocaleObjectCache::class$ = nullptr;

		} // locale
	} // util
} // sun