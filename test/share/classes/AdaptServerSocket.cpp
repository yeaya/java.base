#include <AdaptServerSocket.h>

#include <AdaptServerSocket$1.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketTimeoutException.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $AdaptServerSocket$1 = ::AdaptServerSocket$1;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;

$FieldInfo _AdaptServerSocket_FieldInfo_[] = {
	{"out", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(AdaptServerSocket, out)},
	{"clientStarted", "Z", nullptr, $STATIC | $VOLATILE, $staticField(AdaptServerSocket, clientStarted)},
	{"clientException", "Ljava/lang/Exception;", nullptr, $STATIC | $VOLATILE, $staticField(AdaptServerSocket, clientException)},
	{"client", "Ljava/lang/Thread;", nullptr, $STATIC | $VOLATILE, $staticField(AdaptServerSocket, client)},
	{}
};

$MethodInfo _AdaptServerSocket_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AdaptServerSocket, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AdaptServerSocket, main, void, $StringArray*), "java.lang.Exception"},
	{"startClient", "(II)V", nullptr, $STATIC, $staticMethod(AdaptServerSocket, startClient, void, int32_t, int32_t), "java.lang.Exception"},
	{"test", "(IIZ)V", nullptr, $STATIC, $staticMethod(AdaptServerSocket, test, void, int32_t, int32_t, bool), "java.lang.Exception"},
	{}
};

$InnerClassInfo _AdaptServerSocket_InnerClassesInfo_[] = {
	{"AdaptServerSocket$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AdaptServerSocket_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AdaptServerSocket",
	"java.lang.Object",
	nullptr,
	_AdaptServerSocket_FieldInfo_,
	_AdaptServerSocket_MethodInfo_,
	nullptr,
	nullptr,
	_AdaptServerSocket_InnerClassesInfo_,
	nullptr,
	nullptr,
	"AdaptServerSocket$1"
};

$Object* allocate$AdaptServerSocket($Class* clazz) {
	return $of($alloc(AdaptServerSocket));
}

$PrintStream* AdaptServerSocket::out = nullptr;
$volatile(bool) AdaptServerSocket::clientStarted = false;
$volatile($Exception*) AdaptServerSocket::clientException = nullptr;
$volatile($Thread*) AdaptServerSocket::client = nullptr;

void AdaptServerSocket::init$() {
}

void AdaptServerSocket::startClient(int32_t port, int32_t dally) {
	$init(AdaptServerSocket);
	$var($Thread, t, $new($AdaptServerSocket$1, dally, port));
	t->setDaemon(true);
	t->start();
	$assignStatic(AdaptServerSocket::client, t);
}

void AdaptServerSocket::test(int32_t clientDally, int32_t timeout, bool shouldTimeout) {
	$init(AdaptServerSocket);
	$useLocalCurrentObjectStackCache();
	bool needClient = !shouldTimeout;
	$assignStatic(AdaptServerSocket::client, nullptr);
	$assignStatic(AdaptServerSocket::clientException, nullptr);
	AdaptServerSocket::clientStarted = false;
	$nc(AdaptServerSocket::out)->println();
	{
		$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($ServerSocket, sso, $nc(ssc)->socket());
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$nc(AdaptServerSocket::out)->println($$str({"created: "_s, ssc}));
								$nc(AdaptServerSocket::out)->println($$str({"         "_s, sso}));
								if (timeout != 0) {
									$nc(sso)->setSoTimeout(timeout);
								}
								$nc(AdaptServerSocket::out)->println($$str({"timeout: "_s, $$str($nc(sso)->getSoTimeout())}));
								$nc(sso)->bind(nullptr);
								$nc(AdaptServerSocket::out)->println($$str({"bound:   "_s, ssc}));
								$nc(AdaptServerSocket::out)->println($$str({"         "_s, sso}));
								if (needClient) {
									startClient(sso->getLocalPort(), clientDally);
									while (!AdaptServerSocket::clientStarted) {
										$Thread::sleep(20);
									}
								}
								$var($Socket, so, nullptr);
								try {
									$assign(so, sso->accept());
								} catch ($SocketTimeoutException& x) {
									if (shouldTimeout) {
										$nc(AdaptServerSocket::out)->println("Accept timed out, as expected"_s);
									} else {
										$throw(x);
									}
								}
								if (shouldTimeout && (so != nullptr)) {
									$throwNew($Exception, "Accept did not time out"_s);
								}
								if (so != nullptr) {
									int32_t a = 42;
									$nc($(so->getOutputStream()))->write(a);
									int32_t b = $nc($(so->getInputStream()))->read();
									if (b != a + 1) {
										$throwNew($Exception, "Read incorrect data"_s);
									}
									$nc(AdaptServerSocket::out)->println($$str({"server:  read "_s, $$str(b)}));
								}
							} catch ($Throwable& t$) {
								if (sso != nullptr) {
									try {
										sso->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
								}
								$throw(t$);
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							if (sso != nullptr) {
								sso->close();
							}
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					if (ssc != nullptr) {
						try {
							ssc->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				if (ssc != nullptr) {
					ssc->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	if (needClient) {
		$nc(AdaptServerSocket::client)->interrupt();
		$nc(AdaptServerSocket::client)->join();
		if (AdaptServerSocket::clientException != nullptr) {
			$throw(AdaptServerSocket::clientException);
		}
	}
}

void AdaptServerSocket::main($StringArray* args) {
	$init(AdaptServerSocket);
	test(0, 0, false);
	test(50, 5000, false);
	test(500, 50, true);
}

void clinit$AdaptServerSocket($Class* class$) {
	$assignStatic(AdaptServerSocket::out, $System::out);
	AdaptServerSocket::clientStarted = false;
	$assignStatic(AdaptServerSocket::clientException, nullptr);
	$assignStatic(AdaptServerSocket::client, nullptr);
}

AdaptServerSocket::AdaptServerSocket() {
}

$Class* AdaptServerSocket::load$($String* name, bool initialize) {
	$loadClass(AdaptServerSocket, name, initialize, &_AdaptServerSocket_ClassInfo_, clinit$AdaptServerSocket, allocate$AdaptServerSocket);
	return class$;
}

$Class* AdaptServerSocket::class$ = nullptr;