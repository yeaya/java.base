#include <java/net/InetAddress$Addresses.h>

#include <java/net/InetAddress.h>
#include <jcpp.h>

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;

namespace java {
	namespace net {

$MethodInfo _InetAddress$Addresses_MethodInfo_[] = {
	{"get", "()[Ljava/net/InetAddress;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.net.UnknownHostException"},
	{}
};

$InnerClassInfo _InetAddress$Addresses_InnerClassesInfo_[] = {
	{"java.net.InetAddress$Addresses", "java.net.InetAddress", "Addresses", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InetAddress$Addresses_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.net.InetAddress$Addresses",
	nullptr,
	nullptr,
	nullptr,
	_InetAddress$Addresses_MethodInfo_,
	nullptr,
	nullptr,
	_InetAddress$Addresses_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.InetAddress"
};

$Object* allocate$InetAddress$Addresses($Class* clazz) {
	return $of($alloc(InetAddress$Addresses));
}

$Class* InetAddress$Addresses::load$($String* name, bool initialize) {
	$loadClass(InetAddress$Addresses, name, initialize, &_InetAddress$Addresses_ClassInfo_, allocate$InetAddress$Addresses);
	return class$;
}

$Class* InetAddress$Addresses::class$ = nullptr;

	} // net
} // java