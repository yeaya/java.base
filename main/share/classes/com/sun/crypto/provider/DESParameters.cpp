#include <com/sun/crypto/provider/DESParameters.h>

#include <com/sun/crypto/provider/BlockCipherParamsCore.h>
#include <com/sun/crypto/provider/DESConstants.h>
#include <java/security/AlgorithmParametersSpi.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <jcpp.h>

#undef DES_BLOCK_SIZE

using $BlockCipherParamsCore = ::com::sun::crypto::provider::BlockCipherParamsCore;
using $DESConstants = ::com::sun::crypto::provider::DESConstants;
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

$FieldInfo _DESParameters_FieldInfo_[] = {
	{"core", "Lcom/sun/crypto/provider/BlockCipherParamsCore;", nullptr, $PRIVATE, $field(DESParameters, core)},
	{}
};

$MethodInfo _DESParameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DESParameters, init$, void)},
	{"engineGetEncoded", "()[B", nullptr, $PROTECTED, $virtualMethod(DESParameters, engineGetEncoded, $bytes*), "java.io.IOException"},
	{"engineGetEncoded", "(Ljava/lang/String;)[B", nullptr, $PROTECTED, $virtualMethod(DESParameters, engineGetEncoded, $bytes*, $String*), "java.io.IOException"},
	{"engineGetParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", $PROTECTED, $virtualMethod(DESParameters, engineGetParameterSpec, $AlgorithmParameterSpec*, $Class*), "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, $virtualMethod(DESParameters, engineInit, void, $AlgorithmParameterSpec*), "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "([B)V", nullptr, $PROTECTED, $virtualMethod(DESParameters, engineInit, void, $bytes*), "java.io.IOException"},
	{"engineInit", "([BLjava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(DESParameters, engineInit, void, $bytes*, $String*), "java.io.IOException"},
	{"engineToString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(DESParameters, engineToString, $String*)},
	{}
};

$ClassInfo _DESParameters_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.DESParameters",
	"java.security.AlgorithmParametersSpi",
	nullptr,
	_DESParameters_FieldInfo_,
	_DESParameters_MethodInfo_
};

$Object* allocate$DESParameters($Class* clazz) {
	return $of($alloc(DESParameters));
}

void DESParameters::init$() {
	$AlgorithmParametersSpi::init$();
	$set(this, core, $new($BlockCipherParamsCore, $DESConstants::DES_BLOCK_SIZE, $$new($ints, 0)));
}

void DESParameters::engineInit($AlgorithmParameterSpec* paramSpec) {
	$nc(this->core)->init(paramSpec);
}

void DESParameters::engineInit($bytes* encoded) {
	$nc(this->core)->init(encoded);
}

void DESParameters::engineInit($bytes* encoded, $String* decodingMethod) {
	$nc(this->core)->init(encoded, decodingMethod);
}

$AlgorithmParameterSpec* DESParameters::engineGetParameterSpec($Class* paramSpec) {
	$load($AlgorithmParameterSpec);
	if ($AlgorithmParameterSpec::class$->isAssignableFrom(paramSpec)) {
		return $nc(this->core)->getParameterSpec(paramSpec);
	} else {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter Specification"_s);
	}
}

$bytes* DESParameters::engineGetEncoded() {
	return $nc(this->core)->getEncoded();
}

$bytes* DESParameters::engineGetEncoded($String* encodingMethod) {
	return $nc(this->core)->getEncoded();
}

$String* DESParameters::engineToString() {
	return $nc(this->core)->toString();
}

DESParameters::DESParameters() {
}

$Class* DESParameters::load$($String* name, bool initialize) {
	$loadClass(DESParameters, name, initialize, &_DESParameters_ClassInfo_, allocate$DESParameters);
	return class$;
}

$Class* DESParameters::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com