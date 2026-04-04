#include <java/lang/Thread$WeakClassKey.h>
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
	namespace lang {

void Thread$WeakClassKey::init$($Class* cl, $ReferenceQueue* refQueue) {
	$WeakReference::init$(cl, refQueue);
	this->hash = $System::identityHashCode(cl);
}

int32_t Thread$WeakClassKey::hashCode() {
	return this->hash;
}

bool Thread$WeakClassKey::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if ($instanceOf(Thread$WeakClassKey, obj)) {
		$Class* referent = $cast($Class, get());
		return (referent != nullptr) && ($cast(Thread$WeakClassKey, obj)->refersTo(referent));
	} else {
		return false;
	}
}

Thread$WeakClassKey::Thread$WeakClassKey() {
}

$Class* Thread$WeakClassKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(Thread$WeakClassKey, hash)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/ref/ReferenceQueue;)V", "(Ljava/lang/Class<*>;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;)V", 0, $method(Thread$WeakClassKey, init$, void, $Class*, $ReferenceQueue*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Thread$WeakClassKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Thread$WeakClassKey, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Thread$WeakClassKey", "java.lang.Thread", "WeakClassKey", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Thread$WeakClassKey",
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
		"java.lang.Thread"
	};
	$loadClass(Thread$WeakClassKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Thread$WeakClassKey);
	});
	return class$;
}

$Class* Thread$WeakClassKey::class$ = nullptr;

	} // lang
} // java