#include <java/util/ResourceBundle$KeyElementReference.h>

#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/ResourceBundle$CacheKey.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ResourceBundle$CacheKey = ::java::util::ResourceBundle$CacheKey;

namespace java {
	namespace util {

$FieldInfo _ResourceBundle$KeyElementReference_FieldInfo_[] = {
	{"cacheKey", "Ljava/util/ResourceBundle$CacheKey;", nullptr, $PRIVATE | $FINAL, $field(ResourceBundle$KeyElementReference, cacheKey)},
	{}
};

$MethodInfo _ResourceBundle$KeyElementReference_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;Ljava/util/ResourceBundle$CacheKey;)V", "(TT;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;Ljava/util/ResourceBundle$CacheKey;)V", 0, $method(static_cast<void(ResourceBundle$KeyElementReference::*)(Object$*,$ReferenceQueue*,$ResourceBundle$CacheKey*)>(&ResourceBundle$KeyElementReference::init$))},
	{"getCacheKey", "()Ljava/util/ResourceBundle$CacheKey;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ResourceBundle$KeyElementReference_InnerClassesInfo_[] = {
	{"java.util.ResourceBundle$KeyElementReference", "java.util.ResourceBundle", "KeyElementReference", $PRIVATE | $STATIC},
	{"java.util.ResourceBundle$CacheKeyReference", "java.util.ResourceBundle", "CacheKeyReference", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ResourceBundle$KeyElementReference_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ResourceBundle$KeyElementReference",
	"java.lang.ref.WeakReference",
	"java.util.ResourceBundle$CacheKeyReference",
	_ResourceBundle$KeyElementReference_FieldInfo_,
	_ResourceBundle$KeyElementReference_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TT;>;Ljava/util/ResourceBundle$CacheKeyReference;",
	nullptr,
	_ResourceBundle$KeyElementReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ResourceBundle"
};

$Object* allocate$ResourceBundle$KeyElementReference($Class* clazz) {
	return $of($alloc(ResourceBundle$KeyElementReference));
}

$Object* ResourceBundle$KeyElementReference::clone() {
	 return this->$WeakReference::clone();
}

int32_t ResourceBundle$KeyElementReference::hashCode() {
	 return this->$WeakReference::hashCode();
}

bool ResourceBundle$KeyElementReference::equals(Object$* obj) {
	 return this->$WeakReference::equals(obj);
}

$String* ResourceBundle$KeyElementReference::toString() {
	 return this->$WeakReference::toString();
}

void ResourceBundle$KeyElementReference::finalize() {
	this->$WeakReference::finalize();
}

void ResourceBundle$KeyElementReference::init$(Object$* referent, $ReferenceQueue* q, $ResourceBundle$CacheKey* key) {
	$WeakReference::init$(referent, q);
	$set(this, cacheKey, key);
}

$ResourceBundle$CacheKey* ResourceBundle$KeyElementReference::getCacheKey() {
	return this->cacheKey;
}

ResourceBundle$KeyElementReference::ResourceBundle$KeyElementReference() {
}

$Class* ResourceBundle$KeyElementReference::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$KeyElementReference, name, initialize, &_ResourceBundle$KeyElementReference_ClassInfo_, allocate$ResourceBundle$KeyElementReference);
	return class$;
}

$Class* ResourceBundle$KeyElementReference::class$ = nullptr;

	} // util
} // java