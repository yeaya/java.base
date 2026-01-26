#include <java/util/concurrent/Flow$Subscriber.h>

#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/concurrent/Flow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _Flow$Subscriber_MethodInfo_[] = {
	{"onComplete", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Flow$Subscriber, onComplete, void)},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Flow$Subscriber, onError, void, $Throwable*)},
	{"onNext", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Flow$Subscriber, onNext, void, Object$*)},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Flow$Subscriber, onSubscribe, void, $Flow$Subscription*)},
	{}
};

$InnerClassInfo _Flow$Subscriber_InnerClassesInfo_[] = {
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Flow$Subscriber_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.Flow$Subscriber",
	nullptr,
	nullptr,
	nullptr,
	_Flow$Subscriber_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Flow$Subscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Flow"
};

$Object* allocate$Flow$Subscriber($Class* clazz) {
	return $of($alloc(Flow$Subscriber));
}

$Class* Flow$Subscriber::load$($String* name, bool initialize) {
	$loadClass(Flow$Subscriber, name, initialize, &_Flow$Subscriber_ClassInfo_, allocate$Flow$Subscriber);
	return class$;
}

$Class* Flow$Subscriber::class$ = nullptr;

		} // concurrent
	} // util
} // java