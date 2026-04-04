#include <sun/util/locale/provider/LocaleResources$ResourceReference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <sun/util/locale/provider/LocaleResources.h>
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
			namespace provider {

void LocaleResources$ResourceReference::init$($String* cacheKey, Object$* o, $ReferenceQueue* q) {
	$SoftReference::init$(o, q);
	$set(this, cacheKey, cacheKey);
}

$String* LocaleResources$ResourceReference::getCacheKey() {
	return this->cacheKey;
}

LocaleResources$ResourceReference::LocaleResources$ResourceReference() {
}

$Class* LocaleResources$ResourceReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cacheKey", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LocaleResources$ResourceReference, cacheKey)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;)V", 0, $method(LocaleResources$ResourceReference, init$, void, $String*, Object$*, $ReferenceQueue*)},
		{"getCacheKey", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(LocaleResources$ResourceReference, getCacheKey, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.LocaleResources$ResourceReference", "sun.util.locale.provider.LocaleResources", "ResourceReference", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.locale.provider.LocaleResources$ResourceReference",
		"java.lang.ref.SoftReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/SoftReference<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.locale.provider.LocaleResources"
	};
	$loadClass(LocaleResources$ResourceReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleResources$ResourceReference);
	});
	return class$;
}

$Class* LocaleResources$ResourceReference::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun