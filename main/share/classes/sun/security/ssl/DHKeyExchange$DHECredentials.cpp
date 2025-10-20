#include <sun/security/ssl/DHKeyExchange$DHECredentials.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/KeyFactory.h>
#include <java/security/PublicKey.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/KeySpec.h>
#include <javax/crypto/interfaces/DHPublicKey.h>
#include <javax/crypto/spec/DHParameterSpec.h>
#include <javax/crypto/spec/DHPublicKeySpec.h>
#include <sun/security/ssl/DHKeyExchange.h>
#include <sun/security/ssl/NamedGroup$NamedGroupSpec.h>
#include <sun/security/ssl/NamedGroup.h>
#include <jcpp.h>

#undef NAMED_GROUP_FFDHE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;
using $KeyFactory = ::java::security::KeyFactory;
using $PublicKey = ::java::security::PublicKey;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $KeySpec = ::java::security::spec::KeySpec;
using $DHPublicKey = ::javax::crypto::interfaces::DHPublicKey;
using $DHParameterSpec = ::javax::crypto::spec::DHParameterSpec;
using $DHPublicKeySpec = ::javax::crypto::spec::DHPublicKeySpec;
using $DHKeyExchange = ::sun::security::ssl::DHKeyExchange;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroup$NamedGroupSpec = ::sun::security::ssl::NamedGroup$NamedGroupSpec;
using $NamedGroupCredentials = ::sun::security::ssl::NamedGroupCredentials;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _DHKeyExchange$DHECredentials_FieldInfo_[] = {
	{"popPublicKey", "Ljavax/crypto/interfaces/DHPublicKey;", nullptr, $FINAL, $field(DHKeyExchange$DHECredentials, popPublicKey)},
	{"namedGroup", "Lsun/security/ssl/NamedGroup;", nullptr, $FINAL, $field(DHKeyExchange$DHECredentials, namedGroup)},
	{}
};

$MethodInfo _DHKeyExchange$DHECredentials_MethodInfo_[] = {
	{"<init>", "(Ljavax/crypto/interfaces/DHPublicKey;Lsun/security/ssl/NamedGroup;)V", nullptr, 0, $method(static_cast<void(DHKeyExchange$DHECredentials::*)($DHPublicKey*,$NamedGroup*)>(&DHKeyExchange$DHECredentials::init$))},
	{"getNamedGroup", "()Lsun/security/ssl/NamedGroup;", nullptr, $PUBLIC},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC},
	{"valueOf", "(Lsun/security/ssl/NamedGroup;[B)Lsun/security/ssl/DHKeyExchange$DHECredentials;", nullptr, $STATIC, $method(static_cast<DHKeyExchange$DHECredentials*(*)($NamedGroup*,$bytes*)>(&DHKeyExchange$DHECredentials::valueOf)), "java.io.IOException,java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _DHKeyExchange$DHECredentials_InnerClassesInfo_[] = {
	{"sun.security.ssl.DHKeyExchange$DHECredentials", "sun.security.ssl.DHKeyExchange", "DHECredentials", $STATIC | $FINAL},
	{}
};

$ClassInfo _DHKeyExchange$DHECredentials_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.DHKeyExchange$DHECredentials",
	"java.lang.Object",
	"sun.security.ssl.NamedGroupCredentials",
	_DHKeyExchange$DHECredentials_FieldInfo_,
	_DHKeyExchange$DHECredentials_MethodInfo_,
	nullptr,
	nullptr,
	_DHKeyExchange$DHECredentials_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.DHKeyExchange"
};

$Object* allocate$DHKeyExchange$DHECredentials($Class* clazz) {
	return $of($alloc(DHKeyExchange$DHECredentials));
}

void DHKeyExchange$DHECredentials::init$($DHPublicKey* popPublicKey, $NamedGroup* namedGroup) {
	$set(this, popPublicKey, popPublicKey);
	$set(this, namedGroup, namedGroup);
}

$PublicKey* DHKeyExchange$DHECredentials::getPublicKey() {
	return this->popPublicKey;
}

$NamedGroup* DHKeyExchange$DHECredentials::getNamedGroup() {
	return this->namedGroup;
}

DHKeyExchange$DHECredentials* DHKeyExchange$DHECredentials::valueOf($NamedGroup* ng, $bytes* encodedPublic) {
	$init(DHKeyExchange$DHECredentials);
	$useLocalCurrentObjectStackCache();
	$init($NamedGroup$NamedGroupSpec);
	if ($nc(ng)->spec != $NamedGroup$NamedGroupSpec::NAMED_GROUP_FFDHE) {
		$throwNew($RuntimeException, "Credentials decoding:  Not FFDHE named group"_s);
	}
	if (encodedPublic == nullptr || $nc(encodedPublic)->length == 0) {
		return nullptr;
	}
	$var($DHParameterSpec, params, $cast($DHParameterSpec, $nc(ng)->keAlgParamSpec));
	$var($KeyFactory, kf, $KeyFactory::getInstance("DiffieHellman"_s));
	$var($BigInteger, var$0, $new($BigInteger, 1, encodedPublic));
	$var($BigInteger, var$1, $nc(params)->getP());
	$var($DHPublicKeySpec, spec, $new($DHPublicKeySpec, var$0, var$1, $(params->getG())));
	$var($DHPublicKey, publicKey, $cast($DHPublicKey, $nc(kf)->generatePublic(spec)));
	return $new(DHKeyExchange$DHECredentials, publicKey, ng);
}

DHKeyExchange$DHECredentials::DHKeyExchange$DHECredentials() {
}

$Class* DHKeyExchange$DHECredentials::load$($String* name, bool initialize) {
	$loadClass(DHKeyExchange$DHECredentials, name, initialize, &_DHKeyExchange$DHECredentials_ClassInfo_, allocate$DHKeyExchange$DHECredentials);
	return class$;
}

$Class* DHKeyExchange$DHECredentials::class$ = nullptr;

		} // ssl
	} // security
} // sun