#include <GetLoopbackAddress.h>

#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;

$FieldInfo _GetLoopbackAddress_FieldInfo_[] = {
	{"IPv4Loopback", "Ljava/net/InetAddress;", nullptr, $STATIC, $staticField(GetLoopbackAddress, IPv4Loopback)},
	{"IPv6Loopback", "Ljava/net/InetAddress;", nullptr, $STATIC, $staticField(GetLoopbackAddress, IPv6Loopback)},
	{}
};

$MethodInfo _GetLoopbackAddress_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(GetLoopbackAddress, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetLoopbackAddress, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _GetLoopbackAddress_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetLoopbackAddress",
	"java.lang.Object",
	nullptr,
	_GetLoopbackAddress_FieldInfo_,
	_GetLoopbackAddress_MethodInfo_
};

$Object* allocate$GetLoopbackAddress($Class* clazz) {
	return $of($alloc(GetLoopbackAddress));
}

$InetAddress* GetLoopbackAddress::IPv4Loopback = nullptr;
$InetAddress* GetLoopbackAddress::IPv6Loopback = nullptr;

void GetLoopbackAddress::init$() {
}

void GetLoopbackAddress::main($StringArray* args) {
	$init(GetLoopbackAddress);
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, addr, $InetAddress::getLoopbackAddress());
	bool var$0 = $nc(addr)->equals(GetLoopbackAddress::IPv4Loopback);
	if (!(var$0 || $nc(addr)->equals(GetLoopbackAddress::IPv6Loopback))) {
		$throwNew($RuntimeException, "Failed: getLoopbackAddress not returning a valid loopback address"_s);
	}
	$var($InetAddress, addr2, $InetAddress::getLoopbackAddress());
	if (addr != addr2) {
		$throwNew($RuntimeException, "Failed: getLoopbackAddress should return a reference to the same InetAddress loopback instance."_s);
	}
	$var($InetAddress, addrFromNullHost, $InetAddress::getByName(nullptr));
	if (!$nc(addrFromNullHost)->isLoopbackAddress()) {
		$throwNew($RuntimeException, $$str({"getByName(null) did not return a loopback address, but "_s, addrFromNullHost}));
	}
	$var($InetAddress, addrFromEmptyHost, $InetAddress::getByName(""_s));
	if (!$nc(addrFromEmptyHost)->isLoopbackAddress()) {
		$throwNew($RuntimeException, $$str({"getByName with a host of length == 0, did not return a loopback address, but "_s, addrFromEmptyHost}));
	}
	$var($InetAddressArray, addrsByNull, $InetAddress::getAllByName(nullptr));
	if (!$nc($nc(addrsByNull)->get(0))->isLoopbackAddress()) {
		$throwNew($RuntimeException, $$str({"getAllByName(null) did not return a loopback address, but "_s, addrsByNull->get(0)}));
	}
	$var($InetAddressArray, addrsByEmpty, $InetAddress::getAllByName(""_s));
	if (!$nc($nc(addrsByEmpty)->get(0))->isLoopbackAddress()) {
		$throwNew($RuntimeException, $$str({"getAllByName with a host of length == 0, did not return a loopback address, but "_s, addrsByEmpty->get(0)}));
	}
}

void clinit$GetLoopbackAddress($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		try {
			$assignStatic(GetLoopbackAddress::IPv4Loopback, $InetAddress::getByAddress($$new($bytes, {
				(int8_t)127,
				(int8_t)0,
				(int8_t)0,
				(int8_t)1
			})));
			$assignStatic(GetLoopbackAddress::IPv6Loopback, $InetAddress::getByAddress($$new($bytes, {
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)1
			})));
		} catch ($UnknownHostException& e) {
		}
	}
}

GetLoopbackAddress::GetLoopbackAddress() {
}

$Class* GetLoopbackAddress::load$($String* name, bool initialize) {
	$loadClass(GetLoopbackAddress, name, initialize, &_GetLoopbackAddress_ClassInfo_, clinit$GetLoopbackAddress, allocate$GetLoopbackAddress);
	return class$;
}

$Class* GetLoopbackAddress::class$ = nullptr;