#include <sun/security/provider/certpath/UntrustedChecker.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $Debug = ::sun::security::util::Debug;
using $UntrustedCertificates = ::sun::security::util::UntrustedCertificates;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _UntrustedChecker_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UntrustedChecker, debug)},
	{}
};

$MethodInfo _UntrustedChecker_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UntrustedChecker::*)()>(&UntrustedChecker::init$))},
	{"check", "(Ljava/security/cert/Certificate;Ljava/util/Collection;)V", "(Ljava/security/cert/Certificate;Ljava/util/Collection<Ljava/lang/String;>;)V", $PUBLIC, nullptr, "java.security.cert.CertPathValidatorException"},
	{"getSupportedExtensions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"init", "(Z)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertPathValidatorException"},
	{"isForwardCheckingSupported", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UntrustedChecker_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.certpath.UntrustedChecker",
	"java.security.cert.PKIXCertPathChecker",
	nullptr,
	_UntrustedChecker_FieldInfo_,
	_UntrustedChecker_MethodInfo_
};

$Object* allocate$UntrustedChecker($Class* clazz) {
	return $of($alloc(UntrustedChecker));
}

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
	$var($X509Certificate, currCert, $cast($X509Certificate, cert));
	if ($UntrustedCertificates::isUntrusted(currCert)) {
		if (UntrustedChecker::debug != nullptr) {
			$nc(UntrustedChecker::debug)->println($$str({"UntrustedChecker: untrusted certificate "_s, $($nc(currCert)->getSubjectX500Principal())}));
		}
		$throwNew($CertPathValidatorException, $$str({"Untrusted certificate: "_s, $($nc(currCert)->getSubjectX500Principal())}));
	}
}

void clinit$UntrustedChecker($Class* class$) {
	$assignStatic(UntrustedChecker::debug, $Debug::getInstance("certpath"_s));
}

UntrustedChecker::UntrustedChecker() {
}

$Class* UntrustedChecker::load$($String* name, bool initialize) {
	$loadClass(UntrustedChecker, name, initialize, &_UntrustedChecker_ClassInfo_, clinit$UntrustedChecker, allocate$UntrustedChecker);
	return class$;
}

$Class* UntrustedChecker::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun