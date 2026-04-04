#include <java/io/ObjectStreamClass$WeakClassKey.h>
#include <java/io/ObjectStreamClass.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace java {
	namespace io {

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
		return (referent != nullptr) && ($cast(ObjectStreamClass$WeakClassKey, obj)->refersTo(referent));
	} else {
		return false;
	}
}

ObjectStreamClass$WeakClassKey::ObjectStreamClass$WeakClassKey() {
}

$Class* ObjectStreamClass$WeakClassKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamClass$WeakClassKey, hash)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/ref/ReferenceQueue;)V", "(Ljava/lang/Class<*>;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;)V", 0, $method(ObjectStreamClass$WeakClassKey, init$, void, $Class*, $ReferenceQueue*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ObjectStreamClass$WeakClassKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ObjectStreamClass$WeakClassKey, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectStreamClass$WeakClassKey", "java.io.ObjectStreamClass", "WeakClassKey", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectStreamClass$WeakClassKey",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/WeakReference<Ljava/lang/Class<*>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectStreamClass"
	};
	$loadClass(ObjectStreamClass$WeakClassKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectStreamClass$WeakClassKey);
	});
	return class$;
}

$Class* ObjectStreamClass$WeakClassKey::class$ = nullptr;

	} // io
} // java