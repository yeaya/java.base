#include <EnqueueNullRef.h>
#include <java/lang/ref/PhantomReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $PhantomReference = ::java::lang::ref::PhantomReference;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;
using $WeakReference = ::java::lang::ref::WeakReference;

void EnqueueNullRef::init$() {
}

void EnqueueNullRef::test($ReferenceQueue* q, $Reference* r) {
	if (!$nc(r)->enqueue()) {
		$throwNew($RuntimeException, "Enqueue operation failed"_s);
	}
}

void EnqueueNullRef::main($StringArray* args) {
	$useLocalObjectStack();
	$var($ReferenceQueue, q, $new($ReferenceQueue));
	test(q, $$new($WeakReference, nullptr, q));
	test(q, $$new($SoftReference, nullptr, q));
	test(q, $$new($PhantomReference, nullptr, q));
}

EnqueueNullRef::EnqueueNullRef() {
}

$Class* EnqueueNullRef::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EnqueueNullRef, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EnqueueNullRef, main, void, $StringArray*)},
		{"test", "(Ljava/lang/ref/ReferenceQueue;Ljava/lang/ref/Reference;)V", nullptr, $STATIC, $staticMethod(EnqueueNullRef, test, void, $ReferenceQueue*, $Reference*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EnqueueNullRef",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EnqueueNullRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnqueueNullRef);
	});
	return class$;
}

$Class* EnqueueNullRef::class$ = nullptr;