#include <sun/security/internal/spec/TlsPrfParameterSpec.h>
#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecretKey = ::javax::crypto::SecretKey;

namespace sun {
	namespace security {
		namespace internal {
			namespace spec {

void TlsPrfParameterSpec::init$($SecretKey* secret, $String* label, $bytes* seed, int32_t outputLength, $String* prfHashAlg, int32_t prfHashLength, int32_t prfBlockSize) {
	if ((label == nullptr) || (seed == nullptr)) {
		$throwNew($NullPointerException, "label and seed must not be null"_s);
	}
	if (outputLength <= 0) {
		$throwNew($IllegalArgumentException, "outputLength must be positive"_s);
	}
	$set(this, secret, secret);
	$set(this, label, label);
	$set(this, seed, $cast($bytes, $nc(seed)->clone()));
	this->outputLength = outputLength;
	$set(this, prfHashAlg, prfHashAlg);
	this->prfHashLength = prfHashLength;
	this->prfBlockSize = prfBlockSize;
}

$SecretKey* TlsPrfParameterSpec::getSecret() {
	return this->secret;
}

$String* TlsPrfParameterSpec::getLabel() {
	return this->label;
}

$bytes* TlsPrfParameterSpec::getSeed() {
	return $cast($bytes, $nc(this->seed)->clone());
}

int32_t TlsPrfParameterSpec::getOutputLength() {
	return this->outputLength;
}

$String* TlsPrfParameterSpec::getPRFHashAlg() {
	return this->prfHashAlg;
}

int32_t TlsPrfParameterSpec::getPRFHashLength() {
	return this->prfHashLength;
}

int32_t TlsPrfParameterSpec::getPRFBlockSize() {
	return this->prfBlockSize;
}

TlsPrfParameterSpec::TlsPrfParameterSpec() {
}

$Class* TlsPrfParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"secret", "Ljavax/crypto/SecretKey;", nullptr, $PRIVATE | $FINAL, $field(TlsPrfParameterSpec, secret)},
		{"label", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TlsPrfParameterSpec, label)},
		{"seed", "[B", nullptr, $PRIVATE | $FINAL, $field(TlsPrfParameterSpec, seed)},
		{"outputLength", "I", nullptr, $PRIVATE | $FINAL, $field(TlsPrfParameterSpec, outputLength)},
		{"prfHashAlg", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TlsPrfParameterSpec, prfHashAlg)},
		{"prfHashLength", "I", nullptr, $PRIVATE | $FINAL, $field(TlsPrfParameterSpec, prfHashLength)},
		{"prfBlockSize", "I", nullptr, $PRIVATE | $FINAL, $field(TlsPrfParameterSpec, prfBlockSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/crypto/SecretKey;Ljava/lang/String;[BILjava/lang/String;II)V", nullptr, $PUBLIC, $method(TlsPrfParameterSpec, init$, void, $SecretKey*, $String*, $bytes*, int32_t, $String*, int32_t, int32_t)},
		{"getLabel", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TlsPrfParameterSpec, getLabel, $String*)},
		{"getOutputLength", "()I", nullptr, $PUBLIC, $virtualMethod(TlsPrfParameterSpec, getOutputLength, int32_t)},
		{"getPRFBlockSize", "()I", nullptr, $PUBLIC, $virtualMethod(TlsPrfParameterSpec, getPRFBlockSize, int32_t)},
		{"getPRFHashAlg", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TlsPrfParameterSpec, getPRFHashAlg, $String*)},
		{"getPRFHashLength", "()I", nullptr, $PUBLIC, $virtualMethod(TlsPrfParameterSpec, getPRFHashLength, int32_t)},
		{"getSecret", "()Ljavax/crypto/SecretKey;", nullptr, $PUBLIC, $virtualMethod(TlsPrfParameterSpec, getSecret, $SecretKey*)},
		{"getSeed", "()[B", nullptr, $PUBLIC, $virtualMethod(TlsPrfParameterSpec, getSeed, $bytes*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.internal.spec.TlsPrfParameterSpec",
		"java.lang.Object",
		"java.security.spec.AlgorithmParameterSpec",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(TlsPrfParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TlsPrfParameterSpec);
	});
	return class$;
}

$Class* TlsPrfParameterSpec::class$ = nullptr;

			} // spec
		} // internal
	} // security
} // sun