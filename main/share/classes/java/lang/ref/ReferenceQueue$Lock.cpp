#include <java/lang/ref/ReferenceQueue$Lock.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace ref {

void ReferenceQueue$Lock::init$() {
}

ReferenceQueue$Lock::ReferenceQueue$Lock() {
}

$Class* ReferenceQueue$Lock::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ReferenceQueue$Lock, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ref.ReferenceQueue$Lock", "java.lang.ref.ReferenceQueue", "Lock", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ref.ReferenceQueue$Lock",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ref.ReferenceQueue"
	};
	$loadClass(ReferenceQueue$Lock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceQueue$Lock);
	});
	return class$;
}

$Class* ReferenceQueue$Lock::class$ = nullptr;

		} // ref
	} // lang
} // java