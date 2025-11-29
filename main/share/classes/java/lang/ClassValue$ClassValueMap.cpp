#include <java/lang/ClassValue$ClassValueMap.h>

#include <java/lang/AssertionError.h>
#include <java/lang/ClassValue$Entry.h>
#include <java/lang/ClassValue$Identity.h>
#include <java/lang/ClassValue$Version.h>
#include <java/lang/ClassValue.h>
#include <java/lang/Math.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

#undef CACHE_LOAD_LIMIT
#undef DEAD_ENTRY
#undef INITIAL_ENTRIES
#undef PROBE_LIMIT

using $ClassValue$EntryArray = $Array<::java::lang::ClassValue$Entry>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $ClassValue$Entry = ::java::lang::ClassValue$Entry;
using $ClassValue$Version = ::java::lang::ClassValue$Version;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace java {
	namespace lang {

$FieldInfo _ClassValue$ClassValueMap_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ClassValue$ClassValueMap, $assertionsDisabled)},
	{"cacheArray", "[Ljava/lang/ClassValue$Entry;", "[Ljava/lang/ClassValue$Entry<*>;", $PRIVATE, $field(ClassValue$ClassValueMap, cacheArray)},
	{"cacheLoad", "I", nullptr, $PRIVATE, $field(ClassValue$ClassValueMap, cacheLoad)},
	{"cacheLoadLimit", "I", nullptr, $PRIVATE, $field(ClassValue$ClassValueMap, cacheLoadLimit)},
	{"INITIAL_ENTRIES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassValue$ClassValueMap, INITIAL_ENTRIES)},
	{"CACHE_LOAD_LIMIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassValue$ClassValueMap, CACHE_LOAD_LIMIT)},
	{"PROBE_LIMIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassValue$ClassValueMap, PROBE_LIMIT)},
	{}
};

$MethodInfo _ClassValue$ClassValueMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ClassValue$ClassValueMap::*)()>(&ClassValue$ClassValueMap::init$))},
	{"addToCache", "(Ljava/lang/ClassValue$Entry;)V", "<T:Ljava/lang/Object;>(Ljava/lang/ClassValue$Entry<TT;>;)V", $PRIVATE, $method(static_cast<void(ClassValue$ClassValueMap::*)($ClassValue$Entry*)>(&ClassValue$ClassValueMap::addToCache))},
	{"addToCache", "(Ljava/lang/ClassValue;Ljava/lang/ClassValue$Entry;)V", "<T:Ljava/lang/Object;>(Ljava/lang/ClassValue<TT;>;Ljava/lang/ClassValue$Entry<TT;>;)V", $PRIVATE, $method(static_cast<void(ClassValue$ClassValueMap::*)($ClassValue*,$ClassValue$Entry*)>(&ClassValue$ClassValueMap::addToCache))},
	{"changeEntry", "(Ljava/lang/ClassValue;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/lang/ClassValue<TT;>;TT;)V", $SYNCHRONIZED},
	{"checkCacheLoad", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClassValue$ClassValueMap::*)()>(&ClassValue$ClassValueMap::checkCacheLoad))},
	{"entryDislocation", "([Ljava/lang/ClassValue$Entry;ILjava/lang/ClassValue$Entry;)I", "([Ljava/lang/ClassValue$Entry<*>;ILjava/lang/ClassValue$Entry<*>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ClassValue$EntryArray*,int32_t,$ClassValue$Entry*)>(&ClassValue$ClassValueMap::entryDislocation))},
	{"findReplacement", "([Ljava/lang/ClassValue$Entry;I)Ljava/lang/ClassValue$Entry;", "([Ljava/lang/ClassValue$Entry<*>;I)Ljava/lang/ClassValue$Entry<*>;", $PRIVATE, $method(static_cast<$ClassValue$Entry*(ClassValue$ClassValueMap::*)($ClassValue$EntryArray*,int32_t)>(&ClassValue$ClassValueMap::findReplacement))},
	{"finishEntry", "(Ljava/lang/ClassValue;Ljava/lang/ClassValue$Entry;)Ljava/lang/ClassValue$Entry;", "<T:Ljava/lang/Object;>(Ljava/lang/ClassValue<TT;>;Ljava/lang/ClassValue$Entry<TT;>;)Ljava/lang/ClassValue$Entry<TT;>;", $SYNCHRONIZED},
	{"getCache", "()[Ljava/lang/ClassValue$Entry;", "()[Ljava/lang/ClassValue$Entry<*>;", 0},
	{"loadFromCache", "([Ljava/lang/ClassValue$Entry;I)Ljava/lang/ClassValue$Entry;", "([Ljava/lang/ClassValue$Entry<*>;I)Ljava/lang/ClassValue$Entry<*>;", $STATIC, $method(static_cast<$ClassValue$Entry*(*)($ClassValue$EntryArray*,int32_t)>(&ClassValue$ClassValueMap::loadFromCache))},
	{"overwrittenEntry", "(Ljava/lang/ClassValue$Entry;)Ljava/lang/ClassValue$Entry;", "<T:Ljava/lang/Object;>(Ljava/lang/ClassValue$Entry<TT;>;)Ljava/lang/ClassValue$Entry<TT;>;", $PRIVATE, $method(static_cast<$ClassValue$Entry*(ClassValue$ClassValueMap::*)($ClassValue$Entry*)>(&ClassValue$ClassValueMap::overwrittenEntry))},
	{"placeInCache", "([Ljava/lang/ClassValue$Entry;ILjava/lang/ClassValue$Entry;Z)Ljava/lang/ClassValue$Entry;", "([Ljava/lang/ClassValue$Entry<*>;ILjava/lang/ClassValue$Entry<*>;Z)Ljava/lang/ClassValue$Entry<*>;", $PRIVATE, $method(static_cast<$ClassValue$Entry*(ClassValue$ClassValueMap::*)($ClassValue$EntryArray*,int32_t,$ClassValue$Entry*,bool)>(&ClassValue$ClassValueMap::placeInCache))},
	{"probeBackupLocations", "([Ljava/lang/ClassValue$Entry;Ljava/lang/ClassValue;)Ljava/lang/ClassValue$Entry;", "<T:Ljava/lang/Object;>([Ljava/lang/ClassValue$Entry<*>;Ljava/lang/ClassValue<TT;>;)Ljava/lang/ClassValue$Entry<TT;>;", $STATIC, $method(static_cast<$ClassValue$Entry*(*)($ClassValue$EntryArray*,$ClassValue*)>(&ClassValue$ClassValueMap::probeBackupLocations))},
	{"probeHomeLocation", "([Ljava/lang/ClassValue$Entry;Ljava/lang/ClassValue;)Ljava/lang/ClassValue$Entry;", "<T:Ljava/lang/Object;>([Ljava/lang/ClassValue$Entry<*>;Ljava/lang/ClassValue<TT;>;)Ljava/lang/ClassValue$Entry<TT;>;", $STATIC, $method(static_cast<$ClassValue$Entry*(*)($ClassValue$EntryArray*,$ClassValue*)>(&ClassValue$ClassValueMap::probeHomeLocation))},
	{"reduceCacheLoad", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClassValue$ClassValueMap::*)()>(&ClassValue$ClassValueMap::reduceCacheLoad))},
	{"removeEntry", "(Ljava/lang/ClassValue;)V", "(Ljava/lang/ClassValue<*>;)V", $SYNCHRONIZED},
	{"removeStaleEntries", "([Ljava/lang/ClassValue$Entry;II)V", "([Ljava/lang/ClassValue$Entry<*>;II)V", $PRIVATE, $method(static_cast<void(ClassValue$ClassValueMap::*)($ClassValue$EntryArray*,int32_t,int32_t)>(&ClassValue$ClassValueMap::removeStaleEntries))},
	{"removeStaleEntries", "(Ljava/lang/ClassValue;)V", "(Ljava/lang/ClassValue<*>;)V", $PRIVATE, $method(static_cast<void(ClassValue$ClassValueMap::*)($ClassValue*)>(&ClassValue$ClassValueMap::removeStaleEntries))},
	{"removeStaleEntries", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClassValue$ClassValueMap::*)()>(&ClassValue$ClassValueMap::removeStaleEntries))},
	{"sizeCache", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ClassValue$ClassValueMap::*)(int32_t)>(&ClassValue$ClassValueMap::sizeCache))},
	{"startEntry", "(Ljava/lang/ClassValue;)Ljava/lang/ClassValue$Entry;", "<T:Ljava/lang/Object;>(Ljava/lang/ClassValue<TT;>;)Ljava/lang/ClassValue$Entry<TT;>;", $SYNCHRONIZED},
	{}
};

