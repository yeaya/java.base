#include <sun/net/www/protocol/http/HttpAuthenticator.h>
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

$Class* HttpAuthenticator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"authString", "(Ljava/net/URL;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpAuthenticator, authString, $String*, $URL*, $String*, $String*)},
		{"schemeSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpAuthenticator, schemeSupported, bool, $String*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.net.www.protocol.http.HttpAuthenticator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(HttpAuthenticator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpAuthenticator);
	});
	return class$;
}

$Class* HttpAuthenticator::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun