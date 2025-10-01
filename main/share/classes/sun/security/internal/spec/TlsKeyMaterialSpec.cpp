#include <sun/security/internal/spec/TlsKeyMaterialSpec.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/KeySpec.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/IvParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeySpec = ::java::security::spec::KeySpec;
using $SecretKey = ::javax::crypto::SecretKey;
using $IvParameterSpec = ::javax::crypto::spec::IvParameterSpec;

namespace sun {
	namespace security {
		namespace internal {
			namespace spec {
$CompoundAttribute _TlsKeyMaterialSpec_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$FieldInfo _TlsKeyMaterialSpec_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(TlsKeyMaterialSpec, serialVersionUID)},
	{"clientMacKey", "Ljavax/crypto/SecretKey;", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialSpec, clientMacKey)},
	{"serverMacKey", "Ljavax/crypto/SecretKey;", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialSpec, serverMacKey)},
	{"clientCipherKey", "Ljavax/crypto/SecretKey;", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialSpec, clientCipherKey)},
	{"serverCipherKey", "Ljavax/crypto/SecretKey;", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialSpec, serverCipherKey)},
	{"clientIv", "Ljavax/crypto/spec/IvParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialSpec, clientIv)},
	{"serverIv", "Ljavax/crypto/spec/IvParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(TlsKeyMaterialSpec, serverIv)},
	{}
};

$MethodInfo _TlsKeyMaterialSpec_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/crypto/SecretKey;Ljavax/crypto/SecretKey;)V", nullptr, $PUBLIC, $method(static_cast<void(TlsKeyMaterialSpec::*)($SecretKey*,$SecretKey*)>(&TlsKeyMaterialSpec::init$))},
	{"<init>", "(Ljavax/crypto/SecretKey;Ljavax/crypto/SecretKey;Ljavax/crypto/SecretKey;Ljavax/crypto/SecretKey;)V", nullptr, $PUBLIC, $method(static_cast<void(TlsKeyMaterialSpec::*)($SecretKey*,$SecretKey*,$SecretKey*,$SecretKey*)>(&TlsKeyMaterialSpec::init$))},
	{"<init>", "(Ljavax/crypto/SecretKey;Ljavax/crypto/SecretKey;Ljavax/crypto/SecretKey;Ljavax/crypto/spec/IvParameterSpec;Ljavax/crypto/SecretKey;Ljavax/crypto/spec/IvParameterSpec;)V", nullptr, $PUBLIC, $method(static_cast<void(TlsKeyMaterialSpec::*)($SecretKey*,$SecretKey*,$SecretKey*,$IvParameterSpec*,$SecretKey*,$IvParameterSpec*)>(&TlsKeyMaterialSpec::init$))},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getClientCipherKey", "()Ljavax/crypto/SecretKey;", nullptr, $PUBLIC},
	{"getClientIv", "()Ljavax/crypto/spec/IvParameterSpec;", nullptr, $PUBLIC},
	{"getClientMacKey", "()Ljavax/crypto/SecretKey;", nullptr, $PUBLIC},
	{"getEncoded", "()[B", nullptr, $PUBLIC},
	{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getServerCipherKey", "()Ljavax/crypto/SecretKey;", nullptr, $PUBLIC},
	{"getServerIv", "()Ljavax/crypto/spec/IvParameterSpec;", nullptr, $PUBLIC},
	{"getServerMacKey", "()Ljavax/crypto/SecretKey;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TlsKeyMaterialSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.internal.spec.TlsKeyMaterialSpec",
	"java.lang.Object",
	"java.security.spec.KeySpec,javax.crypto.SecretKey",
	_TlsKeyMaterialSpec_FieldInfo_,
	_TlsKeyMaterialSpec_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_TlsKeyMaterialSpec_Annotations_
};

$Object* allocate$TlsKeyMaterialSpec($Class* clazz) {
	return $of($alloc(TlsKeyMaterialSpec));
}

int32_t TlsKeyMaterialSpec::hashCode() {
	 return this->$KeySpec::hashCode();
}

bool TlsKeyMaterialSpec::equals(Object$* obj) {
	 return this->$KeySpec::equals(obj);
}

$Object* TlsKeyMaterialSpec::clone() {
	 return this->$KeySpec::clone();
}

$String* TlsKeyMaterialSpec::toString() {
	 return this->$KeySpec::toString();
}

void TlsKeyMaterialSpec::finalize() {
	this->$KeySpec::finalize();
}

void TlsKeyMaterialSpec::init$($SecretKey* clientMacKey, $SecretKey* serverMacKey) {
	TlsKeyMaterialSpec::init$(clientMacKey, serverMacKey, nullptr, nullptr, nullptr, nullptr);
}

void TlsKeyMaterialSpec::init$($SecretKey* clientMacKey, $SecretKey* serverMacKey, $SecretKey* clientCipherKey, $SecretKey* serverCipherKey) {
	TlsKeyMaterialSpec::init$(clientMacKey, serverMacKey, clientCipherKey, nullptr, serverCipherKey, nullptr);
}

void TlsKeyMaterialSpec::init$($SecretKey* clientMacKey, $SecretKey* serverMacKey, $SecretKey* clientCipherKey, $IvParameterSpec* clientIv, $SecretKey* serverCipherKey, $IvParameterSpec* serverIv) {
	$set(this, clientMacKey, clientMacKey);
	$set(this, serverMacKey, serverMacKey);
	$set(this, clientCipherKey, clientCipherKey);
	$set(this, serverCipherKey, serverCipherKey);
	$set(this, clientIv, clientIv);
	$set(this, serverIv, serverIv);
}

$String* TlsKeyMaterialSpec::getAlgorithm() {
	return "TlsKeyMaterial"_s;
}

$String* TlsKeyMaterialSpec::getFormat() {
	return nullptr;
}

$bytes* TlsKeyMaterialSpec::getEncoded() {
	return nullptr;
}

$SecretKey* TlsKeyMaterialSpec::getClientMacKey() {
	return this->clientMacKey;
}

$SecretKey* TlsKeyMaterialSpec::getServerMacKey() {
	return this->serverMacKey;
}

$SecretKey* TlsKeyMaterialSpec::getClientCipherKey() {
	return this->clientCipherKey;
}

$IvParameterSpec* TlsKeyMaterialSpec::getClientIv() {
	return this->clientIv;
}

$SecretKey* TlsKeyMaterialSpec::getServerCipherKey() {
	return this->serverCipherKey;
}

$IvParameterSpec* TlsKeyMaterialSpec::getServerIv() {
	return this->serverIv;
}

TlsKeyMaterialSpec::TlsKeyMaterialSpec() {
}

$Class* TlsKeyMaterialSpec::load$($String* name, bool initialize) {
	$loadClass(TlsKeyMaterialSpec, name, initialize, &_TlsKeyMaterialSpec_ClassInfo_, allocate$TlsKeyMaterialSpec);
	return class$;
}

$Class* TlsKeyMaterialSpec::class$ = nullptr;

			} // spec
		} // internal
	} // security
} // sun