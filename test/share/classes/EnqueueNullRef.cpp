#include <EnqueueNullRef.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/ref/PhantomReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $PhantomReference = ::java::lang::ref::PhantomReference;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;
using $WeakReference = ::java::lang::ref::WeakReference;

$MethodInfo _EnqueueNullRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EnqueueNullRef::*)()>(&EnqueueNullRef::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&EnqueueNullRef::main))},
	{"test", "(Ljava/lang/ref/ReferenceQueue;Ljava/lang/ref/Reference;)V", nullptr, $STATIC, $method(static_cast<void(*)($ReferenceQueue*,$Reference*)>(&EnqueueNullRef::test))},
	{}
};

$ClassInfo _EnqueueNullRef_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EnqueueNullRef",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EnqueueNullRef_MethodInfo_
};

$Object* allocate$EnqueueNullRef($Class* clazz) {
	return $of($alloc(EnqueueNullRef));
}

void EnqueueNullRef::init$() {
}

void EnqueueNullRef::test($ReferenceQueue* q, $Reference* r) {
	if (!$nc(r)->enqueue()) {
		$throwNew($RuntimeException, "Enqueue operation failed"_s);
	}
}

void EnqueueNullRef::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ReferenceQueue, q, $new($ReferenceQueue));
	test(q, $$new($WeakReference, nullptr, q));
	test(q, $$new($SoftReference, nullptr, q));
	test(q, $$new($PhantomReference, nullptr, q));
}

EnqueueNullRef::EnqueueNullRef() {
}

$Class* EnqueueNullRef::load$($String* name, bool initialize) {
	$loadClass(EnqueueNullRef, name, initialize, &_EnqueueNullRef_ClassInfo_, allocate$EnqueueNullRef);
	return class$;
}

$Class* EnqueueNullRef::class$ = nullptr;