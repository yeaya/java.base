#include <java/util/concurrent/Flow$Subscription.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Flow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow = ::java::util::concurrent::Flow;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _Flow$Subscription_MethodInfo_[] = {
	{"cancel", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"request", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Flow$Subscription_InnerClassesInfo_[] = {
	{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Flow$Subscription_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.Flow$Subscription",
	nullptr,
	nullptr,
	nullptr,
	_Flow$Subscription_MethodInfo_,
	nullptr,
	nullptr,
	_Flow$Subscription_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Flow"
};

$Object* allocate$Flow$Subscription($Class* clazz) {
	return $of($alloc(Flow$Subscription));
}

$Class* Flow$Subscription::load$($String* name, bool initialize) {
	$loadClass(Flow$Subscription, name, initialize, &_Flow$Subscription_ClassInfo_, allocate$Flow$Subscription);
	return class$;
}

$Class* Flow$Subscription::class$ = nullptr;

		} // concurrent
	} // util
} // java