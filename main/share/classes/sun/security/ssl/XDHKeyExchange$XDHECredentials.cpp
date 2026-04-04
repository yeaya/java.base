#include <sun/security/ssl/XDHKeyExchange$XDHECredentials.h>
#include <java/math/BigInteger.h>
#include <java/security/KeyFactory.h>
#include <java/security/PublicKey.h>
#include <java/security/interfaces/XECPublicKey.h>
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
using $NamedParameterSpec = ::java::security::spec::NamedParameterSpec;
using $XECPublicKeySpec = ::java::security::spec::XECPublicKeySpec;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroup$NamedGroupSpec = ::sun::security::ssl::NamedGroup$NamedGroupSpec;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

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
	$useLocalObjectStack();
	$init($NamedGroup$NamedGroupSpec);
	if ($nc(namedGroup)->spec != $NamedGroup$NamedGroupSpec::NAMED_GROUP_XDH) {
		$throwNew($RuntimeException, "Credentials decoding:  Not XDH named group"_s);
	}
	if (encodedPoint == nullptr || encodedPoint->length == 0) {
		return nullptr;
	}
	$var($bytes, uBytes, $cast($bytes, $nc(encodedPoint)->clone()));
	$Utilities::reverseBytes(uBytes);
	$var($BigInteger, u, $new($BigInteger, 1, uBytes));
	$var($XECPublicKeySpec, xecPublicKeySpec, $new($XECPublicKeySpec, $$new($NamedParameterSpec, namedGroup->name$), u));
	$var($KeyFactory, factory, $KeyFactory::getInstance(namedGroup->algorithm));
	$var($XECPublicKey, publicKey, $cast($XECPublicKey, $nc(factory)->generatePublic(xecPublicKeySpec)));
	return $new(XDHKeyExchange$XDHECredentials, publicKey, namedGroup);
}

XDHKeyExchange$XDHECredentials::XDHKeyExchange$XDHECredentials() {
}

$Class* XDHKeyExchange$XDHECredentials::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"popPublicKey", "Ljava/security/interfaces/XECPublicKey;", nullptr, $FINAL, $field(XDHKeyExchange$XDHECredentials, popPublicKey)},
		{"namedGroup", "Lsun/security/ssl/NamedGroup;", nullptr, $FINAL, $field(XDHKeyExchange$XDHECredentials, namedGroup)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/interfaces/XECPublicKey;Lsun/security/ssl/NamedGroup;)V", nullptr, 0, $method(XDHKeyExchange$XDHECredentials, init$, void, $XECPublicKey*, $NamedGroup*)},
		{"getNamedGroup", "()Lsun/security/ssl/NamedGroup;", nullptr, $PUBLIC, $virtualMethod(XDHKeyExchange$XDHECredentials, getNamedGroup, $NamedGroup*)},
		{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC, $virtualMethod(XDHKeyExchange$XDHECredentials, getPublicKey, $PublicKey*)},
		{"valueOf", "(Lsun/security/ssl/NamedGroup;[B)Lsun/security/ssl/XDHKeyExchange$XDHECredentials;", nullptr, $STATIC, $staticMethod(XDHKeyExchange$XDHECredentials, valueOf, XDHKeyExchange$XDHECredentials*, $NamedGroup*, $bytes*), "java.io.IOException,java.security.GeneralSecurityException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.XDHKeyExchange$XDHECredentials", "sun.security.ssl.XDHKeyExchange", "XDHECredentials", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.XDHKeyExchange$XDHECredentials",
		"java.lang.Object",
		"sun.security.ssl.NamedGroupCredentials",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.XDHKeyExchange"
	};
	$loadClass(XDHKeyExchange$XDHECredentials, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XDHKeyExchange$XDHECredentials);
	});
	return class$;
}

$Class* XDHKeyExchange$XDHECredentials::class$ = nullptr;

		} // ssl
	} // security
} // sun