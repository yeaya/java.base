#include <java/security/cert/CertPathParameters.h>

#include <java/lang/Cloneable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _CertPathParameters_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CertPathParameters_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.cert.CertPathParameters",
	nullptr,
	"java.lang.Cloneable",
	nullptr,
	_CertPathParameters_MethodInfo_
};

$Object* allocate$CertPathParameters($Class* clazz) {
	return $of($alloc(CertPathParameters));
}

$Object* CertPathParameters::clone() {
	 return this->$Cloneable::clone();
}

$Class* CertPathParameters::load$($String* name, bool initialize) {
	$loadClass(CertPathParameters, name, initialize, &_CertPathParameters_ClassInfo_, allocate$CertPathParameters);
	return class$;
}

$Class* CertPathParameters::class$ = nullptr;

		} // cert
	} // security
} // java