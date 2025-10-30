#include <SocketGrowth.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InetAddress = ::java::net::InetAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

$MethodInfo _SocketGrowth_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SocketGrowth::*)()>(&SocketGrowth::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SocketGrowth::main)), "java.io.IOException"},
	{}
};

$ClassInfo _SocketGrowth_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SocketGrowth",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SocketGrowth_MethodInfo_
};

$Object* allocate$SocketGrowth($Class* clazz) {
	return $of($alloc(SocketGrowth));
}

void SocketGrowth::init$() {
}

void SocketGrowth::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, loopbackAddress, $InetAddress::getLoopbackAddress());
	{
		$var($ServerSocket, ss, $new($ServerSocket, 0, 0, loopbackAddress));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					{
						$var($Socket, s, $new($Socket, loopbackAddress, ss->getLocalPort()));
						{
							$var($Throwable, var$1, nullptr);
							try {
								try {
									$var($Socket, peer, ss->accept());
									{
										$var($Throwable, var$2, nullptr);
										try {
											try {
												for (int32_t i = 0; i < 0x000F4240; ++i) {
													s->getOutputStream();
													s->getInputStream();
													if (i % 0x000186A0 == 0) {
														$nc($System::out)->println(i);
													}
												}
											} catch ($Throwable& t$) {
												if (peer != nullptr) {
													try {
														peer->close();
													} catch ($Throwable& x2) {
														t$->addSuppressed(x2);
													}
												}
												$throw(t$);
											}
										} catch ($Throwable& var$3) {
											$assign(var$2, var$3);
										} /*finally*/ {
											if (peer != nullptr) {
												peer->close();
											}
										}
										if (var$2 != nullptr) {
											$throw(var$2);
										}
									}
								} catch ($Throwable& t$) {
									try {
										s->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable& var$4) {
								$assign(var$1, var$4);
							} /*finally*/ {
								s->close();
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
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
			} catch ($Throwable& var$5) {
				$assign(var$0, var$5);
			} /*finally*/ {
				ss->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

SocketGrowth::SocketGrowth() {
}

$Class* SocketGrowth::load$($String* name, bool initialize) {
	$loadClass(SocketGrowth, name, initialize, &_SocketGrowth_ClassInfo_, allocate$SocketGrowth);
	return class$;
}

$Class* SocketGrowth::class$ = nullptr;