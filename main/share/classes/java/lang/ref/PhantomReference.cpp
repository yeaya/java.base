#include <java/lang/ref/PhantomReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace java {
	namespace lang {
		namespace ref {

$Object* PhantomReference::get() {
	return nullptr;
}

bool PhantomReference::refersTo0(Object$* referent) {
	return $equals(this->referent, referent);
}

void PhantomReference::init$(Object$* referent, $ReferenceQueue* q) {
	$Reference::init$(referent, q);
}

PhantomReference::PhantomReference() {
}

$Class* PhantomReference::load$($String* name, bool initialize) {
	$CompoundAttribute refersTo0methodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TT;Ljava/lang/ref/ReferenceQueue<-TT;>;)V", $PUBLIC, $method(PhantomReference, init$, void, Object$*, $ReferenceQueue*)},
		{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(PhantomReference, get, $Object*)},
		{"refersTo0", "(Ljava/lang/Object;)Z", nullptr, $FINAL | $NATIVE, $virtualMethod(PhantomReference, refersTo0, bool, Object$*), nullptr, nullptr, refersTo0methodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.ref.PhantomReference",
		"java.lang.ref.Reference",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/ref/Reference<TT;>;"
	};
	$loadClass(PhantomReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PhantomReference);
	});
	return class$;
}

$Class* PhantomReference::class$ = nullptr;

		} // ref
	} // lang
} // java