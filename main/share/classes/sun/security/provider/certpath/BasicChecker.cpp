#include <sun/security/provider/certpath/BasicChecker.h>
#include <java/math/BigInteger.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/KeyFactory.h>
#include <java/security/PublicKey.h>
#include <java/security/SignatureException.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathValidatorException$BasicReason.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateExpiredException.h>
#include <java/security/cert/CertificateNotYetValidException.h>
#include <java/security/cert/PKIXCertPathChecker.h>
#include <java/security/cert/PKIXReason.h>
#include <java/security/cert/TrustAnchor.h>
#include <java/security/cert/X509Certificate.h>
#include <java/security/interfaces/DSAParams.h>
#include <java/security/interfaces/DSAPublicKey.h>
#include <java/security/spec/DSAPublicKeySpec.h>
#include <java/util/Collection.h>
#include <java/util/Date.h>
#include <java/util/Set.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/provider/certpath/PKIX.h>
#include <sun/security/util/Debug.h>
#include <sun/security/x509/X500Name.h>
#include <jcpp.h>

#undef EXPIRED
#undef INVALID_SIGNATURE
#undef NAME_CHAINING
#undef NOT_YET_VALID

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $KeyFactory = ::java::security::KeyFactory;
using $PublicKey = ::java::security::PublicKey;
using $SignatureException = ::java::security::SignatureException;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathValidatorException = ::java::security::cert::CertPathValidatorException;
using $CertPathValidatorException$BasicReason = ::java::security::cert::CertPathValidatorException$BasicReason;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateExpiredException = ::java::security::cert::CertificateExpiredException;
using $CertificateNotYetValidException = ::java::security::cert::CertificateNotYetValidException;
using $PKIXCertPathChecker = ::java::security::cert::PKIXCertPathChecker;
using $PKIXReason = ::java::security::cert::PKIXReason;
using $TrustAnchor = ::java::security::cert::TrustAnchor;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $DSAParams = ::java::security::interfaces::DSAParams;
using $DSAPublicKey = ::java::security::interfaces::DSAPublicKey;
using $DSAPublicKeySpec = ::java::security::spec::DSAPublicKeySpec;
using $Collection = ::java::util::Collection;
using $Date = ::java::util::Date;
using $Set = ::java::util::Set;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $PKIX = ::sun::security::provider::certpath::PKIX;
using $Debug = ::sun::security::util::Debug;
using $X500Name = ::sun::security::x509::X500Name;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$Debug* BasicChecker::debug = nullptr;

void BasicChecker::init$($TrustAnchor* anchor, $Date* date, $String* sigProvider, bool sigOnly) {
	$useLocalObjectStack();
	$PKIXCertPathChecker::init$();
	if ($nc(anchor)->getTrustedCert() != nullptr) {
		$set(this, trustedPubKey, $$nc(anchor->getTrustedCert())->getPublicKey());
		$set(this, caName, $$nc(anchor->getTrustedCert())->getSubjectX500Principal());
	} else {
		$set(this, trustedPubKey, anchor->getCAPublicKey());
		$set(this, caName, anchor->getCA());
	}
	$set(this, date, date);
	$set(this, sigProvider, sigProvider);
	this->sigOnly = sigOnly;
	$set(this, prevPubKey, this->trustedPubKey);
}

void BasicChecker::init(bool forward) {
	if (!forward) {
		$set(this, prevPubKey, this->trustedPubKey);
		if ($PKIX::isDSAPublicKeyWithoutParams(this->prevPubKey)) {
			$throwNew($CertPathValidatorException, "Key parameters missing"_s);
		}
		$set(this, prevSubject, this->caName);
	} else {
		$throwNew($CertPathValidatorException, "forward checking not supported"_s);
	}
}

bool BasicChecker::isForwardCheckingSupported() {
	return false;
}

$Set* BasicChecker::getSupportedExtensions() {
	return nullptr;
}

void BasicChecker::check($Certificate* cert, $Collection* unresolvedCritExts) {
	$var($X509Certificate, currCert, $cast($X509Certificate, cert));
	if (!this->sigOnly) {
		verifyValidity(currCert);
		verifyNameChaining(currCert);
	}
	verifySignature(currCert);
	updateState(currCert);
}

