#include <javax/net/ssl/CertPathTrustManagerParameters.h>
#include <java/security/cert/CertPathParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertPathParameters = ::java::security::cert::CertPathParameters;

namespace javax {
	namespace net {
		namespace ssl {

void CertPathTrustManagerParameters::init$($CertPathParameters* parameters) {
	$set(this, parameters, $cast($CertPathParameters, $nc(parameters)->clone()));
}

$CertPathParameters* CertPathTrustManagerParameters::getParameters() {
	return $cast($CertPathParameters, $nc(this->parameters)->clone());
}

CertPathTrustManagerParameters::CertPathTrustManagerParameters() {
}

$Class* CertPathTrustManagerParameters::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"parameters", "Ljava/security/cert/CertPathParameters;", nullptr, $PRIVATE | $FINAL, $field(CertPathTrustManagerParameters, parameters)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/cert/CertPathParameters;)V", nullptr, $PUBLIC, $method(CertPathTrustManagerParameters, init$, void, $CertPathParameters*)},
		{"getParameters", "()Ljava/security/cert/CertPathParameters;", nullptr, $PUBLIC, $virtualMethod(CertPathTrustManagerParameters, getParameters, $CertPathParameters*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.net.ssl.CertPathTrustManagerParameters",
		"java.lang.Object",
		"javax.net.ssl.ManagerFactoryParameters",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CertPathTrustManagerParameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertPathTrustManagerParameters);
	});
	return class$;
}

$Class* CertPathTrustManagerParameters::class$ = nullptr;

		} // ssl
	} // net
} // javax