#include <sun/security/provider/certpath/ssl/SSLServerCertStore$1.h>
#include <javax/net/ssl/SSLSession.h>
#include <sun/security/provider/certpath/ssl/SSLServerCertStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLSession = ::javax::net::ssl::SSLSession;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ssl {

void SSLServerCertStore$1::init$() {
}

bool SSLServerCertStore$1::verify($String* hostname, $SSLSession* session) {
	return true;
}

SSLServerCertStore$1::SSLServerCertStore$1() {
}

$Class* SSLServerCertStore$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SSLServerCertStore$1, init$, void)},
		{"verify", "(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z", nullptr, $PUBLIC, $virtualMethod(SSLServerCertStore$1, verify, bool, $String*, $SSLSession*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.certpath.ssl.SSLServerCertStore",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.ssl.SSLServerCertStore$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.certpath.ssl.SSLServerCertStore$1",
		"java.lang.Object",
		"javax.net.ssl.HostnameVerifier",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.ssl.SSLServerCertStore"
	};
	$loadClass(SSLServerCertStore$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLServerCertStore$1);
	});
	return class$;
}

$Class* SSLServerCertStore$1::class$ = nullptr;

				} // ssl
			} // certpath
		} // provider
	} // security
} // sun