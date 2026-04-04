#include <java/util/concurrent/ForkJoinPool$1.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;

namespace java {
	namespace util {
		namespace concurrent {

void ForkJoinPool$1::init$() {
}

$Object* ForkJoinPool$1::run() {
	return $new($ForkJoinPool, (int8_t)0);
}

ForkJoinPool$1::ForkJoinPool$1() {
}

$Class* ForkJoinPool$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ForkJoinPool$1, init$, void)},
		{"run", "()Ljava/util/concurrent/ForkJoinPool;", nullptr, $PUBLIC, $virtualMethod(ForkJoinPool$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.concurrent.ForkJoinPool",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ForkJoinPool$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.ForkJoinPool$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/concurrent/ForkJoinPool;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ForkJoinPool"
	};
	$loadClass(ForkJoinPool$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ForkJoinPool$1);
	});
	return class$;
}

$Class* ForkJoinPool$1::class$ = nullptr;

		} // concurrent
	} // util
} // java