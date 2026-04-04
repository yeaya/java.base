#include <sun/security/provider/certpath/UntrustedChecker.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/PKIXCertPathChecker.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Collection.h>
#include <java/util/Set.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/UntrustedCertificates.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertPathValidatorException = ::java::security::cert::CertPathValidatorException;
using $Certificate = ::java::security::cert::Certificate;
using $PKIXCertPathChecker = ::java::security::cert::PKIXCertPathChecker;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Collection = ::java::util::Collection;
using $Set = ::java::util::Set;
using $Debug = ::sun::security::util::Debug;
using $UntrustedCertificates = ::sun::security::util::UntrustedCertificates;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$Debug* UntrustedChecker::debug = nullptr;

void UntrustedChecker::init$() {
	$PKIXCertPathChecker::init$();
}

void UntrustedChecker::init(bool forward) {
}

bool UntrustedChecker::isForwardCheckingSupported() {
	return true;
}

$Set* UntrustedChecker::getSupportedExtensions() {
	return nullptr;
}

void UntrustedChecker::check($Certificate* cert, $Collection* unresolvedCritExts) {
	$useLocalObjectStack();
	$var($X509Certificate, currCert, $cast($X509Certificate, cert));
	if ($UntrustedCertificates::isUntrusted(currCert)) {
		if (UntrustedChecker::debug != nullptr) {
			UntrustedChecker::debug->println($$str({"UntrustedChecker: untrusted certificate "_s, $($nc(currCert)->getSubjectX500Principal())}));
		}
		$throwNew($CertPathValidatorException, $$str({"Untrusted certificate: "_s, $($nc(currCert)->getSubjectX500Principal())}));
	}
}

void UntrustedChecker::clinit$($Class* clazz) {
	$assignStatic(UntrustedChecker::debug, $Debug::getInstance("certpath"_s));
}

UntrustedChecker::UntrustedChecker() {
}

$Class* UntrustedChecker::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UntrustedChecker, debug)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UntrustedChecker, init$, void)},
		{"check", "(Ljava/security/cert/Certificate;Ljava/util/Collection;)V", "(Ljava/security/cert/Certificate;Ljava/util/Collection<Ljava/lang/String;>;)V", $PUBLIC, $virtualMethod(UntrustedChecker, check, void, $Certificate*, $Collection*), "java.security.cert.CertPathValidatorException"},
		{"getSupportedExtensions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(UntrustedChecker, getSupportedExtensions, $Set*)},
		{"init", "(Z)V", nullptr, $PUBLIC, $virtualMethod(UntrustedChecker, init, void, bool), "java.security.cert.CertPathValidatorException"},
		{"isForwardCheckingSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(UntrustedChecker, isForwardCheckingSupported, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.certpath.UntrustedChecker",
		"java.security.cert.PKIXCertPathChecker",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UntrustedChecker, name, initialize, &classInfo$$, UntrustedChecker::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(UntrustedChecker));
	});
	return class$;
}

$Class* UntrustedChecker::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun