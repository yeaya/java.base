#include <B4923906.h>
#include <java/net/Inet6Address.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $Enumeration = ::java::util::Enumeration;

void B4923906::init$() {
}

void B4923906::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Enumeration, e, $NetworkInterface::getNetworkInterfaces());
	while ($nc(e)->hasMoreElements()) {
		$var($NetworkInterface, ifc, $cast($NetworkInterface, e->nextElement()));
		$var($Enumeration, addrs, $nc(ifc)->getInetAddresses());
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($(ifc->getName()));
		var$0->append(": "_s);
		var$0->append($(ifc->getDisplayName()));
		$nc($System::out)->println($$str(var$0));
		while ($nc(addrs)->hasMoreElements()) {
			$var($InetAddress, a, $cast($InetAddress, addrs->nextElement()));
			$System::out->println($$str({"\t"_s, a}));
			if ($instanceOf($Inet6Address, a)) {
				$var($Inet6Address, ia6, $cast($Inet6Address, a));
				$var($Object, o, ia6->getScopedInterface());
				if ($instanceOf($String, o)) {
					$throwNew($RuntimeException, "Oops! This should be a NetworkInterface"_s);
				}
			}
		}
	}
}

B4923906::B4923906() {
}

$Class* B4923906::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(B4923906, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B4923906, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"B4923906",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(B4923906, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B4923906);
	});
	return class$;
}

$Class* B4923906::class$ = nullptr;