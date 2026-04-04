#include <sun/security/ssl/SSLKeyAgreement.h>
#include <sun/security/ssl/SSLPossessionGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLPossessionGenerator = ::sun::security::ssl::SSLPossessionGenerator;

namespace sun {
	namespace security {
		namespace ssl {

int32_t SSLKeyAgreement::hashCode() {
	 return this->$SSLPossessionGenerator::hashCode();
}

bool SSLKeyAgreement::equals(Object$* obj) {
	 return this->$SSLPossessionGenerator::equals(obj);
}

$Object* SSLKeyAgreement::clone() {
	 return this->$SSLPossessionGenerator::clone();
}

$String* SSLKeyAgreement::toString() {
	 return this->$SSLPossessionGenerator::toString();
}

void SSLKeyAgreement::finalize() {
	this->$SSLPossessionGenerator::finalize();
}

$Class* SSLKeyAgreement::load$($String* name, bool initialize) {
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
		"sun.security.ssl.SSLKeyAgreement",
		nullptr,
		"sun.security.ssl.SSLPossessionGenerator,sun.security.ssl.SSLKeyAgreementGenerator,sun.security.ssl.SSLHandshakeBinding",
		nullptr,
		methodInfos$$
	};
	$loadClass(SSLKeyAgreement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SSLKeyAgreement));
	});
	return class$;
}

$Class* SSLKeyAgreement::class$ = nullptr;

		} // ssl
	} // security
} // sun