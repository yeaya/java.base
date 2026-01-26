#include <sun/security/util/MemoryCache$SoftCacheEntry.h>

#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <sun/security/util/MemoryCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _MemoryCache$SoftCacheEntry_FieldInfo_[] = {
	{"key", "Ljava/lang/Object;", "TK;", $PRIVATE, $field(MemoryCache$SoftCacheEntry, key)},
	{"expirationTime", "J", nullptr, $PRIVATE, $field(MemoryCache$SoftCacheEntry, expirationTime)},
	{}
};

$MethodInfo _MemoryCache$SoftCacheEntry_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;JLjava/lang/ref/ReferenceQueue;)V", "(TK;TV;JLjava/lang/ref/ReferenceQueue<TV;>;)V", 0, $method(MemoryCache$SoftCacheEntry, init$, void, Object$*, Object$*, int64_t, $ReferenceQueue*)},
	{"getExpirationTime", "()J", nullptr, $PUBLIC, $virtualMethod(MemoryCache$SoftCacheEntry, getExpirationTime, int64_t)},
	{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(MemoryCache$SoftCacheEntry, getKey, $Object*)},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(MemoryCache$SoftCacheEntry, getValue, $Object*)},
	{"invalidate", "()V", nullptr, $PUBLIC, $virtualMethod(MemoryCache$SoftCacheEntry, invalidate, void)},
	{"isValid", "(J)Z", nullptr, $PUBLIC, $virtualMethod(MemoryCache$SoftCacheEntry, isValid, bool, int64_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MemoryCache$SoftCacheEntry_InnerClassesInfo_[] = {
	{"sun.security.util.MemoryCache$SoftCacheEntry", "sun.security.util.MemoryCache", "SoftCacheEntry", $PRIVATE | $STATIC},
	{"sun.security.util.MemoryCache$CacheEntry", "sun.security.util.MemoryCache", "CacheEntry", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MemoryCache$SoftCacheEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.MemoryCache$SoftCacheEntry",
	"java.lang.ref.SoftReference",
	"sun.security.util.MemoryCache$CacheEntry",
	_MemoryCache$SoftCacheEntry_FieldInfo_,
	_MemoryCache$SoftCacheEntry_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/ref/SoftReference<TV;>;Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;",
	nullptr,
	_MemoryCache$SoftCacheEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.MemoryCache"
};

$Object* allocate$MemoryCache$SoftCacheEntry($Class* clazz) {
	return $of($alloc(MemoryCache$SoftCacheEntry));
}

$Object* MemoryCache$SoftCacheEntry::clone() {
	 return this->$SoftReference::clone();
}

int32_t MemoryCache$SoftCacheEntry::hashCode() {
	 return this->$SoftReference::hashCode();
}

bool MemoryCache$SoftCacheEntry::equals(Object$* obj) {
	 return this->$SoftReference::equals(obj);
}

$String* MemoryCache$SoftCacheEntry::toString() {
	 return this->$SoftReference::toString();
}

void MemoryCache$SoftCacheEntry::finalize() {
	this->$SoftReference::finalize();
}

void MemoryCache$SoftCacheEntry::init$(Object$* key, Object$* value, int64_t expirationTime, $ReferenceQueue* queue) {
	$SoftReference::init$(value, queue);
	$set(this, key, key);
	this->expirationTime = expirationTime;
}

$Object* MemoryCache$SoftCacheEntry::getKey() {
	return $of(this->key);
}

$Object* MemoryCache$SoftCacheEntry::getValue() {
	return $of(get());
}

int64_t MemoryCache$SoftCacheEntry::getExpirationTime() {
	return this->expirationTime;
}

bool MemoryCache$SoftCacheEntry::isValid(int64_t currentTime) {
	bool valid = (currentTime <= this->expirationTime) && (get() != nullptr);
	if (valid == false) {
		invalidate();
	}
	return valid;
}

void MemoryCache$SoftCacheEntry::invalidate() {
	clear();
	$set(this, key, nullptr);
	this->expirationTime = -1;
}

MemoryCache$SoftCacheEntry::MemoryCache$SoftCacheEntry() {
}

$Class* MemoryCache$SoftCacheEntry::load$($String* name, bool initialize) {
	$loadClass(MemoryCache$SoftCacheEntry, name, initialize, &_MemoryCache$SoftCacheEntry_ClassInfo_, allocate$MemoryCache$SoftCacheEntry);
	return class$;
}

$Class* MemoryCache$SoftCacheEntry::class$ = nullptr;

		} // util
	} // security
} // sun