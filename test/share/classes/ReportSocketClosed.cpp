#include <ReportSocketClosed.h>

#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/SocketException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $SocketException = ::java::net::SocketException;

$MethodInfo _ReportSocketClosed_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReportSocketClosed::*)()>(&ReportSocketClosed::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ReportSocketClosed::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ReportSocketClosed_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReportSocketClosed",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReportSocketClosed_MethodInfo_
};

$Object* allocate$ReportSocketClosed($Class* clazz) {
	return $of($alloc(ReportSocketClosed));
}

void ReportSocketClosed::init$() {
}

void ReportSocketClosed::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($DatagramSocket, soc, nullptr);
	$var($InetAddress, sin, nullptr);
	$var($bytes, array, $new($bytes, {
		(int8_t)21,
		(int8_t)22,
		(int8_t)23
	}));
	try {
		$assign(soc, $new($DatagramSocket, 0));
		$assign(sin, $InetAddress::getLocalHost());
		soc->close();
	} catch ($Exception& e) {
		$throwNew($Exception, $$str({"Got unexpected exception"_s, e}));
	}
	try {
		$nc(soc)->receive($$new($DatagramPacket, array, array->length));
	} catch ($Exception& e2) {
		if ($instanceOf($SocketException, e2)) {
			return;
		} else {
			$throw(e2);
		}
	}
}

ReportSocketClosed::ReportSocketClosed() {
}

$Class* ReportSocketClosed::load$($String* name, bool initialize) {
	$loadClass(ReportSocketClosed, name, initialize, &_ReportSocketClosed_ClassInfo_, allocate$ReportSocketClosed);
	return class$;
}

$Class* ReportSocketClosed::class$ = nullptr;