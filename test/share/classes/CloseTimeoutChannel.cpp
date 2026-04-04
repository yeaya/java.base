#include <CloseTimeoutChannel.h>
#include <CloseTimeoutChannel$AcceptorThread.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $CloseTimeoutChannel$AcceptorThread = ::CloseTimeoutChannel$AcceptorThread;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;

void CloseTimeoutChannel::init$() {
}

void CloseTimeoutChannel::main($StringArray* args) {
	$useLocalObjectStack();
	int32_t port = -1;
	try {
		$var($ServerSocketChannel, listener, $ServerSocketChannel::open());
		$$nc($nc(listener)->socket())->bind($$new($InetSocketAddress, 0));
		port = $$nc(listener->socket())->getLocalPort();
		$var($CloseTimeoutChannel$AcceptorThread, thread, $new($CloseTimeoutChannel$AcceptorThread, listener));
		thread->start();
	} catch ($IOException& e) {
		$nc($System::out)->println("Mysterious IO problem"_s);
		e->printStackTrace();
		$System::exit(1);
	}
	try {
		$nc($System::out)->println("Establishing connection"_s);
		$var($Socket, socket, $$nc($SocketChannel::open($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), port)))->socket());
		$var($OutputStream, out, $nc(socket)->getOutputStream());
		$var($InputStream, in, socket->getInputStream());
		$System::out->println("1. Writing byte 1"_s);
		$nc(out)->write((int8_t)1);
		int32_t n = read(socket, in);
		$System::out->println($$str({"Read byte "_s, $$str(n), "\n"_s}));
		$System::out->println("3. Writing byte 3"_s);
		out->write((int8_t)3);
		$System::out->println("Closing"_s);
		socket->close();
	} catch ($IOException& e) {
		$nc($System::out)->println("Mysterious IO problem"_s);
		e->printStackTrace();
		$System::exit(1);
	}
}

int32_t CloseTimeoutChannel::read($Socket* s, $InputStream* in) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		$nc(s)->setSoTimeout(8000);
		var$2 = $nc(in)->read();
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$nc(s)->setSoTimeout(0);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

CloseTimeoutChannel::CloseTimeoutChannel() {
}

$Class* CloseTimeoutChannel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CloseTimeoutChannel, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CloseTimeoutChannel, main, void, $StringArray*), "java.lang.Exception"},
		{"read", "(Ljava/net/Socket;Ljava/io/InputStream;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(CloseTimeoutChannel, read, int32_t, $Socket*, $InputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CloseTimeoutChannel$AcceptorThread", "CloseTimeoutChannel", "AcceptorThread", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CloseTimeoutChannel",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"CloseTimeoutChannel$AcceptorThread"
	};
	$loadClass(CloseTimeoutChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CloseTimeoutChannel);
	});
	return class$;
}

$Class* CloseTimeoutChannel::class$ = nullptr;