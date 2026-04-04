#include <sun/security/provider/certpath/RevocationChecker$1.h>
#include <java/security/Security.h>
#include <sun/security/provider/certpath/RevocationChecker$RevocationProperties.h>
#include <sun/security/provider/certpath/RevocationChecker.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;
using $RevocationChecker$RevocationProperties = ::sun::security::provider::certpath::RevocationChecker$RevocationProperties;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

void RevocationChecker$1::init$() {
}

$Object* RevocationChecker$1::run() {
	$useLocalObjectStack();
	$var($RevocationChecker$RevocationProperties, rp, $new($RevocationChecker$RevocationProperties));
	$var($String, onlyEE, $Security::getProperty("com.sun.security.onlyCheckRevocationOfEECert"_s));
	rp->onlyEE = onlyEE != nullptr && onlyEE->equalsIgnoreCase("true"_s);
	$var($String, ocspEnabled, $Security::getProperty("ocsp.enable"_s));
	rp->ocspEnabled = ocspEnabled != nullptr && ocspEnabled->equalsIgnoreCase("true"_s);
	$set(rp, ocspUrl, $Security::getProperty("ocsp.responderURL"_s));
	$set(rp, ocspSubject, $Security::getProperty("ocsp.responderCertSubjectName"_s));
	$set(rp, ocspIssuer, $Security::getProperty("ocsp.responderCertIssuerName"_s));
	$set(rp, ocspSerial, $Security::getProperty("ocsp.responderCertSerialNumber"_s));
	rp->crlDPEnabled = $Boolean::getBoolean("com.sun.security.enableCRLDP"_s);
	rp->ocspNonce = $Boolean::getBoolean("jdk.security.certpath.ocspNonce"_s);
	return rp;
}

RevocationChecker$1::RevocationChecker$1() {
}

$Class* RevocationChecker$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RevocationChecker$1, init$, void)},
		{"run", "()Lsun/security/provider/certpath/RevocationChecker$RevocationProperties;", nullptr, $PUBLIC, $virtualMethod(RevocationChecker$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.certpath.RevocationChecker",
		"getRevocationProperties",
		"()Lsun/security/provider/certpath/RevocationChecker$RevocationProperties;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.RevocationChecker$1", nullptr, nullptr, 0},
		{"sun.security.provider.certpath.RevocationChecker$RevocationProperties", "sun.security.provider.certpath.RevocationChecker", "RevocationProperties", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.certpath.RevocationChecker$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/security/provider/certpath/RevocationChecker$RevocationProperties;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.RevocationChecker"
	};
	$loadClass(RevocationChecker$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RevocationChecker$1);
	});
	return class$;
}

$Class* RevocationChecker$1::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun