#include <com/sun/crypto/provider/AESParameters.h>

#include <com/sun/crypto/provider/AESConstants.h>
#include <com/sun/crypto/provider/BlockCipherParamsCore.h>
#include <java/security/AlgorithmParametersSpi.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <jcpp.h>

#undef AES_BLOCK_SIZE

using $AESConstants = ::com::sun::crypto::provider::AESConstants;
using $BlockCipherParamsCore = ::com::sun::crypto::provider::BlockCipherParamsCore;
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

$FieldInfo _AESParameters_FieldInfo_[] = {
	{"core", "Lcom/sun/crypto/provider/BlockCipherParamsCore;", nullptr, $PRIVATE, $field(AESParameters, core)},
	{}
};

$MethodInfo _AESParameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AESParameters::*)()>(&AESParameters::init$))},
	{"engineGetEncoded", "()[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineGetEncoded", "(Ljava/lang/String;)[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineGetParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", $PROTECTED, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "([B)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineInit", "([BLjava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineToString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AESParameters_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.AESParameters",
	"java.security.AlgorithmParametersSpi",
	nullptr,
	_AESParameters_FieldInfo_,
	_AESParameters_MethodInfo_
};

$Object* allocate$AESParameters($Class* clazz) {
	return $of($alloc(AESParameters));
}

void AESParameters::init$() {
	$AlgorithmParametersSpi::init$();
	$set(this, core, $new($BlockCipherParamsCore, $AESConstants::AES_BLOCK_SIZE, $$new($ints, {
		4,
		8
	})));
}

void AESParameters::engineInit($AlgorithmParameterSpec* paramSpec) {
	$nc(this->core)->init(paramSpec);
}

void AESParameters::engineInit($bytes* encoded) {
	$nc(this->core)->init(encoded);
}

void AESParameters::engineInit($bytes* encoded, $String* decodingMethod) {
	$nc(this->core)->init(encoded, decodingMethod);
}

$AlgorithmParameterSpec* AESParameters::engineGetParameterSpec($Class* paramSpec) {
	$load($AlgorithmParameterSpec);
	if ($AlgorithmParameterSpec::class$->isAssignableFrom(paramSpec)) {
		return $nc(this->core)->getParameterSpec(paramSpec);
	} else {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter Specification"_s);
	}
}

$bytes* AESParameters::engineGetEncoded() {
	return $nc(this->core)->getEncoded();
}

$bytes* AESParameters::engineGetEncoded($String* encodingMethod) {
	return $nc(this->core)->getEncoded();
}

$String* AESParameters::engineToString() {
	return $nc(this->core)->toString();
}

AESParameters::AESParameters() {
}

$Class* AESParameters::load$($String* name, bool initialize) {
	$loadClass(AESParameters, name, initialize, &_AESParameters_ClassInfo_, allocate$AESParameters);
	return class$;
}

$Class* AESParameters::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com