#include <java/lang/ref/FinalReference.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InternalError.h>
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
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace java {
	namespace lang {
		namespace ref {

$MethodInfo _FinalReference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TT;Ljava/lang/ref/ReferenceQueue<-TT;>;)V", $PUBLIC, $method(static_cast<void(FinalReference::*)(Object$*,$ReferenceQueue*)>(&FinalReference::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"enqueue", "()Z", nullptr, $PUBLIC},
	{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{}
};

$ClassInfo _FinalReference_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ref.FinalReference",
	"java.lang.ref.Reference",
	nullptr,
	nullptr,
	_FinalReference_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ref/Reference<TT;>;"
};

$Object* allocate$FinalReference($Class* clazz) {
	return $of($alloc(FinalReference));
}

void FinalReference::init$(Object$* referent, $ReferenceQueue* q) {
	$Reference::init$(referent, q);
}

$Object* FinalReference::get() {
	return $of(getFromInactiveFinalReference());
}

void FinalReference::clear() {
	clearInactiveFinalReference();
}

bool FinalReference::enqueue() {
	$throwNew($InternalError, "should never reach here"_s);
	$shouldNotReachHere();
}

FinalReference::FinalReference() {
	ObjectManagerInternal::setFinalRef(this);
}

$Class* FinalReference::load$($String* name, bool initialize) {
	$loadClass(FinalReference, name, initialize, &_FinalReference_ClassInfo_, allocate$FinalReference);
	return class$;
}

$Class* FinalReference::class$ = nullptr;

		} // ref
	} // lang
} // java