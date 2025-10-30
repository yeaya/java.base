#include <B4923906.h>

#include <java/net/Inet6Address.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $Enumeration = ::java::util::Enumeration;

$MethodInfo _B4923906_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B4923906::*)()>(&B4923906::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B4923906::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _B4923906_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B4923906",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B4923906_MethodInfo_
};

$Object* allocate$B4923906($Class* clazz) {
	return $of($alloc(B4923906));
}

void B4923906::init$() {
}

void B4923906::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, e, $NetworkInterface::getNetworkInterfaces());
	while ($nc(e)->hasMoreElements()) {
		$var($NetworkInterface, ifc, $cast($NetworkInterface, e->nextElement()));
		$var($Enumeration, addrs, $nc(ifc)->getInetAddresses());
		$var($String, var$0, $$str({$(ifc->getName()), ": "_s}));
		$nc($System::out)->println($$concat(var$0, $(ifc->getDisplayName())));
		while ($nc(addrs)->hasMoreElements()) {
			$var($InetAddress, a, $cast($InetAddress, addrs->nextElement()));
			$nc($System::out)->println($$str({"\t"_s, a}));
			if ($instanceOf($Inet6Address, a)) {
				$var($Inet6Address, ia6, $cast($Inet6Address, a));
				$var($Object, o, $nc(ia6)->getScopedInterface());
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
	$loadClass(B4923906, name, initialize, &_B4923906_ClassInfo_, allocate$B4923906);
	return class$;
}

$Class* B4923906::class$ = nullptr;