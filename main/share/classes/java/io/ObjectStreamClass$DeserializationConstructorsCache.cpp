#include <java/io/ObjectStreamClass$DeserializationConstructorsCache.h>

#include <java/io/ObjectStreamClass$DeserializationConstructorsCache$Key$Impl.h>
#include <java/io/ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup.h>
#include <java/io/ObjectStreamClass.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

#undef MAX_SIZE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ObjectStreamClass$DeserializationConstructorsCache$Key$Impl = ::java::io::ObjectStreamClass$DeserializationConstructorsCache$Key$Impl;
using $ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup = ::java::io::ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace io {

$FieldInfo _ObjectStreamClass$DeserializationConstructorsCache_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ObjectStreamClass$DeserializationConstructorsCache, $assertionsDisabled)},
	{"MAX_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectStreamClass$DeserializationConstructorsCache, MAX_SIZE)},
	{"first", "Ljava/io/ObjectStreamClass$DeserializationConstructorsCache$Key$Impl;", nullptr, $PRIVATE, $field(ObjectStreamClass$DeserializationConstructorsCache, first)},
	{"last", "Ljava/io/ObjectStreamClass$DeserializationConstructorsCache$Key$Impl;", nullptr, $PRIVATE, $field(ObjectStreamClass$DeserializationConstructorsCache, last)},
	{}
};

$MethodInfo _ObjectStreamClass$DeserializationConstructorsCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ObjectStreamClass$DeserializationConstructorsCache::*)()>(&ObjectStreamClass$DeserializationConstructorsCache::init$))},
	{"get", "([Ljava/io/ObjectStreamField;)Ljava/lang/invoke/MethodHandle;", nullptr, 0, $method(static_cast<$MethodHandle*(ObjectStreamClass$DeserializationConstructorsCache::*)($ObjectStreamFieldArray*)>(&ObjectStreamClass$DeserializationConstructorsCache::get))},
	{"putIfAbsentAndGet", "([Ljava/io/ObjectStreamField;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $SYNCHRONIZED, $method(static_cast<$MethodHandle*(ObjectStreamClass$DeserializationConstructorsCache::*)($ObjectStreamFieldArray*,$MethodHandle*)>(&ObjectStreamClass$DeserializationConstructorsCache::putIfAbsentAndGet))},
	{}
};

$InnerClassInfo _ObjectStreamClass$DeserializationConstructorsCache_InnerClassesInfo_[] = {
	{"java.io.ObjectStreamClass$DeserializationConstructorsCache", "java.io.ObjectStreamClass", "DeserializationConstructorsCache", $PRIVATE | $STATIC | $FINAL},
	{"java.io.ObjectStreamClass$DeserializationConstructorsCache$Key", "java.io.ObjectStreamClass$DeserializationConstructorsCache", "Key", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ObjectStreamClass$DeserializationConstructorsCache_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.io.ObjectStreamClass$DeserializationConstructorsCache",
	"java.util.concurrent.ConcurrentHashMap",
	nullptr,
	_ObjectStreamClass$DeserializationConstructorsCache_FieldInfo_,
	_ObjectStreamClass$DeserializationConstructorsCache_MethodInfo_,
	"Ljava/util/concurrent/ConcurrentHashMap<Ljava/io/ObjectStreamClass$DeserializationConstructorsCache$Key;Ljava/lang/invoke/MethodHandle;>;",
	nullptr,
	_ObjectStreamClass$DeserializationConstructorsCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectStreamClass"
};

$Object* allocate$ObjectStreamClass$DeserializationConstructorsCache($Class* clazz) {
	return $of($alloc(ObjectStreamClass$DeserializationConstructorsCache));
}

bool ObjectStreamClass$DeserializationConstructorsCache::$assertionsDisabled = false;

void ObjectStreamClass$DeserializationConstructorsCache::init$() {
	$ConcurrentHashMap::init$(2);
}

$MethodHandle* ObjectStreamClass$DeserializationConstructorsCache::get($ObjectStreamFieldArray* fields) {
	return $cast($MethodHandle, get($$new($ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup, fields)));
}

$MethodHandle* ObjectStreamClass$DeserializationConstructorsCache::putIfAbsentAndGet($ObjectStreamFieldArray* fields, $MethodHandle* mh) {
	$synchronized(this) {
		$var($ObjectStreamClass$DeserializationConstructorsCache$Key$Impl, key, $new($ObjectStreamClass$DeserializationConstructorsCache$Key$Impl, fields));
		$var($MethodHandle, oldMh, $cast($MethodHandle, putIfAbsent(key, mh)));
		if (oldMh != nullptr) {
			return oldMh;
		}
		if (this->last == nullptr) {
			$set(this, last, ($assignField(this, first, key)));
		} else {
			$set(this, last, ($assignField($nc(this->last), next, key)));
		}
		if (size() > ObjectStreamClass$DeserializationConstructorsCache::MAX_SIZE) {
			if (!ObjectStreamClass$DeserializationConstructorsCache::$assertionsDisabled && !(this->first != nullptr)) {
				$throwNew($AssertionError);
			}
			remove(this->first);
			$set(this, first, $nc(this->first)->next);
			if (this->first == nullptr) {
				$set(this, last, nullptr);
			}
		}
		return mh;
	}
}

void clinit$ObjectStreamClass$DeserializationConstructorsCache($Class* class$) {
	$load($ObjectStreamClass);
	ObjectStreamClass$DeserializationConstructorsCache::$assertionsDisabled = !$ObjectStreamClass::class$->desiredAssertionStatus();
}

ObjectStreamClass$DeserializationConstructorsCache::ObjectStreamClass$DeserializationConstructorsCache() {
}

$Class* ObjectStreamClass$DeserializationConstructorsCache::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamClass$DeserializationConstructorsCache, name, initialize, &_ObjectStreamClass$DeserializationConstructorsCache_ClassInfo_, clinit$ObjectStreamClass$DeserializationConstructorsCache, allocate$ObjectStreamClass$DeserializationConstructorsCache);
	return class$;
}

$Class* ObjectStreamClass$DeserializationConstructorsCache::class$ = nullptr;

	} // io
} // java