#include <javax/crypto/ExemptionMechanism.h>

#include <java/lang/IllegalStateException.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/Key.h>
#include <java/security/Provider.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Objects.h>
#include <javax/crypto/ExemptionMechanismSpi.h>
#include <javax/crypto/JceSecurity.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $Key = ::java::security::Key;
using $Provider = ::java::security::Provider;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Objects = ::java::util::Objects;
using $ExemptionMechanismSpi = ::javax::crypto::ExemptionMechanismSpi;
using $JceSecurity = ::javax::crypto::JceSecurity;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;

namespace javax {
	namespace crypto {

$FieldInfo _ExemptionMechanism_FieldInfo_[] = {
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(ExemptionMechanism, provider)},
	{"exmechSpi", "Ljavax/crypto/ExemptionMechanismSpi;", nullptr, $PRIVATE, $field(ExemptionMechanism, exmechSpi)},
	{"mechanism", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ExemptionMechanism, mechanism)},
	{"done", "Z", nullptr, $PRIVATE, $field(ExemptionMechanism, done)},
	{"initialized", "Z", nullptr, $PRIVATE, $field(ExemptionMechanism, initialized)},
	{"keyStored", "Ljava/security/Key;", nullptr, $PRIVATE, $field(ExemptionMechanism, keyStored)},
	{}
};

$MethodInfo _ExemptionMechanism_MethodInfo_[] = {
	{"<init>", "(Ljavax/crypto/ExemptionMechanismSpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(ExemptionMechanism::*)($ExemptionMechanismSpi*,$Provider*,$String*)>(&ExemptionMechanism::init$))},
	{"genExemptionBlob", "()[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(ExemptionMechanism::*)()>(&ExemptionMechanism::genExemptionBlob)), "java.lang.IllegalStateException,javax.crypto.ExemptionMechanismException"},
	{"genExemptionBlob", "([B)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(ExemptionMechanism::*)($bytes*)>(&ExemptionMechanism::genExemptionBlob)), "java.lang.IllegalStateException,javax.crypto.ShortBufferException,javax.crypto.ExemptionMechanismException"},
	{"genExemptionBlob", "([BI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(ExemptionMechanism::*)($bytes*,int32_t)>(&ExemptionMechanism::genExemptionBlob)), "java.lang.IllegalStateException,javax.crypto.ShortBufferException,javax.crypto.ExemptionMechanismException"},
	{"getInstance", "(Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<ExemptionMechanism*(*)($String*)>(&ExemptionMechanism::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<ExemptionMechanism*(*)($String*,$String*)>(&ExemptionMechanism::getInstance)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/ExemptionMechanism;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<ExemptionMechanism*(*)($String*,$Provider*)>(&ExemptionMechanism::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(ExemptionMechanism::*)()>(&ExemptionMechanism::getName))},
	{"getOutputSize", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(ExemptionMechanism::*)(int32_t)>(&ExemptionMechanism::getOutputSize)), "java.lang.IllegalStateException"},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(ExemptionMechanism::*)()>(&ExemptionMechanism::getProvider))},
	{"init", "(Ljava/security/Key;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(ExemptionMechanism::*)($Key*)>(&ExemptionMechanism::init)), "java.security.InvalidKeyException,javax.crypto.ExemptionMechanismException"},
	{"init", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(ExemptionMechanism::*)($Key*,$AlgorithmParameterSpec*)>(&ExemptionMechanism::init)), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException,javax.crypto.ExemptionMechanismException"},
	{"init", "(Ljava/security/Key;Ljava/security/AlgorithmParameters;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(ExemptionMechanism::*)($Key*,$AlgorithmParameters*)>(&ExemptionMechanism::init)), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException,javax.crypto.ExemptionMechanismException"},
	{"isCryptoAllowed", "(Ljava/security/Key;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(ExemptionMechanism::*)($Key*)>(&ExemptionMechanism::isCryptoAllowed)), "javax.crypto.ExemptionMechanismException"},
	{}
};

$ClassInfo _ExemptionMechanism_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.ExemptionMechanism",
	"java.lang.Object",
	nullptr,
	_ExemptionMechanism_FieldInfo_,
	_ExemptionMechanism_MethodInfo_
};

$Object* allocate$ExemptionMechanism($Class* clazz) {
	return $of($alloc(ExemptionMechanism));
}

void ExemptionMechanism::init$($ExemptionMechanismSpi* exmechSpi, $Provider* provider, $String* mechanism) {
	this->done = false;
	this->initialized = false;
	$set(this, keyStored, nullptr);
	$set(this, exmechSpi, exmechSpi);
	$set(this, provider, provider);
	$set(this, mechanism, mechanism);
}

$String* ExemptionMechanism::getName() {
	return this->mechanism;
}

ExemptionMechanism* ExemptionMechanism::getInstance($String* algorithm) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($ExemptionMechanismSpi);
	$var($GetInstance$Instance, instance, $JceSecurity::getInstance("ExemptionMechanism"_s, $ExemptionMechanismSpi::class$, algorithm));
	return $new(ExemptionMechanism, $cast($ExemptionMechanismSpi, $nc(instance)->impl), instance->provider, algorithm);
}

ExemptionMechanism* ExemptionMechanism::getInstance($String* algorithm, $String* provider) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($ExemptionMechanismSpi);
	$var($GetInstance$Instance, instance, $JceSecurity::getInstance("ExemptionMechanism"_s, $ExemptionMechanismSpi::class$, algorithm, provider));
	return $new(ExemptionMechanism, $cast($ExemptionMechanismSpi, $nc(instance)->impl), instance->provider, algorithm);
}

ExemptionMechanism* ExemptionMechanism::getInstance($String* algorithm, $Provider* provider) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($ExemptionMechanismSpi);
	$var($GetInstance$Instance, instance, $JceSecurity::getInstance("ExemptionMechanism"_s, $ExemptionMechanismSpi::class$, algorithm, provider));
	return $new(ExemptionMechanism, $cast($ExemptionMechanismSpi, $nc(instance)->impl), instance->provider, algorithm);
}

