#include <java/util/concurrent/ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1.h>
#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;

namespace java {
	namespace util {
		namespace concurrent {

void ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1::init$() {
}

$Object* ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1::run() {
	$useLocalObjectStack();
	$var($ThreadGroup, group, $($Thread::currentThread())->getThreadGroup());
	{
		$var($ThreadGroup, p, nullptr);
		for (; ($assign(p, $nc(group)->getParent())) != nullptr;) {
			$assign(group, p);
		}
	}
	return $new($ThreadGroup, group, "InnocuousForkJoinWorkerThreadGroup"_s);
}

ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1::ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1() {
}

$Class* ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1, init$, void)},
		{"run", "()Ljava/lang/ThreadGroup;", nullptr, $PUBLIC, $virtualMethod(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.concurrent.ForkJoinWorkerThread$InnocuousForkJoinWorkerThread",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ForkJoinWorkerThread$InnocuousForkJoinWorkerThread", "java.util.concurrent.ForkJoinWorkerThread", "InnocuousForkJoinWorkerThread", $STATIC | $FINAL},
		{"java.util.concurrent.ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ThreadGroup;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ForkJoinWorkerThread"
	};
	$loadClass(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1);
	});
	return class$;
}

$Class* ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1::class$ = nullptr;

		} // concurrent
	} // util
} // java