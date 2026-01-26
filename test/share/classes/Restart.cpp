#include <Restart.h>

#include <Restart$1.h>
#include <Restart$2.h>
#include <Restart$3.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/lang/ThreadGroup.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
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
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $Restart$1 = ::Restart$1;
using $Restart$2 = ::Restart$2;
using $Restart$3 = ::Restart$3;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
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
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$FieldInfo _Restart_FieldInfo_[] = {
	{"rand", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(Restart, rand)},
	{}
};

$MethodInfo _Restart_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Restart, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Restart, main, void, $StringArray*), "java.lang.Exception"},
	{"testRestart", "(Ljava/nio/channels/AsynchronousChannelGroup;I)V", nullptr, $STATIC, $staticMethod(Restart, testRestart, void, $AsynchronousChannelGroup*, int32_t), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Restart_InnerClassesInfo_[] = {
	{"Restart$3", nullptr, nullptr, 0},
	{"Restart$2", nullptr, nullptr, 0},
	{"Restart$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Restart_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Restart",
	"java.lang.Object",
	nullptr,
	_Restart_FieldInfo_,
	_Restart_MethodInfo_,
	nullptr,
	nullptr,
	_Restart_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Restart$3,Restart$2,Restart$1"
};

$Object* allocate$Restart($Class* clazz) {
	return $of($alloc(Restart));
}

$Random* Restart::rand = nullptr;

void Restart::init$() {
}

void Restart::main($StringArray* args) {
	$init(Restart);
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, tg, $new($ThreadGroup, "test"_s));
	$var($AtomicInteger, exceptionCount, $new($AtomicInteger, 0));
	$var($Thread$UncaughtExceptionHandler, ueh, $new($Restart$1, exceptionCount));
	$var($ThreadFactory, factory, $new($Restart$2, tg, ueh));
	int32_t nThreads = 1 + $nc(Restart::rand)->nextInt(4);
	$var($AsynchronousChannelGroup, group, $AsynchronousChannelGroup::withFixedThreadPool(nThreads, factory));
	{
		$var($Throwable, var$0, nullptr);
		try {
			testRestart(group, 100);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(group)->shutdown();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$var($ExecutorService, pool, $Executors::newCachedThreadPool(factory));
	$assign(group, $AsynchronousChannelGroup::withCachedThreadPool(pool, $nc(Restart::rand)->nextInt(5)));
	{
		$var($Throwable, var$2, nullptr);
		try {
			testRestart(group, 100);
		} catch ($Throwable& var$3) {
			$assign(var$2, var$3);
		} /*finally*/ {
			group->shutdown();
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
	$assign(group, $AsynchronousChannelGroup::withThreadPool($($Executors::newFixedThreadPool(1 + $nc(Restart::rand)->nextInt(5), factory))));
	{
		$var($Throwable, var$4, nullptr);
		try {
			testRestart(group, 100);
		} catch ($Throwable& var$5) {
			$assign(var$4, var$5);
		} /*finally*/ {
			group->shutdown();
		}
		if (var$4 != nullptr) {
			$throw(var$4);
		}
	}
	$Thread::sleep(3000);
	int32_t actual = exceptionCount->get();
	if (actual != 300) {
		$throwNew($RuntimeException, $$str({$$str(actual), " exceptions, expected: "_s, $$str(300)}));
	}
}

void Restart::testRestart($AsynchronousChannelGroup* group, int32_t count) {
	$init(Restart);
	$useLocalCurrentObjectStackCache();
	{
		$var($AsynchronousServerSocketChannel, listener, $AsynchronousServerSocketChannel::open(group));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(listener)->bind($$new($InetSocketAddress, 0));
					for (int32_t i = 0; i < count; ++i) {
						$var($CountDownLatch, latch, $new($CountDownLatch, 1));
						listener->accept(($Void*)nullptr, $$new($Restart$3, latch));
						int32_t port = $nc((($cast($InetSocketAddress, $(listener->getLocalAddress())))))->getPort();
						{
							$var($AsynchronousSocketChannel, ch, $AsynchronousSocketChannel::open());
							{
								$var($Throwable, var$1, nullptr);
								try {
									try {
										$var($InetAddress, lh, $InetAddress::getLocalHost());
										$nc($($nc(ch)->connect($$new($InetSocketAddress, lh, port))))->get();
									} catch ($Throwable& t$) {
										if (ch != nullptr) {
											try {
												ch->close();
											} catch ($Throwable& x2) {
												t$->addSuppressed(x2);
											}
										}
										$throw(t$);
									}
								} catch ($Throwable& var$2) {
									$assign(var$1, var$2);
								} /*finally*/ {
									if (ch != nullptr) {
										ch->close();
									}
								}
								if (var$1 != nullptr) {
									$throw(var$1);
								}
							}
						}
						latch->await();
					}
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
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				if (listener != nullptr) {
					listener->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void clinit$Restart($Class* class$) {
	$assignStatic(Restart::rand, $new($Random));
}

Restart::Restart() {
}

$Class* Restart::load$($String* name, bool initialize) {
	$loadClass(Restart, name, initialize, &_Restart_ClassInfo_, clinit$Restart, allocate$Restart);
	return class$;
}

$Class* Restart::class$ = nullptr;