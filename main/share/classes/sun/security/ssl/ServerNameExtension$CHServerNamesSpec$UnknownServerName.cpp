#include <sun/security/ssl/ServerNameExtension$CHServerNamesSpec$UnknownServerName.h>

#include <javax/net/ssl/SNIServerName.h>
#include <sun/security/ssl/ServerNameExtension$CHServerNamesSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SNIServerName = ::javax::net::ssl::SNIServerName;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ServerNameExtension$CHServerNamesSpec$UnknownServerName_MethodInfo_[] = {
	{"<init>", "(I[B)V", nullptr, 0, $method(static_cast<void(ServerNameExtension$CHServerNamesSpec$UnknownServerName::*)(int32_t,$bytes*)>(&ServerNameExtension$CHServerNamesSpec$UnknownServerName::init$))},
	{}
};

$InnerClassInfo _ServerNameExtension$CHServerNamesSpec$UnknownServerName_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerNameExtension$CHServerNamesSpec", "sun.security.ssl.ServerNameExtension", "CHServerNamesSpec", $STATIC | $FINAL},
	{"sun.security.ssl.ServerNameExtension$CHServerNamesSpec$UnknownServerName", "sun.security.ssl.ServerNameExtension$CHServerNamesSpec", "UnknownServerName", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ServerNameExtension$CHServerNamesSpec$UnknownServerName_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.ServerNameExtension$CHServerNamesSpec$UnknownServerName",
	"javax.net.ssl.SNIServerName",
	nullptr,
	nullptr,
	_ServerNameExtension$CHServerNamesSpec$UnknownServerName_MethodInfo_,
	nullptr,
	nullptr,
	_ServerNameExtension$CHServerNamesSpec$UnknownServerName_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerNameExtension"
};

$Object* allocate$ServerNameExtension$CHServerNamesSpec$UnknownServerName($Class* clazz) {
	return $of($alloc(ServerNameExtension$CHServerNamesSpec$UnknownServerName));
}

void ServerNameExtension$CHServerNamesSpec$UnknownServerName::init$(int32_t code, $bytes* encoded) {
	$SNIServerName::init$(code, encoded);
}

ServerNameExtension$CHServerNamesSpec$UnknownServerName::ServerNameExtension$CHServerNamesSpec$UnknownServerName() {
}

$Class* ServerNameExtension$CHServerNamesSpec$UnknownServerName::load$($String* name, bool initialize) {
	$loadClass(ServerNameExtension$CHServerNamesSpec$UnknownServerName, name, initialize, &_ServerNameExtension$CHServerNamesSpec$UnknownServerName_ClassInfo_, allocate$ServerNameExtension$CHServerNamesSpec$UnknownServerName);
	return class$;
}

$Class* ServerNameExtension$CHServerNamesSpec$UnknownServerName::class$ = nullptr;

		} // ssl
	} // security
} // sun