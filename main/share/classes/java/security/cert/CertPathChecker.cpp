#include <java/security/cert/CertPathChecker.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/Certificate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Certificate = ::java::security::cert::Certificate;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _CertPathChecker_MethodInfo_[] = {
	{"check", "(Ljava/security/cert/Certificate;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertPathValidatorException"},
	{"init", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertPathValidatorException"},
	{"isForwardCheckingSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CertPathChecker_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.cert.CertPathChecker",
	nullptr,
	nullptr,
	nullptr,
	_CertPathChecker_MethodInfo_
};

$Object* allocate$CertPathChecker($Class* clazz) {
	return $of($alloc(CertPathChecker));
}

$Class* CertPathChecker::load$($String* name, bool initialize) {
	$loadClass(CertPathChecker, name, initialize, &_CertPathChecker_ClassInfo_, allocate$CertPathChecker);
	return class$;
}

$Class* CertPathChecker::class$ = nullptr;

		} // cert
	} // security
} // java