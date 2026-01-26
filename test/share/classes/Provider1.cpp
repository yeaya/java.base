#include <Provider1.h>

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

$MethodInfo _Provider1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Provider1, init$, void)},
	{"openAsynchronousChannelGroup", "(ILjava/util/concurrent/ThreadFactory;)Ljava/nio/channels/AsynchronousChannelGroup;", nullptr, $PUBLIC, $virtualMethod(Provider1, openAsynchronousChannelGroup, $AsynchronousChannelGroup*, int32_t, $ThreadFactory*), "java.io.IOException"},
	{"openAsynchronousChannelGroup", "(Ljava/util/concurrent/ExecutorService;I)Ljava/nio/channels/AsynchronousChannelGroup;", nullptr, $PUBLIC, $virtualMethod(Provider1, openAsynchronousChannelGroup, $AsynchronousChannelGroup*, $ExecutorService*, int32_t), "java.io.IOException"},
	{"openAsynchronousServerSocketChannel", "(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousServerSocketChannel;", nullptr, $PUBLIC, $virtualMethod(Provider1, openAsynchronousServerSocketChannel, $AsynchronousServerSocketChannel*, $AsynchronousChannelGroup*), "java.io.IOException"},
	{"openAsynchronousSocketChannel", "(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousSocketChannel;", nullptr, $PUBLIC, $virtualMethod(Provider1, openAsynchronousSocketChannel, $AsynchronousSocketChannel*, $AsynchronousChannelGroup*), "java.io.IOException"},
	{}
};

$ClassInfo _Provider1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Provider1",
	"java.nio.channels.spi.AsynchronousChannelProvider",
	nullptr,
	nullptr,
	_Provider1_MethodInfo_
};

$Object* allocate$Provider1($Class* clazz) {
	return $of($alloc(Provider1));
}

void Provider1::init$() {
	$AsynchronousChannelProvider::init$();
}

$AsynchronousChannelGroup* Provider1::openAsynchronousChannelGroup(int32_t nThreads, $ThreadFactory* factorry) {
	$throwNew($RuntimeException);
	$shouldNotReachHere();
}

$AsynchronousChannelGroup* Provider1::openAsynchronousChannelGroup($ExecutorService* executor, int32_t initialSize) {
	$throwNew($RuntimeException);
	$shouldNotReachHere();
}

$AsynchronousSocketChannel* Provider1::openAsynchronousSocketChannel($AsynchronousChannelGroup* group) {
	$throwNew($RuntimeException);
	$shouldNotReachHere();
}

$AsynchronousServerSocketChannel* Provider1::openAsynchronousServerSocketChannel($AsynchronousChannelGroup* group) {
	$throwNew($RuntimeException);
	$shouldNotReachHere();
}

Provider1::Provider1() {
}

$Class* Provider1::load$($String* name, bool initialize) {
	$loadClass(Provider1, name, initialize, &_Provider1_ClassInfo_, allocate$Provider1);
	return class$;
}

$Class* Provider1::class$ = nullptr;