$InnerClassInfo _ClassValue$ClassValueMap_InnerClassesInfo_[] = {
	{"java.lang.ClassValue$ClassValueMap", "java.lang.ClassValue", "ClassValueMap", $STATIC},
	{"java.lang.ClassValue$Identity", "java.lang.ClassValue", "Identity", $STATIC},
	{"java.lang.ClassValue$Entry", "java.lang.ClassValue", "Entry", $STATIC},
	{}
};

$ClassInfo _ClassValue$ClassValueMap_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ClassValue$ClassValueMap",
	"java.util.WeakHashMap",
	nullptr,
	_ClassValue$ClassValueMap_FieldInfo_,
	_ClassValue$ClassValueMap_MethodInfo_,
	"Ljava/util/WeakHashMap<Ljava/lang/ClassValue$Identity;Ljava/lang/ClassValue$Entry<*>;>;",
	nullptr,
	_ClassValue$ClassValueMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ClassValue"
};

$Object* allocate$ClassValue$ClassValueMap($Class* clazz) {
	return $of($alloc(ClassValue$ClassValueMap));
}

bool ClassValue$ClassValueMap::$assertionsDisabled = false;

void ClassValue$ClassValueMap::init$() {
	$WeakHashMap::init$();
	sizeCache(ClassValue$ClassValueMap::INITIAL_ENTRIES);
}

