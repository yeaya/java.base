#include <sun/security/provider/certpath/KeyChecker.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <java/security/cert/CertSelector.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/PKIXCertPathChecker.h>
#include <java/security/cert/PKIXReason.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef INVALID_KEY_USAGE
#undef KEY_CERT_SIGN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathValidatorException = ::java::security::cert::CertPathValidatorException;
using $CertSelector = ::java::security::cert::CertSelector;
using $Certificate = ::java::security::cert::Certificate;
using $PKIXCertPathChecker = ::java::security::cert::PKIXCertPathChecker;
using $PKIXReason = ::java::security::cert::PKIXReason;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $Debug = ::sun::security::util::Debug;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$Debug* KeyChecker::debug = nullptr;

void KeyChecker::init$(int32_t certPathLen, $CertSelector* targetCertSel) {
	$PKIXCertPathChecker::init$();
	this->certPathLen = certPathLen;
	$set(this, targetConstraints, targetCertSel);
}

void KeyChecker::init(bool forward) {
	if (!forward) {
		this->remainingCerts = this->certPathLen;
	} else {
		$throwNew($CertPathValidatorException, "forward checking not supported"_s);
	}
}

bool KeyChecker::isForwardCheckingSupported() {
	return false;
}

$Set* KeyChecker::getSupportedExtensions() {
	$useLocalObjectStack();
	if (this->supportedExts == nullptr) {
		$set(this, supportedExts, $new($HashSet, 3));
		$init($PKIXExtensions);
		this->supportedExts->add($($nc($PKIXExtensions::KeyUsage_Id)->toString()));
		this->supportedExts->add($($nc($PKIXExtensions::ExtendedKeyUsage_Id)->toString()));
		this->supportedExts->add($($nc($PKIXExtensions::SubjectAlternativeName_Id)->toString()));
		$set(this, supportedExts, $Collections::unmodifiableSet(this->supportedExts));
	}
	return this->supportedExts;
}

void KeyChecker::check($Certificate* cert, $Collection* unresCritExts) {
	$useLocalObjectStack();
	$var($X509Certificate, currCert, $cast($X509Certificate, cert));
	--this->remainingCerts;
	if (this->remainingCerts == 0) {
		if (this->targetConstraints != nullptr && this->targetConstraints->match(currCert) == false) {
			$throwNew($CertPathValidatorException, "target certificate constraints check failed"_s);
		}
	} else {
		verifyCAKeyUsage(currCert);
	}
	if (unresCritExts != nullptr && !unresCritExts->isEmpty()) {
		$init($PKIXExtensions);
		unresCritExts->remove($($nc($PKIXExtensions::KeyUsage_Id)->toString()));
		unresCritExts->remove($($nc($PKIXExtensions::ExtendedKeyUsage_Id)->toString()));
		unresCritExts->remove($($nc($PKIXExtensions::SubjectAlternativeName_Id)->toString()));
	}
}

void KeyChecker::verifyCAKeyUsage($X509Certificate* cert) {
	$init(KeyChecker);
	$useLocalObjectStack();
	$var($String, msg, "CA key usage"_s);
	if (KeyChecker::debug != nullptr) {
		KeyChecker::debug->println($$str({"KeyChecker.verifyCAKeyUsage() ---checking "_s, msg, "..."_s}));
	}
	$var($booleans, keyUsageBits, $nc(cert)->getKeyUsage());
	if (keyUsageBits == nullptr) {
		return;
	}
	if (!$nc(keyUsageBits)->get(KeyChecker::KEY_CERT_SIGN)) {
		$init($PKIXReason);
		$throwNew($CertPathValidatorException, $$str({msg, " check failed: keyCertSign bit is not set"_s}), nullptr, nullptr, -1, $PKIXReason::INVALID_KEY_USAGE);
	}
	if (KeyChecker::debug != nullptr) {
		KeyChecker::debug->println($$str({"KeyChecker.verifyCAKeyUsage() "_s, msg, " verified."_s}));
	}
}

void KeyChecker::clinit$($Class* clazz) {
	$assignStatic(KeyChecker::debug, $Debug::getInstance("certpath"_s));
}

KeyChecker::KeyChecker() {
}

$Class* KeyChecker::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyChecker, debug)},
		{"certPathLen", "I", nullptr, $PRIVATE | $FINAL, $field(KeyChecker, certPathLen)},
		{"targetConstraints", "Ljava/security/cert/CertSelector;", nullptr, $PRIVATE | $FINAL, $field(KeyChecker, targetConstraints)},
		{"remainingCerts", "I", nullptr, $PRIVATE, $field(KeyChecker, remainingCerts)},
		{"supportedExts", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(KeyChecker, supportedExts)},
		{"KEY_CERT_SIGN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyChecker, KEY_CERT_SIGN)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/security/cert/CertSelector;)V", nullptr, 0, $method(KeyChecker, init$, void, int32_t, $CertSelector*)},
		{"check", "(Ljava/security/cert/Certificate;Ljava/util/Collection;)V", "(Ljava/security/cert/Certificate;Ljava/util/Collection<Ljava/lang/String;>;)V", $PUBLIC, $virtualMethod(KeyChecker, check, void, $Certificate*, $Collection*), "java.security.cert.CertPathValidatorException"},
		{"getSupportedExtensions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(KeyChecker, getSupportedExtensions, $Set*)},
		{"init", "(Z)V", nullptr, $PUBLIC, $virtualMethod(KeyChecker, init, void, bool), "java.security.cert.CertPathValidatorException"},
		{"isForwardCheckingSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(KeyChecker, isForwardCheckingSupported, bool)},
		{"verifyCAKeyUsage", "(Ljava/security/cert/X509Certificate;)V", nullptr, $STATIC, $staticMethod(KeyChecker, verifyCAKeyUsage, void, $X509Certificate*), "java.security.cert.CertPathValidatorException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.certpath.KeyChecker",
		"java.security.cert.PKIXCertPathChecker",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KeyChecker, name, initialize, &classInfo$$, KeyChecker::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(KeyChecker));
	});
	return class$;
}

$Class* KeyChecker::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun