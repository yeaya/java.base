#include <CloseTimeoutChannel.h>

#include <CloseTimeoutChannel$AcceptorThread.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
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
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $CloseTimeoutChannel$AcceptorThread = ::CloseTimeoutChannel$AcceptorThread;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$MethodInfo _CloseTimeoutChannel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CloseTimeoutChannel::*)()>(&CloseTimeoutChannel::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CloseTimeoutChannel::main)), "java.lang.Exception"},
	{"read", "(Ljava/net/Socket;Ljava/io/InputStream;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Socket*,$InputStream*)>(&CloseTimeoutChannel::read)), "java.io.IOException"},
	{}
};

$InnerClassInfo _CloseTimeoutChannel_InnerClassesInfo_[] = {
	{"CloseTimeoutChannel$AcceptorThread", "CloseTimeoutChannel", "AcceptorThread", $STATIC},
	{}
};

$ClassInfo _CloseTimeoutChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CloseTimeoutChannel",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CloseTimeoutChannel_MethodInfo_,
	nullptr,
	nullptr,
	_CloseTimeoutChannel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"CloseTimeoutChannel$AcceptorThread"
};

$Object* allocate$CloseTimeoutChannel($Class* clazz) {
	return $of($alloc(CloseTimeoutChannel));
}

void CloseTimeoutChannel::init$() {
}

void CloseTimeoutChannel::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t port = -1;
	try {
		$var($ServerSocketChannel, listener, $ServerSocketChannel::open());
		$nc($($nc(listener)->socket()))->bind($$new($InetSocketAddress, 0));
		port = $nc($(listener->socket()))->getLocalPort();
		$var($CloseTimeoutChannel$AcceptorThread, thread, $new($CloseTimeoutChannel$AcceptorThread, listener));
		thread->start();
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$init($System);
		$nc($System::out)->println("Mysterious IO problem"_s);
		e->printStackTrace();
		$System::exit(1);
	}
	try {
		$init($System);
		$nc($System::out)->println("Establishing connection"_s);
		$var($Socket, socket, $nc($($SocketChannel::open(static_cast<$SocketAddress*>($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), port)))))->socket());
		$var($OutputStream, out, $nc(socket)->getOutputStream());
		$var($InputStream, in, socket->getInputStream());
		$nc($System::out)->println("1. Writing byte 1"_s);
		$nc(out)->write((int32_t)(int8_t)1);
		int32_t n = read(socket, in);
		$nc($System::out)->println($$str({"Read byte "_s, $$str(n), "\n"_s}));
		$nc($System::out)->println("3. Writing byte 3"_s);
		out->write((int32_t)(int8_t)3);
		$nc($System::out)->println("Closing"_s);
		socket->close();
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$init($System);
		$nc($System::out)->println("Mysterious IO problem"_s);
		e->printStackTrace();
		$System::exit(1);
	}
}

int32_t CloseTimeoutChannel::read($Socket* s, $InputStream* in) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$nc(s)->setSoTimeout(8000);
			var$2 = $nc(in)->read();
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(s)->setSoTimeout(0);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

CloseTimeoutChannel::CloseTimeoutChannel() {
}

$Class* CloseTimeoutChannel::load$($String* name, bool initialize) {
	$loadClass(CloseTimeoutChannel, name, initialize, &_CloseTimeoutChannel_ClassInfo_, allocate$CloseTimeoutChannel);
	return class$;
}

$Class* CloseTimeoutChannel::class$ = nullptr;