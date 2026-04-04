#include <Unresolved.h>
#include <java/net/DatagramPacket.h>
#include <java/net/InetSocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramPacket = ::java::net::DatagramPacket;
using $InetSocketAddress = ::java::net::InetSocketAddress;

void Unresolved::init$() {
}

void Unresolved::main($StringArray* args) {
	$useLocalObjectStack();
	$var($InetSocketAddress, remAddr, $InetSocketAddress::createUnresolved("foo.bar"_s, 161));
	try {
		$var($bytes, var$0, "Hellooo!"_s->getBytes());
		$var($DatagramPacket, packet1, $new($DatagramPacket, var$0, "Hellooo!"_s->length(), remAddr));
	} catch ($IllegalArgumentException& e) {
		return;
	}
	$throwNew($RuntimeException, "Setting an unresolved address in a DatagramPacket shouldn\'t be allowed"_s);
}

Unresolved::Unresolved() {
}

$Class* Unresolved::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Unresolved, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Unresolved, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Unresolved",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Unresolved, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Unresolved);
	});
	return class$;
}

$Class* Unresolved::class$ = nullptr;