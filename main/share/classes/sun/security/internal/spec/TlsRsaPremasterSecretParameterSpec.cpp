#include <sun/security/internal/spec/TlsRsaPremasterSecretParameterSpec.h>

#include <sun/security/action/GetBooleanAction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;

namespace sun {
	namespace security {
		namespace internal {
			namespace spec {

$CompoundAttribute _TlsRsaPremasterSecretParameterSpec_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _TlsRsaPremasterSecretParameterSpec_FieldInfo_[] = {
	{"encodedSecret", "[B", nullptr, $PRIVATE | $FINAL, $field(TlsRsaPremasterSecretParameterSpec, encodedSecret)},
	{"rsaPreMasterSecretFix", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TlsRsaPremasterSecretParameterSpec, rsaPreMasterSecretFix)},
	{"clientVersion", "I", nullptr, $PRIVATE | $FINAL, $field(TlsRsaPremasterSecretParameterSpec, clientVersion)},
	{"serverVersion", "I", nullptr, $PRIVATE | $FINAL, $field(TlsRsaPremasterSecretParameterSpec, serverVersion)},
	{}
};

$MethodInfo _TlsRsaPremasterSecretParameterSpec_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(TlsRsaPremasterSecretParameterSpec::*)(int32_t,int32_t)>(&TlsRsaPremasterSecretParameterSpec::init$))},
	{"<init>", "(II[B)V", nullptr, $PUBLIC, $method(static_cast<void(TlsRsaPremasterSecretParameterSpec::*)(int32_t,int32_t,$bytes*)>(&TlsRsaPremasterSecretParameterSpec::init$))},
	{"checkVersion", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TlsRsaPremasterSecretParameterSpec::*)(int32_t)>(&TlsRsaPremasterSecretParameterSpec::checkVersion))},
	{"getClientVersion", "()I", nullptr, $PUBLIC},
	{"getEncodedSecret", "()[B", nullptr, $PUBLIC},
	{"getMajorVersion", "()I", nullptr, $PUBLIC},
	{"getMinorVersion", "()I", nullptr, $PUBLIC},
	{"getServerVersion", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TlsRsaPremasterSecretParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.internal.spec.TlsRsaPremasterSecretParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_TlsRsaPremasterSecretParameterSpec_FieldInfo_,
	_TlsRsaPremasterSecretParameterSpec_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_TlsRsaPremasterSecretParameterSpec_Annotations_
};

$Object* allocate$TlsRsaPremasterSecretParameterSpec($Class* clazz) {
	return $of($alloc(TlsRsaPremasterSecretParameterSpec));
}

bool TlsRsaPremasterSecretParameterSpec::rsaPreMasterSecretFix = false;

void TlsRsaPremasterSecretParameterSpec::init$(int32_t clientVersion, int32_t serverVersion) {
	this->clientVersion = checkVersion(clientVersion);
	this->serverVersion = checkVersion(serverVersion);
	$set(this, encodedSecret, nullptr);
}

void TlsRsaPremasterSecretParameterSpec::init$(int32_t clientVersion, int32_t serverVersion, $bytes* encodedSecret) {
	this->clientVersion = checkVersion(clientVersion);
	this->serverVersion = checkVersion(serverVersion);
	if (encodedSecret == nullptr || $nc(encodedSecret)->length != 48) {
		$throwNew($IllegalArgumentException, "Encoded secret is not exactly 48 bytes"_s);
	}
	$set(this, encodedSecret, $cast($bytes, $nc(encodedSecret)->clone()));
}

int32_t TlsRsaPremasterSecretParameterSpec::getClientVersion() {
	return this->clientVersion;
}

int32_t TlsRsaPremasterSecretParameterSpec::getServerVersion() {
	return this->serverVersion;
}

int32_t TlsRsaPremasterSecretParameterSpec::getMajorVersion() {
	if (TlsRsaPremasterSecretParameterSpec::rsaPreMasterSecretFix || this->clientVersion >= 770) {
		return (int32_t)(((int32_t)((uint32_t)this->clientVersion >> 8)) & (uint32_t)255);
	}
	return (int32_t)(((int32_t)((uint32_t)this->serverVersion >> 8)) & (uint32_t)255);
}

int32_t TlsRsaPremasterSecretParameterSpec::getMinorVersion() {
	if (TlsRsaPremasterSecretParameterSpec::rsaPreMasterSecretFix || this->clientVersion >= 770) {
		return (int32_t)(this->clientVersion & (uint32_t)255);
	}
	return (int32_t)(this->serverVersion & (uint32_t)255);
}

int32_t TlsRsaPremasterSecretParameterSpec::checkVersion(int32_t version) {
	if ((version < 0) || (version > 0x0000FFFF)) {
		$throwNew($IllegalArgumentException, "Version must be between 0 and 65,535"_s);
	}
	return version;
}

$bytes* TlsRsaPremasterSecretParameterSpec::getEncodedSecret() {
	return this->encodedSecret == nullptr ? ($bytes*)nullptr : $cast($bytes, $nc(this->encodedSecret)->clone());
}

void clinit$TlsRsaPremasterSecretParameterSpec($Class* class$) {
	TlsRsaPremasterSecretParameterSpec::rsaPreMasterSecretFix = $GetBooleanAction::privilegedGetProperty("com.sun.net.ssl.rsaPreMasterSecretFix"_s);
}

TlsRsaPremasterSecretParameterSpec::TlsRsaPremasterSecretParameterSpec() {
}

$Class* TlsRsaPremasterSecretParameterSpec::load$($String* name, bool initialize) {
	$loadClass(TlsRsaPremasterSecretParameterSpec, name, initialize, &_TlsRsaPremasterSecretParameterSpec_ClassInfo_, clinit$TlsRsaPremasterSecretParameterSpec, allocate$TlsRsaPremasterSecretParameterSpec);
	return class$;
}

$Class* TlsRsaPremasterSecretParameterSpec::class$ = nullptr;

			} // spec
		} // internal
	} // security
} // sun