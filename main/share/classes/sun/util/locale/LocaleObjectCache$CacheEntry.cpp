#include <sun/util/locale/LocaleObjectCache$CacheEntry.h>

#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <sun/util/locale/LocaleObjectCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;

namespace sun {
	namespace util {
		namespace locale {

$FieldInfo _LocaleObjectCache$CacheEntry_FieldInfo_[] = {
	{"key", "Ljava/lang/Object;", "TK;", $PRIVATE, $field(LocaleObjectCache$CacheEntry, key)},
	{}
};

$MethodInfo _LocaleObjectCache$CacheEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TK;TV;Ljava/lang/ref/ReferenceQueue<TV;>;)V", 0, $method(static_cast<void(LocaleObjectCache$CacheEntry::*)(Object$*,Object$*,$ReferenceQueue*)>(&LocaleObjectCache$CacheEntry::init$))},
	{"getKey", "()Ljava/lang/Object;", "()TK;", 0},
	{}
};

$InnerClassInfo _LocaleObjectCache$CacheEntry_InnerClassesInfo_[] = {
	{"sun.util.locale.LocaleObjectCache$CacheEntry", "sun.util.locale.LocaleObjectCache", "CacheEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LocaleObjectCache$CacheEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.LocaleObjectCache$CacheEntry",
	"java.lang.ref.SoftReference",
	nullptr,
	_LocaleObjectCache$CacheEntry_FieldInfo_,
	_LocaleObjectCache$CacheEntry_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/ref/SoftReference<TV;>;",
	nullptr,
	_LocaleObjectCache$CacheEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.LocaleObjectCache"
};

$Object* allocate$LocaleObjectCache$CacheEntry($Class* clazz) {
	return $of($alloc(LocaleObjectCache$CacheEntry));
}

void LocaleObjectCache$CacheEntry::init$(Object$* key, Object$* value, $ReferenceQueue* queue) {
	$SoftReference::init$(value, queue);
	$set(this, key, key);
}

$Object* LocaleObjectCache$CacheEntry::getKey() {
	return $of(this->key);
}

LocaleObjectCache$CacheEntry::LocaleObjectCache$CacheEntry() {
}

$Class* LocaleObjectCache$CacheEntry::load$($String* name, bool initialize) {
	$loadClass(LocaleObjectCache$CacheEntry, name, initialize, &_LocaleObjectCache$CacheEntry_ClassInfo_, allocate$LocaleObjectCache$CacheEntry);
	return class$;
}

$Class* LocaleObjectCache$CacheEntry::class$ = nullptr;

		} // locale
	} // util
} // sun