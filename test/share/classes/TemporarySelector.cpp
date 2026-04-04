#include <TemporarySelector.h>
#include <TemporarySelector$1.h>
#include <java/io/InputStream.h>
#include <java/lang/Runnable.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketTimeoutException.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $TemporarySelector$1 = ::TemporarySelector$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$volatile(bool) TemporarySelector::done = false;

void TemporarySelector::init$() {
}

void TemporarySelector::main($StringArray* args) {
	$init(TemporarySelector);
	$useLocalObjectStack();
	$var($Runnable, r, $new($TemporarySelector$1));
	$var($Throwable, var$0, nullptr);
	try {
		$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
		$var($ServerSocket, ss, $nc(ssc)->socket());
		$nc(ss)->bind($$new($InetSocketAddress, 0));
		int32_t localPort = ss->getLocalPort();
		$nc($System::out)->println("Connecting to server socket"_s);
		$System::out->flush();
		$var($SocketChannel, channel, $SocketChannel::open($$new($InetSocketAddress, "localhost"_s, localPort)));
		$System::out->println("Connected to server socket"_s);
		$System::out->flush();
		$var($Thread, t, $new($Thread, r));
		t->start();
		$var($bytes, buffer, $new($bytes, 500));
		$System::out->println("Reading from socket input stream"_s);
		$System::out->flush();
		$var($Socket, socket, $nc(channel)->socket());
		$nc(socket)->setSoTimeout(10000);
		try {
			$$nc(socket->getInputStream())->read(buffer);
		} catch ($SocketTimeoutException& ste) {
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		TemporarySelector::done = true;
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TemporarySelector::clinit$($Class* clazz) {
	TemporarySelector::done = false;
}

TemporarySelector::TemporarySelector() {
}

$Class* TemporarySelector::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"done", "Z", nullptr, $STATIC | $VOLATILE, $staticField(TemporarySelector, done)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TemporarySelector, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TemporarySelector, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TemporarySelector$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TemporarySelector",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TemporarySelector$1"
	};
	$loadClass(TemporarySelector, name, initialize, &classInfo$$, TemporarySelector::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TemporarySelector);
	});
	return class$;
}

$Class* TemporarySelector::class$ = nullptr;