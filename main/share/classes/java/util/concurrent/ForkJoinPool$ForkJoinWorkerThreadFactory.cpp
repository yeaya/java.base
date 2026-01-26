#include <java/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory.h>

#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinWorkerThread.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinWorkerThread = ::java::util::concurrent::ForkJoinWorkerThread;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ForkJoinPool$ForkJoinWorkerThreadFactory_MethodInfo_[] = {
	{"newThread", "(Ljava/util/concurrent/ForkJoinPool;)Ljava/util/concurrent/ForkJoinWorkerThread;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ForkJoinPool$ForkJoinWorkerThreadFactory, newThread, $ForkJoinWorkerThread*, $ForkJoinPool*)},
	{}
};

$InnerClassInfo _ForkJoinPool$ForkJoinWorkerThreadFactory_InnerClassesInfo_[] = {
	{"java.util.concurrent.ForkJoinPool$ForkJoinWorkerThreadFactory", "java.util.concurrent.ForkJoinPool", "ForkJoinWorkerThreadFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ForkJoinPool$ForkJoinWorkerThreadFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.ForkJoinPool$ForkJoinWorkerThreadFactory",
	nullptr,
	nullptr,
	nullptr,
	_ForkJoinPool$ForkJoinWorkerThreadFactory_MethodInfo_,
	nullptr,
	nullptr,
	_ForkJoinPool$ForkJoinWorkerThreadFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ForkJoinPool"
};

$Object* allocate$ForkJoinPool$ForkJoinWorkerThreadFactory($Class* clazz) {
	return $of($alloc(ForkJoinPool$ForkJoinWorkerThreadFactory));
}

$Class* ForkJoinPool$ForkJoinWorkerThreadFactory::load$($String* name, bool initialize) {
	$loadClass(ForkJoinPool$ForkJoinWorkerThreadFactory, name, initialize, &_ForkJoinPool$ForkJoinWorkerThreadFactory_ClassInfo_, allocate$ForkJoinPool$ForkJoinWorkerThreadFactory);
	return class$;
}

$Class* ForkJoinPool$ForkJoinWorkerThreadFactory::class$ = nullptr;

		} // concurrent
	} // util
} // java