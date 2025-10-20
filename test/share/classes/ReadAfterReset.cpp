#include <ReadAfterReset.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

#undef NUM_BYTES_TO_WRITE

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;

$FieldInfo _ReadAfterReset_FieldInfo_[] = {
	{"out", "Ljava/io/PrintStream;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ReadAfterReset, out)},
	{"NUM_BYTES_TO_WRITE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReadAfterReset, NUM_BYTES_TO_WRITE)},
	{}
};

$MethodInfo _ReadAfterReset_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReadAfterReset::*)()>(&ReadAfterReset::init$))},
	{"acceptAndResetConnection", "(Ljava/net/ServerSocket;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ServerSocket*)>(&ReadAfterReset::acceptAndResetConnection)), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ReadAfterReset::main)), "java.io.IOException"},
	{"readUntilIOException", "(Ljava/net/Socket;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Socket*)>(&ReadAfterReset::readUntilIOException))},
	{"writeUntilIOException", "(Ljava/net/Socket;)V", nullptr, $STATIC, $method(static_cast<void(*)($Socket*)>(&ReadAfterReset::writeUntilIOException))},
	{}
};

$ClassInfo _ReadAfterReset_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReadAfterReset",
	"java.lang.Object",
	nullptr,
	_ReadAfterReset_FieldInfo_,
	_ReadAfterReset_MethodInfo_
};

$Object* allocate$ReadAfterReset($Class* clazz) {
	return $of($alloc(ReadAfterReset));
}

$PrintStream* ReadAfterReset::out = nullptr;

void ReadAfterReset::init$() {
}

void ReadAfterReset::main($StringArray* args) {
	$init(ReadAfterReset);
	$useLocalCurrentObjectStackCache();
	{
		$var($ServerSocket, ss, $new($ServerSocket));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					ss->bind($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
					$nc(ReadAfterReset::out)->println("Test connection ..."_s);
					{
						$var($Socket, s, $new($Socket));
						{
							$var($Throwable, var$1, nullptr);
							try {
								try {
									s->connect($(ss->getLocalSocketAddress()));
									int32_t nwrote = acceptAndResetConnection(ss);
									int32_t nread = readUntilIOException(s);
									if (nread != nwrote) {
										$throwNew($RuntimeException, $$str({"Client read "_s, $$str(nread), ", expected "_s, $$str(nwrote)}));
									}
								} catch ($Throwable&) {
									$var($Throwable, t$, $catch());
									try {
										s->close();
									} catch ($Throwable&) {
										$var($Throwable, x2, $catch());
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable&) {
								$assign(var$1, $catch());
							} /*finally*/ {
								s->close();
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
					}
					$nc(ReadAfterReset::out)->println();
					$nc(ReadAfterReset::out)->println("Test connection ..."_s);
					{
						$var($Socket, s, $new($Socket));
						{
							$var($Throwable, var$2, nullptr);
							try {
								try {
									s->connect($(ss->getLocalSocketAddress()));
									int32_t nwrote = acceptAndResetConnection(ss);
									writeUntilIOException(s);
									int32_t nread = readUntilIOException(s);
									if (nread != nwrote) {
										$throwNew($RuntimeException, $$str({"Client read "_s, $$str(nread), ", expected "_s, $$str(nwrote)}));
									}
								} catch ($Throwable&) {
									$var($Throwable, t$, $catch());
									try {
										s->close();
									} catch ($Throwable&) {
										$var($Throwable, x2, $catch());
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable&) {
								$assign(var$2, $catch());
							} /*finally*/ {
								s->close();
							}
							if (var$2 != nullptr) {
								$throw(var$2);
							}
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						ss->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				ss->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

int32_t ReadAfterReset::acceptAndResetConnection($ServerSocket* ss) {
	$init(ReadAfterReset);
	$useLocalCurrentObjectStackCache();
	int32_t count = ReadAfterReset::NUM_BYTES_TO_WRITE;
	{
		$var($Socket, peer, $nc(ss)->accept());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc($($nc(peer)->getOutputStream()))->write($$new($bytes, count));
					peer->setSoLinger(true, 0);
					$nc(ReadAfterReset::out)->format("Server wrote %d bytes and reset connection%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(count)))}));
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
				$assign(var$0, $catch());
			} /*finally*/ {
				if (peer != nullptr) {
					peer->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return count;
}

void ReadAfterReset::writeUntilIOException($Socket* s) {
	$init(ReadAfterReset);
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, bytes, $new($bytes, 100));
		while (true) {
			$nc($($nc(s)->getOutputStream()))->write(bytes);
			$nc(ReadAfterReset::out)->format("Client wrote %d bytes%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(bytes->length)))}));
		}
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$nc(ReadAfterReset::out)->format("Client write failed: %s (expected)%n"_s, $$new($ObjectArray, {$of(ioe)}));
	}
}

int32_t ReadAfterReset::readUntilIOException($Socket* s) {
	$init(ReadAfterReset);
	$useLocalCurrentObjectStackCache();
	int32_t nread = 0;
	try {
		$var($bytes, bytes, $new($bytes, 100));
		while (true) {
			int32_t n = $nc($($nc(s)->getInputStream()))->read(bytes);
			if (n < 0) {
				$nc(ReadAfterReset::out)->println("Client read EOF"_s);
				break;
			} else {
				$nc(ReadAfterReset::out)->format("Client read %s bytes%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(n)))}));
				nread += n;
			}
		}
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$nc(ReadAfterReset::out)->format("Client read failed: %s (expected)%n"_s, $$new($ObjectArray, {$of(ioe)}));
	}
	return nread;
}

void clinit$ReadAfterReset($Class* class$) {
	$init($System);
	$assignStatic(ReadAfterReset::out, $System::out);
}

ReadAfterReset::ReadAfterReset() {
}

$Class* ReadAfterReset::load$($String* name, bool initialize) {
	$loadClass(ReadAfterReset, name, initialize, &_ReadAfterReset_ClassInfo_, clinit$ReadAfterReset, allocate$ReadAfterReset);
	return class$;
}

$Class* ReadAfterReset::class$ = nullptr;