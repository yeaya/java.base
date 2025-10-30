#include <sun/security/ssl/SSLKeyAgreement.h>

#include <sun/security/ssl/SSLPossessionGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLHandshakeBinding = ::sun::security::ssl::SSLHandshakeBinding;
using $SSLKeyAgreementGenerator = ::sun::security::ssl::SSLKeyAgreementGenerator;
using $SSLPossessionGenerator = ::sun::security::ssl::SSLPossessionGenerator;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLKeyAgreement_MethodInfo_[] = {
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _SSLKeyAgreement_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.SSLKeyAgreement",
	nullptr,
	"sun.security.ssl.SSLPossessionGenerator,sun.security.ssl.SSLKeyAgreementGenerator,sun.security.ssl.SSLHandshakeBinding",
	nullptr,
	_SSLKeyAgreement_MethodInfo_
};

$Object* allocate$SSLKeyAgreement($Class* clazz) {
	return $of($alloc(SSLKeyAgreement));
}

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
	$loadClass(SSLKeyAgreement, name, initialize, &_SSLKeyAgreement_ClassInfo_, allocate$SSLKeyAgreement);
	return class$;
}

$Class* SSLKeyAgreement::class$ = nullptr;

		} // ssl
	} // security
} // sun