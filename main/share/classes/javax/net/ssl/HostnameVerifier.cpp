#include <javax/net/ssl/HostnameVerifier.h>
#include <javax/net/ssl/SSLSession.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLSession = ::javax::net::ssl::SSLSession;

namespace javax {
	namespace net {
		namespace ssl {

$Class* HostnameVerifier::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"verify", "(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HostnameVerifier, verify, bool, $String*, $SSLSession*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.net.ssl.HostnameVerifier",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HostnameVerifier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostnameVerifier);
	});
	return class$;
}

$Class* HostnameVerifier::class$ = nullptr;

		} // ssl
	} // net
} // javax