#include <sun/util/resources/Bundles$BundleReference.h>

#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/ResourceBundle.h>
#include <sun/util/resources/Bundles$CacheKey.h>
#include <sun/util/resources/Bundles.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Bundles = ::sun::util::resources::Bundles;
using $Bundles$CacheKey = ::sun::util::resources::Bundles$CacheKey;
using $Bundles$CacheKeyReference = ::sun::util::resources::Bundles$CacheKeyReference;

namespace sun {
	namespace util {
		namespace resources {

$FieldInfo _Bundles$BundleReference_FieldInfo_[] = {
	{"cacheKey", "Lsun/util/resources/Bundles$CacheKey;", nullptr, $PRIVATE | $FINAL, $field(Bundles$BundleReference, cacheKey)},
	{}
};

$MethodInfo _Bundles$BundleReference_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/ResourceBundle;Ljava/lang/ref/ReferenceQueue;Lsun/util/resources/Bundles$CacheKey;)V", "(Ljava/util/ResourceBundle;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;Lsun/util/resources/Bundles$CacheKey;)V", 0, $method(static_cast<void(Bundles$BundleReference::*)($ResourceBundle*,$ReferenceQueue*,$Bundles$CacheKey*)>(&Bundles$BundleReference::init$))},
	{"getCacheKey", "()Lsun/util/resources/Bundles$CacheKey;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Bundles$BundleReference_InnerClassesInfo_[] = {
	{"sun.util.resources.Bundles$BundleReference", "sun.util.resources.Bundles", "BundleReference", $PRIVATE | $STATIC},
	{"sun.util.resources.Bundles$CacheKeyReference", "sun.util.resources.Bundles", "CacheKeyReference", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Bundles$BundleReference_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.resources.Bundles$BundleReference",
	"java.lang.ref.SoftReference",
	"sun.util.resources.Bundles$CacheKeyReference",
	_Bundles$BundleReference_FieldInfo_,
	_Bundles$BundleReference_MethodInfo_,
	"Ljava/lang/ref/SoftReference<Ljava/util/ResourceBundle;>;Lsun/util/resources/Bundles$CacheKeyReference;",
	nullptr,
	_Bundles$BundleReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.resources.Bundles"
};

$Object* allocate$Bundles$BundleReference($Class* clazz) {
	return $of($alloc(Bundles$BundleReference));
}

$Object* Bundles$BundleReference::clone() {
	 return this->$SoftReference::clone();
}

int32_t Bundles$BundleReference::hashCode() {
	 return this->$SoftReference::hashCode();
}

bool Bundles$BundleReference::equals(Object$* obj) {
	 return this->$SoftReference::equals(obj);
}

$String* Bundles$BundleReference::toString() {
	 return this->$SoftReference::toString();
}

void Bundles$BundleReference::finalize() {
	this->$SoftReference::finalize();
}

void Bundles$BundleReference::init$($ResourceBundle* referent, $ReferenceQueue* q, $Bundles$CacheKey* key) {
	$SoftReference::init$(referent, q);
	$set(this, cacheKey, key);
}

$Bundles$CacheKey* Bundles$BundleReference::getCacheKey() {
	return this->cacheKey;
}

Bundles$BundleReference::Bundles$BundleReference() {
}

$Class* Bundles$BundleReference::load$($String* name, bool initialize) {
	$loadClass(Bundles$BundleReference, name, initialize, &_Bundles$BundleReference_ClassInfo_, allocate$Bundles$BundleReference);
	return class$;
}

$Class* Bundles$BundleReference::class$ = nullptr;

		} // resources
	} // util
} // sun