#include <sun/security/util/AnchorCertificates.h>

#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Collections = ::java::util::Collections;
using $Set = ::java::util::Set;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $AnchorCertificates$1 = ::sun::security::util::AnchorCertificates$1;
using $Debug = ::sun::security::util::Debug;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _AnchorCertificates_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AnchorCertificates, debug)},
	{"HASH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AnchorCertificates, HASH)},
	{"certs", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(AnchorCertificates, certs)},
	{"certIssuers", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/security/auth/x500/X500Principal;>;", $PRIVATE | $STATIC, $staticField(AnchorCertificates, certIssuers)},
	{}
};

$MethodInfo _AnchorCertificates_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AnchorCertificates::*)()>(&AnchorCertificates::init$))},
	{"contains", "(Ljava/security/cert/X509Certificate;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($X509Certificate*)>(&AnchorCertificates::contains))},
	{"issuerOf", "(Ljava/security/cert/X509Certificate;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($X509Certificate*)>(&AnchorCertificates::issuerOf))},
	{}
};

$InnerClassInfo _AnchorCertificates_InnerClassesInfo_[] = {
	{"sun.security.util.AnchorCertificates$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AnchorCertificates_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.AnchorCertificates",
	"java.lang.Object",
	nullptr,
	_AnchorCertificates_FieldInfo_,
	_AnchorCertificates_MethodInfo_,
	nullptr,
	nullptr,
	_AnchorCertificates_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.util.AnchorCertificates$1"
};

$Object* allocate$AnchorCertificates($Class* clazz) {
	return $of($alloc(AnchorCertificates));
}

$Debug* AnchorCertificates::debug = nullptr;
$String* AnchorCertificates::HASH = nullptr;
$Set* AnchorCertificates::certs = nullptr;
$Set* AnchorCertificates::certIssuers = nullptr;

bool AnchorCertificates::contains($X509Certificate* cert) {
	$init(AnchorCertificates);
	$useLocalCurrentObjectStackCache();
	$var($String, key, $X509CertImpl::getFingerprint(AnchorCertificates::HASH, cert));
	bool result = $nc(AnchorCertificates::certs)->contains(key);
	if (result && AnchorCertificates::debug != nullptr) {
		$nc(AnchorCertificates::debug)->println($$str({"AnchorCertificate.contains: matched "_s, $($nc(cert)->getSubjectX500Principal())}));
	}
	return result;
}

bool AnchorCertificates::issuerOf($X509Certificate* cert) {
	$init(AnchorCertificates);
	return $nc(AnchorCertificates::certIssuers)->contains($($nc(cert)->getIssuerX500Principal()));
}

void AnchorCertificates::init$() {
}

void clinit$AnchorCertificates($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AnchorCertificates::HASH, "SHA-256"_s);
	$beforeCallerSensitive();
	$assignStatic(AnchorCertificates::debug, $Debug::getInstance("certpath"_s));
	$assignStatic(AnchorCertificates::certs, $Collections::emptySet());
	$assignStatic(AnchorCertificates::certIssuers, $Collections::emptySet());
	{
		$var($Object, dummy, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($AnchorCertificates$1))));
	}
}

AnchorCertificates::AnchorCertificates() {
}

$Class* AnchorCertificates::load$($String* name, bool initialize) {
	$loadClass(AnchorCertificates, name, initialize, &_AnchorCertificates_ClassInfo_, clinit$AnchorCertificates, allocate$AnchorCertificates);
	return class$;
}

$Class* AnchorCertificates::class$ = nullptr;

		} // util
	} // security
} // sun