#include <java/net/InetAddress$PlatformNameService.h>

#include <java/net/InetAddress.h>
#include <java/net/InetAddressImpl.h>
#include <jcpp.h>

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetAddressImpl = ::java::net::InetAddressImpl;

namespace java {
	namespace net {

$MethodInfo _InetAddress$PlatformNameService_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(InetAddress$PlatformNameService::*)()>(&InetAddress$PlatformNameService::init$))},
	{"getHostByAddr", "([B)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.net.UnknownHostException"},
	{"lookupAllHostAddr", "(Ljava/lang/String;)[Ljava/net/InetAddress;", nullptr, $PUBLIC, nullptr, "java.net.UnknownHostException"},
	{}
};

$InnerClassInfo _InetAddress$PlatformNameService_InnerClassesInfo_[] = {
	{"java.net.InetAddress$PlatformNameService", "java.net.InetAddress", "PlatformNameService", $PRIVATE | $STATIC | $FINAL},
	{"java.net.InetAddress$NameService", "java.net.InetAddress", "NameService", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InetAddress$PlatformNameService_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.net.InetAddress$PlatformNameService",
	"java.lang.Object",
	"java.net.InetAddress$NameService",
	nullptr,
	_InetAddress$PlatformNameService_MethodInfo_,
	nullptr,
	nullptr,
	_InetAddress$PlatformNameService_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.InetAddress"
};

$Object* allocate$InetAddress$PlatformNameService($Class* clazz) {
	return $of($alloc(InetAddress$PlatformNameService));
}

void InetAddress$PlatformNameService::init$() {
}

$InetAddressArray* InetAddress$PlatformNameService::lookupAllHostAddr($String* host) {
	$init($InetAddress);
	return $nc($InetAddress::impl)->lookupAllHostAddr(host);
}

$String* InetAddress$PlatformNameService::getHostByAddr($bytes* addr) {
	$init($InetAddress);
	return $nc($InetAddress::impl)->getHostByAddr(addr);
}

InetAddress$PlatformNameService::InetAddress$PlatformNameService() {
}

$Class* InetAddress$PlatformNameService::load$($String* name, bool initialize) {
	$loadClass(InetAddress$PlatformNameService, name, initialize, &_InetAddress$PlatformNameService_ClassInfo_, allocate$InetAddress$PlatformNameService);
	return class$;
}

$Class* InetAddress$PlatformNameService::class$ = nullptr;

	} // net
} // java