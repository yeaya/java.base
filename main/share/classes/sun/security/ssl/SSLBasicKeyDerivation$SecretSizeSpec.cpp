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

void SSLBasicKeyDerivation$SecretSizeSpec::init$(int32_t length) {
	this->length = length;
}

SSLBasicKeyDerivation$SecretSizeSpec::SSLBasicKeyDerivation$SecretSizeSpec() {
}

$Class* SSLBasicKeyDerivation$SecretSizeSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"length", "I", nullptr, $FINAL, $field(SSLBasicKeyDerivation$SecretSizeSpec, length)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(SSLBasicKeyDerivation$SecretSizeSpec, init$, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLBasicKeyDerivation$SecretSizeSpec", "sun.security.ssl.SSLBasicKeyDerivation", "SecretSizeSpec", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLBasicKeyDerivation$SecretSizeSpec",
		"java.lang.Object",
		"java.security.spec.AlgorithmParameterSpec",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLBasicKeyDerivation"
	};
	$loadClass(SSLBasicKeyDerivation$SecretSizeSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLBasicKeyDerivation$SecretSizeSpec);
	});
	return class$;
}

$Class* SSLBasicKeyDerivation$SecretSizeSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun