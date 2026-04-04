#include <java/lang/ref/FinalReference.h>
#include <java/lang/InternalError.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace java {
	namespace lang {
		namespace ref {

void FinalReference::init$(Object$* referent, $ReferenceQueue* q) {
	$Reference::init$(referent, q);
}

$Object* FinalReference::get() {
	return getFromInactiveFinalReference();
}

void FinalReference::clear() {
	clearInactiveFinalReference();
}

bool FinalReference::enqueue() {
	$throwNew($InternalError, "should never reach here"_s);
	$shouldNotReachHere();
}

FinalReference::FinalReference() {
}

$Class* FinalReference::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TT;Ljava/lang/ref/ReferenceQueue<-TT;>;)V", $PUBLIC, $method(FinalReference, init$, void, Object$*, $ReferenceQueue*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(FinalReference, clear, void)},
		{"enqueue", "()Z", nullptr, $PUBLIC, $virtualMethod(FinalReference, enqueue, bool)},
		{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(FinalReference, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ref.FinalReference",
		"java.lang.ref.Reference",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/ref/Reference<TT;>;"
	};
	$loadClass(FinalReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalReference);
	});
	return class$;
}

$Class* FinalReference::class$ = nullptr;

		} // ref
	} // lang
} // java