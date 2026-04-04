#include <java/security/cert/CertPathChecker.h>
#include <java/security/cert/Certificate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Certificate = ::java::security::cert::Certificate;

namespace java {
	namespace security {
		namespace cert {

$Class* CertPathChecker::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"check", "(Ljava/security/cert/Certificate;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CertPathChecker, check, void, $Certificate*), "java.security.cert.CertPathValidatorException"},
		{"init", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CertPathChecker, init, void, bool), "java.security.cert.CertPathValidatorException"},
		{"isForwardCheckingSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CertPathChecker, isForwardCheckingSupported, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.cert.CertPathChecker",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CertPathChecker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertPathChecker);
	});
	return class$;
}

$Class* CertPathChecker::class$ = nullptr;

		} // cert
	} // security
} // java