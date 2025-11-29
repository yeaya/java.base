#include <java/util/concurrent/ThreadFactory.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ThreadFactory_MethodInfo_[] = {
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ThreadFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.ThreadFactory",
	nullptr,
	nullptr,
	nullptr,
	_ThreadFactory_MethodInfo_
};

$Object* allocate$ThreadFactory($Class* clazz) {
	return $of($alloc(ThreadFactory));
}

$Class* ThreadFactory::load$($String* name, bool initialize) {
	$loadClass(ThreadFactory, name, initialize, &_ThreadFactory_ClassInfo_, allocate$ThreadFactory);
	return class$;
}

$Class* ThreadFactory::class$ = nullptr;

		} // concurrent
	} // util
} // java