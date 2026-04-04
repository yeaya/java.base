#include <sun/security/util/Cache.h>
#include <sun/security/util/Cache$CacheVisitor.h>
#include <sun/security/util/MemoryCache.h>
#include <sun/security/util/NullCache.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cache$CacheVisitor = ::sun::security::util::Cache$CacheVisitor;
using $MemoryCache = ::sun::security::util::MemoryCache;
using $NullCache = ::sun::security::util::NullCache;

namespace sun {
	namespace security {
		namespace util {

void Cache::init$() {
}

Cache* Cache::newSoftMemoryCache(int32_t size) {
	return $new($MemoryCache, true, size);
}

Cache* Cache::newSoftMemoryCache(int32_t size, int32_t timeout) {
	return $new($MemoryCache, true, size, timeout);
}

Cache* Cache::newHardMemoryCache(int32_t size) {
	return $new($MemoryCache, false, size);
}

Cache* Cache::newNullCache() {
	$init($NullCache);
	return $NullCache::INSTANCE;
}

Cache* Cache::newHardMemoryCache(int32_t size, int32_t timeout) {
	return $new($MemoryCache, false, size, timeout);
}

Cache::Cache() {
}

$Class* Cache::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(Cache, init$, void)},
		{"accept", "(Lsun/security/util/Cache$CacheVisitor;)V", "(Lsun/security/util/Cache$CacheVisitor<TK;TV;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Cache, accept, void, $Cache$CacheVisitor*)},
		{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Cache, clear, void)},
		{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Cache, get, $Object*, Object$*)},
		{"newHardMemoryCache", "(I)Lsun/security/util/Cache;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(I)Lsun/security/util/Cache<TK;TV;>;", $PUBLIC | $STATIC, $staticMethod(Cache, newHardMemoryCache, Cache*, int32_t)},
		{"newHardMemoryCache", "(II)Lsun/security/util/Cache;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(II)Lsun/security/util/Cache<TK;TV;>;", $PUBLIC | $STATIC, $staticMethod(Cache, newHardMemoryCache, Cache*, int32_t, int32_t)},
		{"newNullCache", "()Lsun/security/util/Cache;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>()Lsun/security/util/Cache<TK;TV;>;", $PUBLIC | $STATIC, $staticMethod(Cache, newNullCache, Cache*)},
		{"newSoftMemoryCache", "(I)Lsun/security/util/Cache;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(I)Lsun/security/util/Cache<TK;TV;>;", $PUBLIC | $STATIC, $staticMethod(Cache, newSoftMemoryCache, Cache*, int32_t)},
		{"newSoftMemoryCache", "(II)Lsun/security/util/Cache;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(II)Lsun/security/util/Cache<TK;TV;>;", $PUBLIC | $STATIC, $staticMethod(Cache, newSoftMemoryCache, Cache*, int32_t, int32_t)},
		{"pull", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Cache, pull, $Object*, Object$*)},
		{"put", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TK;TV;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Cache, put, void, Object$*, Object$*)},
		{"remove", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Cache, remove, void, Object$*)},
		{"setCapacity", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Cache, setCapacity, void, int32_t)},
		{"setTimeout", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Cache, setTimeout, void, int32_t)},
		{"size", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Cache, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.Cache$CacheVisitor", "sun.security.util.Cache", "CacheVisitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.security.util.Cache$EqualByteArray", "sun.security.util.Cache", "EqualByteArray", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.security.util.Cache",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.util.Cache$CacheVisitor,sun.security.util.Cache$EqualByteArray"
	};
	$loadClass(Cache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cache);
	});
	return class$;
}

$Class* Cache::class$ = nullptr;

		} // util
	} // security
} // sun