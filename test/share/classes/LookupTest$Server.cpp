#include <LookupTest$Server.h>

#include <LookupTest.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jcpp.h>

#undef US_ASCII

using $LookupTest = ::LookupTest;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

$FieldInfo _LookupTest$Server_FieldInfo_[] = {
	{"done", "Z", nullptr, $PRIVATE | $VOLATILE, $field(LookupTest$Server, done)},
	{"requestEnd", "[B", nullptr, $STATIC | $FINAL, $staticField(LookupTest$Server, requestEnd)},
	{}
};

$MethodInfo _LookupTest$Server_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LookupTest$Server::*)()>(&LookupTest$Server::init$)), "java.io.IOException"},
	{"readOneRequest", "(Ljava/io/InputStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"run", "()V", nullptr, $PUBLIC},
	{"terminate", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _LookupTest$Server_InnerClassesInfo_[] = {
	{"LookupTest$Server", "LookupTest", "Server", $STATIC},
	{}
};

$ClassInfo _LookupTest$Server_ClassInfo_ = {
	$ACC_SUPER,
	"LookupTest$Server",
	"java.lang.Thread",
	nullptr,
	_LookupTest$Server_FieldInfo_,
	_LookupTest$Server_MethodInfo_,
	nullptr,
	nullptr,
	_LookupTest$Server_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LookupTest"
};

$Object* allocate$LookupTest$Server($Class* clazz) {
	return $of($alloc(LookupTest$Server));
}

$bytes* LookupTest$Server::requestEnd = nullptr;

void LookupTest$Server::init$() {
	$useLocalCurrentObjectStackCache();
	$Thread::init$();
	$var($InetAddress, loopback, $InetAddress::getLoopbackAddress());
	$init($LookupTest);
	$assignStatic($LookupTest::serverSocket, $new($ServerSocket));
	$nc($LookupTest::serverSocket)->bind($$new($InetSocketAddress, loopback, 0));
	$LookupTest::port = $nc($LookupTest::serverSocket)->getLocalPort();
}

void LookupTest$Server::run() {
	$useLocalCurrentObjectStackCache();
	try {
		while (!this->done) {
			{
				$init($LookupTest);
				$var($Socket, s, $nc($LookupTest::serverSocket)->accept());
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							readOneRequest($($nc(s)->getInputStream()));
							$var($OutputStream, o, $nc(s)->getOutputStream());
							$var($String, rsp, "HTTP/1.1 200 Ok\r\nConnection: close\r\nContent-length: 0\r\n\r\n"_s);
							$init($StandardCharsets);
							$nc(o)->write($(rsp->getBytes($StandardCharsets::US_ASCII)));
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
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						if (s != nullptr) {
							s->close();
						}
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		}
	} catch ($IOException& e) {
		if (!this->done) {
			e->printStackTrace();
		}
	}
}

void LookupTest$Server::terminate() {
	this->done = true;
	try {
		$init($LookupTest);
		$nc($LookupTest::serverSocket)->close();
	} catch ($IOException& unexpected) {
		unexpected->printStackTrace();
	}
}

void LookupTest$Server::readOneRequest($InputStream* is) {
	int32_t requestEndCount = 0;
	int32_t r = 0;
	while ((r = $nc(is)->read()) != -1) {
		if (r == $nc(LookupTest$Server::requestEnd)->get(requestEndCount)) {
			++requestEndCount;
			if (requestEndCount == 4) {
				break;
			}
		} else {
			requestEndCount = 0;
		}
	}
}

void clinit$LookupTest$Server($Class* class$) {
	$assignStatic(LookupTest$Server::requestEnd, $new($bytes, {
		(int8_t)u'\r',
		(int8_t)u'\n',
		(int8_t)u'\r',
		(int8_t)u'\n'
	}));
}

LookupTest$Server::LookupTest$Server() {
}

$Class* LookupTest$Server::load$($String* name, bool initialize) {
	$loadClass(LookupTest$Server, name, initialize, &_LookupTest$Server_ClassInfo_, clinit$LookupTest$Server, allocate$LookupTest$Server);
	return class$;
}

$Class* LookupTest$Server::class$ = nullptr;