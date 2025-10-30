#include <B6499348.h>

#include <java/io/Closeable.h>
#include <java/net/DatagramSocket.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramSocket = ::java::net::DatagramSocket;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;

$MethodInfo _B6499348_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B6499348::*)()>(&B6499348::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B6499348::main)), "java.io.IOException"},
	{}
};

$ClassInfo _B6499348_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B6499348",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B6499348_MethodInfo_
};

$Object* allocate$B6499348($Class* clazz) {
	return $of($alloc(B6499348));
}

void B6499348::init$() {
}

void B6499348::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Socket, s, $new($Socket));
	$var($ServerSocket, ss, $new($ServerSocket));
	$var($DatagramSocket, ds, $new($DatagramSocket, ($SocketAddress*)nullptr));
	if (!($instanceOf($Closeable, s))) {
		$throwNew($RuntimeException, "Socket is not a java.io.Closeable"_s);
	}
	if (!($instanceOf($Closeable, ss))) {
		$throwNew($RuntimeException, "ServerSocket is not a java.io.Closeable"_s);
	}
	if (!($instanceOf($Closeable, ds))) {
		$throwNew($RuntimeException, "DatagramSocket is not a java.io.Closeable"_s);
	}
	s->close();
	ss->close();
	ds->close();
}

B6499348::B6499348() {
}

$Class* B6499348::load$($String* name, bool initialize) {
	$loadClass(B6499348, name, initialize, &_B6499348_ClassInfo_, allocate$B6499348);
	return class$;
}

$Class* B6499348::class$ = nullptr;