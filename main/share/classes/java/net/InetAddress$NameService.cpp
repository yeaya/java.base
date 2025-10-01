#include <java/net/InetAddress$NameService.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;

namespace java {
	namespace net {

$MethodInfo _InetAddress$NameService_MethodInfo_[] = {
	{"getHostByAddr", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.net.UnknownHostException"},
	{"lookupAllHostAddr", "(Ljava/lang/String;)[Ljava/net/InetAddress;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.net.UnknownHostException"},
	{}
};

$InnerClassInfo _InetAddress$NameService_InnerClassesInfo_[] = {
	{"java.net.InetAddress$NameService", "java.net.InetAddress", "NameService", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InetAddress$NameService_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.net.InetAddress$NameService",
	nullptr,
	nullptr,
	nullptr,
	_InetAddress$NameService_MethodInfo_,
	nullptr,
	nullptr,
	_InetAddress$NameService_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.InetAddress"
};

$Object* allocate$InetAddress$NameService($Class* clazz) {
	return $of($alloc(InetAddress$NameService));
}

$Class* InetAddress$NameService::load$($String* name, bool initialize) {
	$loadClass(InetAddress$NameService, name, initialize, &_InetAddress$NameService_ClassInfo_, allocate$InetAddress$NameService);
	return class$;
}

$Class* InetAddress$NameService::class$ = nullptr;

	} // net
} // java