$ClassValue$EntryArray* ClassValue$ClassValueMap::getCache() {
	return this->cacheArray;
}

$ClassValue$Entry* ClassValue$ClassValueMap::startEntry($ClassValue* classValue) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($ClassValue$Entry, e, $cast($ClassValue$Entry, get($nc(classValue)->identity)));
		$var($ClassValue$Version, v, $nc(classValue)->version());
		if (e == nullptr) {
			$assign(e, $nc(v)->promise());
			put(classValue->identity, e);
			return e;
		} else if ($nc(e)->isPromise()) {
			if (e->version() != v) {
				$assign(e, $nc(v)->promise());
				put(classValue->identity, e);
			}
			return e;
		} else {
			if (e->version() != v) {
				$assign(e, e->refreshVersion(v));
				put(classValue->identity, e);
			}
			checkCacheLoad();
			addToCache(classValue, e);
			return e;
		}
	}
}

$ClassValue$Entry* ClassValue$ClassValueMap::finishEntry($ClassValue* classValue, $ClassValue$Entry* e$renamed) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($ClassValue$Entry, e, e$renamed);
		$var($ClassValue$Entry, e0, $cast($ClassValue$Entry, get($nc(classValue)->identity)));
		if (e == e0) {
			if (!ClassValue$ClassValueMap::$assertionsDisabled && !($nc(e)->isPromise())) {
				$throwNew($AssertionError);
			}
			remove($nc(classValue)->identity);
			return nullptr;
		} else {
			bool var$1 = e0 != nullptr && e0->isPromise();
			if (var$1) {
				var$1 = e0->version() == $nc(e)->version();
			}
			if (var$1) {
				$var($ClassValue$Version, v, $nc(classValue)->version());
				if (e->version() != v) {
					$assign(e, e->refreshVersion(v));
				}
				put(classValue->identity, e);
				checkCacheLoad();
				addToCache(classValue, e);
				return e;
			} else {
				return nullptr;
			}
		}
	}
}

void ClassValue$ClassValueMap::removeEntry($ClassValue* classValue) {
	$synchronized(this) {
		$var($ClassValue$Entry, e, $cast($ClassValue$Entry, remove($nc(classValue)->identity)));
		if (e == nullptr) {
		} else if ($nc(e)->isPromise()) {
			put($nc(classValue)->identity, e);
		} else {
			$nc(classValue)->bumpVersion();
			removeStaleEntries(classValue);
		}
	}
}

void ClassValue$ClassValueMap::changeEntry($ClassValue* classValue, Object$* value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($ClassValue$Entry, e0, $cast($ClassValue$Entry, get($nc(classValue)->identity)));
		$var($ClassValue$Version, version, $nc(classValue)->version());
		if (e0 != nullptr) {
			bool var$0 = e0->version() == version;
			if (var$0 && $equals(e0->value(), value)) {
				return;
			}
			classValue->bumpVersion();
			removeStaleEntries(classValue);
		}
		$var($ClassValue$Entry, e, $ClassValue::makeEntry(version, value));
		put(classValue->identity, e);
		checkCacheLoad();
		addToCache(classValue, e);
	}
}

$ClassValue$Entry* ClassValue$ClassValueMap::loadFromCache($ClassValue$EntryArray* cache, int32_t i) {
	$init(ClassValue$ClassValueMap);
	return $nc(cache)->get((int32_t)(i & (uint32_t)(cache->length - 1)));
}

$ClassValue$Entry* ClassValue$ClassValueMap::probeHomeLocation($ClassValue$EntryArray* cache, $ClassValue* classValue) {
	$init(ClassValue$ClassValueMap);
	return $nc(classValue)->castEntry($(loadFromCache(cache, classValue->hashCodeForCache)));
}

