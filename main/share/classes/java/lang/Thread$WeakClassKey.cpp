#include <java/lang/Thread$WeakClassKey.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace java {
	namespace lang {

$FieldInfo _Thread$WeakClassKey_FieldInfo_[] = {
	{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(Thread$WeakClassKey, hash)},
	{}
};

$MethodInfo _Thread$WeakClassKey_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/ref/ReferenceQueue;)V", "(Ljava/lang/Class<*>;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;)V", 0, $method(static_cast<void(Thread$WeakClassKey::*)($Class*,$ReferenceQueue*)>(&Thread$WeakClassKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Thread$WeakClassKey_InnerClassesInfo_[] = {
	{"java.lang.Thread$WeakClassKey", "java.lang.Thread", "WeakClassKey", $STATIC},
	{}
};

$ClassInfo _Thread$WeakClassKey_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Thread$WeakClassKey",
	"java.lang.ref.WeakReference",
	nullptr,
	_Thread$WeakClassKey_FieldInfo_,
	_Thread$WeakClassKey_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Ljava/lang/Class<*>;>;",
	nullptr,
	_Thread$WeakClassKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Thread"
};

$Object* allocate$Thread$WeakClassKey($Class* clazz) {
	return $of($alloc(Thread$WeakClassKey));
}

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
		return (referent != nullptr) && ($nc(($cast(Thread$WeakClassKey, obj)))->refersTo(referent));
	} else {
		return false;
	}
}

Thread$WeakClassKey::Thread$WeakClassKey() {
}

$Class* Thread$WeakClassKey::load$($String* name, bool initialize) {
	$loadClass(Thread$WeakClassKey, name, initialize, &_Thread$WeakClassKey_ClassInfo_, allocate$Thread$WeakClassKey);
	return class$;
}

$Class* Thread$WeakClassKey::class$ = nullptr;

	} // lang
} // java