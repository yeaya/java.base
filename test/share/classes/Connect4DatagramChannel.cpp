#include <Connect4DatagramChannel.h>

#include <Connect4DatagramChannel$Initiator.h>
#include <Connect4DatagramChannel$Responder.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Connect4DatagramChannel$Initiator = ::Connect4DatagramChannel$Initiator;
using $Connect4DatagramChannel$Responder = ::Connect4DatagramChannel$Responder;
using $CompletableFutureArray = $Array<::java::util::concurrent::CompletableFuture>;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $Executor = ::java::util::concurrent::Executor;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Stream = ::java::util::stream::Stream;

class Connect4DatagramChannel$$Lambda$lambda$wait$1 : public $Consumer {
	$class(Connect4DatagramChannel$$Lambda$lambda$wait$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($CompletableFuture* future) {
		$set(this, future, future);
	}
	virtual void accept(Object$* f) override {
		Connect4DatagramChannel::lambda$wait$1(future, $cast($CompletableFuture, f));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Connect4DatagramChannel$$Lambda$lambda$wait$1>());
	}
	$CompletableFuture* future = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Connect4DatagramChannel$$Lambda$lambda$wait$1::fieldInfos[2] = {
	{"future", "Ljava/util/concurrent/CompletableFuture;", nullptr, $PUBLIC, $field(Connect4DatagramChannel$$Lambda$lambda$wait$1, future)},
	{}
};
$MethodInfo Connect4DatagramChannel$$Lambda$lambda$wait$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/CompletableFuture;)V", nullptr, $PUBLIC, $method(Connect4DatagramChannel$$Lambda$lambda$wait$1, init$, void, $CompletableFuture*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Connect4DatagramChannel$$Lambda$lambda$wait$1, accept, void, Object$*)},
	{}
};
$ClassInfo Connect4DatagramChannel$$Lambda$lambda$wait$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"Connect4DatagramChannel$$Lambda$lambda$wait$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Connect4DatagramChannel$$Lambda$lambda$wait$1::load$($String* name, bool initialize) {
	$loadClass(Connect4DatagramChannel$$Lambda$lambda$wait$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Connect4DatagramChannel$$Lambda$lambda$wait$1::class$ = nullptr;

class Connect4DatagramChannel$$Lambda$lambda$wait$0$1 : public $Function {
	$class(Connect4DatagramChannel$$Lambda$lambda$wait$0$1, $NO_CLASS_INIT, $Function)
public:
	void init$($CompletableFuture* future) {
		$set(this, future, future);
	}
	virtual $Object* apply(Object$* ex) override {
		 return Connect4DatagramChannel::lambda$wait$0(future, $cast($Throwable, ex));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Connect4DatagramChannel$$Lambda$lambda$wait$0$1>());
	}
	$CompletableFuture* future = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Connect4DatagramChannel$$Lambda$lambda$wait$0$1::fieldInfos[2] = {
	{"future", "Ljava/util/concurrent/CompletableFuture;", nullptr, $PUBLIC, $field(Connect4DatagramChannel$$Lambda$lambda$wait$0$1, future)},
	{}
};
$MethodInfo Connect4DatagramChannel$$Lambda$lambda$wait$0$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/CompletableFuture;)V", nullptr, $PUBLIC, $method(Connect4DatagramChannel$$Lambda$lambda$wait$0$1, init$, void, $CompletableFuture*)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Connect4DatagramChannel$$Lambda$lambda$wait$0$1, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Connect4DatagramChannel$$Lambda$lambda$wait$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"Connect4DatagramChannel$$Lambda$lambda$wait$0$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Connect4DatagramChannel$$Lambda$lambda$wait$0$1::load$($String* name, bool initialize) {
	$loadClass(Connect4DatagramChannel$$Lambda$lambda$wait$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Connect4DatagramChannel$$Lambda$lambda$wait$0$1::class$ = nullptr;

$FieldInfo _Connect4DatagramChannel_FieldInfo_[] = {
	{"log", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(Connect4DatagramChannel, log)},
	{}
};

$MethodInfo _Connect4DatagramChannel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Connect4DatagramChannel, init$, void)},
	{"invoke", "(Ljava/util/concurrent/ExecutorService;Ljava/lang/Runnable;Ljava/lang/Runnable;)V", nullptr, $STATIC, $staticMethod(Connect4DatagramChannel, invoke, void, $ExecutorService*, $Runnable*, $Runnable*), "java.util.concurrent.CompletionException"},
	{"lambda$wait$0", "(Ljava/util/concurrent/CompletableFuture;Ljava/lang/Throwable;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Connect4DatagramChannel, lambda$wait$0, $Object*, $CompletableFuture*, $Throwable*)},
	{"lambda$wait$1", "(Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Connect4DatagramChannel, lambda$wait$1, void, $CompletableFuture*, $CompletableFuture*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Connect4DatagramChannel, main, void, $StringArray*), "java.lang.Exception"},
	{"test", "()V", nullptr, $STATIC, $staticMethod(Connect4DatagramChannel, test, void), "java.lang.Exception"},
	{"toConnectAddress", "(Ljava/net/SocketAddress;)Ljava/net/SocketAddress;", nullptr, $PRIVATE | $STATIC, $staticMethod(Connect4DatagramChannel, toConnectAddress, $SocketAddress*, $SocketAddress*)},
	{"wait", "([Ljava/util/concurrent/CompletableFuture;)V", "([Ljava/util/concurrent/CompletableFuture<*>;)V", $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(Connect4DatagramChannel, wait, void, $CompletableFutureArray*), "java.util.concurrent.CompletionException"},
	{}
};

$InnerClassInfo _Connect4DatagramChannel_InnerClassesInfo_[] = {
	{"Connect4DatagramChannel$Responder", "Connect4DatagramChannel", "Responder", $PUBLIC | $STATIC},
	{"Connect4DatagramChannel$Initiator", "Connect4DatagramChannel", "Initiator", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Connect4DatagramChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Connect4DatagramChannel",
	"java.lang.Object",
	nullptr,
	_Connect4DatagramChannel_FieldInfo_,
	_Connect4DatagramChannel_MethodInfo_,
	nullptr,
	nullptr,
	_Connect4DatagramChannel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Connect4DatagramChannel$Responder,Connect4DatagramChannel$Initiator"
};

$Object* allocate$Connect4DatagramChannel($Class* clazz) {
	return $of($alloc(Connect4DatagramChannel));
}

$PrintStream* Connect4DatagramChannel::log = nullptr;

void Connect4DatagramChannel::init$() {
}

void Connect4DatagramChannel::main($StringArray* args) {
	$init(Connect4DatagramChannel);
	test();
}

void Connect4DatagramChannel::test() {
	$init(Connect4DatagramChannel);
	$useLocalCurrentObjectStackCache();
	$var($ExecutorService, threadPool, $Executors::newCachedThreadPool());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Connect4DatagramChannel$Responder, r, $new($Connect4DatagramChannel$Responder));
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						$var($Connect4DatagramChannel$Initiator, a, $new($Connect4DatagramChannel$Initiator, $(r->getSocketAddress())));
						{
							$var($Throwable, var$2, nullptr);
							try {
								try {
									invoke(threadPool, a, r);
								} catch ($Throwable& t$) {
									try {
										a->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable& var$3) {
								$assign(var$2, var$3);
							} /*finally*/ {
								a->close();
							}
							if (var$2 != nullptr) {
								$throw(var$2);
							}
						}
					} catch ($Throwable& t$) {
						try {
							r->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$4) {
					$assign(var$1, var$4);
				} /*finally*/ {
					r->close();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$nc(threadPool)->shutdown();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Connect4DatagramChannel::invoke($ExecutorService* e, $Runnable* reader, $Runnable* writer) {
	$init(Connect4DatagramChannel);
	$useLocalCurrentObjectStackCache();
	$var($CompletableFuture, f1, $CompletableFuture::runAsync(writer, e));
	$var($CompletableFuture, f2, $CompletableFuture::runAsync(reader, e));
	wait($$new($CompletableFutureArray, {
		f1,
		f2
	}));
}

void Connect4DatagramChannel::wait($CompletableFutureArray* futures) {
	$init(Connect4DatagramChannel);
	$useLocalCurrentObjectStackCache();
	$var($CompletableFuture, future, $CompletableFuture::allOf(futures));
	$nc($($Stream::of(futures)))->forEach(static_cast<$Consumer*>($$new(Connect4DatagramChannel$$Lambda$lambda$wait$1, future)));
	$nc(future)->join();
}

$SocketAddress* Connect4DatagramChannel::toConnectAddress($SocketAddress* address) {
	$init(Connect4DatagramChannel);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($InetSocketAddress, address)) {
		$var($InetSocketAddress, inet, $cast($InetSocketAddress, address));
		if ($nc($($nc(inet)->getAddress()))->isAnyLocalAddress()) {
			$var($InetAddress, loopback, $InetAddress::getLoopbackAddress());
			return $new($InetSocketAddress, loopback, inet->getPort());
		}
	}
	return address;
}

void Connect4DatagramChannel::lambda$wait$1($CompletableFuture* future, $CompletableFuture* f) {
	$init(Connect4DatagramChannel);
	$nc(f)->exceptionally(static_cast<$Function*>($$new(Connect4DatagramChannel$$Lambda$lambda$wait$0$1, future)));
}

$Object* Connect4DatagramChannel::lambda$wait$0($CompletableFuture* future, $Throwable* ex) {
	$init(Connect4DatagramChannel);
	$nc(future)->completeExceptionally(ex);
	return $of(nullptr);
}

void clinit$Connect4DatagramChannel($Class* class$) {
	$assignStatic(Connect4DatagramChannel::log, $System::err);
}

Connect4DatagramChannel::Connect4DatagramChannel() {
}

$Class* Connect4DatagramChannel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Connect4DatagramChannel$$Lambda$lambda$wait$1::classInfo$.name)) {
			return Connect4DatagramChannel$$Lambda$lambda$wait$1::load$(name, initialize);
		}
		if (name->equals(Connect4DatagramChannel$$Lambda$lambda$wait$0$1::classInfo$.name)) {
			return Connect4DatagramChannel$$Lambda$lambda$wait$0$1::load$(name, initialize);
		}
	}
	$loadClass(Connect4DatagramChannel, name, initialize, &_Connect4DatagramChannel_ClassInfo_, clinit$Connect4DatagramChannel, allocate$Connect4DatagramChannel);
	return class$;
}

$Class* Connect4DatagramChannel::class$ = nullptr;