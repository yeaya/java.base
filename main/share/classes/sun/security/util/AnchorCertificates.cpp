#include <sun/security/util/AnchorCertificates.h>
#include <java/security/AccessController.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Collections.h>
#include <java/util/Set.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/util/AnchorCertificates$1.h>
#include <sun/security/util/Debug.h>
#include <sun/security/x509/X509CertImpl.h>
#include <jcpp.h>

#undef HASH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Collections = ::java::util::Collections;
using $Set = ::java::util::Set;
using $AnchorCertificates$1 = ::sun::security::util::AnchorCertificates$1;
using $Debug = ::sun::security::util::Debug;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace sun {
	namespace security {
		namespace util {

$Debug* AnchorCertificates::debug = nullptr;
$String* AnchorCertificates::HASH = nullptr;
$Set* AnchorCertificates::certs = nullptr;
$Set* AnchorCertificates::certIssuers = nullptr;

bool AnchorCertificates::contains($X509Certificate* cert) {
	$init(AnchorCertificates);
	$useLocalObjectStack();
	$var($String, key, $X509CertImpl::getFingerprint(AnchorCertificates::HASH, cert));
	bool result = $nc(AnchorCertificates::certs)->contains(key);
	if (result && AnchorCertificates::debug != nullptr) {
		AnchorCertificates::debug->println($$str({"AnchorCertificate.contains: matched "_s, $($nc(cert)->getSubjectX500Principal())}));
	}
	return result;
}

bool AnchorCertificates::issuerOf($X509Certificate* cert) {
	$init(AnchorCertificates);
	return $nc(AnchorCertificates::certIssuers)->contains($($nc(cert)->getIssuerX500Principal()));
}

void AnchorCertificates::init$() {
}

void AnchorCertificates::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(AnchorCertificates::HASH, "SHA-256"_s);
	$beforeCallerSensitive();
	$assignStatic(AnchorCertificates::debug, $Debug::getInstance("certpath"_s));
	$assignStatic(AnchorCertificates::certs, $Collections::emptySet());
	$assignStatic(AnchorCertificates::certIssuers, $Collections::emptySet());
	{
		$var($Object, dummy, $AccessController::doPrivileged($$new($AnchorCertificates$1)));
	}
}

AnchorCertificates::AnchorCertificates() {
}

$Class* AnchorCertificates::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AnchorCertificates, debug)},
		{"HASH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AnchorCertificates, HASH)},
		{"certs", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(AnchorCertificates, certs)},
		{"certIssuers", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/security/auth/x500/X500Principal;>;", $PRIVATE | $STATIC, $staticField(AnchorCertificates, certIssuers)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AnchorCertificates, init$, void)},
		{"contains", "(Ljava/security/cert/X509Certificate;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(AnchorCertificates, contains, bool, $X509Certificate*)},
		{"issuerOf", "(Ljava/security/cert/X509Certificate;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(AnchorCertificates, issuerOf, bool, $X509Certificate*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.AnchorCertificates$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.AnchorCertificates",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.util.AnchorCertificates$1"
	};
	$loadClass(AnchorCertificates, name, initialize, &classInfo$$, AnchorCertificates::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AnchorCertificates);
	});
	return class$;
}

$Class* AnchorCertificates::class$ = nullptr;

		} // util
	} // security
} // sun