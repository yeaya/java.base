#include <java/nio/channels/AsynchronousChannelGroup.h>

#include <java/nio/channels/spi/AsynchronousChannelProvider.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousChannelProvider = ::java::nio::channels::spi::AsynchronousChannelProvider;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _AsynchronousChannelGroup_FieldInfo_[] = {
	{"provider", "Ljava/nio/channels/spi/AsynchronousChannelProvider;", nullptr, $PRIVATE | $FINAL, $field(AsynchronousChannelGroup, provider$)},
	{}
};

$MethodInfo _AsynchronousChannelGroup_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/spi/AsynchronousChannelProvider;)V", nullptr, $PROTECTED, $method(static_cast<void(AsynchronousChannelGroup::*)($AsynchronousChannelProvider*)>(&AsynchronousChannelGroup::init$))},
	{"awaitTermination", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{"isShutdown", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isTerminated", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"provider", "()Ljava/nio/channels/spi/AsynchronousChannelProvider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$AsynchronousChannelProvider*(AsynchronousChannelGroup::*)()>(&AsynchronousChannelGroup::provider))},
	{"shutdown", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"shutdownNow", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"withCachedThreadPool", "(Ljava/util/concurrent/ExecutorService;I)Ljava/nio/channels/AsynchronousChannelGroup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AsynchronousChannelGroup*(*)($ExecutorService*,int32_t)>(&AsynchronousChannelGroup::withCachedThreadPool)), "java.io.IOException"},
	{"withFixedThreadPool", "(ILjava/util/concurrent/ThreadFactory;)Ljava/nio/channels/AsynchronousChannelGroup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AsynchronousChannelGroup*(*)(int32_t,$ThreadFactory*)>(&AsynchronousChannelGroup::withFixedThreadPool)), "java.io.IOException"},
	{"withThreadPool", "(Ljava/util/concurrent/ExecutorService;)Ljava/nio/channels/AsynchronousChannelGroup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AsynchronousChannelGroup*(*)($ExecutorService*)>(&AsynchronousChannelGroup::withThreadPool)), "java.io.IOException"},
	{}
};

$ClassInfo _AsynchronousChannelGroup_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.AsynchronousChannelGroup",
	"java.lang.Object",
	nullptr,
	_AsynchronousChannelGroup_FieldInfo_,
	_AsynchronousChannelGroup_MethodInfo_
};

$Object* allocate$AsynchronousChannelGroup($Class* clazz) {
	return $of($alloc(AsynchronousChannelGroup));
}

void AsynchronousChannelGroup::init$($AsynchronousChannelProvider* provider) {
	$set(this, provider$, provider);
}

$AsynchronousChannelProvider* AsynchronousChannelGroup::provider() {
	return this->provider$;
}

AsynchronousChannelGroup* AsynchronousChannelGroup::withFixedThreadPool(int32_t nThreads, $ThreadFactory* threadFactory) {
	return $nc($($AsynchronousChannelProvider::provider()))->openAsynchronousChannelGroup(nThreads, threadFactory);
}

AsynchronousChannelGroup* AsynchronousChannelGroup::withCachedThreadPool($ExecutorService* executor, int32_t initialSize) {
	return $nc($($AsynchronousChannelProvider::provider()))->openAsynchronousChannelGroup(executor, initialSize);
}

AsynchronousChannelGroup* AsynchronousChannelGroup::withThreadPool($ExecutorService* executor) {
	return $nc($($AsynchronousChannelProvider::provider()))->openAsynchronousChannelGroup(executor, 0);
}

AsynchronousChannelGroup::AsynchronousChannelGroup() {
}

$Class* AsynchronousChannelGroup::load$($String* name, bool initialize) {
	$loadClass(AsynchronousChannelGroup, name, initialize, &_AsynchronousChannelGroup_ClassInfo_, allocate$AsynchronousChannelGroup);
	return class$;
}

$Class* AsynchronousChannelGroup::class$ = nullptr;

		} // channels
	} // nio
} // java