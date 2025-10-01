#include <java/security/cert/CertPathValidatorResult.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Cloneable.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _CertPathValidatorResult_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CertPathValidatorResult_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.cert.CertPathValidatorResult",
	nullptr,
	"java.lang.Cloneable",
	nullptr,
	_CertPathValidatorResult_MethodInfo_
};

$Object* allocate$CertPathValidatorResult($Class* clazz) {
	return $of($alloc(CertPathValidatorResult));
}

$Object* CertPathValidatorResult::clone() {
	 return this->$Cloneable::clone();
}

$Class* CertPathValidatorResult::load$($String* name, bool initialize) {
	$loadClass(CertPathValidatorResult, name, initialize, &_CertPathValidatorResult_ClassInfo_, allocate$CertPathValidatorResult);
	return class$;
}

$Class* CertPathValidatorResult::class$ = nullptr;

		} // cert
	} // security
} // java