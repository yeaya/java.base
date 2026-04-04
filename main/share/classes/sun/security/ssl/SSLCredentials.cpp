#include <sun/security/ssl/SSLCredentials.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace security {
		namespace ssl {

$Class* SSLCredentials::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.SSLCredentials"
	};
	$loadClass(SSLCredentials, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLCredentials);
	});
	return class$;
}

$Class* SSLCredentials::class$ = nullptr;

		} // ssl
	} // security
} // sun