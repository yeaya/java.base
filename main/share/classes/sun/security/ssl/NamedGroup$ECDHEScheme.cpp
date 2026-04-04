#include <sun/security/ssl/NamedGroup$ECDHEScheme.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/security/PublicKey.h>
#include <java/security/SecureRandom.h>
#include <sun/security/ssl/ECDHKeyExchange$ECDHECredentials.h>
#include <sun/security/ssl/ECDHKeyExchange$ECDHEPossession.h>
#include <sun/security/ssl/ECDHKeyExchange.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/NamedGroup$ExceptionSupplier.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/NamedGroupPossession.h>
#include <sun/security/ssl/SSLCredentials.h>
#include <sun/security/ssl/SSLKeyAgreementGenerator.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLPossession.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $SecureRandom = ::java::security::SecureRandom;
using $ECDHKeyExchange = ::sun::security::ssl::ECDHKeyExchange;
using $ECDHKeyExchange$ECDHECredentials = ::sun::security::ssl::ECDHKeyExchange$ECDHECredentials;
using $ECDHKeyExchange$ECDHEPossession = ::sun::security::ssl::ECDHKeyExchange$ECDHEPossession;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroup$ExceptionSupplier = ::sun::security::ssl::NamedGroup$ExceptionSupplier;
using $NamedGroupPossession = ::sun::security::ssl::NamedGroupPossession;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLPossession = ::sun::security::ssl::SSLPossession;

namespace sun {
	namespace security {
		namespace ssl {

NamedGroup$ECDHEScheme* NamedGroup$ECDHEScheme::instance = nullptr;

void NamedGroup$ECDHEScheme::init$() {
}

$bytes* NamedGroup$ECDHEScheme::encodePossessionPublicKey($NamedGroupPossession* namedGroupPossession) {
	return $nc($cast($ECDHKeyExchange$ECDHEPossession, namedGroupPossession))->encode();
}

$SSLCredentials* NamedGroup$ECDHEScheme::decodeCredentials($NamedGroup* ng, $bytes* encoded, $AlgorithmConstraints* constraints, $NamedGroup$ExceptionSupplier* onConstraintFail) {
	$useLocalObjectStack();
	$var($ECDHKeyExchange$ECDHECredentials, result, $ECDHKeyExchange$ECDHECredentials::valueOf(ng, encoded));
	checkConstraints($($nc(result)->getPublicKey()), constraints, onConstraintFail);
	return result;
}

$SSLPossession* NamedGroup$ECDHEScheme::createPossession($NamedGroup* ng, $SecureRandom* random) {
	return $new($ECDHKeyExchange$ECDHEPossession, ng, random);
}

$SSLKeyDerivation* NamedGroup$ECDHEScheme::createKeyDerivation($HandshakeContext* hc) {
	$init($ECDHKeyExchange);
	return $nc($ECDHKeyExchange::ecdheKAGenerator)->createKeyDerivation(hc);
}

void NamedGroup$ECDHEScheme::clinit$($Class* clazz) {
	$assignStatic(NamedGroup$ECDHEScheme::instance, $new(NamedGroup$ECDHEScheme));
}

NamedGroup$ECDHEScheme::NamedGroup$ECDHEScheme() {
}

$Class* NamedGroup$ECDHEScheme::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/security/ssl/NamedGroup$ECDHEScheme;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NamedGroup$ECDHEScheme, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NamedGroup$ECDHEScheme, init$, void)},
		{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, $virtualMethod(NamedGroup$ECDHEScheme, createKeyDerivation, $SSLKeyDerivation*, $HandshakeContext*), "java.io.IOException"},
		{"createPossession", "(Lsun/security/ssl/NamedGroup;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLPossession;", nullptr, $PUBLIC, $virtualMethod(NamedGroup$ECDHEScheme, createPossession, $SSLPossession*, $NamedGroup*, $SecureRandom*)},
		{"decodeCredentials", "(Lsun/security/ssl/NamedGroup;[BLjava/security/AlgorithmConstraints;Lsun/security/ssl/NamedGroup$ExceptionSupplier;)Lsun/security/ssl/SSLCredentials;", nullptr, $PUBLIC, $virtualMethod(NamedGroup$ECDHEScheme, decodeCredentials, $SSLCredentials*, $NamedGroup*, $bytes*, $AlgorithmConstraints*, $NamedGroup$ExceptionSupplier*), "java.io.IOException,java.security.GeneralSecurityException"},
		{"encodePossessionPublicKey", "(Lsun/security/ssl/NamedGroupPossession;)[B", nullptr, $PUBLIC, $virtualMethod(NamedGroup$ECDHEScheme, encodePossessionPublicKey, $bytes*, $NamedGroupPossession*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.NamedGroup$ECDHEScheme", "sun.security.ssl.NamedGroup", "ECDHEScheme", $PRIVATE | $STATIC},
		{"sun.security.ssl.NamedGroup$NamedGroupScheme", "sun.security.ssl.NamedGroup", "NamedGroupScheme", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.NamedGroup$ECDHEScheme",
		"java.lang.Object",
		"sun.security.ssl.NamedGroup$NamedGroupScheme",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.NamedGroup"
	};
	$loadClass(NamedGroup$ECDHEScheme, name, initialize, &classInfo$$, NamedGroup$ECDHEScheme::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NamedGroup$ECDHEScheme);
	});
	return class$;
}

$Class* NamedGroup$ECDHEScheme::class$ = nullptr;

		} // ssl
	} // security
} // sun