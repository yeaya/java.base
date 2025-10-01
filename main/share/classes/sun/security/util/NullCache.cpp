#include <sun/security/util/NullCache.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _NullCache_FieldInfo_[] = {
	{"INSTANCE", "Lsun/security/util/Cache;", "Lsun/security/util/Cache<Ljava/lang/Object;Ljava/lang/Object;>;", $STATIC | $FINAL, $staticField(NullCache, INSTANCE)},
	{}
};

$MethodInfo _NullCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NullCache::*)()>(&NullCache::init$))},
	{"accept", "(Lsun/security/util/Cache$CacheVisitor;)V", "(Lsun/security/util/Cache$CacheVisitor<TK;TV;>;)V", $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC},
	{"pull", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TK;TV;)V", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setCapacity", "(I)V", nullptr, $PUBLIC},
	{"setTimeout", "(I)V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NullCache_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.NullCache",
	"sun.security.util.Cache",
	nullptr,
	_NullCache_FieldInfo_,
	_NullCache_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Lsun/security/util/Cache<TK;TV;>;"
};

$Object* allocate$NullCache($Class* clazz) {
	return $of($alloc(NullCache));
}

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
	return $of(nullptr);
}

void NullCache::remove(Object$* key) {
}

$Object* NullCache::pull(Object$* key) {
	return $of(nullptr);
}

void NullCache::setCapacity(int32_t size) {
}

void NullCache::setTimeout(int32_t timeout) {
}

void NullCache::accept($Cache$CacheVisitor* visitor) {
}

void clinit$NullCache($Class* class$) {
	$assignStatic(NullCache::INSTANCE, $new(NullCache));
}

NullCache::NullCache() {
}

$Class* NullCache::load$($String* name, bool initialize) {
	$loadClass(NullCache, name, initialize, &_NullCache_ClassInfo_, clinit$NullCache, allocate$NullCache);
	return class$;
}

$Class* NullCache::class$ = nullptr;

		} // util
	} // security
} // sun