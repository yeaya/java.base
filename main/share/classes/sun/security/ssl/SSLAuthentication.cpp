#include <sun/security/ssl/SSLAuthentication.h>
#include <sun/security/ssl/SSLPossessionGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLPossessionGenerator = ::sun::security::ssl::SSLPossessionGenerator;

namespace sun {
	namespace security {
		namespace ssl {

int32_t SSLAuthentication::hashCode() {
	 return this->$SSLPossessionGenerator::hashCode();
}

bool SSLAuthentication::equals(Object$* obj) {
	 return this->$SSLPossessionGenerator::equals(obj);
}

$Object* SSLAuthentication::clone() {
	 return this->$SSLPossessionGenerator::clone();
}

$String* SSLAuthentication::toString() {
	 return this->$SSLPossessionGenerator::toString();
}

void SSLAuthentication::finalize() {
	this->$SSLPossessionGenerator::finalize();
}

$Class* SSLAuthentication::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.SSLAuthentication",
		nullptr,
		"sun.security.ssl.SSLPossessionGenerator,sun.security.ssl.SSLHandshakeBinding",
		nullptr,
		methodInfos$$
	};
	$loadClass(SSLAuthentication, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SSLAuthentication));
	});
	return class$;
}

$Class* SSLAuthentication::class$ = nullptr;

		} // ssl
	} // security
} // sun