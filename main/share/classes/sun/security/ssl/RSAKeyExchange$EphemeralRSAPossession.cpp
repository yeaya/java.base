#include <sun/security/ssl/RSAKeyExchange$EphemeralRSAPossession.h>

#include <java/security/PrivateKey.h>
#include <java/security/interfaces/RSAPublicKey.h>
#include <sun/security/ssl/RSAKeyExchange.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $RSAPublicKey = ::java::security::interfaces::RSAPublicKey;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _RSAKeyExchange$EphemeralRSAPossession_FieldInfo_[] = {
	{"popPublicKey", "Ljava/security/interfaces/RSAPublicKey;", nullptr, $FINAL, $field(RSAKeyExchange$EphemeralRSAPossession, popPublicKey)},
	{"popPrivateKey", "Ljava/security/PrivateKey;", nullptr, $FINAL, $field(RSAKeyExchange$EphemeralRSAPossession, popPrivateKey)},
	{}
};

$MethodInfo _RSAKeyExchange$EphemeralRSAPossession_MethodInfo_[] = {
	{"<init>", "(Ljava/security/PrivateKey;Ljava/security/interfaces/RSAPublicKey;)V", nullptr, 0, $method(static_cast<void(RSAKeyExchange$EphemeralRSAPossession::*)($PrivateKey*,$RSAPublicKey*)>(&RSAKeyExchange$EphemeralRSAPossession::init$))},
	{}
};

$InnerClassInfo _RSAKeyExchange$EphemeralRSAPossession_InnerClassesInfo_[] = {
	{"sun.security.ssl.RSAKeyExchange$EphemeralRSAPossession", "sun.security.ssl.RSAKeyExchange", "EphemeralRSAPossession", $STATIC | $FINAL},
	{}
};

$ClassInfo _RSAKeyExchange$EphemeralRSAPossession_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RSAKeyExchange$EphemeralRSAPossession",
	"java.lang.Object",
	"sun.security.ssl.SSLPossession",
	_RSAKeyExchange$EphemeralRSAPossession_FieldInfo_,
	_RSAKeyExchange$EphemeralRSAPossession_MethodInfo_,
	nullptr,
	nullptr,
	_RSAKeyExchange$EphemeralRSAPossession_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.RSAKeyExchange"
};

$Object* allocate$RSAKeyExchange$EphemeralRSAPossession($Class* clazz) {
	return $of($alloc(RSAKeyExchange$EphemeralRSAPossession));
}

void RSAKeyExchange$EphemeralRSAPossession::init$($PrivateKey* popPrivateKey, $RSAPublicKey* popPublicKey) {
	$set(this, popPublicKey, popPublicKey);
	$set(this, popPrivateKey, popPrivateKey);
}

RSAKeyExchange$EphemeralRSAPossession::RSAKeyExchange$EphemeralRSAPossession() {
}

$Class* RSAKeyExchange$EphemeralRSAPossession::load$($String* name, bool initialize) {
	$loadClass(RSAKeyExchange$EphemeralRSAPossession, name, initialize, &_RSAKeyExchange$EphemeralRSAPossession_ClassInfo_, allocate$RSAKeyExchange$EphemeralRSAPossession);
	return class$;
}

$Class* RSAKeyExchange$EphemeralRSAPossession::class$ = nullptr;

		} // ssl
	} // security
} // sun