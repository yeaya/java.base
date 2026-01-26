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
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

$FieldInfo _ReferenceEnqueue$WeakRef_FieldInfo_[] = {
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $FINAL, $field(ReferenceEnqueue$WeakRef, queue)},
	{"ref", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Ljava/lang/Object;>;", $FINAL, $field(ReferenceEnqueue$WeakRef, ref)},
	{"iterations", "I", nullptr, $STATIC | $FINAL, $constField(ReferenceEnqueue$WeakRef, iterations)},
	{}
};

$MethodInfo _ReferenceEnqueue$WeakRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ReferenceEnqueue$WeakRef, init$, void)},
	{"run", "()V", nullptr, 0, $virtualMethod(ReferenceEnqueue$WeakRef, run, void), "java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _ReferenceEnqueue$WeakRef_InnerClassesInfo_[] = {
	{"ReferenceEnqueue$WeakRef", "ReferenceEnqueue", "WeakRef", $STATIC},
	{}
};

$ClassInfo _ReferenceEnqueue$WeakRef_ClassInfo_ = {
	$ACC_SUPER,
	"ReferenceEnqueue$WeakRef",
	"java.lang.Object",
	nullptr,
	_ReferenceEnqueue$WeakRef_FieldInfo_,
	_ReferenceEnqueue$WeakRef_MethodInfo_,
	nullptr,
	nullptr,
	_ReferenceEnqueue$WeakRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ReferenceEnqueue"
};

$Object* allocate$ReferenceEnqueue$WeakRef($Class* clazz) {
	return $of($alloc(ReferenceEnqueue$WeakRef));
}

void ReferenceEnqueue$WeakRef::init$() {
	$set(this, queue, $new($ReferenceQueue));
	$set(this, ref, $new($WeakReference, $$new($Object), this->queue));
}

void ReferenceEnqueue$WeakRef::run() {
	bool enqueued = false;
	$System::gc();
	for (int32_t i = 0; i < ReferenceEnqueue$WeakRef::iterations; ++i) {
		$System::gc();
		enqueued = ($nc(this->queue)->remove(100) == this->ref);
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
	$loadClass(ReferenceEnqueue$WeakRef, name, initialize, &_ReferenceEnqueue$WeakRef_ClassInfo_, allocate$ReferenceEnqueue$WeakRef);
	return class$;
}

$Class* ReferenceEnqueue$WeakRef::class$ = nullptr;