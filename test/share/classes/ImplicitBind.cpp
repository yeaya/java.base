#include <ImplicitBind.h>

#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;

$MethodInfo _ImplicitBind_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ImplicitBind, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ImplicitBind, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _ImplicitBind_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ImplicitBind",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ImplicitBind_MethodInfo_
};

$Object* allocate$ImplicitBind($Class* clazz) {
	return $of($alloc(ImplicitBind));
}

void ImplicitBind::init$() {
}

void ImplicitBind::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($DatagramSocket, s, $new($DatagramSocket, ($SocketAddress*)nullptr));
	$var($bytes, b, "hello"_s->getBytes());
	$var($InetAddress, ia, $InetAddress::getByName("localhost"_s));
	$var($DatagramPacket, pac, $new($DatagramPacket, b, b->length, ia, 53));
	s->send(pac);
	if (!s->isBound()) {
		$throwNew($RuntimeException, "Socket should be implictly bound!"_s);
	}
	s->close();
	$assign(s, $new($DatagramSocket, ($SocketAddress*)nullptr));
	s->connect($$new($InetSocketAddress, "localhost"_s, 1234));
	if (!s->isBound()) {
		$throwNew($RuntimeException, "Socket should be implictly bound!"_s);
	}
	s->close();
}

ImplicitBind::ImplicitBind() {
}

$Class* ImplicitBind::load$($String* name, bool initialize) {
	$loadClass(ImplicitBind, name, initialize, &_ImplicitBind_ClassInfo_, allocate$ImplicitBind);
	return class$;
}

$Class* ImplicitBind::class$ = nullptr;