#include <AdaptorCloseAndInterrupt.h>

#include <AdaptorCloseAndInterrupt$1.h>
#include <AdaptorCloseAndInterrupt$2.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketException.h>
#include <java/net/SocketTimeoutException.h>
#include <java/nio/channels/ClosedByInterruptException.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <java/util/Random.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/ScheduledExecutorService.h>
#include <java/util/concurrent/ScheduledFuture.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jcpp.h>

#undef MILLISECONDS

using $AdaptorCloseAndInterrupt$1 = ::AdaptorCloseAndInterrupt$1;
using $AdaptorCloseAndInterrupt$2 = ::AdaptorCloseAndInterrupt$2;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketException = ::java::net::SocketException;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;
using $ClosedByInterruptException = ::java::nio::channels::ClosedByInterruptException;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $Random = ::java::util::Random;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $ScheduledExecutorService = ::java::util::concurrent::ScheduledExecutorService;
using $ScheduledFuture = ::java::util::concurrent::ScheduledFuture;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;

$FieldInfo _AdaptorCloseAndInterrupt_FieldInfo_[] = {
	{"pool", "Ljava/util/concurrent/ScheduledExecutorService;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AdaptorCloseAndInterrupt, pool)},
	{"listener", "Ljava/nio/channels/ServerSocketChannel;", nullptr, $FINAL, $field(AdaptorCloseAndInterrupt, listener)},
	{"peer", "Ljava/nio/channels/DatagramChannel;", nullptr, $FINAL, $field(AdaptorCloseAndInterrupt, peer)},
	{"port", "I", nullptr, $FINAL, $field(AdaptorCloseAndInterrupt, port)},
	{"isClosed", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $FINAL, $field(AdaptorCloseAndInterrupt, isClosed)},
	{"isInterrupted", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $FINAL, $field(AdaptorCloseAndInterrupt, isInterrupted)},
	{}
};

$MethodInfo _AdaptorCloseAndInterrupt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AdaptorCloseAndInterrupt::*)()>(&AdaptorCloseAndInterrupt::init$))},
	{"<init>", "(Ljava/nio/channels/ServerSocketChannel;)V", nullptr, $PUBLIC, $method(static_cast<void(AdaptorCloseAndInterrupt::*)($ServerSocketChannel*)>(&AdaptorCloseAndInterrupt::init$))},
	{"<init>", "(Ljava/nio/channels/DatagramChannel;)V", nullptr, $PUBLIC, $method(static_cast<void(AdaptorCloseAndInterrupt::*)($DatagramChannel*)>(&AdaptorCloseAndInterrupt::init$))},
	{"dcReceiveAsyncClose", "(I)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"dcReceiveAsyncInterrupt", "(I)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"doAsyncClose", "(Ljava/nio/channels/spi/AbstractSelectableChannel;)V", nullptr, 0},
	{"doAsyncInterrupt", "()V", nullptr, 0},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AdaptorCloseAndInterrupt::main)), "java.lang.Exception"},
	{"scReadAsyncClose", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"scReadAsyncInterrupt", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"ssAcceptAsyncClose", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"ssAcceptAsyncInterrupt", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _AdaptorCloseAndInterrupt_InnerClassesInfo_[] = {
	{"AdaptorCloseAndInterrupt$2", nullptr, nullptr, 0},
	{"AdaptorCloseAndInterrupt$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AdaptorCloseAndInterrupt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AdaptorCloseAndInterrupt",
	"java.lang.Object",
	nullptr,
	_AdaptorCloseAndInterrupt_FieldInfo_,
	_AdaptorCloseAndInterrupt_MethodInfo_,
	nullptr,
	nullptr,
	_AdaptorCloseAndInterrupt_InnerClassesInfo_,
	nullptr,
	nullptr,
	"AdaptorCloseAndInterrupt$2,AdaptorCloseAndInterrupt$1"
};

$Object* allocate$AdaptorCloseAndInterrupt($Class* clazz) {
	return $of($alloc(AdaptorCloseAndInterrupt));
}

$ScheduledExecutorService* AdaptorCloseAndInterrupt::pool = nullptr;

void AdaptorCloseAndInterrupt::init$() {
	$set(this, isClosed, $new($AtomicBoolean));
	$set(this, isInterrupted, $new($AtomicBoolean));
	$set(this, listener, nullptr);
	$set(this, peer, nullptr);
	this->port = -1;
}

void AdaptorCloseAndInterrupt::init$($ServerSocketChannel* listener) {
	$set(this, isClosed, $new($AtomicBoolean));
	$set(this, isInterrupted, $new($AtomicBoolean));
	$set(this, listener, listener);
	this->port = $nc($($nc(listener)->socket()))->getLocalPort();
	$set(this, peer, nullptr);
}

void AdaptorCloseAndInterrupt::init$($DatagramChannel* listener) {
	$set(this, isClosed, $new($AtomicBoolean));
	$set(this, isInterrupted, $new($AtomicBoolean));
	$set(this, peer, listener);
	this->port = $nc($($nc(this->peer)->socket()))->getLocalPort();
	$set(this, listener, nullptr);
}

void AdaptorCloseAndInterrupt::main($StringArray* args) {
	$init(AdaptorCloseAndInterrupt);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($ServerSocketChannel, listener, $ServerSocketChannel::open());
				{
					$var($Throwable, var$1, nullptr);
					try {
						try {
							$nc($($nc(listener)->socket()))->bind(nullptr);
							$$new(AdaptorCloseAndInterrupt, listener)->scReadAsyncClose();
							$$new(AdaptorCloseAndInterrupt, listener)->scReadAsyncInterrupt();
						} catch ($Throwable&) {
							$var($Throwable, t$, $catch());
							if (listener != nullptr) {
								try {
									listener->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable&) {
						$assign(var$1, $catch());
					} /*finally*/ {
						if (listener != nullptr) {
							listener->close();
						}
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			}
			{
				$var($DatagramChannel, peer, $DatagramChannel::open());
				{
					$var($Throwable, var$2, nullptr);
					try {
						try {
							$nc($($nc(peer)->socket()))->bind(nullptr);
							$$new(AdaptorCloseAndInterrupt, peer)->dcReceiveAsyncClose(0);
							$$new(AdaptorCloseAndInterrupt, peer)->dcReceiveAsyncClose(30000);
							$$new(AdaptorCloseAndInterrupt, peer)->dcReceiveAsyncInterrupt(0);
							$$new(AdaptorCloseAndInterrupt, peer)->dcReceiveAsyncInterrupt(30000);
						} catch ($Throwable&) {
							$var($Throwable, t$, $catch());
							if (peer != nullptr) {
								try {
									peer->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable&) {
						$assign(var$2, $catch());
					} /*finally*/ {
						if (peer != nullptr) {
							peer->close();
						}
					}
					if (var$2 != nullptr) {
						$throw(var$2);
					}
				}
			}
			$$new(AdaptorCloseAndInterrupt)->ssAcceptAsyncClose();
			$$new(AdaptorCloseAndInterrupt)->ssAcceptAsyncInterrupt();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(AdaptorCloseAndInterrupt::pool)->shutdown();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$init($System);
	$nc($System::out)->println("Test Passed"_s);
}

void AdaptorCloseAndInterrupt::scReadAsyncClose() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($SocketChannel, sc, $SocketChannel::open(static_cast<$SocketAddress*>($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), this->port))));
			$nc($($nc(sc)->socket()))->setSoTimeout(30 * 1000);
			doAsyncClose(sc);
			try {
				$nc($($nc($(sc->socket()))->getInputStream()))->read($$new($bytes, 100));
				$init($System);
				$nc($System::err)->format("close() was invoked: %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf($nc(this->isClosed)->get())))}));
				$throwNew($RuntimeException, "read should not have completed"_s);
			} catch ($ClosedChannelException&) {
				$catch();
			}
			if (!$nc($(sc->socket()))->isClosed()) {
				$throwNew($RuntimeException, "socket is not closed"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc($($nc(this->listener)->accept()))->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AdaptorCloseAndInterrupt::scReadAsyncInterrupt() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($SocketChannel, sc, $SocketChannel::open(static_cast<$SocketAddress*>($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), this->port))));
			$nc($($nc(sc)->socket()))->setSoTimeout(30 * 1000);
			doAsyncInterrupt();
			try {
				$nc($($nc($(sc->socket()))->getInputStream()))->read($$new($bytes, 100));
				$throwNew($RuntimeException, "read should not have completed"_s);
			} catch ($ClosedByInterruptException&) {
				$var($ClosedByInterruptException, expected, $catch());
				$init($System);
				$nc($System::out)->format("interrupt() was invoked: %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf($nc(this->isInterrupted)->get())))}));
				$nc($System::out)->format("scReadAsyncInterrupt was interrupted: %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf($($Thread::currentThread())->interrupted())))}));
			}
			if (!$nc($(sc->socket()))->isClosed()) {
				$throwNew($RuntimeException, "socket is not closed"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc($($nc(this->listener)->accept()))->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AdaptorCloseAndInterrupt::dcReceiveAsyncClose(int32_t timeout) {
	$useLocalCurrentObjectStackCache();
	$var($DatagramChannel, dc, $DatagramChannel::open());
	$nc(dc)->connect($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), this->port));
	$nc($(dc->socket()))->setSoTimeout(timeout);
	doAsyncClose(dc);
	try {
		$nc($(dc->socket()))->receive($$new($DatagramPacket, $$new($bytes, 100), 100));
		$init($System);
		$nc($System::err)->format("close() was invoked: %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf($nc(this->isClosed)->get())))}));
		$throwNew($RuntimeException, "receive should not have completed"_s);
	} catch ($SocketException&) {
		$catch();
	}
	if (!$nc($(dc->socket()))->isClosed()) {
		$throwNew($RuntimeException, "socket is not closed"_s);
	}
}

void AdaptorCloseAndInterrupt::dcReceiveAsyncInterrupt(int32_t timeout) {
	$useLocalCurrentObjectStackCache();
	$var($DatagramChannel, dc, $DatagramChannel::open());
	$nc(dc)->connect($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), this->port));
	$nc($(dc->socket()))->setSoTimeout(timeout);
	doAsyncInterrupt();
	try {
		$nc($(dc->socket()))->receive($$new($DatagramPacket, $$new($bytes, 100), 100));
		$throwNew($RuntimeException, "receive should not have completed"_s);
	} catch ($SocketException&) {
		$var($SocketException, expected, $catch());
		$init($System);
		$nc($System::out)->format("interrupt() was invoked: %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf($nc(this->isInterrupted)->get())))}));
		$nc($System::out)->format("dcReceiveAsyncInterrupt was interrupted: %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf($($Thread::currentThread())->interrupted())))}));
	} catch ($SocketTimeoutException&) {
		$var($SocketTimeoutException, unexpected, $catch());
		$init($System);
		$nc($System::err)->format("Receive thread interrupt invoked: %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf($nc(this->isInterrupted)->get())))}));
		$nc($System::err)->format("Receive thread was interrupted: %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf($($Thread::currentThread())->isInterrupted())))}));
		$throw(unexpected);
	}
	if (!$nc($(dc->socket()))->isClosed()) {
		$throwNew($RuntimeException, "socket is not closed"_s);
	}
}

void AdaptorCloseAndInterrupt::ssAcceptAsyncClose() {
	$useLocalCurrentObjectStackCache();
	$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
	$nc($($nc(ssc)->socket()))->bind(nullptr);
	$nc($(ssc->socket()))->setSoTimeout(30 * 1000);
	doAsyncClose(ssc);
	try {
		$nc($(ssc->socket()))->accept();
		$init($System);
		$nc($System::err)->format("close() was invoked: %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf($nc(this->isClosed)->get())))}));
		$throwNew($RuntimeException, "accept should not have completed"_s);
	} catch ($ClosedChannelException&) {
		$catch();
	}
	if (!$nc($(ssc->socket()))->isClosed()) {
		$throwNew($RuntimeException, "socket is not closed"_s);
	}
}

void AdaptorCloseAndInterrupt::ssAcceptAsyncInterrupt() {
	$useLocalCurrentObjectStackCache();
	$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
	$nc($($nc(ssc)->socket()))->bind(nullptr);
	$nc($(ssc->socket()))->setSoTimeout(30 * 1000);
	doAsyncInterrupt();
	try {
		$nc($(ssc->socket()))->accept();
		$throwNew($RuntimeException, "accept should not have completed"_s);
	} catch ($ClosedByInterruptException&) {
		$var($ClosedByInterruptException, expected, $catch());
		$init($System);
		$nc($System::out)->format("interrupt() was invoked: %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf($nc(this->isInterrupted)->get())))}));
		$nc($System::out)->format("ssAcceptAsyncInterrupt was interrupted: %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf($($Thread::currentThread())->interrupted())))}));
	}
	if (!$nc($(ssc->socket()))->isClosed()) {
		$throwNew($RuntimeException, "socket is not closed"_s);
	}
}

void AdaptorCloseAndInterrupt::doAsyncClose($AbstractSelectableChannel* sc) {
	$useLocalCurrentObjectStackCache();
	$var($Callable, var$0, static_cast<$Callable*>($new($AdaptorCloseAndInterrupt$1, this, sc)));
	$init($TimeUnit);
	$nc(AdaptorCloseAndInterrupt::pool)->schedule(var$0, (int64_t)$$new($Random)->nextInt(1000), $TimeUnit::MILLISECONDS);
}

void AdaptorCloseAndInterrupt::doAsyncInterrupt() {
	$useLocalCurrentObjectStackCache();
	$var($Thread, current, $Thread::currentThread());
	$var($Callable, var$0, static_cast<$Callable*>($new($AdaptorCloseAndInterrupt$2, this, current)));
	$init($TimeUnit);
	$nc(AdaptorCloseAndInterrupt::pool)->schedule(var$0, (int64_t)$$new($Random)->nextInt(1000), $TimeUnit::MILLISECONDS);
}

void clinit$AdaptorCloseAndInterrupt($Class* class$) {
	$assignStatic(AdaptorCloseAndInterrupt::pool, $Executors::newScheduledThreadPool(1));
}

AdaptorCloseAndInterrupt::AdaptorCloseAndInterrupt() {
}

$Class* AdaptorCloseAndInterrupt::load$($String* name, bool initialize) {
	$loadClass(AdaptorCloseAndInterrupt, name, initialize, &_AdaptorCloseAndInterrupt_ClassInfo_, clinit$AdaptorCloseAndInterrupt, allocate$AdaptorCloseAndInterrupt);
	return class$;
}

$Class* AdaptorCloseAndInterrupt::class$ = nullptr;