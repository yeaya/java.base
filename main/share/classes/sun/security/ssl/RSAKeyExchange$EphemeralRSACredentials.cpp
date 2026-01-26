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

$FieldInfo _RSAKeyExchange$EphemeralRSACredentials_FieldInfo_[] = {
	{"popPublicKey", "Ljava/security/interfaces/RSAPublicKey;", nullptr, $FINAL, $field(RSAKeyExchange$EphemeralRSACredentials, popPublicKey)},
	{}
};

$MethodInfo _RSAKeyExchange$EphemeralRSACredentials_MethodInfo_[] = {
	{"<init>", "(Ljava/security/interfaces/RSAPublicKey;)V", nullptr, 0, $method(RSAKeyExchange$EphemeralRSACredentials, init$, void, $RSAPublicKey*)},
	{}
};

$InnerClassInfo _RSAKeyExchange$EphemeralRSACredentials_InnerClassesInfo_[] = {
	{"sun.security.ssl.RSAKeyExchange$EphemeralRSACredentials", "sun.security.ssl.RSAKeyExchange", "EphemeralRSACredentials", $STATIC | $FINAL},
	{}
};

$ClassInfo _RSAKeyExchange$EphemeralRSACredentials_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RSAKeyExchange$EphemeralRSACredentials",
	"java.lang.Object",
	"sun.security.ssl.SSLCredentials",
	_RSAKeyExchange$EphemeralRSACredentials_FieldInfo_,
	_RSAKeyExchange$EphemeralRSACredentials_MethodInfo_,
	nullptr,
	nullptr,
	_RSAKeyExchange$EphemeralRSACredentials_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.RSAKeyExchange"
};

$Object* allocate$RSAKeyExchange$EphemeralRSACredentials($Class* clazz) {
	return $of($alloc(RSAKeyExchange$EphemeralRSACredentials));
}

void RSAKeyExchange$EphemeralRSACredentials::init$($RSAPublicKey* popPublicKey) {
	$set(this, popPublicKey, popPublicKey);
}

RSAKeyExchange$EphemeralRSACredentials::RSAKeyExchange$EphemeralRSACredentials() {
}

$Class* RSAKeyExchange$EphemeralRSACredentials::load$($String* name, bool initialize) {
	$loadClass(RSAKeyExchange$EphemeralRSACredentials, name, initialize, &_RSAKeyExchange$EphemeralRSACredentials_ClassInfo_, allocate$RSAKeyExchange$EphemeralRSACredentials);
	return class$;
}

$Class* RSAKeyExchange$EphemeralRSACredentials::class$ = nullptr;

		} // ssl
	} // security
} // sun