#include <java/lang/ref/ReferenceQueue$Null.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace java {
	namespace lang {
		namespace ref {

void ReferenceQueue$Null::init$() {
	$ReferenceQueue::init$();
}

bool ReferenceQueue$Null::enqueue($Reference* r) {
	return false;
}

ReferenceQueue$Null::ReferenceQueue$Null() {
}

$Class* ReferenceQueue$Null::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ReferenceQueue$Null, init$, void)},
		{"enqueue", "(Ljava/lang/ref/Reference;)Z", "(Ljava/lang/ref/Reference<*>;)Z", 0, $virtualMethod(ReferenceQueue$Null, enqueue, bool, $Reference*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ref.ReferenceQueue$Null", "java.lang.ref.ReferenceQueue", "Null", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ref.ReferenceQueue$Null",
		"java.lang.ref.ReferenceQueue",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ref.ReferenceQueue"
	};
	$loadClass(ReferenceQueue$Null, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceQueue$Null);
	});
	return class$;
}

$Class* ReferenceQueue$Null::class$ = nullptr;

		} // ref
	} // lang
} // java