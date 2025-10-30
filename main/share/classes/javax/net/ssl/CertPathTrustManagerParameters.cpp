#include <javax/net/ssl/CertPathTrustManagerParameters.h>

#include <java/security/cert/CertPathParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertPathParameters = ::java::security::cert::CertPathParameters;
using $ManagerFactoryParameters = ::javax::net::ssl::ManagerFactoryParameters;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _CertPathTrustManagerParameters_FieldInfo_[] = {
	{"parameters", "Ljava/security/cert/CertPathParameters;", nullptr, $PRIVATE | $FINAL, $field(CertPathTrustManagerParameters, parameters)},
	{}
};

$MethodInfo _CertPathTrustManagerParameters_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/CertPathParameters;)V", nullptr, $PUBLIC, $method(static_cast<void(CertPathTrustManagerParameters::*)($CertPathParameters*)>(&CertPathTrustManagerParameters::init$))},
	{"getParameters", "()Ljava/security/cert/CertPathParameters;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CertPathTrustManagerParameters_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.net.ssl.CertPathTrustManagerParameters",
	"java.lang.Object",
	"javax.net.ssl.ManagerFactoryParameters",
	_CertPathTrustManagerParameters_FieldInfo_,
	_CertPathTrustManagerParameters_MethodInfo_
};

$Object* allocate$CertPathTrustManagerParameters($Class* clazz) {
	return $of($alloc(CertPathTrustManagerParameters));
}

void CertPathTrustManagerParameters::init$($CertPathParameters* parameters) {
	$set(this, parameters, $cast($CertPathParameters, $nc(parameters)->clone()));
}

$CertPathParameters* CertPathTrustManagerParameters::getParameters() {
	return $cast($CertPathParameters, $nc(this->parameters)->clone());
}

CertPathTrustManagerParameters::CertPathTrustManagerParameters() {
}

$Class* CertPathTrustManagerParameters::load$($String* name, bool initialize) {
	$loadClass(CertPathTrustManagerParameters, name, initialize, &_CertPathTrustManagerParameters_ClassInfo_, allocate$CertPathTrustManagerParameters);
	return class$;
}

$Class* CertPathTrustManagerParameters::class$ = nullptr;

		} // ssl
	} // net
} // javax