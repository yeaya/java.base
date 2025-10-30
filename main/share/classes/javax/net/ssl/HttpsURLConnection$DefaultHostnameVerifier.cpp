#include <javax/net/ssl/HttpsURLConnection$DefaultHostnameVerifier.h>

#include <javax/net/ssl/HttpsURLConnection.h>
#include <javax/net/ssl/SSLSession.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HostnameVerifier = ::javax::net::ssl::HostnameVerifier;
using $HttpsURLConnection = ::javax::net::ssl::HttpsURLConnection;
using $SSLSession = ::javax::net::ssl::SSLSession;

namespace javax {
	namespace net {
		namespace ssl {

$MethodInfo _HttpsURLConnection$DefaultHostnameVerifier_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(HttpsURLConnection$DefaultHostnameVerifier::*)()>(&HttpsURLConnection$DefaultHostnameVerifier::init$))},
	{"verify", "(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HttpsURLConnection$DefaultHostnameVerifier_InnerClassesInfo_[] = {
	{"javax.net.ssl.HttpsURLConnection$DefaultHostnameVerifier", "javax.net.ssl.HttpsURLConnection", "DefaultHostnameVerifier", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _HttpsURLConnection$DefaultHostnameVerifier_ClassInfo_ = {
	$ACC_SUPER,
	"javax.net.ssl.HttpsURLConnection$DefaultHostnameVerifier",
	"java.lang.Object",
	"javax.net.ssl.HostnameVerifier",
	nullptr,
	_HttpsURLConnection$DefaultHostnameVerifier_MethodInfo_,
	nullptr,
	nullptr,
	_HttpsURLConnection$DefaultHostnameVerifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.net.ssl.HttpsURLConnection"
};

$Object* allocate$HttpsURLConnection$DefaultHostnameVerifier($Class* clazz) {
	return $of($alloc(HttpsURLConnection$DefaultHostnameVerifier));
}

void HttpsURLConnection$DefaultHostnameVerifier::init$() {
}

bool HttpsURLConnection$DefaultHostnameVerifier::verify($String* hostname, $SSLSession* session) {
	return false;
}

HttpsURLConnection$DefaultHostnameVerifier::HttpsURLConnection$DefaultHostnameVerifier() {
}

$Class* HttpsURLConnection$DefaultHostnameVerifier::load$($String* name, bool initialize) {
	$loadClass(HttpsURLConnection$DefaultHostnameVerifier, name, initialize, &_HttpsURLConnection$DefaultHostnameVerifier_ClassInfo_, allocate$HttpsURLConnection$DefaultHostnameVerifier);
	return class$;
}

$Class* HttpsURLConnection$DefaultHostnameVerifier::class$ = nullptr;

		} // ssl
	} // net
} // javax