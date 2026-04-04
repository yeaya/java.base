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
	$FieldInfo fieldInfos$$[] = {
		{"cacheKey", "Ljava/util/ResourceBundle$CacheKey;", nullptr, $PRIVATE | $FINAL, $field(ResourceBundle$KeyElementReference, cacheKey)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;Ljava/util/ResourceBundle$CacheKey;)V", "(TT;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;Ljava/util/ResourceBundle$CacheKey;)V", 0, $method(ResourceBundle$KeyElementReference, init$, void, Object$*, $ReferenceQueue*, $ResourceBundle$CacheKey*)},
		{"getCacheKey", "()Ljava/util/ResourceBundle$CacheKey;", nullptr, $PUBLIC, $virtualMethod(ResourceBundle$KeyElementReference, getCacheKey, $ResourceBundle$CacheKey*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ResourceBundle$KeyElementReference", "java.util.ResourceBundle", "KeyElementReference", $PRIVATE | $STATIC},
		{"java.util.ResourceBundle$CacheKeyReference", "java.util.ResourceBundle", "CacheKeyReference", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ResourceBundle$KeyElementReference",
		"java.lang.ref.WeakReference",
		"java.util.ResourceBundle$CacheKeyReference",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TT;>;Ljava/util/ResourceBundle$CacheKeyReference;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ResourceBundle"
	};
	$loadClass(ResourceBundle$KeyElementReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ResourceBundle$KeyElementReference));
	});
	return class$;
}

$Class* ResourceBundle$KeyElementReference::class$ = nullptr;

	} // util
} // java