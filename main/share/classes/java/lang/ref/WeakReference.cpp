#include <java/lang/ref/WeakReference.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#include <java/lang/ObjectManagerInternal.h>
using ::java::lang::ObjectManagerInternal;

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace java {
	namespace lang {
		namespace ref {

$MethodInfo _WeakReference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $method(static_cast<void(WeakReference::*)(Object$*)>(&WeakReference::init$))},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TT;Ljava/lang/ref/ReferenceQueue<-TT;>;)V", $PUBLIC, $method(static_cast<void(WeakReference::*)(Object$*,$ReferenceQueue*)>(&WeakReference::init$))},
	{}
};

$ClassInfo _WeakReference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.ref.WeakReference",
	"java.lang.ref.Reference",
	nullptr,
	nullptr,
	_WeakReference_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ref/Reference<TT;>;"
};

$Object* allocate$WeakReference($Class* clazz) {
	return $of($alloc(WeakReference));
}

void WeakReference::init$(Object$* referent) {
	$Reference::init$(referent);
}

void WeakReference::init$(Object$* referent, $ReferenceQueue* q) {
	$Reference::init$(referent, q);
}

WeakReference::WeakReference() {
	ObjectManagerInternal::setWeakRef(this);
}

$Class* WeakReference::load$($String* name, bool initialize) {
	$loadClass(WeakReference, name, initialize, &_WeakReference_ClassInfo_, allocate$WeakReference);
	return class$;
}

$Class* WeakReference::class$ = nullptr;

		} // ref
	} // lang
} // java