#include <java/io/ObjectStreamClass$WeakClassKey.h>

#include <java/io/ObjectStreamClass.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace java {
	namespace io {

$FieldInfo _ObjectStreamClass$WeakClassKey_FieldInfo_[] = {
	{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamClass$WeakClassKey, hash)},
	{}
};

$MethodInfo _ObjectStreamClass$WeakClassKey_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/ref/ReferenceQueue;)V", "(Ljava/lang/Class<*>;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;)V", 0, $method(static_cast<void(ObjectStreamClass$WeakClassKey::*)($Class*,$ReferenceQueue*)>(&ObjectStreamClass$WeakClassKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ObjectStreamClass$WeakClassKey_InnerClassesInfo_[] = {
	{"java.io.ObjectStreamClass$WeakClassKey", "java.io.ObjectStreamClass", "WeakClassKey", $STATIC},
	{}
};

$ClassInfo _ObjectStreamClass$WeakClassKey_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectStreamClass$WeakClassKey",
	"java.lang.ref.WeakReference",
	nullptr,
	_ObjectStreamClass$WeakClassKey_FieldInfo_,
	_ObjectStreamClass$WeakClassKey_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Ljava/lang/Class<*>;>;",
	nullptr,
	_ObjectStreamClass$WeakClassKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectStreamClass"
};

$Object* allocate$ObjectStreamClass$WeakClassKey($Class* clazz) {
	return $of($alloc(ObjectStreamClass$WeakClassKey));
}

void ObjectStreamClass$WeakClassKey::init$($Class* cl, $ReferenceQueue* refQueue) {
	$WeakReference::init$(cl, refQueue);
	this->hash = $System::identityHashCode(cl);
}

int32_t ObjectStreamClass$WeakClassKey::hashCode() {
	return this->hash;
}

bool ObjectStreamClass$WeakClassKey::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if ($instanceOf(ObjectStreamClass$WeakClassKey, obj)) {
		$Class* referent = $cast($Class, get());
		return (referent != nullptr) && ($nc(($cast(ObjectStreamClass$WeakClassKey, obj)))->refersTo(referent));
	} else {
		return false;
	}
}

ObjectStreamClass$WeakClassKey::ObjectStreamClass$WeakClassKey() {
}

$Class* ObjectStreamClass$WeakClassKey::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamClass$WeakClassKey, name, initialize, &_ObjectStreamClass$WeakClassKey_ClassInfo_, allocate$ObjectStreamClass$WeakClassKey);
	return class$;
}

$Class* ObjectStreamClass$WeakClassKey::class$ = nullptr;

	} // io
} // java