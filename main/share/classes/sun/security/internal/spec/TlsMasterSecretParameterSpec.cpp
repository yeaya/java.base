#include <sun/security/internal/spec/TlsMasterSecretParameterSpec.h>

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

$CompoundAttribute _TlsMasterSecretParameterSpec_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _TlsMasterSecretParameterSpec_FieldInfo_[] = {
	{"premasterSecret", "Ljavax/crypto/SecretKey;", nullptr, $PRIVATE | $FINAL, $field(TlsMasterSecretParameterSpec, premasterSecret)},
	{"majorVersion", "I", nullptr, $PRIVATE | $FINAL, $field(TlsMasterSecretParameterSpec, majorVersion)},
	{"minorVersion", "I", nullptr, $PRIVATE | $FINAL, $field(TlsMasterSecretParameterSpec, minorVersion)},
	{"clientRandom", "[B", nullptr, $PRIVATE | $FINAL, $field(TlsMasterSecretParameterSpec, clientRandom)},
	{"serverRandom", "[B", nullptr, $PRIVATE | $FINAL, $field(TlsMasterSecretParameterSpec, serverRandom)},
	{"extendedMasterSecretSessionHash", "[B", nullptr, $PRIVATE | $FINAL, $field(TlsMasterSecretParameterSpec, extendedMasterSecretSessionHash)},
	{"prfHashAlg", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TlsMasterSecretParameterSpec, prfHashAlg)},
	{"prfHashLength", "I", nullptr, $PRIVATE | $FINAL, $field(TlsMasterSecretParameterSpec, prfHashLength)},
	{"prfBlockSize", "I", nullptr, $PRIVATE | $FINAL, $field(TlsMasterSecretParameterSpec, prfBlockSize)},
	{}
};

