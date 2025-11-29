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

$MethodInfo _MulticastTTL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MulticastTTL::*)()>(&MulticastTTL::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MulticastTTL::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _MulticastTTL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MulticastTTL",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MulticastTTL_MethodInfo_
};

$Object* allocate$MulticastTTL($Class* clazz) {
	return $of($alloc(MulticastTTL));
}

void MulticastTTL::init$() {
}

void MulticastTTL::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($MulticastSocket, soc, nullptr);
	$var($DatagramPacket, pac, nullptr);
	$var($InetAddress, sin, nullptr);
	$var($bytes, array, $new($bytes, 0x00010001));
	int32_t port = 0;
	int8_t old_ttl = (int8_t)0;
	int8_t new_ttl = (int8_t)64;
	int8_t ttl = (int8_t)0;
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
	$loadClass(MulticastTTL, name, initialize, &_MulticastTTL_ClassInfo_, allocate$MulticastTTL);
	return class$;
}

$Class* MulticastTTL::class$ = nullptr;