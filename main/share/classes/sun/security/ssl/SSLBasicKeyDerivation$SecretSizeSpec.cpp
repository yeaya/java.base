#include <sun/security/ssl/SSLBasicKeyDerivation$SecretSizeSpec.h>

#include <sun/security/ssl/SSLBasicKeyDerivation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLBasicKeyDerivation$SecretSizeSpec_FieldInfo_[] = {
	{"length", "I", nullptr, $FINAL, $field(SSLBasicKeyDerivation$SecretSizeSpec, length)},
	{}
};

$MethodInfo _SSLBasicKeyDerivation$SecretSizeSpec_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(SSLBasicKeyDerivation$SecretSizeSpec, init$, void, int32_t)},
	{}
};

$InnerClassInfo _SSLBasicKeyDerivation$SecretSizeSpec_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLBasicKeyDerivation$SecretSizeSpec", "sun.security.ssl.SSLBasicKeyDerivation", "SecretSizeSpec", $STATIC},
	{}
};

$ClassInfo _SSLBasicKeyDerivation$SecretSizeSpec_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLBasicKeyDerivation$SecretSizeSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_SSLBasicKeyDerivation$SecretSizeSpec_FieldInfo_,
	_SSLBasicKeyDerivation$SecretSizeSpec_MethodInfo_,
	nullptr,
	nullptr,
	_SSLBasicKeyDerivation$SecretSizeSpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLBasicKeyDerivation"
};

$Object* allocate$SSLBasicKeyDerivation$SecretSizeSpec($Class* clazz) {
	return $of($alloc(SSLBasicKeyDerivation$SecretSizeSpec));
}

void SSLBasicKeyDerivation$SecretSizeSpec::init$(int32_t length) {
	this->length = length;
}

SSLBasicKeyDerivation$SecretSizeSpec::SSLBasicKeyDerivation$SecretSizeSpec() {
}

$Class* SSLBasicKeyDerivation$SecretSizeSpec::load$($String* name, bool initialize) {
	$loadClass(SSLBasicKeyDerivation$SecretSizeSpec, name, initialize, &_SSLBasicKeyDerivation$SecretSizeSpec_ClassInfo_, allocate$SSLBasicKeyDerivation$SecretSizeSpec);
	return class$;
}

$Class* SSLBasicKeyDerivation$SecretSizeSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun