#include <Connect.h>

#include <Connect$Initiator.h>
#include <Connect$Responder.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

using $Connect$Initiator = ::Connect$Initiator;
using $Connect$Responder = ::Connect$Responder;
using $CompletableFutureArray = $Array<::java::util::concurrent::CompletableFuture>;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
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

class Connect$$Lambda$lambda$wait$1 : public $Consumer {
	$class(Connect$$Lambda$lambda$wait$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($CompletableFuture* future) {
		$set(this, future, future);
	}
	virtual void accept(Object$* f) override {
		Connect::lambda$wait$1(future, $cast($CompletableFuture, f));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Connect$$Lambda$lambda$wait$1>());
	}
	$CompletableFuture* future = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Connect$$Lambda$lambda$wait$1::fieldInfos[2] = {
	{"future", "Ljava/util/concurrent/CompletableFuture;", nullptr, $PUBLIC, $field(Connect$$Lambda$lambda$wait$1, future)},
	{}
};
$MethodInfo Connect$$Lambda$lambda$wait$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/CompletableFuture;)V", nullptr, $PUBLIC, $method(static_cast<void(Connect$$Lambda$lambda$wait$1::*)($CompletableFuture*)>(&Connect$$Lambda$lambda$wait$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Connect$$Lambda$lambda$wait$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"Connect$$Lambda$lambda$wait$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Connect$$Lambda$lambda$wait$1::load$($String* name, bool initialize) {
	$loadClass(Connect$$Lambda$lambda$wait$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Connect$$Lambda$lambda$wait$1::class$ = nullptr;

class Connect$$Lambda$lambda$wait$0$1 : public $Function {
	$class(Connect$$Lambda$lambda$wait$0$1, $NO_CLASS_INIT, $Function)
public:
	void init$($CompletableFuture* future) {
		$set(this, future, future);
	}
	virtual $Object* apply(Object$* ex) override {
		 return Connect::lambda$wait$0(future, $cast($Throwable, ex));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Connect$$Lambda$lambda$wait$0$1>());
	}
	$CompletableFuture* future = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Connect$$Lambda$lambda$wait$0$1::fieldInfos[2] = {
	{"future", "Ljava/util/concurrent/CompletableFuture;", nullptr, $PUBLIC, $field(Connect$$Lambda$lambda$wait$0$1, future)},
	{}
};
$MethodInfo Connect$$Lambda$lambda$wait$0$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/CompletableFuture;)V", nullptr, $PUBLIC, $method(static_cast<void(Connect$$Lambda$lambda$wait$0$1::*)($CompletableFuture*)>(&Connect$$Lambda$lambda$wait$0$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Connect$$Lambda$lambda$wait$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"Connect$$Lambda$lambda$wait$0$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Connect$$Lambda$lambda$wait$0$1::load$($String* name, bool initialize) {
	$loadClass(Connect$$Lambda$lambda$wait$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Connect$$Lambda$lambda$wait$0$1::class$ = nullptr;

$FieldInfo _Connect_FieldInfo_[] = {
	{"log", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(Connect, log)},
	{}
};

$MethodInfo _Connect_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Connect::*)()>(&Connect::init$))},
	{"invoke", "(Ljava/util/concurrent/ExecutorService;Ljava/lang/Runnable;Ljava/lang/Runnable;)V", nullptr, $STATIC, $method(static_cast<void(*)($ExecutorService*,$Runnable*,$Runnable*)>(&Connect::invoke)), "java.util.concurrent.CompletionException"},
	{"lambda$wait$0", "(Ljava/util/concurrent/CompletableFuture;Ljava/lang/Throwable;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($CompletableFuture*,$Throwable*)>(&Connect::lambda$wait$0))},
	{"lambda$wait$1", "(Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CompletableFuture*,$CompletableFuture*)>(&Connect::lambda$wait$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Connect::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Connect::test)), "java.lang.Exception"},
	{"toConnectAddress", "(Ljava/net/SocketAddress;)Ljava/net/SocketAddress;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SocketAddress*(*)($SocketAddress*)>(&Connect::toConnectAddress))},
	{"wait", "([Ljava/util/concurrent/CompletableFuture;)V", "([Ljava/util/concurrent/CompletableFuture<*>;)V", $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($CompletableFutureArray*)>(&Connect::wait)), "java.util.concurrent.CompletionException"},
	{}
};

$InnerClassInfo _Connect_InnerClassesInfo_[] = {
	{"Connect$Responder", "Connect", "Responder", $PUBLIC | $STATIC},
	{"Connect$Initiator", "Connect", "Initiator", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Connect_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Connect",
	"java.lang.Object",
	nullptr,
	_Connect_FieldInfo_,
	_Connect_MethodInfo_,
	nullptr,
	nullptr,
	_Connect_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Connect$Responder,Connect$Initiator"
};

$Object* allocate$Connect($Class* clazz) {
	return $of($alloc(Connect));
}

$PrintStream* Connect::log = nullptr;

void Connect::init$() {
}

void Connect::main($StringArray* args) {
	$init(Connect);
	test();
}

void Connect::test() {
	$init(Connect);
	$var($ExecutorService, threadPool, $Executors::newCachedThreadPool());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Connect$Responder, r, $new($Connect$Responder));
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						$var($Connect$Initiator, a, $new($Connect$Initiator, $(r->getSocketAddress())));
						{
							$var($Throwable, var$2, nullptr);
							try {
								try {
									invoke(threadPool, a, r);
								} catch ($Throwable&) {
									$var($Throwable, t$, $catch());
									try {
										a->close();
									} catch ($Throwable&) {
										$var($Throwable, x2, $catch());
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable&) {
								$assign(var$2, $catch());
							} /*finally*/ {
								a->close();
							}
							if (var$2 != nullptr) {
								$throw(var$2);
							}
						}
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						try {
							r->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$1, $catch());
				} /*finally*/ {
					r->close();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(threadPool)->shutdown();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Connect::invoke($ExecutorService* e, $Runnable* reader, $Runnable* writer) {
	$init(Connect);
	$var($CompletableFuture, f1, $CompletableFuture::runAsync(writer, e));
	$var($CompletableFuture, f2, $CompletableFuture::runAsync(reader, e));
	wait($$new($CompletableFutureArray, {
		f1,
		f2
	}));
}

void Connect::wait($CompletableFutureArray* futures) {
	$init(Connect);
	$var($CompletableFuture, future, $CompletableFuture::allOf(futures));
	$nc($($Stream::of(futures)))->forEach(static_cast<$Consumer*>($$new(Connect$$Lambda$lambda$wait$1, future)));
	$nc(future)->join();
}

$SocketAddress* Connect::toConnectAddress($SocketAddress* address) {
	$init(Connect);
	if ($instanceOf($InetSocketAddress, address)) {
		$var($InetSocketAddress, inet, $cast($InetSocketAddress, address));
		if ($nc($($nc(inet)->getAddress()))->isAnyLocalAddress()) {
			$var($InetAddress, loopback, $InetAddress::getLoopbackAddress());
			return $new($InetSocketAddress, loopback, inet->getPort());
		}
	}
	return address;
}

void Connect::lambda$wait$1($CompletableFuture* future, $CompletableFuture* f) {
	$init(Connect);
	$nc(f)->exceptionally(static_cast<$Function*>($$new(Connect$$Lambda$lambda$wait$0$1, future)));
}

$Object* Connect::lambda$wait$0($CompletableFuture* future, $Throwable* ex) {
	$init(Connect);
	$nc(future)->completeExceptionally(ex);
	return $of(nullptr);
}

void clinit$Connect($Class* class$) {
	$init($System);
	$assignStatic(Connect::log, $System::err);
}

Connect::Connect() {
}

$Class* Connect::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Connect$$Lambda$lambda$wait$1::classInfo$.name)) {
			return Connect$$Lambda$lambda$wait$1::load$(name, initialize);
		}
		if (name->equals(Connect$$Lambda$lambda$wait$0$1::classInfo$.name)) {
			return Connect$$Lambda$lambda$wait$0$1::load$(name, initialize);
		}
	}
	$loadClass(Connect, name, initialize, &_Connect_ClassInfo_, clinit$Connect, allocate$Connect);
	return class$;
}

$Class* Connect::class$ = nullptr;