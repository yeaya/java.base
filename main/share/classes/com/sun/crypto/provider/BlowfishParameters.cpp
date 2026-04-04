#include <com/sun/crypto/provider/BlowfishParameters.h>
#include <com/sun/crypto/provider/BlockCipherParamsCore.h>
#include <com/sun/crypto/provider/BlowfishConstants.h>
#include <java/security/AlgorithmParametersSpi.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <jcpp.h>

#undef BLOWFISH_BLOCK_SIZE

using $BlockCipherParamsCore = ::com::sun::crypto::provider::BlockCipherParamsCore;
using $BlowfishConstants = ::com::sun::crypto::provider::BlowfishConstants;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParametersSpi = ::java::security::AlgorithmParametersSpi;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void BlowfishParameters::init$() {
	$AlgorithmParametersSpi::init$();
	$set(this, core, $new($BlockCipherParamsCore, $BlowfishConstants::BLOWFISH_BLOCK_SIZE, $$new($ints, 0)));
}

void BlowfishParameters::engineInit($AlgorithmParameterSpec* paramSpec) {
	$nc(this->core)->init(paramSpec);
}

void BlowfishParameters::engineInit($bytes* encoded) {
	$nc(this->core)->init(encoded);
}

void BlowfishParameters::engineInit($bytes* encoded, $String* decodingMethod) {
	$nc(this->core)->init(encoded, decodingMethod);
}

$AlgorithmParameterSpec* BlowfishParameters::engineGetParameterSpec($Class* paramSpec) {
	$load($AlgorithmParameterSpec);
	if ($AlgorithmParameterSpec::class$->isAssignableFrom(paramSpec)) {
		return $nc(this->core)->getParameterSpec(paramSpec);
	} else {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter Specification"_s);
	}
}

$bytes* BlowfishParameters::engineGetEncoded() {
	return $nc(this->core)->getEncoded();
}

$bytes* BlowfishParameters::engineGetEncoded($String* encodingMethod) {
	return $nc(this->core)->getEncoded();
}

$String* BlowfishParameters::engineToString() {
	return $nc(this->core)->toString();
}

BlowfishParameters::BlowfishParameters() {
}

$Class* BlowfishParameters::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"core", "Lcom/sun/crypto/provider/BlockCipherParamsCore;", nullptr, $PRIVATE, $field(BlowfishParameters, core)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BlowfishParameters, init$, void)},
		{"engineGetEncoded", "()[B", nullptr, $PROTECTED, $virtualMethod(BlowfishParameters, engineGetEncoded, $bytes*), "java.io.IOException"},
		{"engineGetEncoded", "(Ljava/lang/String;)[B", nullptr, $PROTECTED, $virtualMethod(BlowfishParameters, engineGetEncoded, $bytes*, $String*), "java.io.IOException"},
		{"engineGetParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", $PROTECTED, $virtualMethod(BlowfishParameters, engineGetParameterSpec, $AlgorithmParameterSpec*, $Class*), "java.security.spec.InvalidParameterSpecException"},
		{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, $virtualMethod(BlowfishParameters, engineInit, void, $AlgorithmParameterSpec*), "java.security.spec.InvalidParameterSpecException"},
		{"engineInit", "([B)V", nullptr, $PROTECTED, $virtualMethod(BlowfishParameters, engineInit, void, $bytes*), "java.io.IOException"},
		{"engineInit", "([BLjava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(BlowfishParameters, engineInit, void, $bytes*, $String*), "java.io.IOException"},
		{"engineToString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(BlowfishParameters, engineToString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.BlowfishParameters",
		"java.security.AlgorithmParametersSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BlowfishParameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BlowfishParameters);
	});
	return class$;
}

$Class* BlowfishParameters::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com