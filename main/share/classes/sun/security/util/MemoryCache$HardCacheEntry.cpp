#include <sun/security/util/MemoryCache$HardCacheEntry.h>

#include <sun/security/util/MemoryCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MemoryCache = ::sun::security::util::MemoryCache;
using $MemoryCache$CacheEntry = ::sun::security::util::MemoryCache$CacheEntry;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _MemoryCache$HardCacheEntry_FieldInfo_[] = {
	{"key", "Ljava/lang/Object;", "TK;", $PRIVATE, $field(MemoryCache$HardCacheEntry, key)},
	{"value", "Ljava/lang/Object;", "TV;", $PRIVATE, $field(MemoryCache$HardCacheEntry, value)},
	{"expirationTime", "J", nullptr, $PRIVATE, $field(MemoryCache$HardCacheEntry, expirationTime)},
	{}
};

$MethodInfo _MemoryCache$HardCacheEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;J)V", "(TK;TV;J)V", 0, $method(static_cast<void(MemoryCache$HardCacheEntry::*)(Object$*,Object$*,int64_t)>(&MemoryCache$HardCacheEntry::init$))},
	{"getExpirationTime", "()J", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"isValid", "(J)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MemoryCache$HardCacheEntry_InnerClassesInfo_[] = {
	{"sun.security.util.MemoryCache$HardCacheEntry", "sun.security.util.MemoryCache", "HardCacheEntry", $PRIVATE | $STATIC},
	{"sun.security.util.MemoryCache$CacheEntry", "sun.security.util.MemoryCache", "CacheEntry", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MemoryCache$HardCacheEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.MemoryCache$HardCacheEntry",
	"java.lang.Object",
	"sun.security.util.MemoryCache$CacheEntry",
	_MemoryCache$HardCacheEntry_FieldInfo_,
	_MemoryCache$HardCacheEntry_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;",
	nullptr,
	_MemoryCache$HardCacheEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.MemoryCache"
};

$Object* allocate$MemoryCache$HardCacheEntry($Class* clazz) {
	return $of($alloc(MemoryCache$HardCacheEntry));
}

void MemoryCache$HardCacheEntry::init$(Object$* key, Object$* value, int64_t expirationTime) {
	$set(this, key, key);
	$set(this, value, value);
	this->expirationTime = expirationTime;
}

$Object* MemoryCache$HardCacheEntry::getKey() {
	return $of(this->key);
}

$Object* MemoryCache$HardCacheEntry::getValue() {
	return $of(this->value);
}

int64_t MemoryCache$HardCacheEntry::getExpirationTime() {
	return this->expirationTime;
}

bool MemoryCache$HardCacheEntry::isValid(int64_t currentTime) {
	bool valid = (currentTime <= this->expirationTime);
	if (valid == false) {
		invalidate();
	}
	return valid;
}

void MemoryCache$HardCacheEntry::invalidate() {
	$set(this, key, nullptr);
	$set(this, value, nullptr);
	this->expirationTime = -1;
}

MemoryCache$HardCacheEntry::MemoryCache$HardCacheEntry() {
}

$Class* MemoryCache$HardCacheEntry::load$($String* name, bool initialize) {
	$loadClass(MemoryCache$HardCacheEntry, name, initialize, &_MemoryCache$HardCacheEntry_ClassInfo_, allocate$MemoryCache$HardCacheEntry);
	return class$;
}

$Class* MemoryCache$HardCacheEntry::class$ = nullptr;

		} // util
	} // security
} // sun