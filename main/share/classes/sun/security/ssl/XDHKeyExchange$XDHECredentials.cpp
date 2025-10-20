#include <sun/security/ssl/XDHKeyExchange$XDHECredentials.h>

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
#include <java/security/interfaces/XECPublicKey.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/KeySpec.h>
#include <java/security/spec/NamedParameterSpec.h>
#include <java/security/spec/XECPublicKeySpec.h>
#include <sun/security/ssl/NamedGroup$NamedGroupSpec.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/Utilities.h>
#include <sun/security/ssl/XDHKeyExchange.h>
#include <jcpp.h>

#undef NAMED_GROUP_XDH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;
using $KeyFactory = ::java::security::KeyFactory;
using $PublicKey = ::java::security::PublicKey;
using $XECPublicKey = ::java::security::interfaces::XECPublicKey;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $KeySpec = ::java::security::spec::KeySpec;
using $NamedParameterSpec = ::java::security::spec::NamedParameterSpec;
using $XECPublicKeySpec = ::java::security::spec::XECPublicKeySpec;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroup$NamedGroupSpec = ::sun::security::ssl::NamedGroup$NamedGroupSpec;
using $NamedGroupCredentials = ::sun::security::ssl::NamedGroupCredentials;
using $Utilities = ::sun::security::ssl::Utilities;
using $XDHKeyExchange = ::sun::security::ssl::XDHKeyExchange;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _XDHKeyExchange$XDHECredentials_FieldInfo_[] = {
	{"popPublicKey", "Ljava/security/interfaces/XECPublicKey;", nullptr, $FINAL, $field(XDHKeyExchange$XDHECredentials, popPublicKey)},
	{"namedGroup", "Lsun/security/ssl/NamedGroup;", nullptr, $FINAL, $field(XDHKeyExchange$XDHECredentials, namedGroup)},
	{}
};

$MethodInfo _XDHKeyExchange$XDHECredentials_MethodInfo_[] = {
	{"<init>", "(Ljava/security/interfaces/XECPublicKey;Lsun/security/ssl/NamedGroup;)V", nullptr, 0, $method(static_cast<void(XDHKeyExchange$XDHECredentials::*)($XECPublicKey*,$NamedGroup*)>(&XDHKeyExchange$XDHECredentials::init$))},
	{"getNamedGroup", "()Lsun/security/ssl/NamedGroup;", nullptr, $PUBLIC},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC},
	{"valueOf", "(Lsun/security/ssl/NamedGroup;[B)Lsun/security/ssl/XDHKeyExchange$XDHECredentials;", nullptr, $STATIC, $method(static_cast<XDHKeyExchange$XDHECredentials*(*)($NamedGroup*,$bytes*)>(&XDHKeyExchange$XDHECredentials::valueOf)), "java.io.IOException,java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _XDHKeyExchange$XDHECredentials_InnerClassesInfo_[] = {
	{"sun.security.ssl.XDHKeyExchange$XDHECredentials", "sun.security.ssl.XDHKeyExchange", "XDHECredentials", $STATIC | $FINAL},
	{}
};

$ClassInfo _XDHKeyExchange$XDHECredentials_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.XDHKeyExchange$XDHECredentials",
	"java.lang.Object",
	"sun.security.ssl.NamedGroupCredentials",
	_XDHKeyExchange$XDHECredentials_FieldInfo_,
	_XDHKeyExchange$XDHECredentials_MethodInfo_,
	nullptr,
	nullptr,
	_XDHKeyExchange$XDHECredentials_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.XDHKeyExchange"
};

$Object* allocate$XDHKeyExchange$XDHECredentials($Class* clazz) {
	return $of($alloc(XDHKeyExchange$XDHECredentials));
}

void XDHKeyExchange$XDHECredentials::init$($XECPublicKey* popPublicKey, $NamedGroup* namedGroup) {
	$set(this, popPublicKey, popPublicKey);
	$set(this, namedGroup, namedGroup);
}

$PublicKey* XDHKeyExchange$XDHECredentials::getPublicKey() {
	return this->popPublicKey;
}

$NamedGroup* XDHKeyExchange$XDHECredentials::getNamedGroup() {
	return this->namedGroup;
}

XDHKeyExchange$XDHECredentials* XDHKeyExchange$XDHECredentials::valueOf($NamedGroup* namedGroup, $bytes* encodedPoint) {
	$init(XDHKeyExchange$XDHECredentials);
	$useLocalCurrentObjectStackCache();
	$init($NamedGroup$NamedGroupSpec);
	if ($nc(namedGroup)->spec != $NamedGroup$NamedGroupSpec::NAMED_GROUP_XDH) {
		$throwNew($RuntimeException, "Credentials decoding:  Not XDH named group"_s);
	}
	if (encodedPoint == nullptr || $nc(encodedPoint)->length == 0) {
		return nullptr;
	}
	$var($bytes, uBytes, $cast($bytes, $nc(encodedPoint)->clone()));
	$Utilities::reverseBytes(uBytes);
	$var($BigInteger, u, $new($BigInteger, 1, uBytes));
	$var($XECPublicKeySpec, xecPublicKeySpec, $new($XECPublicKeySpec, $$new($NamedParameterSpec, $nc(namedGroup)->name$), u));
	$var($KeyFactory, factory, $KeyFactory::getInstance($nc(namedGroup)->algorithm));
	$var($XECPublicKey, publicKey, $cast($XECPublicKey, $nc(factory)->generatePublic(xecPublicKeySpec)));
	return $new(XDHKeyExchange$XDHECredentials, publicKey, namedGroup);
}

XDHKeyExchange$XDHECredentials::XDHKeyExchange$XDHECredentials() {
}

$Class* XDHKeyExchange$XDHECredentials::load$($String* name, bool initialize) {
	$loadClass(XDHKeyExchange$XDHECredentials, name, initialize, &_XDHKeyExchange$XDHECredentials_ClassInfo_, allocate$XDHKeyExchange$XDHECredentials);
	return class$;
}

$Class* XDHKeyExchange$XDHECredentials::class$ = nullptr;

		} // ssl
	} // security
} // sun