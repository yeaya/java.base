#include <sun/net/www/protocol/http/AuthenticatorKeys$AuthenticatorKeyAccess.h>
#include <java/net/Authenticator.h>
#include <sun/net/www/protocol/http/AuthenticatorKeys.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$Class* AuthenticatorKeys$AuthenticatorKeyAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getKey", "(Ljava/net/Authenticator;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AuthenticatorKeys$AuthenticatorKeyAccess, getKey, $String*, $Authenticator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.AuthenticatorKeys$AuthenticatorKeyAccess", "sun.net.www.protocol.http.AuthenticatorKeys", "AuthenticatorKeyAccess", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.net.www.protocol.http.AuthenticatorKeys$AuthenticatorKeyAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"sun.net.www.protocol.http.AuthenticatorKeys"
	};
	$loadClass(AuthenticatorKeys$AuthenticatorKeyAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AuthenticatorKeys$AuthenticatorKeyAccess);
	});
	return class$;
}

$Class* AuthenticatorKeys$AuthenticatorKeyAccess::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun