#include <java/lang/ref/WeakReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace java {
	namespace lang {
		namespace ref {

void WeakReference::init$(Object$* referent) {
	$Reference::init$(referent);
}

void WeakReference::init$(Object$* referent, $ReferenceQueue* q) {
	$Reference::init$(referent, q);
}

WeakReference::WeakReference() {
}

$Class* WeakReference::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $method(WeakReference, init$, void, Object$*)},
		{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TT;Ljava/lang/ref/ReferenceQueue<-TT;>;)V", $PUBLIC, $method(WeakReference, init$, void, Object$*, $ReferenceQueue*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.ref.WeakReference",
		"java.lang.ref.Reference",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/ref/Reference<TT;>;"
	};
	$loadClass(WeakReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WeakReference);
	});
	return class$;
}

$Class* WeakReference::class$ = nullptr;

		} // ref
	} // lang
} // java