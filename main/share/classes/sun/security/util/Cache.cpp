#include <sun/security/util/Cache.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _Cache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Cache::*)()>(&Cache::init$))},
	{"accept", "(Lsun/security/util/Cache$CacheVisitor;)V", "(Lsun/security/util/Cache$CacheVisitor<TK;TV;>;)V", $PUBLIC | $ABSTRACT},
	{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC | $ABSTRACT},
	{"newHardMemoryCache", "(I)Lsun/security/util/Cache;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(I)Lsun/security/util/Cache<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Cache*(*)(int32_t)>(&Cache::newHardMemoryCache))},
	{"newHardMemoryCache", "(II)Lsun/security/util/Cache;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(II)Lsun/security/util/Cache<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Cache*(*)(int32_t,int32_t)>(&Cache::newHardMemoryCache))},
	{"newNullCache", "()Lsun/security/util/Cache;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>()Lsun/security/util/Cache<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Cache*(*)()>(&Cache::newNullCache))},
	{"newSoftMemoryCache", "(I)Lsun/security/util/Cache;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(I)Lsun/security/util/Cache<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Cache*(*)(int32_t)>(&Cache::newSoftMemoryCache))},
	{"newSoftMemoryCache", "(II)Lsun/security/util/Cache;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(II)Lsun/security/util/Cache<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Cache*(*)(int32_t,int32_t)>(&Cache::newSoftMemoryCache))},
	{"pull", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC | $ABSTRACT},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TK;TV;)V", $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCapacity", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTimeout", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Cache_InnerClassesInfo_[] = {
	{"sun.security.util.Cache$CacheVisitor", "sun.security.util.Cache", "CacheVisitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.util.Cache$EqualByteArray", "sun.security.util.Cache", "EqualByteArray", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Cache_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.security.util.Cache",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Cache_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Cache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.util.Cache$CacheVisitor,sun.security.util.Cache$EqualByteArray"
};

$Object* allocate$Cache($Class* clazz) {
	return $of($alloc(Cache));
}

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
	$loadClass(Cache, name, initialize, &_Cache_ClassInfo_, allocate$Cache);
	return class$;
}

$Class* Cache::class$ = nullptr;

		} // util
	} // security
} // sun