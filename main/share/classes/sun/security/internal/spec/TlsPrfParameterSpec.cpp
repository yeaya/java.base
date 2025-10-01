#include <sun/security/internal/spec/TlsPrfParameterSpec.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $SecretKey = ::javax::crypto::SecretKey;

namespace sun {
	namespace security {
		namespace internal {
			namespace spec {
$CompoundAttribute _TlsPrfParameterSpec_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$FieldInfo _TlsPrfParameterSpec_FieldInfo_[] = {
	{"secret", "Ljavax/crypto/SecretKey;", nullptr, $PRIVATE | $FINAL, $field(TlsPrfParameterSpec, secret)},
	{"label", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TlsPrfParameterSpec, label)},
	{"seed", "[B", nullptr, $PRIVATE | $FINAL, $field(TlsPrfParameterSpec, seed)},
	{"outputLength", "I", nullptr, $PRIVATE | $FINAL, $field(TlsPrfParameterSpec, outputLength)},
	{"prfHashAlg", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TlsPrfParameterSpec, prfHashAlg)},
	{"prfHashLength", "I", nullptr, $PRIVATE | $FINAL, $field(TlsPrfParameterSpec, prfHashLength)},
	{"prfBlockSize", "I", nullptr, $PRIVATE | $FINAL, $field(TlsPrfParameterSpec, prfBlockSize)},
	{}
};

$MethodInfo _TlsPrfParameterSpec_MethodInfo_[] = {
	{"<init>", "(Ljavax/crypto/SecretKey;Ljava/lang/String;[BILjava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(TlsPrfParameterSpec::*)($SecretKey*,$String*,$bytes*,int32_t,$String*,int32_t,int32_t)>(&TlsPrfParameterSpec::init$))},
	{"getLabel", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOutputLength", "()I", nullptr, $PUBLIC},
	{"getPRFBlockSize", "()I", nullptr, $PUBLIC},
	{"getPRFHashAlg", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPRFHashLength", "()I", nullptr, $PUBLIC},
	{"getSecret", "()Ljavax/crypto/SecretKey;", nullptr, $PUBLIC},
	{"getSeed", "()[B", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TlsPrfParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.internal.spec.TlsPrfParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_TlsPrfParameterSpec_FieldInfo_,
	_TlsPrfParameterSpec_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_TlsPrfParameterSpec_Annotations_
};

$Object* allocate$TlsPrfParameterSpec($Class* clazz) {
	return $of($alloc(TlsPrfParameterSpec));
}

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
	$loadClass(TlsPrfParameterSpec, name, initialize, &_TlsPrfParameterSpec_ClassInfo_, allocate$TlsPrfParameterSpec);
	return class$;
}

$Class* TlsPrfParameterSpec::class$ = nullptr;

			} // spec
		} // internal
	} // security
} // sun