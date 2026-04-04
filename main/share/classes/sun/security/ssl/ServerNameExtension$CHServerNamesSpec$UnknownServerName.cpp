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

void ServerNameExtension$CHServerNamesSpec$UnknownServerName::init$(int32_t code, $bytes* encoded) {
	$SNIServerName::init$(code, encoded);
}

ServerNameExtension$CHServerNamesSpec$UnknownServerName::ServerNameExtension$CHServerNamesSpec$UnknownServerName() {
}

$Class* ServerNameExtension$CHServerNamesSpec$UnknownServerName::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I[B)V", nullptr, 0, $method(ServerNameExtension$CHServerNamesSpec$UnknownServerName, init$, void, int32_t, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ServerNameExtension$CHServerNamesSpec", "sun.security.ssl.ServerNameExtension", "CHServerNamesSpec", $STATIC | $FINAL},
		{"sun.security.ssl.ServerNameExtension$CHServerNamesSpec$UnknownServerName", "sun.security.ssl.ServerNameExtension$CHServerNamesSpec", "UnknownServerName", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.ServerNameExtension$CHServerNamesSpec$UnknownServerName",
		"javax.net.ssl.SNIServerName",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.ServerNameExtension"
	};
	$loadClass(ServerNameExtension$CHServerNamesSpec$UnknownServerName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerNameExtension$CHServerNamesSpec$UnknownServerName);
	});
	return class$;
}

$Class* ServerNameExtension$CHServerNamesSpec$UnknownServerName::class$ = nullptr;

		} // ssl
	} // security
} // sun