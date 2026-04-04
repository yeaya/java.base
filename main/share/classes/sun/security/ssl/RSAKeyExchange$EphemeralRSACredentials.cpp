#include <sun/security/ssl/RSAKeyExchange$EphemeralRSACredentials.h>
#include <java/security/interfaces/RSAPublicKey.h>
#include <sun/security/ssl/RSAKeyExchange.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RSAPublicKey = ::java::security::interfaces::RSAPublicKey;

namespace sun {
	namespace security {
		namespace ssl {

void RSAKeyExchange$EphemeralRSACredentials::init$($RSAPublicKey* popPublicKey) {
	$set(this, popPublicKey, popPublicKey);
}

RSAKeyExchange$EphemeralRSACredentials::RSAKeyExchange$EphemeralRSACredentials() {
}

$Class* RSAKeyExchange$EphemeralRSACredentials::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"popPublicKey", "Ljava/security/interfaces/RSAPublicKey;", nullptr, $FINAL, $field(RSAKeyExchange$EphemeralRSACredentials, popPublicKey)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/interfaces/RSAPublicKey;)V", nullptr, 0, $method(RSAKeyExchange$EphemeralRSACredentials, init$, void, $RSAPublicKey*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.RSAKeyExchange$EphemeralRSACredentials", "sun.security.ssl.RSAKeyExchange", "EphemeralRSACredentials", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.RSAKeyExchange$EphemeralRSACredentials",
		"java.lang.Object",
		"sun.security.ssl.SSLCredentials",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.RSAKeyExchange"
	};
	$loadClass(RSAKeyExchange$EphemeralRSACredentials, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RSAKeyExchange$EphemeralRSACredentials);
	});
	return class$;
}

$Class* RSAKeyExchange$EphemeralRSACredentials::class$ = nullptr;

		} // ssl
	} // security
} // sun