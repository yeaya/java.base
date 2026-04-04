#include <sun/security/util/UntrustedCertificates.h>
#include <java/security/AccessController.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Properties.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/UntrustedCertificates$1.h>
#include <sun/security/x509/X509CertImpl.h>
#include <jcpp.h>

#undef ALGORITHM_KEY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $AccessController = ::java::security::AccessController;
using $CertificateException = ::java::security::cert::CertificateException;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Properties = ::java::util::Properties;
using $Debug = ::sun::security::util::Debug;
using $UntrustedCertificates$1 = ::sun::security::util::UntrustedCertificates$1;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace sun {
	namespace security {
		namespace util {

$Debug* UntrustedCertificates::debug = nullptr;
$String* UntrustedCertificates::ALGORITHM_KEY = nullptr;
$Properties* UntrustedCertificates::props = nullptr;
$String* UntrustedCertificates::algorithm = nullptr;

bool UntrustedCertificates::isUntrusted($X509Certificate* cert) {
	$init(UntrustedCertificates);
	$useLocalObjectStack();
	if (UntrustedCertificates::algorithm == nullptr) {
		return false;
	}
	$var($String, key, nullptr);
	if ($instanceOf($X509CertImpl, cert)) {
		$assign(key, $cast($X509CertImpl, cert)->getFingerprint(UntrustedCertificates::algorithm));
	} else {
		try {
			$assign(key, $$new($X509CertImpl, $($nc(cert)->getEncoded()))->getFingerprint(UntrustedCertificates::algorithm));
		} catch ($CertificateException& cee) {
			return false;
		}
	}
	return UntrustedCertificates::props->containsKey(key);
}

void UntrustedCertificates::init$() {
}

void UntrustedCertificates::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(UntrustedCertificates::ALGORITHM_KEY, "Algorithm"_s);
	$beforeCallerSensitive();
	$assignStatic(UntrustedCertificates::debug, $Debug::getInstance("certpath"_s));
	$assignStatic(UntrustedCertificates::props, $new($Properties));
	{
		$var($Void, dummy, $cast($Void, $AccessController::doPrivileged($$new($UntrustedCertificates$1))));
		$assignStatic(UntrustedCertificates::algorithm, UntrustedCertificates::props->getProperty(UntrustedCertificates::ALGORITHM_KEY));
	}
}

UntrustedCertificates::UntrustedCertificates() {
}

$Class* UntrustedCertificates::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UntrustedCertificates, debug)},
		{"ALGORITHM_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UntrustedCertificates, ALGORITHM_KEY)},
		{"props", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UntrustedCertificates, props)},
		{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UntrustedCertificates, algorithm)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(UntrustedCertificates, init$, void)},
		{"isUntrusted", "(Ljava/security/cert/X509Certificate;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(UntrustedCertificates, isUntrusted, bool, $X509Certificate*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.UntrustedCertificates$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.util.UntrustedCertificates",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.util.UntrustedCertificates$1"
	};
	$loadClass(UntrustedCertificates, name, initialize, &classInfo$$, UntrustedCertificates::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UntrustedCertificates);
	});
	return class$;
}

$Class* UntrustedCertificates::class$ = nullptr;

		} // util
	} // security
} // sun