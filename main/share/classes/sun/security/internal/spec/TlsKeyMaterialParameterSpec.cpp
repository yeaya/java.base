#include <sun/security/internal/spec/TlsKeyMaterialParameterSpec.h>

#include <javax/crypto/SecretKey.h>
#include <sun/security/internal/spec/TlsMasterSecretParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Key = ::java::security::Key;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $SecretKey = ::javax::crypto::SecretKey;
using $TlsMasterSecretParameterSpec = ::sun::security::internal::spec::TlsMasterSecretParameterSpec;

namespace sun {
	namespace security {
		namespace internal {
			namespace spec {

$CompoundAttribute _TlsKeyMaterialParameterSpec_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _TlsKeyMaterialParameterSpec_FieldInfo_[] = {
	{"masterSecret", "Ljavax/crypto/SecretKey;", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialParameterSpec, masterSecret)},
	{"majorVersion", "I", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialParameterSpec, majorVersion)},
	{"minorVersion", "I", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialParameterSpec, minorVersion)},
	{"clientRandom", "[B", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialParameterSpec, clientRandom)},
	{"serverRandom", "[B", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialParameterSpec, serverRandom)},
	{"cipherAlgorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialParameterSpec, cipherAlgorithm)},
	{"cipherKeyLength", "I", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialParameterSpec, cipherKeyLength)},
	{"ivLength", "I", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialParameterSpec, ivLength)},
	{"macKeyLength", "I", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialParameterSpec, macKeyLength)},
	{"expandedCipherKeyLength", "I", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialParameterSpec, expandedCipherKeyLength)},
	{"prfHashAlg", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialParameterSpec, prfHashAlg)},
	{"prfHashLength", "I", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialParameterSpec, prfHashLength)},
	{"prfBlockSize", "I", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialParameterSpec, prfBlockSize)},
	{}
};

