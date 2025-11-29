#include <InterruptibleDatagramSocket.h>

#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/MulticastSocket.h>
#include <java/net/SocketException.h>
#include <java/net/SocketTimeoutException.h>
#include <java/nio/channels/ClosedByInterruptException.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $MulticastSocket = ::java::net::MulticastSocket;
using $SocketException = ::java::net::SocketException;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;
using $ClosedByInterruptException = ::java::nio::channels::ClosedByInterruptException;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

class InterruptibleDatagramSocket$$Lambda$lambda$test0$0 : public $Runnable {
	$class(InterruptibleDatagramSocket$$Lambda$lambda$test0$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($CountDownLatch* latch, $Thread* testThread) {
		$set(this, latch, latch);
		$set(this, testThread, testThread);
	}
	virtual void run() override {
		InterruptibleDatagramSocket::lambda$test0$0(latch, testThread);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<InterruptibleDatagramSocket$$Lambda$lambda$test0$0>());
	}
	$CountDownLatch* latch = nullptr;
	$Thread* testThread = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo InterruptibleDatagramSocket$$Lambda$lambda$test0$0::fieldInfos[3] = {
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PUBLIC, $field(InterruptibleDatagramSocket$$Lambda$lambda$test0$0, latch)},
	{"testThread", "Ljava/lang/Thread;", nullptr, $PUBLIC, $field(InterruptibleDatagramSocket$$Lambda$lambda$test0$0, testThread)},
	{}
};
$MethodInfo InterruptibleDatagramSocket$$Lambda$lambda$test0$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;Ljava/lang/Thread;)V", nullptr, $PUBLIC, $method(static_cast<void(InterruptibleDatagramSocket$$Lambda$lambda$test0$0::*)($CountDownLatch*,$Thread*)>(&InterruptibleDatagramSocket$$Lambda$lambda$test0$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo InterruptibleDatagramSocket$$Lambda$lambda$test0$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"InterruptibleDatagramSocket$$Lambda$lambda$test0$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* InterruptibleDatagramSocket$$Lambda$lambda$test0$0::load$($String* name, bool initialize) {
	$loadClass(InterruptibleDatagramSocket$$Lambda$lambda$test0$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* InterruptibleDatagramSocket$$Lambda$lambda$test0$0::class$ = nullptr;

$MethodInfo _InterruptibleDatagramSocket_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InterruptibleDatagramSocket::*)()>(&InterruptibleDatagramSocket::init$))},
	{"lambda$test0$0", "(Ljava/util/concurrent/CountDownLatch;Ljava/lang/Thread;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CountDownLatch*,$Thread*)>(&InterruptibleDatagramSocket::lambda$test0$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InterruptibleDatagramSocket::main)), "java.lang.Exception"},
	{"test", "(Ljava/net/DatagramSocket;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($DatagramSocket*,bool)>(&InterruptibleDatagramSocket::test)), "java.lang.Exception"},
	{"test0", "(Ljava/net/DatagramSocket;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($DatagramSocket*)>(&InterruptibleDatagramSocket::test0)), "java.lang.Exception"},
	{}
};

$ClassInfo _InterruptibleDatagramSocket_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InterruptibleDatagramSocket",
	"java.lang.Object",
	nullptr,
	nullptr,
	_InterruptibleDatagramSocket_MethodInfo_
};

$Object* allocate$InterruptibleDatagramSocket($Class* clazz) {
	return $of($alloc(InterruptibleDatagramSocket));
}

void InterruptibleDatagramSocket::init$() {
}

void InterruptibleDatagramSocket::test0($DatagramSocket* s) {
	$useLocalCurrentObjectStackCache();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($Thread, testThread, $Thread::currentThread());
	$var($Thread, coordinator, $new($Thread, static_cast<$Runnable*>($$new(InterruptibleDatagramSocket$$Lambda$lambda$test0$0, latch, testThread))));
	$var($bytes, data, $new($bytes, {
		(int8_t)0,
		(int8_t)1,
		(int8_t)2
	}));
	$var($bytes, var$0, data);
	int32_t var$1 = data->length;
	$var($InetAddress, var$2, $nc(s)->getLocalAddress());
	$var($DatagramPacket, p, $new($DatagramPacket, var$0, var$1, var$2, s->getLocalPort()));
	$nc(s)->setSoTimeout(2000);
	coordinator->start();
	latch->countDown();
	{
		$var($Throwable, var$3, nullptr);
		try {
			s->receive(p);
		} catch ($Throwable& var$4) {
			$assign(var$3, var$4);
		} /*finally*/ {
			try {
				coordinator->join();
			} catch ($InterruptedException& e) {
			}
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
	}
}

void InterruptibleDatagramSocket::test($DatagramSocket* s, bool interruptible) {
	$useLocalCurrentObjectStackCache();
	try {
		test0(s);
		$throwNew($RuntimeException, "Receive shouldn\'t have succeeded"_s);
	} catch ($SocketTimeoutException& e) {
		if (interruptible) {
			$throw(e);
		}
		$nc($System::out)->println($$str({"Got expected SocketTimeoutException: "_s, e}));
	} catch ($SocketException& e) {
		if (($instanceOf($ClosedByInterruptException, $(e->getCause()))) && interruptible) {
			$nc($System::out)->println($$str({"Got expected ClosedByInterruptException: "_s, e}));
		} else {
			$throw(e);
		}
	} catch ($ClosedByInterruptException& e) {
		if (!interruptible) {
			$throw(e);
		}
		$nc($System::out)->println($$str({"Got expected ClosedByInterruptException: "_s, e}));
	}
	if ($nc(s)->isClosed() && !interruptible) {
		$throwNew($RuntimeException, "DatagramSocket should not be closed"_s);
	} else if (!s->isClosed() && interruptible) {
		$throwNew($RuntimeException, "DatagramSocket should be closed"_s);
	}
}

void InterruptibleDatagramSocket::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($DatagramSocket, s, $new($DatagramSocket));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					test(s, false);
				} catch ($Throwable& t$) {
					try {
						s->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				s->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	{
		$var($DatagramSocket, s, $new($MulticastSocket));
		{
			$var($Throwable, var$2, nullptr);
			try {
				try {
					test(s, false);
				} catch ($Throwable& t$) {
					try {
						s->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				s->close();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
	{
		$var($DatagramSocket, s, $nc($($DatagramChannel::open()))->socket());
		{
			$var($Throwable, var$4, nullptr);
			try {
				try {
					test(s, true);
				} catch ($Throwable& t$) {
					if (s != nullptr) {
						try {
							s->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$5) {
				$assign(var$4, var$5);
			} /*finally*/ {
				if (s != nullptr) {
					s->close();
				}
			}
			if (var$4 != nullptr) {
				$throw(var$4);
			}
		}
	}
}

void InterruptibleDatagramSocket::lambda$test0$0($CountDownLatch* latch, $Thread* testThread) {
	try {
		$nc(latch)->await();
		$Thread::sleep(500);
		$nc(testThread)->interrupt();
	} catch ($InterruptedException& e) {
	}
}

InterruptibleDatagramSocket::InterruptibleDatagramSocket() {
}

$Class* InterruptibleDatagramSocket::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(InterruptibleDatagramSocket$$Lambda$lambda$test0$0::classInfo$.name)) {
			return InterruptibleDatagramSocket$$Lambda$lambda$test0$0::load$(name, initialize);
		}
	}
	$loadClass(InterruptibleDatagramSocket, name, initialize, &_InterruptibleDatagramSocket_ClassInfo_, allocate$InterruptibleDatagramSocket);
	return class$;
}

$Class* InterruptibleDatagramSocket::class$ = nullptr;