void BasicChecker::verifySignature($X509Certificate* cert) {
	$useLocalObjectStack();
	$var($String, msg, "signature"_s);
	if (BasicChecker::debug != nullptr) {
		BasicChecker::debug->println($$str({"---checking "_s, msg, "..."_s}));
	}
	try {
		$nc(cert)->verify(this->prevPubKey, this->sigProvider);
	} catch ($SignatureException& e) {
		$init($CertPathValidatorException$BasicReason);
		$throwNew($CertPathValidatorException, $$str({msg, " check failed"_s}), e, nullptr, -1, $CertPathValidatorException$BasicReason::INVALID_SIGNATURE);
	} catch ($GeneralSecurityException& e) {
		$throwNew($CertPathValidatorException, $$str({msg, " check failed"_s}), e);
	}
	if (BasicChecker::debug != nullptr) {
		BasicChecker::debug->println($$str({msg, " verified."_s}));
	}
}

void BasicChecker::verifyValidity($X509Certificate* cert) {
	$useLocalObjectStack();
	$var($String, msg, "validity"_s);
	if (BasicChecker::debug != nullptr) {
		BasicChecker::debug->println($$str({"---checking "_s, msg, ":"_s, $($nc(this->date)->toString()), "..."_s}));
	}
	try {
		$nc(cert)->checkValidity(this->date);
	} catch ($CertificateExpiredException& e) {
		$init($CertPathValidatorException$BasicReason);
		$throwNew($CertPathValidatorException, $$str({msg, " check failed"_s}), e, nullptr, -1, $CertPathValidatorException$BasicReason::EXPIRED);
	} catch ($CertificateNotYetValidException& e) {
		$init($CertPathValidatorException$BasicReason);
		$throwNew($CertPathValidatorException, $$str({msg, " check failed"_s}), e, nullptr, -1, $CertPathValidatorException$BasicReason::NOT_YET_VALID);
	}
	if (BasicChecker::debug != nullptr) {
		BasicChecker::debug->println($$str({msg, " verified."_s}));
	}
}

void BasicChecker::verifyNameChaining($X509Certificate* cert) {
	$useLocalObjectStack();
	if (this->prevSubject != nullptr) {
		$var($String, msg, "subject/issuer name chaining"_s);
		if (BasicChecker::debug != nullptr) {
			BasicChecker::debug->println($$str({"---checking "_s, msg, "..."_s}));
		}
		$var($X500Principal, currIssuer, $nc(cert)->getIssuerX500Principal());
		if ($$nc($X500Name::asX500Name(currIssuer))->isEmpty()) {
			$init($PKIXReason);
			$throwNew($CertPathValidatorException, $$str({msg, " check failed: empty/null issuer DN in certificate is invalid"_s}), nullptr, nullptr, -1, $PKIXReason::NAME_CHAINING);
		}
		if (!($nc(currIssuer)->equals(this->prevSubject))) {
			$init($PKIXReason);
			$throwNew($CertPathValidatorException, $$str({msg, " check failed"_s}), nullptr, nullptr, -1, $PKIXReason::NAME_CHAINING);
		}
		if (BasicChecker::debug != nullptr) {
			BasicChecker::debug->println($$str({msg, " verified."_s}));
		}
	}
}

void BasicChecker::updateState($X509Certificate* currCert) {
	$useLocalObjectStack();
	$var($PublicKey, cKey, $nc(currCert)->getPublicKey());
	if (BasicChecker::debug != nullptr) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("BasicChecker.updateState issuer: "_s);
		var$0->append($($$nc(currCert->getIssuerX500Principal())->toString()));
		var$0->append("; subject: "_s);
		var$0->append($(currCert->getSubjectX500Principal()));
		var$0->append("; serial#: "_s);
		var$0->append($($$nc(currCert->getSerialNumber())->toString()));
		BasicChecker::debug->println($$str(var$0));
	}
	if ($PKIX::isDSAPublicKeyWithoutParams(cKey)) {
		$assign(cKey, makeInheritedParamsKey(cKey, this->prevPubKey));
		if (BasicChecker::debug != nullptr) {
			BasicChecker::debug->println("BasicChecker.updateState Made key with inherited params"_s);
		}
	}
	$set(this, prevPubKey, cKey);
	$set(this, prevSubject, currCert->getSubjectX500Principal());
}

