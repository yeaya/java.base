#include <java/util/concurrent/ThreadFactory.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace java {
	namespace util {
		namespace concurrent {

$Class* ThreadFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadFactory, newThread, $Thread*, $Runnable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.concurrent.ThreadFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ThreadFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadFactory);
	});
	return class$;
}

$Class* ThreadFactory::class$ = nullptr;

		} // concurrent
	} // util
} // java