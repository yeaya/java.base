#include <IPv6Numeric.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;

void IPv6Numeric::init$() {
}

void IPv6Numeric::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$var($InetAddress, addr, $InetAddress::getByName(":"_s));
	} catch ($UnknownHostException& uhe) {
	} catch ($Exception& e) {
		$throwNew($RuntimeException, $(e->toString()));
	}
}

IPv6Numeric::IPv6Numeric() {
}

$Class* IPv6Numeric::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IPv6Numeric, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IPv6Numeric, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IPv6Numeric",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IPv6Numeric, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IPv6Numeric);
	});
	return class$;
}

$Class* IPv6Numeric::class$ = nullptr;