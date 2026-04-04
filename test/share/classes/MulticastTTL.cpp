#include <MulticastTTL.h>
#include <java/io/IOException.h>
#include <java/net/DatagramPacket.h>
#include <java/net/InetAddress.h>
#include <java/net/MulticastSocket.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramPacket = ::java::net::DatagramPacket;
using $InetAddress = ::java::net::InetAddress;
using $MulticastSocket = ::java::net::MulticastSocket;

void MulticastTTL::init$() {
}

void MulticastTTL::main($StringArray* args) {
	$useLocalObjectStack();
	$var($MulticastSocket, soc, nullptr);
	$var($DatagramPacket, pac, nullptr);
	$var($InetAddress, sin, nullptr);
	$var($bytes, array, $new($bytes, 0x00010001));
	int32_t port = 0;
	int8_t old_ttl = 0;
	int8_t new_ttl = 64;
	int8_t ttl = 0;
	$assign(sin, $InetAddress::getByName("224.80.80.80"_s));
	$assign(soc, $new($MulticastSocket));
	port = soc->getLocalPort();
	old_ttl = soc->getTTL();
	$assign(pac, $new($DatagramPacket, array, array->length, sin, port));
	try {
		soc->send(pac, new_ttl);
	} catch ($IOException& e) {
		ttl = soc->getTTL();
		soc->close();
		if (ttl != old_ttl) {
			$throwNew($RuntimeException, "TTL "_s);
		}
	}
	soc->close();
}

MulticastTTL::MulticastTTL() {
}

$Class* MulticastTTL::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MulticastTTL, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MulticastTTL, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MulticastTTL",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MulticastTTL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MulticastTTL);
	});
	return class$;
}

$Class* MulticastTTL::class$ = nullptr;