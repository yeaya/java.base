#include <java/util/concurrent/CyclicBarrier$Generation.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

void CyclicBarrier$Generation::init$() {
}

CyclicBarrier$Generation::CyclicBarrier$Generation() {
}

$Class* CyclicBarrier$Generation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"broken", "Z", nullptr, 0, $field(CyclicBarrier$Generation, broken)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CyclicBarrier$Generation, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CyclicBarrier$Generation", "java.util.concurrent.CyclicBarrier", "Generation", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.CyclicBarrier$Generation",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CyclicBarrier"
	};
	$loadClass(CyclicBarrier$Generation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CyclicBarrier$Generation);
	});
	return class$;
}

$Class* CyclicBarrier$Generation::class$ = nullptr;

		} // concurrent
	} // util
} // java