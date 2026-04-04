#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/concurrent/Flow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$Class* Flow$Subscription::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"cancel", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Flow$Subscription, cancel, void)},
		{"request", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Flow$Subscription, request, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.concurrent.Flow$Subscription",
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
		"java.util.concurrent.Flow"
	};
	$loadClass(Flow$Subscription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Flow$Subscription);
	});
	return class$;
}

$Class* Flow$Subscription::class$ = nullptr;

		} // concurrent
	} // util
} // java