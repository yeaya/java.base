#include <Provider2.h>

#include <java/nio/channels/AsynchronousChannelGroup.h>
#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/nio/channels/spi/AsynchronousChannelProvider.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AsynchronousChannelGroup = ::java::nio::channels::AsynchronousChannelGroup;
using $AsynchronousServerSocketChannel = ::java::nio::channels::AsynchronousServerSocketChannel;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $AsynchronousChannelProvider = ::java::nio::channels::spi::AsynchronousChannelProvider;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;

$MethodInfo _Provider2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Provider2, init$, void)},
	{"openAsynchronousChannelGroup", "(ILjava/util/concurrent/ThreadFactory;)Ljava/nio/channels/AsynchronousChannelGroup;", nullptr, $PUBLIC, $virtualMethod(Provider2, openAsynchronousChannelGroup, $AsynchronousChannelGroup*, int32_t, $ThreadFactory*), "java.io.IOException"},
	{"openAsynchronousChannelGroup", "(Ljava/util/concurrent/ExecutorService;I)Ljava/nio/channels/AsynchronousChannelGroup;", nullptr, $PUBLIC, $virtualMethod(Provider2, openAsynchronousChannelGroup, $AsynchronousChannelGroup*, $ExecutorService*, int32_t), "java.io.IOException"},
	{"openAsynchronousServerSocketChannel", "(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousServerSocketChannel;", nullptr, $PUBLIC, $virtualMethod(Provider2, openAsynchronousServerSocketChannel, $AsynchronousServerSocketChannel*, $AsynchronousChannelGroup*), "java.io.IOException"},
	{"openAsynchronousSocketChannel", "(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousSocketChannel;", nullptr, $PUBLIC, $virtualMethod(Provider2, openAsynchronousSocketChannel, $AsynchronousSocketChannel*, $AsynchronousChannelGroup*), "java.io.IOException"},
	{}
};

$ClassInfo _Provider2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Provider2",
	"java.nio.channels.spi.AsynchronousChannelProvider",
	nullptr,
	nullptr,
	_Provider2_MethodInfo_
};

$Object* allocate$Provider2($Class* clazz) {
	return $of($alloc(Provider2));
}

void Provider2::init$() {
	$AsynchronousChannelProvider::init$();
}

$AsynchronousChannelGroup* Provider2::openAsynchronousChannelGroup(int32_t nThreads, $ThreadFactory* threadFactory) {
	$throwNew($RuntimeException);
	$shouldNotReachHere();
}

$AsynchronousChannelGroup* Provider2::openAsynchronousChannelGroup($ExecutorService* executor, int32_t initialSize) {
	$throwNew($RuntimeException);
	$shouldNotReachHere();
}

$AsynchronousSocketChannel* Provider2::openAsynchronousSocketChannel($AsynchronousChannelGroup* group) {
	$throwNew($RuntimeException);
	$shouldNotReachHere();
}

$AsynchronousServerSocketChannel* Provider2::openAsynchronousServerSocketChannel($AsynchronousChannelGroup* group) {
	$throwNew($RuntimeException);
	$shouldNotReachHere();
}

Provider2::Provider2() {
}

$Class* Provider2::load$($String* name, bool initialize) {
	$loadClass(Provider2, name, initialize, &_Provider2_ClassInfo_, allocate$Provider2);
	return class$;
}

$Class* Provider2::class$ = nullptr;