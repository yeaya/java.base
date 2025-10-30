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
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _LocaleResources$ResourceReference_FieldInfo_[] = {
	{"cacheKey", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LocaleResources$ResourceReference, cacheKey)},
	{}
};

$MethodInfo _LocaleResources$ResourceReference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;)V", 0, $method(static_cast<void(LocaleResources$ResourceReference::*)($String*,Object$*,$ReferenceQueue*)>(&LocaleResources$ResourceReference::init$))},
	{"getCacheKey", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _LocaleResources$ResourceReference_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.LocaleResources$ResourceReference", "sun.util.locale.provider.LocaleResources", "ResourceReference", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LocaleResources$ResourceReference_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.LocaleResources$ResourceReference",
	"java.lang.ref.SoftReference",
	nullptr,
	_LocaleResources$ResourceReference_FieldInfo_,
	_LocaleResources$ResourceReference_MethodInfo_,
	"Ljava/lang/ref/SoftReference<Ljava/lang/Object;>;",
	nullptr,
	_LocaleResources$ResourceReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.LocaleResources"
};

$Object* allocate$LocaleResources$ResourceReference($Class* clazz) {
	return $of($alloc(LocaleResources$ResourceReference));
}

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
	$loadClass(LocaleResources$ResourceReference, name, initialize, &_LocaleResources$ResourceReference_ClassInfo_, allocate$LocaleResources$ResourceReference);
	return class$;
}

$Class* LocaleResources$ResourceReference::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun