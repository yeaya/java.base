#include <ReferenceEnqueue$WeakRef.h>
#include <ReferenceEnqueue.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

void ReferenceEnqueue$WeakRef::init$() {
	$set(this, queue, $new($ReferenceQueue));
	$set(this, ref, $new($WeakReference, $$new($Object), this->queue));
}

void ReferenceEnqueue$WeakRef::run() {
	bool enqueued = false;
	$System::gc();
	for (int32_t i = 0; i < ReferenceEnqueue$WeakRef::iterations; ++i) {
		$System::gc();
		enqueued = (this->queue->remove(100) == this->ref);
		if (enqueued) {
			break;
		}
	}
	if (!enqueued) {
		$throwNew($RuntimeException, "Error: reference not enqueued"_s);
	}
	if ($nc(this->ref)->enqueue() == true) {
		$throwNew($RuntimeException, "Error: enqueue() returned true; expected false"_s);
	}
}

ReferenceEnqueue$WeakRef::ReferenceEnqueue$WeakRef() {
}

$Class* ReferenceEnqueue$WeakRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $FINAL, $field(ReferenceEnqueue$WeakRef, queue)},
		{"ref", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Ljava/lang/Object;>;", $FINAL, $field(ReferenceEnqueue$WeakRef, ref)},
		{"iterations", "I", nullptr, $STATIC | $FINAL, $constField(ReferenceEnqueue$WeakRef, iterations)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ReferenceEnqueue$WeakRef, init$, void)},
		{"run", "()V", nullptr, 0, $virtualMethod(ReferenceEnqueue$WeakRef, run, void), "java.lang.InterruptedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReferenceEnqueue$WeakRef", "ReferenceEnqueue", "WeakRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ReferenceEnqueue$WeakRef",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ReferenceEnqueue"
	};
	$loadClass(ReferenceEnqueue$WeakRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceEnqueue$WeakRef);
	});
	return class$;
}

$Class* ReferenceEnqueue$WeakRef::class$ = nullptr;