$PublicKey* BasicChecker::makeInheritedParamsKey($PublicKey* keyValueKey, $PublicKey* keyParamsKey) {
	$init(BasicChecker);
	$useLocalObjectStack();
	if (!($instanceOf($DSAPublicKey, keyValueKey)) || !($instanceOf($DSAPublicKey, keyParamsKey))) {
		$throwNew($CertPathValidatorException, "Input key is not appropriate type for inheriting parameters"_s);
	}
	$var($DSAParams, params, $nc($cast($DSAPublicKey, keyParamsKey))->getParams());
	if (params == nullptr) {
		$throwNew($CertPathValidatorException, "Key parameters missing"_s);
	}
	try {
		$var($BigInteger, y, $nc($cast($DSAPublicKey, keyValueKey))->getY());
		$var($KeyFactory, kf, $KeyFactory::getInstance("DSA"_s));
		$var($BigInteger, var$0, $nc(params)->getP());
		$var($BigInteger, var$1, params->getQ());
		$var($DSAPublicKeySpec, ks, $new($DSAPublicKeySpec, y, var$0, var$1, $(params->getG())));
		return $nc(kf)->generatePublic(ks);
	} catch ($GeneralSecurityException& e) {
		$throwNew($CertPathValidatorException, $$str({"Unable to generate key with inherited parameters: "_s, $(e->getMessage())}), e);
	}
	$shouldNotReachHere();
}

$PublicKey* BasicChecker::getPublicKey() {
	return this->prevPubKey;
}

void BasicChecker::clinit$($Class* clazz) {
	$assignStatic(BasicChecker::debug, $Debug::getInstance("certpath"_s));
}

BasicChecker::BasicChecker() {
}

$Class* BasicChecker::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicChecker, debug)},
		{"trustedPubKey", "Ljava/security/PublicKey;", nullptr, $PRIVATE | $FINAL, $field(BasicChecker, trustedPubKey)},
		{"caName", "Ljavax/security/auth/x500/X500Principal;", nullptr, $PRIVATE | $FINAL, $field(BasicChecker, caName)},
		{"date", "Ljava/util/Date;", nullptr, $PRIVATE | $FINAL, $field(BasicChecker, date)},
		{"sigProvider", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(BasicChecker, sigProvider)},
		{"sigOnly", "Z", nullptr, $PRIVATE | $FINAL, $field(BasicChecker, sigOnly)},
		{"prevSubject", "Ljavax/security/auth/x500/X500Principal;", nullptr, $PRIVATE, $field(BasicChecker, prevSubject)},
		{"prevPubKey", "Ljava/security/PublicKey;", nullptr, $PRIVATE, $field(BasicChecker, prevPubKey)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/cert/TrustAnchor;Ljava/util/Date;Ljava/lang/String;Z)V", nullptr, 0, $method(BasicChecker, init$, void, $TrustAnchor*, $Date*, $String*, bool)},
		{"check", "(Ljava/security/cert/Certificate;Ljava/util/Collection;)V", "(Ljava/security/cert/Certificate;Ljava/util/Collection<Ljava/lang/String;>;)V", $PUBLIC, $virtualMethod(BasicChecker, check, void, $Certificate*, $Collection*), "java.security.cert.CertPathValidatorException"},
		{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, 0, $virtualMethod(BasicChecker, getPublicKey, $PublicKey*)},
		{"getSupportedExtensions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(BasicChecker, getSupportedExtensions, $Set*)},
		{"init", "(Z)V", nullptr, $PUBLIC, $virtualMethod(BasicChecker, init, void, bool), "java.security.cert.CertPathValidatorException"},
		{"isForwardCheckingSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicChecker, isForwardCheckingSupported, bool)},
		{"makeInheritedParamsKey", "(Ljava/security/PublicKey;Ljava/security/PublicKey;)Ljava/security/PublicKey;", nullptr, $STATIC, $staticMethod(BasicChecker, makeInheritedParamsKey, $PublicKey*, $PublicKey*, $PublicKey*), "java.security.cert.CertPathValidatorException"},
		{"updateState", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PRIVATE, $method(BasicChecker, updateState, void, $X509Certificate*), "java.security.cert.CertPathValidatorException"},
		{"verifyNameChaining", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PRIVATE, $method(BasicChecker, verifyNameChaining, void, $X509Certificate*), "java.security.cert.CertPathValidatorException"},
		{"verifySignature", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PRIVATE, $method(BasicChecker, verifySignature, void, $X509Certificate*), "java.security.cert.CertPathValidatorException"},
		{"verifyValidity", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PRIVATE, $method(BasicChecker, verifyValidity, void, $X509Certificate*), "java.security.cert.CertPathValidatorException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.certpath.BasicChecker",
		"java.security.cert.PKIXCertPathChecker",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicChecker, name, initialize, &classInfo$$, BasicChecker::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicChecker));
	});
	return class$;
}

$Class* BasicChecker::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun