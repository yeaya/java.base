#include <Race.h>

#include <Race$1.h>
#include <java/io/InputStream.h>
#include <java/net/ConnectException.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/util/concurrent/Phaser.h>
#include <jcpp.h>

#undef THREADS

using $Race$1 = ::Race$1;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectException = ::java::net::ConnectException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $Phaser = ::java::util::concurrent::Phaser;

$FieldInfo _Race_FieldInfo_[] = {
	{"THREADS", "I", nullptr, $STATIC | $FINAL, $constField(Race, THREADS)},
	{}
};

$MethodInfo _Race_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Race::*)()>(&Race::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Race::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Race_InnerClassesInfo_[] = {
	{"Race$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Race_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Race",
	"java.lang.Object",
	nullptr,
	_Race_FieldInfo_,
	_Race_MethodInfo_,
	nullptr,
	nullptr,
	_Race_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Race$1"
};

$Object* allocate$Race($Class* clazz) {
	return $of($alloc(Race));
}

void Race::init$() {
}

void Race::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ServerSocket, ss, $new($ServerSocket));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($InetAddress, loopback, $InetAddress::getLoopbackAddress());
					ss->bind($$new($InetSocketAddress, loopback, 0));
					int32_t port = ss->getLocalPort();
					$var($Phaser, phaser, $new($Phaser, Race::THREADS + 1));
					for (int32_t i = 0; i < 100; ++i) {
						try {
							$var($Socket, s, $new($Socket, loopback, port));
							s->setSoLinger(false, 0);
							{
								$var($Socket, sa, ss->accept());
								{
									$var($Throwable, var$1, nullptr);
									try {
										try {
											$nc(sa)->setSoLinger(false, 0);
											$var($InputStream, is, s->getInputStream());
											$var($ThreadArray, threads, $new($ThreadArray, Race::THREADS));
											for (int32_t j = 0; j < Race::THREADS; ++j) {
												threads->set(j, $$new($Race$1, phaser, is));
											}
											for (int32_t j = 0; j < 100; ++j) {
												$nc(threads->get(j))->start();
											}
											phaser->arriveAndAwaitAdvance();
											s->close();
											for (int32_t j = 0; j < 100; ++j) {
												$nc(threads->get(j))->join();
											}
										} catch ($Throwable& t$) {
											if (sa != nullptr) {
												try {
													sa->close();
												} catch ($Throwable& x2) {
													t$->addSuppressed(x2);
												}
											}
											$throw(t$);
										}
									} catch ($Throwable& var$2) {
										$assign(var$1, var$2);
									} /*finally*/ {
										if (sa != nullptr) {
											sa->close();
										}
									}
									if (var$1 != nullptr) {
										$throw(var$1);
									}
								}
							}
						} catch ($ConnectException& e) {
							$nc($System::err)->println($$str({"Exception "_s, e, " Port: "_s, $$str(port)}));
						}
					}
				} catch ($Throwable& t$) {
					try {
						ss->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				ss->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

Race::Race() {
}

$Class* Race::load$($String* name, bool initialize) {
	$loadClass(Race, name, initialize, &_Race_ClassInfo_, allocate$Race);
	return class$;
}

$Class* Race::class$ = nullptr;