$ClassValue$Entry* ClassValue$ClassValueMap::probeBackupLocations($ClassValue$EntryArray* cache, $ClassValue* classValue) {
	$init(ClassValue$ClassValueMap);
	$useLocalCurrentObjectStackCache();
	int32_t mask = ($nc(cache)->length - 1);
	int32_t home = ((int32_t)($nc(classValue)->hashCodeForCache & (uint32_t)mask));
	$var($ClassValue$Entry, e2, cache->get(home));
	if (e2 == nullptr) {
		return nullptr;
	}
	int32_t pos2 = -1;
	for (int32_t i = home + 1; i < home + ClassValue$ClassValueMap::PROBE_LIMIT; ++i) {
		$var($ClassValue$Entry, e, cache->get((int32_t)(i & (uint32_t)mask)));
		if (e == nullptr) {
			break;
		}
		if (classValue->match(e)) {
			cache->set(home, e);
			if (pos2 >= 0) {
				$init($ClassValue$Entry);
				cache->set((int32_t)(i & (uint32_t)mask), $ClassValue$Entry::DEAD_ENTRY);
			} else {
				pos2 = i;
			}
			$init($ClassValue$Entry);
			cache->set((int32_t)(pos2 & (uint32_t)mask), ((entryDislocation(cache, pos2, e2) < ClassValue$ClassValueMap::PROBE_LIMIT) ? e2 : $ClassValue$Entry::DEAD_ENTRY));
			return classValue->castEntry(e);
		}
		if (!$nc(e)->isLive() && pos2 < 0) {
			pos2 = i;
		}
	}
	return nullptr;
}

int32_t ClassValue$ClassValueMap::entryDislocation($ClassValue$EntryArray* cache, int32_t pos, $ClassValue$Entry* e) {
	$init(ClassValue$ClassValueMap);
	$var($ClassValue, cv, $nc(e)->classValueOrNull());
	if (cv == nullptr) {
		return 0;
	}
	int32_t mask = ($nc(cache)->length - 1);
	return (int32_t)((pos - $nc(cv)->hashCodeForCache) & (uint32_t)mask);
}

void ClassValue$ClassValueMap::sizeCache(int32_t length) {
	if (!ClassValue$ClassValueMap::$assertionsDisabled && !(((int32_t)(length & (uint32_t)(length - 1))) == 0)) {
		$throwNew($AssertionError);
	}
	this->cacheLoad = 0;
	this->cacheLoadLimit = $cast(int32_t, ((double)length * ClassValue$ClassValueMap::CACHE_LOAD_LIMIT / 100));
	$set(this, cacheArray, $new($ClassValue$EntryArray, length));
}

void ClassValue$ClassValueMap::checkCacheLoad() {
	if (this->cacheLoad >= this->cacheLoadLimit) {
		reduceCacheLoad();
	}
}

void ClassValue$ClassValueMap::reduceCacheLoad() {
	$useLocalCurrentObjectStackCache();
	removeStaleEntries();
	if (this->cacheLoad < this->cacheLoadLimit) {
		return;
	}
	$var($ClassValue$EntryArray, oldCache, getCache());
	if ($nc(oldCache)->length > 0x3FFFFFFF) {
		return;
	}
	sizeCache($nc(oldCache)->length * 2);
	{
		$var($ClassValue$EntryArray, arr$, oldCache);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ClassValue$Entry, e, arr$->get(i$));
			{
				if (e != nullptr && e->isLive()) {
					addToCache(e);
				}
			}
		}
	}
}

void ClassValue$ClassValueMap::removeStaleEntries($ClassValue$EntryArray* cache, int32_t begin, int32_t count) {
	$useLocalCurrentObjectStackCache();
	int32_t mask = ($nc(cache)->length - 1);
	int32_t removed = 0;
	for (int32_t i = begin; i < begin + count; ++i) {
		$var($ClassValue$Entry, e, cache->get((int32_t)(i & (uint32_t)mask)));
		if (e == nullptr || $nc(e)->isLive()) {
			continue;
		}
		$var($ClassValue$Entry, replacement, nullptr);
		{
			$assign(replacement, findReplacement(cache, i));
		}
		cache->set((int32_t)(i & (uint32_t)mask), replacement);
		if (replacement == nullptr) {
			removed += 1;
		}
	}
	this->cacheLoad = $Math::max(0, this->cacheLoad - removed);
}

