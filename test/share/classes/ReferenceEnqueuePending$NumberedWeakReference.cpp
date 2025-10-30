#include <ReferenceEnqueuePending$NumberedWeakReference.h>

#include <ReferenceEnqueuePending.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $ReferenceEnqueuePending = ::ReferenceEnqueuePending;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

$FieldInfo _ReferenceEnqueuePending$NumberedWeakReference_FieldInfo_[] = {
	{"number", "I", nullptr, 0, $field(ReferenceEnqueuePending$NumberedWeakReference, number)},
	{}
};

$MethodInfo _ReferenceEnqueuePending$NumberedWeakReference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Integer;Ljava/lang/ref/ReferenceQueue;I)V", "(Ljava/lang/Integer;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Integer;>;I)V", 0, $method(static_cast<void(ReferenceEnqueuePending$NumberedWeakReference::*)($Integer*,$ReferenceQueue*,int32_t)>(&ReferenceEnqueuePending$NumberedWeakReference::init$))},
	{}
};

$InnerClassInfo _ReferenceEnqueuePending$NumberedWeakReference_InnerClassesInfo_[] = {
	{"ReferenceEnqueuePending$NumberedWeakReference", "ReferenceEnqueuePending", "NumberedWeakReference", $STATIC},
	{}
};

$ClassInfo _ReferenceEnqueuePending$NumberedWeakReference_ClassInfo_ = {
	$ACC_SUPER,
	"ReferenceEnqueuePending$NumberedWeakReference",
	"java.lang.ref.WeakReference",
	nullptr,
	_ReferenceEnqueuePending$NumberedWeakReference_FieldInfo_,
	_ReferenceEnqueuePending$NumberedWeakReference_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Ljava/lang/Integer;>;",
	nullptr,
	_ReferenceEnqueuePending$NumberedWeakReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ReferenceEnqueuePending"
};

$Object* allocate$ReferenceEnqueuePending$NumberedWeakReference($Class* clazz) {
	return $of($alloc(ReferenceEnqueuePending$NumberedWeakReference));
}

void ReferenceEnqueuePending$NumberedWeakReference::init$($Integer* referent, $ReferenceQueue* q, int32_t i) {
	$WeakReference::init$(referent, q);
	this->number = i;
}

ReferenceEnqueuePending$NumberedWeakReference::ReferenceEnqueuePending$NumberedWeakReference() {
}

$Class* ReferenceEnqueuePending$NumberedWeakReference::load$($String* name, bool initialize) {
	$loadClass(ReferenceEnqueuePending$NumberedWeakReference, name, initialize, &_ReferenceEnqueuePending$NumberedWeakReference_ClassInfo_, allocate$ReferenceEnqueuePending$NumberedWeakReference);
	return class$;
}

$Class* ReferenceEnqueuePending$NumberedWeakReference::class$ = nullptr;