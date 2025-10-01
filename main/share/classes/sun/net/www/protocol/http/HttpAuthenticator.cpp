#include <sun/net/www/protocol/http/HttpAuthenticator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
$CompoundAttribute _HttpAuthenticator_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$MethodInfo _HttpAuthenticator_MethodInfo_[] = {
	{"authString", "(Ljava/net/URL;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"schemeSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _HttpAuthenticator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.net.www.protocol.http.HttpAuthenticator",
	nullptr,
	nullptr,
	nullptr,
	_HttpAuthenticator_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_HttpAuthenticator_Annotations_
};

$Object* allocate$HttpAuthenticator($Class* clazz) {
	return $of($alloc(HttpAuthenticator));
}

$Class* HttpAuthenticator::load$($String* name, bool initialize) {
	$loadClass(HttpAuthenticator, name, initialize, &_HttpAuthenticator_ClassInfo_, allocate$HttpAuthenticator);
	return class$;
}

$Class* HttpAuthenticator::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun