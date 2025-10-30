#include <B6425815.h>

#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/MulticastSocket.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $MulticastSocket = ::java::net::MulticastSocket;
using $SocketAddress = ::java::net::SocketAddress;

$MethodInfo _B6425815_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B6425815::*)()>(&B6425815::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B6425815::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _B6425815_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B6425815",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B6425815_MethodInfo_
};

$Object* allocate$B6425815($Class* clazz) {
	return $of($alloc(B6425815));
}

void B6425815::init$() {
}

void B6425815::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, ia, nullptr);
	$var($MulticastSocket, ms, nullptr);
	try {
		$assign(ia, $InetAddress::getByName("::1"_s));
		$assign(ms, $new($MulticastSocket, static_cast<$SocketAddress*>($$new($InetSocketAddress, ia, 1234))));
	} catch ($Exception& e) {
		$assign(ia, nullptr);
		$assign(ms, nullptr);
	}
	if (ms != nullptr) {
		ms->setTimeToLive(254);
		if (ms->getTimeToLive() != 254) {
			$throwNew($RuntimeException, "time to live is incorrect!"_s);
		}
		ms->close();
	}
}

B6425815::B6425815() {
}

$Class* B6425815::load$($String* name, bool initialize) {
	$loadClass(B6425815, name, initialize, &_B6425815_ClassInfo_, allocate$B6425815);
	return class$;
}

$Class* B6425815::class$ = nullptr;