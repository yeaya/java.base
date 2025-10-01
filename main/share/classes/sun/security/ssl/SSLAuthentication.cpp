#include <sun/security/ssl/SSLAuthentication.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/SSLPossessionGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLHandshakeBinding = ::sun::security::ssl::SSLHandshakeBinding;
using $SSLPossessionGenerator = ::sun::security::ssl::SSLPossessionGenerator;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLAuthentication_MethodInfo_[] = {
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _SSLAuthentication_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.SSLAuthentication",
	nullptr,
	"sun.security.ssl.SSLPossessionGenerator,sun.security.ssl.SSLHandshakeBinding",
	nullptr,
	_SSLAuthentication_MethodInfo_
};

$Object* allocate$SSLAuthentication($Class* clazz) {
	return $of($alloc(SSLAuthentication));
}

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
	$loadClass(SSLAuthentication, name, initialize, &_SSLAuthentication_ClassInfo_, allocate$SSLAuthentication);
	return class$;
}

$Class* SSLAuthentication::class$ = nullptr;

		} // ssl
	} // security
} // sun