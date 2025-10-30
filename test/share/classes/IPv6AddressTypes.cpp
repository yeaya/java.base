#include <IPv6AddressTypes.h>

#include <java/net/InetAddress.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;

$MethodInfo _IPv6AddressTypes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IPv6AddressTypes::*)()>(&IPv6AddressTypes::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IPv6AddressTypes::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _IPv6AddressTypes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IPv6AddressTypes",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IPv6AddressTypes_MethodInfo_
};

$Object* allocate$IPv6AddressTypes($Class* clazz) {
	return $of($alloc(IPv6AddressTypes));
}

void IPv6AddressTypes::init$() {
}

void IPv6AddressTypes::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, goodlinklocal, $new($StringArray, {
		"fe80::a00:20ff:feae:45c9"_s,
		"fe80::"_s,
		"feb0::"_s
	}));
	$var($StringArray, badlinklocal, $new($StringArray, {
		"fec0::"_s,
		"fe70::"_s,
		"ff00::"_s
	}));
	$var($StringArray, goodsitelocal, $new($StringArray, {
		"fec0::a00:20ff:feae:45c9"_s,
		"feff::"_s
	}));
	$var($StringArray, badsitelocal, $new($StringArray, {
		"fe80::"_s,
		"fe00::"_s,
		"ffc0::"_s
	}));
	int32_t i = 0;
	for (i = 0; i < goodlinklocal->length; ++i) {
		$var($InetAddress, ia, $InetAddress::getByName(goodlinklocal->get(i)));
		if (!$nc(ia)->isLinkLocalAddress()) {
			$throwNew($RuntimeException, $$str({"Link-local address check failed:"_s, ia}));
		} else {
			$nc($System::out)->println($$str({"succeed: "_s, ia}));
		}
	}
	for (i = 0; i < badlinklocal->length; ++i) {
		$var($InetAddress, ia, $InetAddress::getByName(badlinklocal->get(i)));
		if ($nc(ia)->isLinkLocalAddress()) {
			$throwNew($RuntimeException, $$str({"Link-local address check failed:"_s, ia}));
		}
	}
	for (i = 0; i < goodsitelocal->length; ++i) {
		$var($InetAddress, ia, $InetAddress::getByName(goodsitelocal->get(i)));
		if (!$nc(ia)->isSiteLocalAddress()) {
			$throwNew($RuntimeException, $$str({"Site-local address check failed:"_s, ia}));
		}
	}
	for (i = 0; i < badsitelocal->length; ++i) {
		$var($InetAddress, ia, $InetAddress::getByName(badsitelocal->get(i)));
		if ($nc(ia)->isSiteLocalAddress()) {
			$throwNew($RuntimeException, $$str({"Site-local address check failed:"_s, ia}));
		}
	}
}

IPv6AddressTypes::IPv6AddressTypes() {
}

$Class* IPv6AddressTypes::load$($String* name, bool initialize) {
	$loadClass(IPv6AddressTypes, name, initialize, &_IPv6AddressTypes_ClassInfo_, allocate$IPv6AddressTypes);
	return class$;
}

$Class* IPv6AddressTypes::class$ = nullptr;