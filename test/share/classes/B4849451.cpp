#include <B4849451.h>
#include <java/net/InetSocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;

void B4849451::init$() {
}

void B4849451::main($StringArray* args) {
	$useLocalObjectStack();
	$var($InetSocketAddress, addr1, $InetSocketAddress::createUnresolved("unresolveable"_s, 10));
	$var($InetSocketAddress, addr2, $InetSocketAddress::createUnresolved("UNRESOLVEABLE"_s, 10));
	if (!($nc(addr1)->equals(addr2))) {
		$throwNew($RuntimeException, $$str({addr1, " and "_s, addr2, " should be equal"_s}));
	}
}

B4849451::B4849451() {
}

$Class* B4849451::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(B4849451, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B4849451, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"B4849451",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(B4849451, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B4849451);
	});
	return class$;
}

$Class* B4849451::class$ = nullptr;