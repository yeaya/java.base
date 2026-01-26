#include <java/util/ResourceBundle$BundleReference.h>

#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/ResourceBundle$CacheKey.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ResourceBundle$CacheKey = ::java::util::ResourceBundle$CacheKey;

namespace java {
	namespace util {

$FieldInfo _ResourceBundle$BundleReference_FieldInfo_[] = {
	{"cacheKey", "Ljava/util/ResourceBundle$CacheKey;", nullptr, $PRIVATE | $FINAL, $field(ResourceBundle$BundleReference, cacheKey)},
	{}
};

$MethodInfo _ResourceBundle$BundleReference_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/ResourceBundle;Ljava/lang/ref/ReferenceQueue;Ljava/util/ResourceBundle$CacheKey;)V", "(Ljava/util/ResourceBundle;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;Ljava/util/ResourceBundle$CacheKey;)V", 0, $method(ResourceBundle$BundleReference, init$, void, $ResourceBundle*, $ReferenceQueue*, $ResourceBundle$CacheKey*)},
	{"getCacheKey", "()Ljava/util/ResourceBundle$CacheKey;", nullptr, $PUBLIC, $virtualMethod(ResourceBundle$BundleReference, getCacheKey, $ResourceBundle$CacheKey*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ResourceBundle$BundleReference_InnerClassesInfo_[] = {
	{"java.util.ResourceBundle$BundleReference", "java.util.ResourceBundle", "BundleReference", $PRIVATE | $STATIC},
	{"java.util.ResourceBundle$CacheKeyReference", "java.util.ResourceBundle", "CacheKeyReference", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ResourceBundle$BundleReference_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ResourceBundle$BundleReference",
	"java.lang.ref.SoftReference",
	"java.util.ResourceBundle$CacheKeyReference",
	_ResourceBundle$BundleReference_FieldInfo_,
	_ResourceBundle$BundleReference_MethodInfo_,
	"Ljava/lang/ref/SoftReference<Ljava/util/ResourceBundle;>;Ljava/util/ResourceBundle$CacheKeyReference;",
	nullptr,
	_ResourceBundle$BundleReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ResourceBundle"
};

$Object* allocate$ResourceBundle$BundleReference($Class* clazz) {
	return $of($alloc(ResourceBundle$BundleReference));
}

$Object* ResourceBundle$BundleReference::clone() {
	 return this->$SoftReference::clone();
}

int32_t ResourceBundle$BundleReference::hashCode() {
	 return this->$SoftReference::hashCode();
}

bool ResourceBundle$BundleReference::equals(Object$* obj) {
	 return this->$SoftReference::equals(obj);
}

$String* ResourceBundle$BundleReference::toString() {
	 return this->$SoftReference::toString();
}

void ResourceBundle$BundleReference::finalize() {
	this->$SoftReference::finalize();
}

void ResourceBundle$BundleReference::init$($ResourceBundle* referent, $ReferenceQueue* q, $ResourceBundle$CacheKey* key) {
	$SoftReference::init$(referent, q);
	$set(this, cacheKey, key);
}

$ResourceBundle$CacheKey* ResourceBundle$BundleReference::getCacheKey() {
	return this->cacheKey;
}

ResourceBundle$BundleReference::ResourceBundle$BundleReference() {
}

$Class* ResourceBundle$BundleReference::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$BundleReference, name, initialize, &_ResourceBundle$BundleReference_ClassInfo_, allocate$ResourceBundle$BundleReference);
	return class$;
}

$Class* ResourceBundle$BundleReference::class$ = nullptr;

	} // util
} // java