$MethodInfo _TlsMasterSecretParameterSpec_MethodInfo_[] = {
	{"<init>", "(Ljavax/crypto/SecretKey;II[B[BLjava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(TlsMasterSecretParameterSpec::*)($SecretKey*,int32_t,int32_t,$bytes*,$bytes*,$String*,int32_t,int32_t)>(&TlsMasterSecretParameterSpec::init$))},
	{"<init>", "(Ljavax/crypto/SecretKey;II[BLjava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(TlsMasterSecretParameterSpec::*)($SecretKey*,int32_t,int32_t,$bytes*,$String*,int32_t,int32_t)>(&TlsMasterSecretParameterSpec::init$))},
	{"<init>", "(Ljavax/crypto/SecretKey;II[B[B[BLjava/lang/String;II)V", nullptr, $PRIVATE, $method(static_cast<void(TlsMasterSecretParameterSpec::*)($SecretKey*,int32_t,int32_t,$bytes*,$bytes*,$bytes*,$String*,int32_t,int32_t)>(&TlsMasterSecretParameterSpec::init$))},
	{"checkVersion", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&TlsMasterSecretParameterSpec::checkVersion))},
	{"getClientRandom", "()[B", nullptr, $PUBLIC},
	{"getExtendedMasterSecretSessionHash", "()[B", nullptr, $PUBLIC},
	{"getMajorVersion", "()I", nullptr, $PUBLIC},
	{"getMinorVersion", "()I", nullptr, $PUBLIC},
	{"getPRFBlockSize", "()I", nullptr, $PUBLIC},
	{"getPRFHashAlg", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPRFHashLength", "()I", nullptr, $PUBLIC},
	{"getPremasterSecret", "()Ljavax/crypto/SecretKey;", nullptr, $PUBLIC},
	{"getServerRandom", "()[B", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TlsMasterSecretParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.internal.spec.TlsMasterSecretParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_TlsMasterSecretParameterSpec_FieldInfo_,
	_TlsMasterSecretParameterSpec_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_TlsMasterSecretParameterSpec_Annotations_
};

$Object* allocate$TlsMasterSecretParameterSpec($Class* clazz) {
	return $of($alloc(TlsMasterSecretParameterSpec));
}

void TlsMasterSecretParameterSpec::init$($SecretKey* premasterSecret, int32_t majorVersion, int32_t minorVersion, $bytes* clientRandom, $bytes* serverRandom, $String* prfHashAlg, int32_t prfHashLength, int32_t prfBlockSize) {
	TlsMasterSecretParameterSpec::init$(premasterSecret, majorVersion, minorVersion, clientRandom, serverRandom, $$new($bytes, 0), prfHashAlg, prfHashLength, prfBlockSize);
}

void TlsMasterSecretParameterSpec::init$($SecretKey* premasterSecret, int32_t majorVersion, int32_t minorVersion, $bytes* extendedMasterSecretSessionHash, $String* prfHashAlg, int32_t prfHashLength, int32_t prfBlockSize) {
	$useLocalCurrentObjectStackCache();
	TlsMasterSecretParameterSpec::init$(premasterSecret, majorVersion, minorVersion, $$new($bytes, 0), $$new($bytes, 0), extendedMasterSecretSessionHash, prfHashAlg, prfHashLength, prfBlockSize);
}

void TlsMasterSecretParameterSpec::init$($SecretKey* premasterSecret, int32_t majorVersion, int32_t minorVersion, $bytes* clientRandom, $bytes* serverRandom, $bytes* extendedMasterSecretSessionHash, $String* prfHashAlg, int32_t prfHashLength, int32_t prfBlockSize) {
	if (premasterSecret == nullptr) {
		$throwNew($NullPointerException, "premasterSecret must not be null"_s);
	}
	$set(this, premasterSecret, premasterSecret);
	this->majorVersion = checkVersion(majorVersion);
	this->minorVersion = checkVersion(minorVersion);
	$set(this, clientRandom, $cast($bytes, $nc(clientRandom)->clone()));
	$set(this, serverRandom, $cast($bytes, $nc(serverRandom)->clone()));
	$set(this, extendedMasterSecretSessionHash, extendedMasterSecretSessionHash != nullptr ? $cast($bytes, $nc(extendedMasterSecretSessionHash)->clone()) : $new($bytes, 0));
	$set(this, prfHashAlg, prfHashAlg);
	this->prfHashLength = prfHashLength;
	this->prfBlockSize = prfBlockSize;
}

int32_t TlsMasterSecretParameterSpec::checkVersion(int32_t version) {
	$init(TlsMasterSecretParameterSpec);
	if ((version < 0) || (version > 255)) {
		$throwNew($IllegalArgumentException, "Version must be between 0 and 255"_s);
	}
	return version;
}

$SecretKey* TlsMasterSecretParameterSpec::getPremasterSecret() {
	return this->premasterSecret;
}

int32_t TlsMasterSecretParameterSpec::getMajorVersion() {
	return this->majorVersion;
}

int32_t TlsMasterSecretParameterSpec::getMinorVersion() {
	return this->minorVersion;
}

$bytes* TlsMasterSecretParameterSpec::getClientRandom() {
	return $cast($bytes, $nc(this->clientRandom)->clone());
}

$bytes* TlsMasterSecretParameterSpec::getServerRandom() {
	return $cast($bytes, $nc(this->serverRandom)->clone());
}

$bytes* TlsMasterSecretParameterSpec::getExtendedMasterSecretSessionHash() {
	return $cast($bytes, $nc(this->extendedMasterSecretSessionHash)->clone());
}

$String* TlsMasterSecretParameterSpec::getPRFHashAlg() {
	return this->prfHashAlg;
}

int32_t TlsMasterSecretParameterSpec::getPRFHashLength() {
	return this->prfHashLength;
}

int32_t TlsMasterSecretParameterSpec::getPRFBlockSize() {
	return this->prfBlockSize;
}

TlsMasterSecretParameterSpec::TlsMasterSecretParameterSpec() {
}

$Class* TlsMasterSecretParameterSpec::load$($String* name, bool initialize) {
	$loadClass(TlsMasterSecretParameterSpec, name, initialize, &_TlsMasterSecretParameterSpec_ClassInfo_, allocate$TlsMasterSecretParameterSpec);
	return class$;
}

$Class* TlsMasterSecretParameterSpec::class$ = nullptr;

			} // spec
		} // internal
	} // security
} // sun