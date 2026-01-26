#include <Shadow.h>

#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$FieldInfo _Shadow_FieldInfo_[] = {
	{"log", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(Shadow, log)},
	{"problems", "I", nullptr, $PRIVATE | $STATIC, $staticField(Shadow, problems)},
	{}
};

$MethodInfo _Shadow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Shadow, init$, void)},
	{"check", "(Ljava/net/Socket;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Shadow, check, void, $Socket*)},
	{"dump", "(Ljava/net/ServerSocket;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Shadow, dump, void, $ServerSocket*)},
	{"dump", "(Ljava/net/Socket;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Shadow, dump, void, $Socket*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Shadow, main, void, $StringArray*), "java.lang.Exception"},
	{"problem", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Shadow, problem, void, $String*)},
	{}
};

$ClassInfo _Shadow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Shadow",
	"java.lang.Object",
	nullptr,
	_Shadow_FieldInfo_,
	_Shadow_MethodInfo_
};

$Object* allocate$Shadow($Class* clazz) {
	return $of($alloc(Shadow));
}

$PrintStream* Shadow::log = nullptr;
int32_t Shadow::problems = 0;

void Shadow::init$() {
}

void Shadow::dump($ServerSocket* s) {
	$init(Shadow);
	$useLocalCurrentObjectStackCache();
	$nc(Shadow::log)->println($$str({"getInetAddress(): "_s, $($nc(s)->getInetAddress())}));
	$nc(Shadow::log)->println($$str({"getLocalPort(): "_s, $$str($nc(s)->getLocalPort())}));
}

void Shadow::dump($Socket* s) {
	$init(Shadow);
	$useLocalCurrentObjectStackCache();
	$nc(Shadow::log)->println($$str({"getInetAddress(): "_s, $($nc(s)->getInetAddress())}));
	$nc(Shadow::log)->println($$str({"getPort(): "_s, $$str($nc(s)->getPort())}));
	$nc(Shadow::log)->println($$str({"getLocalAddress(): "_s, $($nc(s)->getLocalAddress())}));
	$nc(Shadow::log)->println($$str({"getLocalPort(): "_s, $$str($nc(s)->getLocalPort())}));
}

void Shadow::problem($String* s) {
	$init(Shadow);
	$nc(Shadow::log)->println($$str({"FAILURE: "_s, s}));
	++Shadow::problems;
}

void Shadow::check($Socket* s) {
	$init(Shadow);
	$useLocalCurrentObjectStackCache();
	if ($nc(s)->getPort() == 0) {
		problem("Socket has no port"_s);
	}
	if ($nc(s)->getLocalPort() == 0) {
		problem("Socket has no local port"_s);
	}
	if (!$nc($($nc(s)->getLocalAddress()))->equals($(s->getInetAddress()))) {
		problem("Socket has wrong local address"_s);
	}
}

void Shadow::main($StringArray* args) {
	$init(Shadow);
	$useLocalCurrentObjectStackCache();
	bool useChannels = (($nc(args)->length == 0) || $nc($($Boolean::valueOf($nc(args)->get(0))))->booleanValue());
	int32_t port = ($nc(args)->length > 1 ? $Integer::parseInt($nc(args)->get(1)) : -1);
	$var($ServerSocket, serverSocket, nullptr);
	if (useChannels) {
		$var($ServerSocketChannel, serverSocketChannel, $ServerSocketChannel::open());
		$nc(Shadow::log)->println($$str({"opened ServerSocketChannel: "_s, serverSocketChannel}));
		$assign(serverSocket, $nc(serverSocketChannel)->socket());
		$nc(Shadow::log)->println($$str({"associated ServerSocket: "_s, serverSocket}));
	} else {
		$assign(serverSocket, $new($ServerSocket));
		$nc(Shadow::log)->println($$str({"opened ServerSocket: "_s, serverSocket}));
	}
	$var($SocketAddress, bindAddr, $new($InetSocketAddress, (port == -1) ? 0 : port));
	$nc(serverSocket)->bind(bindAddr);
	$nc(Shadow::log)->println($$str({"bound ServerSocket: "_s, serverSocket}));
	$nc(Shadow::log)->println();
	$var($Socket, socket, nullptr);
	if (useChannels) {
		$var($SocketChannel, socketChannel, $SocketChannel::open());
		$nc(Shadow::log)->println($$str({"opened SocketChannel: "_s, socketChannel}));
		$assign(socket, $nc(socketChannel)->socket());
		$nc(Shadow::log)->println($$str({"associated Socket: "_s, socket}));
	} else {
		$assign(socket, $new($Socket));
		$nc(Shadow::log)->println($$str({"opened Socket: "_s, socket}));
	}
	$var($InetAddress, var$0, $InetAddress::getLoopbackAddress());
	$var($SocketAddress, connectAddr, $new($InetSocketAddress, var$0, serverSocket->getLocalPort()));
	$nc(socket)->connect(connectAddr);
	$nc(Shadow::log)->println($$str({"connected Socket: "_s, socket}));
	$nc(Shadow::log)->println();
	$var($Socket, acceptedSocket, serverSocket->accept());
	$nc(Shadow::log)->println($$str({"accepted Socket: "_s, acceptedSocket}));
	$nc(Shadow::log)->println();
	$nc(Shadow::log)->println("========================================"_s);
	$nc(Shadow::log)->println("*** ServerSocket info: "_s);
	dump(serverSocket);
	$nc(Shadow::log)->println();
	$nc(Shadow::log)->println("*** client Socket info: "_s);
	dump(socket);
	check(socket);
	$nc(Shadow::log)->println();
	$nc(Shadow::log)->println("*** accepted Socket info: "_s);
	dump(acceptedSocket);
	check(acceptedSocket);
	$nc(Shadow::log)->println();
	if (Shadow::problems > 0) {
		$throwNew($Exception, $$str({$$str(Shadow::problems), " tests failed"_s}));
	}
}

void clinit$Shadow($Class* class$) {
	$assignStatic(Shadow::log, $System::err);
	Shadow::problems = 0;
}

Shadow::Shadow() {
}

$Class* Shadow::load$($String* name, bool initialize) {
	$loadClass(Shadow, name, initialize, &_Shadow_ClassInfo_, clinit$Shadow, allocate$Shadow);
	return class$;
}

$Class* Shadow::class$ = nullptr;