$Provider* ExemptionMechanism::getProvider() {
	return this->provider;
}

bool ExemptionMechanism::isCryptoAllowed($Key* key) {
	bool ret = false;
	if (this->done && (key != nullptr)) {
		ret = $nc($of(this->keyStored))->equals(key);
	}
	return ret;
}

int32_t ExemptionMechanism::getOutputSize(int32_t inputLen) {
	if (!this->initialized) {
		$throwNew($IllegalStateException, "ExemptionMechanism not initialized"_s);
	}
	if (inputLen < 0) {
		$throwNew($IllegalArgumentException, "Input size must be equal to or greater than zero"_s);
	}
	return $nc(this->exmechSpi)->engineGetOutputSize(inputLen);
}

void ExemptionMechanism::init($Key* key) {
	this->done = false;
	this->initialized = false;
	$set(this, keyStored, key);
	$nc(this->exmechSpi)->engineInit(key);
	this->initialized = true;
}

void ExemptionMechanism::init($Key* key, $AlgorithmParameterSpec* params) {
	this->done = false;
	this->initialized = false;
	$set(this, keyStored, key);
	$nc(this->exmechSpi)->engineInit(key, params);
	this->initialized = true;
}

void ExemptionMechanism::init($Key* key, $AlgorithmParameters* params) {
	this->done = false;
	this->initialized = false;
	$set(this, keyStored, key);
	$nc(this->exmechSpi)->engineInit(key, params);
	this->initialized = true;
}

$bytes* ExemptionMechanism::genExemptionBlob() {
	if (!this->initialized) {
		$throwNew($IllegalStateException, "ExemptionMechanism not initialized"_s);
	}
	$var($bytes, blob, $nc(this->exmechSpi)->engineGenExemptionBlob());
	this->done = true;
	return blob;
}

int32_t ExemptionMechanism::genExemptionBlob($bytes* output) {
	if (!this->initialized) {
		$throwNew($IllegalStateException, "ExemptionMechanism not initialized"_s);
	}
	int32_t n = $nc(this->exmechSpi)->engineGenExemptionBlob(output, 0);
	this->done = true;
	return n;
}

int32_t ExemptionMechanism::genExemptionBlob($bytes* output, int32_t outputOffset) {
	if (!this->initialized) {
		$throwNew($IllegalStateException, "ExemptionMechanism not initialized"_s);
	}
	int32_t n = $nc(this->exmechSpi)->engineGenExemptionBlob(output, outputOffset);
	this->done = true;
	return n;
}

ExemptionMechanism::ExemptionMechanism() {
}

$Class* ExemptionMechanism::load$($String* name, bool initialize) {
	$loadClass(ExemptionMechanism, name, initialize, &_ExemptionMechanism_ClassInfo_, allocate$ExemptionMechanism);
	return class$;
}

$Class* ExemptionMechanism::class$ = nullptr;

	} // crypto
} // javax