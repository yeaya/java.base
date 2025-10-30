#include <B5087907.h>

#include <java/net/Inet4Address.h>
#include <java/net/Inet6Address.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Inet4Address = ::java::net::Inet4Address;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;

$MethodInfo _B5087907_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B5087907::*)()>(&B5087907::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B5087907::main))},
	{}
};

$ClassInfo _B5087907_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B5087907",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B5087907_MethodInfo_
};

$Object* allocate$B5087907($Class* clazz) {
	return $of($alloc(B5087907));
}

void B5087907::init$() {
}

void B5087907::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, lh, nullptr);
	$var($InetAddressArray, addrs, nullptr);
	try {
		$assign(lh, $InetAddress::getByName("localhost"_s));
		$assign(addrs, $InetAddress::getAllByName("localhost"_s));
	} catch ($UnknownHostException& e) {
		$nc($System::out)->println("Cant lookup localhost. cant run test"_s);
		return;
	}
	bool hasIPv4Address = false;
	bool hasIPv6Address = false;
	{
		$var($InetAddressArray, arr$, addrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($InetAddress, addr, arr$->get(i$));
			{
				if ($instanceOf($Inet4Address, addr)) {
					hasIPv4Address = true;
				}
				if ($instanceOf($Inet6Address, addr)) {
					hasIPv6Address = true;
				}
				if (hasIPv4Address && hasIPv6Address) {
					break;
				}
			}
		}
	}
	$var($String, prop, $System::getProperty("java.net.preferIPv6Addresses"_s));
	bool preferIPv6Addresses = (prop == nullptr) ? false : $nc(prop)->equals("true"_s);
	$nc($System::out)->println($$str({"java.net.preferIPv6Addresses: "_s, $$str(preferIPv6Addresses)}));
	$nc($System::out)->println("localhost resolves to:"_s);
	{
		$var($InetAddressArray, arr$, addrs);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($InetAddress, addr, arr$->get(i$));
			{
				$nc($System::out)->println($$str({"  "_s, addr}));
			}
		}
	}
	$nc($System::out)->println($$str({"InetAddres.getByName returned: "_s, lh}));
	bool failed = false;
	if (preferIPv6Addresses && hasIPv6Address) {
		if (!($instanceOf($Inet6Address, lh))) {
			failed = true;
		}
	}
	if (!preferIPv6Addresses && hasIPv4Address) {
		if (!($instanceOf($Inet4Address, lh))) {
			failed = true;
		}
	}
	if (failed) {
		$throwNew($RuntimeException, "Test failed!"_s);
	}
}

B5087907::B5087907() {
}

$Class* B5087907::load$($String* name, bool initialize) {
	$loadClass(B5087907, name, initialize, &_B5087907_ClassInfo_, allocate$B5087907);
	return class$;
}

$Class* B5087907::class$ = nullptr;