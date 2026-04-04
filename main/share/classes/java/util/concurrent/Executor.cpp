#include <java/util/concurrent/Executor.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace java {
	namespace util {
		namespace concurrent {

$Class* Executor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Executor, execute, void, $Runnable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.concurrent.Executor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Executor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Executor);
	});
	return class$;
}

$Class* Executor::class$ = nullptr;

		} // concurrent
	} // util
} // java