$ClassValue$Entry* ClassValue$ClassValueMap::findReplacement($ClassValue$EntryArray* cache, int32_t home1) {
	$useLocalCurrentObjectStackCache();
	$var($ClassValue$Entry, replacement, nullptr);
	int32_t haveReplacement = -1;
	int32_t replacementPos = 0;
	int32_t mask = ($nc(cache)->length - 1);
	for (int32_t i2 = home1 + 1; i2 < home1 + ClassValue$ClassValueMap::PROBE_LIMIT; ++i2) {
		$var($ClassValue$Entry, e2, cache->get((int32_t)(i2 & (uint32_t)mask)));
		if (e2 == nullptr) {
			break;
		}
		if (!$nc(e2)->isLive()) {
			continue;
		}
		int32_t dis2 = entryDislocation(cache, i2, e2);
		if (dis2 == 0) {
			continue;
		}
		int32_t home2 = i2 - dis2;
		if (home2 <= home1) {
			if (home2 == home1) {
				haveReplacement = 1;
				replacementPos = i2;
				$assign(replacement, e2);
			} else if (haveReplacement <= 0) {
				haveReplacement = 0;
				replacementPos = i2;
				$assign(replacement, e2);
			}
		}
	}
	if (haveReplacement >= 0) {
		if (cache->get((int32_t)((replacementPos + 1) & (uint32_t)mask)) != nullptr) {
			$init($ClassValue$Entry);
			cache->set((int32_t)(replacementPos & (uint32_t)mask), $ClassValue$Entry::DEAD_ENTRY);
		} else {
			cache->set((int32_t)(replacementPos & (uint32_t)mask), nullptr);
			this->cacheLoad -= 1;
		}
	}
	return replacement;
}

void ClassValue$ClassValueMap::removeStaleEntries($ClassValue* classValue) {
	removeStaleEntries($(getCache()), $nc(classValue)->hashCodeForCache, ClassValue$ClassValueMap::PROBE_LIMIT);
}

void ClassValue$ClassValueMap::removeStaleEntries() {
	$var($ClassValue$EntryArray, cache, getCache());
	removeStaleEntries(cache, 0, $nc(cache)->length + ClassValue$ClassValueMap::PROBE_LIMIT - 1);
}

void ClassValue$ClassValueMap::addToCache($ClassValue$Entry* e) {
	$var($ClassValue, classValue, $nc(e)->classValueOrNull());
	if (classValue != nullptr) {
		addToCache(classValue, e);
	}
}

void ClassValue$ClassValueMap::addToCache($ClassValue* classValue, $ClassValue$Entry* e) {
	$useLocalCurrentObjectStackCache();
	$var($ClassValue$EntryArray, cache, getCache());
	int32_t mask = ($nc(cache)->length - 1);
	int32_t home = (int32_t)($nc(classValue)->hashCodeForCache & (uint32_t)mask);
	$var($ClassValue$Entry, e2, placeInCache(cache, home, e, false));
	if (e2 == nullptr) {
		return;
	}
	{
		int32_t dis2 = entryDislocation(cache, home, e2);
		int32_t home2 = home - dis2;
		for (int32_t i2 = home2; i2 < home2 + ClassValue$ClassValueMap::PROBE_LIMIT; ++i2) {
			if (placeInCache(cache, (int32_t)(i2 & (uint32_t)mask), e2, true) == nullptr) {
				return;
			}
		}
	}
}

$ClassValue$Entry* ClassValue$ClassValueMap::placeInCache($ClassValue$EntryArray* cache, int32_t pos, $ClassValue$Entry* e, bool gently) {
	$var($ClassValue$Entry, e2, overwrittenEntry($nc(cache)->get(pos)));
	if (gently && e2 != nullptr) {
		return e;
	} else {
		$nc(cache)->set(pos, e);
		return e2;
	}
}

$ClassValue$Entry* ClassValue$ClassValueMap::overwrittenEntry($ClassValue$Entry* e2) {
	if (e2 == nullptr) {
		this->cacheLoad += 1;
	} else if ($nc(e2)->isLive()) {
		return e2;
	}
	return nullptr;
}

void clinit$ClassValue$ClassValueMap($Class* class$) {
	$load($ClassValue);
	ClassValue$ClassValueMap::$assertionsDisabled = !$ClassValue::class$->desiredAssertionStatus();
}

ClassValue$ClassValueMap::ClassValue$ClassValueMap() {
}

$Class* ClassValue$ClassValueMap::load$($String* name, bool initialize) {
	$loadClass(ClassValue$ClassValueMap, name, initialize, &_ClassValue$ClassValueMap_ClassInfo_, clinit$ClassValue$ClassValueMap, allocate$ClassValue$ClassValueMap);
	return class$;
}

$Class* ClassValue$ClassValueMap::class$ = nullptr;

	} // lang
} // java