$MethodInfo _TlsKeyMaterialParameterSpec_MethodInfo_[] = {
	{"<init>", "(Ljavax/crypto/SecretKey;II[B[BLjava/lang/String;IIIILjava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(TlsKeyMaterialParameterSpec::*)($SecretKey*,int32_t,int32_t,$bytes*,$bytes*,$String*,int32_t,int32_t,int32_t,int32_t,$String*,int32_t,int32_t)>(&TlsKeyMaterialParameterSpec::init$))},
	{"checkSign", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&TlsKeyMaterialParameterSpec::checkSign))},
	{"getCipherAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCipherKeyLength", "()I", nullptr, $PUBLIC},
	{"getClientRandom", "()[B", nullptr, $PUBLIC},
	{"getExpandedCipherKeyLength", "()I", nullptr, $PUBLIC},
	{"getIvLength", "()I", nullptr, $PUBLIC},
	{"getMacKeyLength", "()I", nullptr, $PUBLIC},
	{"getMajorVersion", "()I", nullptr, $PUBLIC},
	{"getMasterSecret", "()Ljavax/crypto/SecretKey;", nullptr, $PUBLIC},
	{"getMinorVersion", "()I", nullptr, $PUBLIC},
	{"getPRFBlockSize", "()I", nullptr, $PUBLIC},
	{"getPRFHashAlg", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPRFHashLength", "()I", nullptr, $PUBLIC},
	{"getServerRandom", "()[B", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TlsKeyMaterialParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.internal.spec.TlsKeyMaterialParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_TlsKeyMaterialParameterSpec_FieldInfo_,
	_TlsKeyMaterialParameterSpec_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_TlsKeyMaterialParameterSpec_Annotations_
};

$Object* allocate$TlsKeyMaterialParameterSpec($Class* clazz) {
	return $of($alloc(TlsKeyMaterialParameterSpec));
}

void TlsKeyMaterialParameterSpec::init$($SecretKey* masterSecret, int32_t majorVersion, int32_t minorVersion, $bytes* clientRandom, $bytes* serverRandom, $String* cipherAlgorithm, int32_t cipherKeyLength, int32_t expandedCipherKeyLength, int32_t ivLength, int32_t macKeyLength, $String* prfHashAlg, int32_t prfHashLength, int32_t prfBlockSize) {
	if ($nc($($nc(masterSecret)->getAlgorithm()))->equals("TlsMasterSecret"_s) == false) {
		$throwNew($IllegalArgumentException, "Not a TLS master secret"_s);
	}
	if (cipherAlgorithm == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, masterSecret, masterSecret);
	this->majorVersion = $TlsMasterSecretParameterSpec::checkVersion(majorVersion);
	this->minorVersion = $TlsMasterSecretParameterSpec::checkVersion(minorVersion);
	$set(this, clientRandom, $cast($bytes, $nc(clientRandom)->clone()));
	$set(this, serverRandom, $cast($bytes, $nc(serverRandom)->clone()));
	$set(this, cipherAlgorithm, cipherAlgorithm);
	this->cipherKeyLength = checkSign(cipherKeyLength);
	this->expandedCipherKeyLength = checkSign(expandedCipherKeyLength);
	this->ivLength = checkSign(ivLength);
	this->macKeyLength = checkSign(macKeyLength);
	$set(this, prfHashAlg, prfHashAlg);
	this->prfHashLength = prfHashLength;
	this->prfBlockSize = prfBlockSize;
}

int32_t TlsKeyMaterialParameterSpec::checkSign(int32_t k) {
	$init(TlsKeyMaterialParameterSpec);
	if (k < 0) {
		$throwNew($IllegalArgumentException, "Value must not be negative"_s);
	}
	return k;
}

$SecretKey* TlsKeyMaterialParameterSpec::getMasterSecret() {
	return this->masterSecret;
}

int32_t TlsKeyMaterialParameterSpec::getMajorVersion() {
	return this->majorVersion;
}

int32_t TlsKeyMaterialParameterSpec::getMinorVersion() {
	return this->minorVersion;
}

$bytes* TlsKeyMaterialParameterSpec::getClientRandom() {
	return $cast($bytes, $nc(this->clientRandom)->clone());
}

$bytes* TlsKeyMaterialParameterSpec::getServerRandom() {
	return $cast($bytes, $nc(this->serverRandom)->clone());
}

$String* TlsKeyMaterialParameterSpec::getCipherAlgorithm() {
	return this->cipherAlgorithm;
}

int32_t TlsKeyMaterialParameterSpec::getCipherKeyLength() {
	return this->cipherKeyLength;
}

int32_t TlsKeyMaterialParameterSpec::getExpandedCipherKeyLength() {
	if (this->majorVersion >= 3 && this->minorVersion >= 2) {
		return 0;
	}
	return this->expandedCipherKeyLength;
}

int32_t TlsKeyMaterialParameterSpec::getIvLength() {
	return this->ivLength;
}

int32_t TlsKeyMaterialParameterSpec::getMacKeyLength() {
	return this->macKeyLength;
}

$String* TlsKeyMaterialParameterSpec::getPRFHashAlg() {
	return this->prfHashAlg;
}

int32_t TlsKeyMaterialParameterSpec::getPRFHashLength() {
	return this->prfHashLength;
}

int32_t TlsKeyMaterialParameterSpec::getPRFBlockSize() {
	return this->prfBlockSize;
}

TlsKeyMaterialParameterSpec::TlsKeyMaterialParameterSpec() {
}

$Class* TlsKeyMaterialParameterSpec::load$($String* name, bool initialize) {
	$loadClass(TlsKeyMaterialParameterSpec, name, initialize, &_TlsKeyMaterialParameterSpec_ClassInfo_, allocate$TlsKeyMaterialParameterSpec);
	return class$;
}

$Class* TlsKeyMaterialParameterSpec::class$ = nullptr;

			} // spec
		} // internal
	} // security
} // sun