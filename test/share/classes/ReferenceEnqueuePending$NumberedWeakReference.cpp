#include <ReferenceEnqueuePending$NumberedWeakReference.h>
#include <ReferenceEnqueuePending.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

void ReferenceEnqueuePending$NumberedWeakReference::init$($Integer* referent, $ReferenceQueue* q, int32_t i) {
	$WeakReference::init$(referent, q);
	this->number = i;
}

ReferenceEnqueuePending$NumberedWeakReference::ReferenceEnqueuePending$NumberedWeakReference() {
}

$Class* ReferenceEnqueuePending$NumberedWeakReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"number", "I", nullptr, 0, $field(ReferenceEnqueuePending$NumberedWeakReference, number)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Integer;Ljava/lang/ref/ReferenceQueue;I)V", "(Ljava/lang/Integer;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Integer;>;I)V", 0, $method(ReferenceEnqueuePending$NumberedWeakReference, init$, void, $Integer*, $ReferenceQueue*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReferenceEnqueuePending$NumberedWeakReference", "ReferenceEnqueuePending", "NumberedWeakReference", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ReferenceEnqueuePending$NumberedWeakReference",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/WeakReference<Ljava/lang/Integer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ReferenceEnqueuePending"
	};
	$loadClass(ReferenceEnqueuePending$NumberedWeakReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceEnqueuePending$NumberedWeakReference);
	});
	return class$;
}

$Class* ReferenceEnqueuePending$NumberedWeakReference::class$ = nullptr;