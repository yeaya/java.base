#include <Unresolved.h>

#include <java/net/DatagramPacket.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramPacket = ::java::net::DatagramPacket;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;

$MethodInfo _Unresolved_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Unresolved::*)()>(&Unresolved::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Unresolved::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Unresolved_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Unresolved",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Unresolved_MethodInfo_
};

$Object* allocate$Unresolved($Class* clazz) {
	return $of($alloc(Unresolved));
}

void Unresolved::init$() {
}

void Unresolved::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, remAddr, $InetSocketAddress::createUnresolved("foo.bar"_s, 161));
	try {
		$var($bytes, var$0, "Hellooo!"_s->getBytes());
		$var($DatagramPacket, packet1, $new($DatagramPacket, var$0, "Hellooo!"_s->length(), static_cast<$SocketAddress*>(remAddr)));
	} catch ($IllegalArgumentException& e) {
		return;
	}
	$throwNew($RuntimeException, "Setting an unresolved address in a DatagramPacket shouldn\'t be allowed"_s);
}

Unresolved::Unresolved() {
}

$Class* Unresolved::load$($String* name, bool initialize) {
	$loadClass(Unresolved, name, initialize, &_Unresolved_ClassInfo_, allocate$Unresolved);
	return class$;
}

$Class* Unresolved::class$ = nullptr;