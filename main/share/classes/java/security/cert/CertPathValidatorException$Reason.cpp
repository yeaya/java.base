#include <java/security/cert/CertPathValidatorException$Reason.h>

#include <java/security/cert/CertPathValidatorException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace java {
	namespace security {
		namespace cert {

$InnerClassInfo _CertPathValidatorException$Reason_InnerClassesInfo_[] = {
	{"java.security.cert.CertPathValidatorException$Reason", "java.security.cert.CertPathValidatorException", "Reason", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CertPathValidatorException$Reason_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.cert.CertPathValidatorException$Reason",
	nullptr,
	"java.io.Serializable",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_CertPathValidatorException$Reason_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.cert.CertPathValidatorException"
};

$Object* allocate$CertPathValidatorException$Reason($Class* clazz) {
	return $of($alloc(CertPathValidatorException$Reason));
}

$Class* CertPathValidatorException$Reason::load$($String* name, bool initialize) {
	$loadClass(CertPathValidatorException$Reason, name, initialize, &_CertPathValidatorException$Reason_ClassInfo_, allocate$CertPathValidatorException$Reason);
	return class$;
}

$Class* CertPathValidatorException$Reason::class$ = nullptr;

		} // cert
	} // security
} // java