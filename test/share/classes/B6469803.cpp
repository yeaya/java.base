#include <B6469803.h>
#include <java/net/InetSocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;

void B6469803::init$() {
}

void B6469803::main($StringArray* args) {
	$useLocalObjectStack();
	$var($InetSocketAddress, addr, $new($InetSocketAddress, "192.168.1.1"_s, 12345));
	$var($String, s, addr->getHostString());
	if (!$nc(s)->equals("192.168.1.1"_s)) {
		$throwNew($RuntimeException, $$str({"getHostString() returned the wrong string: "_s, s}));
	}
	$assign(addr, $new($InetSocketAddress, "localhost"_s, 12345));
	$assign(s, addr->getHostString());
	if (!$nc(s)->equals("localhost"_s)) {
		$throwNew($RuntimeException, $$str({"getHostString() returned the wrong string: "_s, s}));
	}
}

B6469803::B6469803() {
}

$Class* B6469803::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(B6469803, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B6469803, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"B6469803",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(B6469803, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B6469803);
	});
	return class$;
}

$Class* B6469803::class$ = nullptr;