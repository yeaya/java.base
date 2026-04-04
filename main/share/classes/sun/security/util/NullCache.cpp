#include <sun/security/util/NullCache.h>
#include <sun/security/util/Cache$CacheVisitor.h>
#include <sun/security/util/Cache.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cache = ::sun::security::util::Cache;
using $Cache$CacheVisitor = ::sun::security::util::Cache$CacheVisitor;

namespace sun {
	namespace security {
		namespace util {

$Cache* NullCache::INSTANCE = nullptr;

void NullCache::init$() {
	$Cache::init$();
}

int32_t NullCache::size() {
	return 0;
}

void NullCache::clear() {
}

void NullCache::put(Object$* key, Object$* value) {
}

$Object* NullCache::get(Object$* key) {
	return nullptr;
}

void NullCache::remove(Object$* key) {
}

$Object* NullCache::pull(Object$* key) {
	return nullptr;
}

void NullCache::setCapacity(int32_t size) {
}

void NullCache::setTimeout(int32_t timeout) {
}

void NullCache::accept($Cache$CacheVisitor* visitor) {
}

void NullCache::clinit$($Class* clazz) {
	$assignStatic(NullCache::INSTANCE, $new(NullCache));
}

NullCache::NullCache() {
}

$Class* NullCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Lsun/security/util/Cache;", "Lsun/security/util/Cache<Ljava/lang/Object;Ljava/lang/Object;>;", $STATIC | $FINAL, $staticField(NullCache, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NullCache, init$, void)},
		{"accept", "(Lsun/security/util/Cache$CacheVisitor;)V", "(Lsun/security/util/Cache$CacheVisitor<TK;TV;>;)V", $PUBLIC, $virtualMethod(NullCache, accept, void, $Cache$CacheVisitor*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(NullCache, clear, void)},
		{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC, $virtualMethod(NullCache, get, $Object*, Object$*)},
		{"pull", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC, $virtualMethod(NullCache, pull, $Object*, Object$*)},
		{"put", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TK;TV;)V", $PUBLIC, $virtualMethod(NullCache, put, void, Object$*, Object$*)},
		{"remove", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(NullCache, remove, void, Object$*)},
		{"setCapacity", "(I)V", nullptr, $PUBLIC, $virtualMethod(NullCache, setCapacity, void, int32_t)},
		{"setTimeout", "(I)V", nullptr, $PUBLIC, $virtualMethod(NullCache, setTimeout, void, int32_t)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(NullCache, size, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.NullCache",
		"sun.security.util.Cache",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Lsun/security/util/Cache<TK;TV;>;"
	};
	$loadClass(NullCache, name, initialize, &classInfo$$, NullCache::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NullCache);
	});
	return class$;
}

$Class* NullCache::class$ = nullptr;

		} // util
	} // security
} // sun