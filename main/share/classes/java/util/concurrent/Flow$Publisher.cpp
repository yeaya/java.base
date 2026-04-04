#include <java/util/concurrent/Flow$Publisher.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/concurrent/Flow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;

namespace java {
	namespace util {
		namespace concurrent {

$Class* Flow$Publisher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-TT;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Flow$Publisher, subscribe, void, $Flow$Subscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.concurrent.Flow$Publisher",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"java.util.concurrent.Flow"
	};
	$loadClass(Flow$Publisher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Flow$Publisher);
	});
	return class$;
}

$Class* Flow$Publisher::class$ = nullptr;

		} // concurrent
	} // util
} // java