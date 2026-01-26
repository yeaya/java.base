#include <sun/security/ssl/ECDHKeyExchange$ECDHECredentials.h>

#include <java/security/KeyFactory.h>
#include <java/security/PublicKey.h>
#include <java/security/interfaces/ECPublicKey.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/security/spec/ECPoint.h>
#include <java/security/spec/ECPublicKeySpec.h>
#include <java/security/spec/EllipticCurve.h>
#include <java/security/spec/KeySpec.h>
#include <sun/security/ssl/ECDHKeyExchange.h>
#include <sun/security/ssl/NamedGroup$NamedGroupSpec.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/util/ECUtil.h>
#include <jcpp.h>

#undef NAMED_GROUP_ECDHE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $KeyFactory = ::java::security::KeyFactory;
using $PublicKey = ::java::security::PublicKey;
using $ECPublicKey = ::java::security::interfaces::ECPublicKey;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $ECPoint = ::java::security::spec::ECPoint;
using $ECPublicKeySpec = ::java::security::spec::ECPublicKeySpec;
using $KeySpec = ::java::security::spec::KeySpec;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroup$NamedGroupSpec = ::sun::security::ssl::NamedGroup$NamedGroupSpec;
using $ECUtil = ::sun::security::util::ECUtil;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ECDHKeyExchange$ECDHECredentials_FieldInfo_[] = {
	{"popPublicKey", "Ljava/security/interfaces/ECPublicKey;", nullptr, $FINAL, $field(ECDHKeyExchange$ECDHECredentials, popPublicKey)},
	{"namedGroup", "Lsun/security/ssl/NamedGroup;", nullptr, $FINAL, $field(ECDHKeyExchange$ECDHECredentials, namedGroup)},
	{}
};

$MethodInfo _ECDHKeyExchange$ECDHECredentials_MethodInfo_[] = {
	{"<init>", "(Ljava/security/interfaces/ECPublicKey;Lsun/security/ssl/NamedGroup;)V", nullptr, 0, $method(ECDHKeyExchange$ECDHECredentials, init$, void, $ECPublicKey*, $NamedGroup*)},
	{"getNamedGroup", "()Lsun/security/ssl/NamedGroup;", nullptr, $PUBLIC, $virtualMethod(ECDHKeyExchange$ECDHECredentials, getNamedGroup, $NamedGroup*)},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC, $virtualMethod(ECDHKeyExchange$ECDHECredentials, getPublicKey, $PublicKey*)},
	{"valueOf", "(Lsun/security/ssl/NamedGroup;[B)Lsun/security/ssl/ECDHKeyExchange$ECDHECredentials;", nullptr, $STATIC, $staticMethod(ECDHKeyExchange$ECDHECredentials, valueOf, ECDHKeyExchange$ECDHECredentials*, $NamedGroup*, $bytes*), "java.io.IOException,java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _ECDHKeyExchange$ECDHECredentials_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECDHKeyExchange$ECDHECredentials", "sun.security.ssl.ECDHKeyExchange", "ECDHECredentials", $STATIC | $FINAL},
	{}
};

$ClassInfo _ECDHKeyExchange$ECDHECredentials_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECDHKeyExchange$ECDHECredentials",
	"java.lang.Object",
	"sun.security.ssl.NamedGroupCredentials",
	_ECDHKeyExchange$ECDHECredentials_FieldInfo_,
	_ECDHKeyExchange$ECDHECredentials_MethodInfo_,
	nullptr,
	nullptr,
	_ECDHKeyExchange$ECDHECredentials_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECDHKeyExchange"
};

$Object* allocate$ECDHKeyExchange$ECDHECredentials($Class* clazz) {
	return $of($alloc(ECDHKeyExchange$ECDHECredentials));
}

void ECDHKeyExchange$ECDHECredentials::init$($ECPublicKey* popPublicKey, $NamedGroup* namedGroup) {
	$set(this, popPublicKey, popPublicKey);
	$set(this, namedGroup, namedGroup);
}

$PublicKey* ECDHKeyExchange$ECDHECredentials::getPublicKey() {
	return this->popPublicKey;
}

$NamedGroup* ECDHKeyExchange$ECDHECredentials::getNamedGroup() {
	return this->namedGroup;
}

ECDHKeyExchange$ECDHECredentials* ECDHKeyExchange$ECDHECredentials::valueOf($NamedGroup* namedGroup, $bytes* encodedPoint) {
	$init(ECDHKeyExchange$ECDHECredentials);
	$useLocalCurrentObjectStackCache();
	$init($NamedGroup$NamedGroupSpec);
	if ($nc(namedGroup)->spec != $NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE) {
		$throwNew($RuntimeException, "Credentials decoding:  Not ECDHE named group"_s);
	}
	if (encodedPoint == nullptr || $nc(encodedPoint)->length == 0) {
		return nullptr;
	}
	$var($ECParameterSpec, parameters, $cast($ECParameterSpec, $nc(namedGroup)->keAlgParamSpec));
	$var($ECPoint, point, $ECUtil::decodePoint(encodedPoint, $($nc(parameters)->getCurve())));
	$var($KeyFactory, factory, $KeyFactory::getInstance("EC"_s));
	$var($ECPublicKey, publicKey, $cast($ECPublicKey, $nc(factory)->generatePublic($$new($ECPublicKeySpec, point, parameters))));
	return $new(ECDHKeyExchange$ECDHECredentials, publicKey, namedGroup);
}

ECDHKeyExchange$ECDHECredentials::ECDHKeyExchange$ECDHECredentials() {
}

$Class* ECDHKeyExchange$ECDHECredentials::load$($String* name, bool initialize) {
	$loadClass(ECDHKeyExchange$ECDHECredentials, name, initialize, &_ECDHKeyExchange$ECDHECredentials_ClassInfo_, allocate$ECDHKeyExchange$ECDHECredentials);
	return class$;
}

$Class* ECDHKeyExchange$ECDHECredentials::class$ = nullptr;

		} // ssl
	} // security
} // sun