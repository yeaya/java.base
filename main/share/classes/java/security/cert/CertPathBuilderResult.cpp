#include <java/security/cert/CertPathBuilderResult.h>

#include <java/lang/Cloneable.h>
#include <java/security/cert/CertPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertPath = ::java::security::cert::CertPath;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _CertPathBuilderResult_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCertPath", "()Ljava/security/cert/CertPath;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CertPathBuilderResult_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.cert.CertPathBuilderResult",
	nullptr,
	"java.lang.Cloneable",
	nullptr,
	_CertPathBuilderResult_MethodInfo_
};

$Object* allocate$CertPathBuilderResult($Class* clazz) {
	return $of($alloc(CertPathBuilderResult));
}

$Object* CertPathBuilderResult::clone() {
	 return this->$Cloneable::clone();
}

$Class* CertPathBuilderResult::load$($String* name, bool initialize) {
	$loadClass(CertPathBuilderResult, name, initialize, &_CertPathBuilderResult_ClassInfo_, allocate$CertPathBuilderResult);
	return class$;
}

$Class* CertPathBuilderResult::class$ = nullptr;

		} // cert
	} // security
} // java