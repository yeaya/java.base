#include <javax/net/ssl/HostnameVerifier.h>

#include <javax/net/ssl/SSLSession.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace net {
		namespace ssl {

$MethodInfo _HostnameVerifier_MethodInfo_[] = {
	{"verify", "(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _HostnameVerifier_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.net.ssl.HostnameVerifier",
	nullptr,
	nullptr,
	nullptr,
	_HostnameVerifier_MethodInfo_
};

$Object* allocate$HostnameVerifier($Class* clazz) {
	return $of($alloc(HostnameVerifier));
}

$Class* HostnameVerifier::load$($String* name, bool initialize) {
	$loadClass(HostnameVerifier, name, initialize, &_HostnameVerifier_ClassInfo_, allocate$HostnameVerifier);
	return class$;
}

$Class* HostnameVerifier::class$ = nullptr;

		} // ssl
	} // net
} // javax