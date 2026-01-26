#include <Identity.h>

#include <Identity$1.h>
#include <Identity$2.h>
#include <Identity$3.h>
#include <Identity$4.h>
#include <java/lang/ThreadLocal.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousChannelGroup.h>
#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/util/Random.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $Identity$1 = ::Identity$1;
using $Identity$2 = ::Identity$2;
using $Identity$3 = ::Identity$3;
using $Identity$4 = ::Identity$4;
using $AsynchronousChannelGroupArray = $Array<::java::nio::channels::AsynchronousChannelGroup>;
using $AsynchronousSocketChannelArray = $Array<::java::nio::channels::AsynchronousSocketChannel>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Void = ::java::lang::Void;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousChannelGroup = ::java::nio::channels::AsynchronousChannelGroup;
using $AsynchronousServerSocketChannel = ::java::nio::channels::AsynchronousServerSocketChannel;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $Random = ::java::util::Random;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $Future = ::java::util::concurrent::Future;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$FieldInfo _Identity_FieldInfo_[] = {
	{"rand", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(Identity, rand)},
	{"done", "Ljava/util/concurrent/CountDownLatch;", nullptr, $STATIC | $FINAL, $staticField(Identity, done)},
	{"failed", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $STATIC | $FINAL, $staticField(Identity, failed)},
	{"myGroup", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Identity, myGroup)},
	{}
};

$MethodInfo _Identity_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Identity, init$, void)},
	{"createThreadFactory", "(I)Ljava/util/concurrent/ThreadFactory;", nullptr, $STATIC | $FINAL, $staticMethod(Identity, createThreadFactory, $ThreadFactory*, int32_t)},
	{"fail", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Identity, fail, void, $String*)},
	{"getBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $STATIC, $staticMethod(Identity, getBuffer, $ByteBuffer*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Identity, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Identity_InnerClassesInfo_[] = {
	{"Identity$4", nullptr, nullptr, 0},
	{"Identity$3", nullptr, nullptr, 0},
	{"Identity$2", nullptr, nullptr, 0},
	{"Identity$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Identity_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Identity",
	"java.lang.Object",
	nullptr,
	_Identity_FieldInfo_,
	_Identity_MethodInfo_,
	nullptr,
	nullptr,
	_Identity_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Identity$4,Identity$3,Identity$3$1,Identity$2,Identity$2$1,Identity$1"
};

$Object* allocate$Identity($Class* clazz) {
	return $of($alloc(Identity));
}

$Random* Identity::rand = nullptr;
$CountDownLatch* Identity::done = nullptr;
$AtomicBoolean* Identity::failed = nullptr;
$ThreadLocal* Identity::myGroup = nullptr;

void Identity::init$() {
}

void Identity::fail($String* msg) {
	$init(Identity);
	$nc(Identity::failed)->set(true);
	$nc(Identity::done)->countDown();
	$throwNew($RuntimeException, msg);
}

$ThreadFactory* Identity::createThreadFactory(int32_t groupId) {
	$init(Identity);
	return $new($Identity$2, groupId);
}

void Identity::main($StringArray* args) {
	$init(Identity);
	$useLocalCurrentObjectStackCache();
	int32_t groupCount = 3 + $nc(Identity::rand)->nextInt(8);
	$var($AsynchronousChannelGroupArray, groups, $new($AsynchronousChannelGroupArray, groupCount));
	$var($AsynchronousSocketChannelArray, channels, $new($AsynchronousSocketChannelArray, groupCount));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($AsynchronousServerSocketChannel, listener, $AsynchronousServerSocketChannel::open());
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						$nc(listener)->bind($$new($InetSocketAddress, 0));
						listener->accept(($Void*)nullptr, $$new($Identity$3, listener));
						int32_t port = $nc((($cast($InetSocketAddress, $(listener->getLocalAddress())))))->getPort();
						$var($SocketAddress, sa, $new($InetSocketAddress, $($InetAddress::getLocalHost()), port));
						for (int32_t i = 0; i < groupCount; ++i) {
							$var($ThreadFactory, factory, createThreadFactory(i));
							$var($AsynchronousChannelGroup, group, nullptr);
							if ($nc(Identity::rand)->nextBoolean()) {
								int32_t nThreads = 1 + $nc(Identity::rand)->nextInt(10);
								$assign(group, $AsynchronousChannelGroup::withFixedThreadPool(nThreads, factory));
							} else {
								$var($ExecutorService, pool, $Executors::newCachedThreadPool(factory));
								$assign(group, $AsynchronousChannelGroup::withCachedThreadPool(pool, $nc(Identity::rand)->nextInt(5)));
							}
							groups->set(i, group);
							$var($AsynchronousSocketChannel, ch, $AsynchronousSocketChannel::open(group));
							$nc($($nc(ch)->connect(sa)))->get();
							channels->set(i, ch);
						}
						$var($AtomicInteger, writeCount, $new($AtomicInteger, 100));
						$var($ByteBuffer, var$2, getBuffer());
						$var($Object, var$3, $of($Integer::valueOf(0)));
						$nc(channels->get(0))->write(var$2, var$3, $$new($Identity$4, writeCount, groupCount, channels));
						$nc(Identity::done)->await();
					} catch ($Throwable& t$) {
						if (listener != nullptr) {
							try {
								listener->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$4) {
					$assign(var$1, var$4);
				} /*finally*/ {
					if (listener != nullptr) {
						listener->close();
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			{
				$var($AsynchronousSocketChannelArray, arr$, channels);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($AsynchronousSocketChannel, ch, arr$->get(i$));
					$nc(ch)->close();
				}
			}
			{
				$var($AsynchronousChannelGroupArray, arr$, groups);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($AsynchronousChannelGroup, group, arr$->get(i$));
					$nc(group)->shutdownNow();
				}
			}
			if ($nc(Identity::failed)->get()) {
				$throwNew($RuntimeException, "Test failed - see log for details"_s);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$ByteBuffer* Identity::getBuffer() {
	$init(Identity);
	$var($ByteBuffer, buf, nullptr);
	if ($nc(Identity::rand)->nextBoolean()) {
		$assign(buf, $ByteBuffer::allocateDirect(1));
	} else {
		$assign(buf, $ByteBuffer::allocate(1));
	}
	$nc(buf)->put((int8_t)0);
	buf->flip();
	return buf;
}

void clinit$Identity($Class* class$) {
	$assignStatic(Identity::rand, $new($Random));
	$assignStatic(Identity::done, $new($CountDownLatch, 1));
	$assignStatic(Identity::failed, $new($AtomicBoolean, false));
	$assignStatic(Identity::myGroup, $new($Identity$1));
}

Identity::Identity() {
}

$Class* Identity::load$($String* name, bool initialize) {
	$loadClass(Identity, name, initialize, &_Identity_ClassInfo_, clinit$Identity, allocate$Identity);
	return class$;
}

$Class* Identity::class$ = nullptr;