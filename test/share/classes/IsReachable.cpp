#include <IsReachable.h>

#include <java/io/IOException.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;

$MethodInfo _IsReachable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IsReachable, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IsReachable, main, void, $StringArray*)},
	{}
};

$ClassInfo _IsReachable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IsReachable",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IsReachable_MethodInfo_
};

$Object* allocate$IsReachable($Class* clazz) {
	return $of($alloc(IsReachable));
}

void IsReachable::init$() {
}

void IsReachable::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($InetAddress, addr, $InetAddress::getByName("localhost"_s));
		if (!$nc(addr)->isReachable(10000)) {
			$throwNew($RuntimeException, "Localhost should always be reachable"_s);
		}
		$var($NetworkInterface, inf, $NetworkInterface::getByInetAddress(addr));
		if (inf != nullptr) {
			if (!$nc(addr)->isReachable(inf, 20, 10000)) {
				$throwNew($RuntimeException, "Localhost should always be reachable"_s);
			}
		}
	} catch ($IOException& e) {
		$throwNew($RuntimeException, $$str({"Unexpected exception:"_s, e}));
	}
}

IsReachable::IsReachable() {
}

$Class* IsReachable::load$($String* name, bool initialize) {
	$loadClass(IsReachable, name, initialize, &_IsReachable_ClassInfo_, allocate$IsReachable);
	return class$;
}

$Class* IsReachable::class$ = nullptr;