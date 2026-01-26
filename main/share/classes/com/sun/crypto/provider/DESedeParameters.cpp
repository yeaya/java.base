#include <com/sun/crypto/provider/DESedeParameters.h>

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

$FieldInfo _DESedeParameters_FieldInfo_[] = {
	{"core", "Lcom/sun/crypto/provider/BlockCipherParamsCore;", nullptr, $PRIVATE, $field(DESedeParameters, core)},
	{}
};

$MethodInfo _DESedeParameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DESedeParameters, init$, void)},
	{"engineGetEncoded", "()[B", nullptr, $PROTECTED, $virtualMethod(DESedeParameters, engineGetEncoded, $bytes*), "java.io.IOException"},
	{"engineGetEncoded", "(Ljava/lang/String;)[B", nullptr, $PROTECTED, $virtualMethod(DESedeParameters, engineGetEncoded, $bytes*, $String*), "java.io.IOException"},
	{"engineGetParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", $PROTECTED, $virtualMethod(DESedeParameters, engineGetParameterSpec, $AlgorithmParameterSpec*, $Class*), "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, $virtualMethod(DESedeParameters, engineInit, void, $AlgorithmParameterSpec*), "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "([B)V", nullptr, $PROTECTED, $virtualMethod(DESedeParameters, engineInit, void, $bytes*), "java.io.IOException"},
	{"engineInit", "([BLjava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(DESedeParameters, engineInit, void, $bytes*, $String*), "java.io.IOException"},
	{"engineToString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(DESedeParameters, engineToString, $String*)},
	{}
};

$ClassInfo _DESedeParameters_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.DESedeParameters",
	"java.security.AlgorithmParametersSpi",
	nullptr,
	_DESedeParameters_FieldInfo_,
	_DESedeParameters_MethodInfo_
};

$Object* allocate$DESedeParameters($Class* clazz) {
	return $of($alloc(DESedeParameters));
}

void DESedeParameters::init$() {
	$AlgorithmParametersSpi::init$();
	$set(this, core, $new($BlockCipherParamsCore, $DESConstants::DES_BLOCK_SIZE, $$new($ints, 0)));
}

void DESedeParameters::engineInit($AlgorithmParameterSpec* paramSpec) {
	$nc(this->core)->init(paramSpec);
}

void DESedeParameters::engineInit($bytes* encoded) {
	$nc(this->core)->init(encoded);
}

void DESedeParameters::engineInit($bytes* encoded, $String* decodingMethod) {
	$nc(this->core)->init(encoded, decodingMethod);
}

$AlgorithmParameterSpec* DESedeParameters::engineGetParameterSpec($Class* paramSpec) {
	$load($AlgorithmParameterSpec);
	if ($AlgorithmParameterSpec::class$->isAssignableFrom(paramSpec)) {
		return $nc(this->core)->getParameterSpec(paramSpec);
	} else {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter Specification"_s);
	}
}

$bytes* DESedeParameters::engineGetEncoded() {
	return $nc(this->core)->getEncoded();
}

$bytes* DESedeParameters::engineGetEncoded($String* encodingMethod) {
	return $nc(this->core)->getEncoded();
}

$String* DESedeParameters::engineToString() {
	return $nc(this->core)->toString();
}

DESedeParameters::DESedeParameters() {
}

$Class* DESedeParameters::load$($String* name, bool initialize) {
	$loadClass(DESedeParameters, name, initialize, &_DESedeParameters_ClassInfo_, allocate$DESedeParameters);
	return class$;
}

$Class* DESedeParameters::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com