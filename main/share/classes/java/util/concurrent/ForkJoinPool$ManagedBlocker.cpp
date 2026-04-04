#include <java/util/concurrent/ForkJoinPool$ManagedBlocker.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$Class* ForkJoinPool$ManagedBlocker::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"block", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ForkJoinPool$ManagedBlocker, block, bool), "java.lang.InterruptedException"},
		{"isReleasable", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ForkJoinPool$ManagedBlocker, isReleasable, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ForkJoinPool$ManagedBlocker", "java.util.concurrent.ForkJoinPool", "ManagedBlocker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.concurrent.ForkJoinPool$ManagedBlocker",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ForkJoinPool"
	};
	$loadClass(ForkJoinPool$ManagedBlocker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ForkJoinPool$ManagedBlocker);
	});
	return class$;
}

$Class* ForkJoinPool$ManagedBlocker::class$ = nullptr;

		} // concurrent
	} // util
} // java