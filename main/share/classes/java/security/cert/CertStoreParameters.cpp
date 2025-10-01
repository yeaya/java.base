#include <java/security/cert/CertStoreParameters.h>

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

$MethodInfo _CertStoreParameters_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CertStoreParameters_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.cert.CertStoreParameters",
	nullptr,
	"java.lang.Cloneable",
	nullptr,
	_CertStoreParameters_MethodInfo_
};

$Object* allocate$CertStoreParameters($Class* clazz) {
	return $of($alloc(CertStoreParameters));
}

$Object* CertStoreParameters::clone() {
	 return this->$Cloneable::clone();
}

$Class* CertStoreParameters::load$($String* name, bool initialize) {
	$loadClass(CertStoreParameters, name, initialize, &_CertStoreParameters_ClassInfo_, allocate$CertStoreParameters);
	return class$;
}

$Class* CertStoreParameters::class$ = nullptr;

		} // cert
	} // security
} // java