#include <sun/security/util/MemoryCache$CacheEntry.h>

#include <sun/security/util/MemoryCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _MemoryCache$CacheEntry_MethodInfo_[] = {
	{"getExpirationTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryCache$CacheEntry, getExpirationTime, int64_t)},
	{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $ABSTRACT, $virtualMethod(MemoryCache$CacheEntry, getKey, $Object*)},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $ABSTRACT, $virtualMethod(MemoryCache$CacheEntry, getValue, $Object*)},
	{"invalidate", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryCache$CacheEntry, invalidate, void)},
	{"isValid", "(J)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryCache$CacheEntry, isValid, bool, int64_t)},
	{}
};

$InnerClassInfo _MemoryCache$CacheEntry_InnerClassesInfo_[] = {
	{"sun.security.util.MemoryCache$CacheEntry", "sun.security.util.MemoryCache", "CacheEntry", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MemoryCache$CacheEntry_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.util.MemoryCache$CacheEntry",
	nullptr,
	nullptr,
	nullptr,
	_MemoryCache$CacheEntry_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_MemoryCache$CacheEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.MemoryCache"
};

$Object* allocate$MemoryCache$CacheEntry($Class* clazz) {
	return $of($alloc(MemoryCache$CacheEntry));
}

$Class* MemoryCache$CacheEntry::load$($String* name, bool initialize) {
	$loadClass(MemoryCache$CacheEntry, name, initialize, &_MemoryCache$CacheEntry_ClassInfo_, allocate$MemoryCache$CacheEntry);
	return class$;
}

$Class* MemoryCache$CacheEntry::class$ = nullptr;

		} // util
	} // security
} // sun