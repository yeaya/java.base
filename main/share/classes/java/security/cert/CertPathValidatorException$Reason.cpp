#include <java/security/cert/CertPathValidatorException$Reason.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace java {
	namespace security {
		namespace cert {

$Class* CertPathValidatorException$Reason::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.cert.CertPathValidatorException$Reason", "java.security.cert.CertPathValidatorException", "Reason", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.cert.CertPathValidatorException$Reason",
		nullptr,
		"java.io.Serializable",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.cert.CertPathValidatorException"
	};
	$loadClass(CertPathValidatorException$Reason, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertPathValidatorException$Reason);
	});
	return class$;
}

$Class* CertPathValidatorException$Reason::class$ = nullptr;

		} // cert
	} // security
} // java