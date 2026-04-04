#include <javax/net/ssl/HttpsURLConnection$DefaultHostnameVerifier.h>
#include <javax/net/ssl/HttpsURLConnection.h>
#include <javax/net/ssl/SSLSession.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLSession = ::javax::net::ssl::SSLSession;

namespace javax {
	namespace net {
		namespace ssl {

void HttpsURLConnection$DefaultHostnameVerifier::init$() {
}

bool HttpsURLConnection$DefaultHostnameVerifier::verify($String* hostname, $SSLSession* session) {
	return false;
}

HttpsURLConnection$DefaultHostnameVerifier::HttpsURLConnection$DefaultHostnameVerifier() {
}

$Class* HttpsURLConnection$DefaultHostnameVerifier::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(HttpsURLConnection$DefaultHostnameVerifier, init$, void)},
		{"verify", "(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnection$DefaultHostnameVerifier, verify, bool, $String*, $SSLSession*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.net.ssl.HttpsURLConnection$DefaultHostnameVerifier", "javax.net.ssl.HttpsURLConnection", "DefaultHostnameVerifier", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.net.ssl.HttpsURLConnection$DefaultHostnameVerifier",
		"java.lang.Object",
		"javax.net.ssl.HostnameVerifier",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.net.ssl.HttpsURLConnection"
	};
	$loadClass(HttpsURLConnection$DefaultHostnameVerifier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpsURLConnection$DefaultHostnameVerifier);
	});
	return class$;
}

$Class* HttpsURLConnection$DefaultHostnameVerifier::class$ = nullptr;

		} // ssl
	} // net
} // javax