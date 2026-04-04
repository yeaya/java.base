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

bool TlsRsaPremasterSecretParameterSpec::rsaPreMasterSecretFix = false;

void TlsRsaPremasterSecretParameterSpec::init$(int32_t clientVersion, int32_t serverVersion) {
	this->clientVersion = checkVersion(clientVersion);
	this->serverVersion = checkVersion(serverVersion);
	$set(this, encodedSecret, nullptr);
}

void TlsRsaPremasterSecretParameterSpec::init$(int32_t clientVersion, int32_t serverVersion, $bytes* encodedSecret) {
	this->clientVersion = checkVersion(clientVersion);
	this->serverVersion = checkVersion(serverVersion);
	if (encodedSecret == nullptr || encodedSecret->length != 48) {
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
		return ((int32_t)((uint32_t)this->clientVersion >> 8)) & 0xff;
	}
	return ((int32_t)((uint32_t)this->serverVersion >> 8)) & 0xff;
}

int32_t TlsRsaPremasterSecretParameterSpec::getMinorVersion() {
	if (TlsRsaPremasterSecretParameterSpec::rsaPreMasterSecretFix || this->clientVersion >= 770) {
		return this->clientVersion & 0xff;
	}
	return this->serverVersion & 0xff;
}

int32_t TlsRsaPremasterSecretParameterSpec::checkVersion(int32_t version) {
	if ((version < 0) || (version > 0x0000ffff)) {
		$throwNew($IllegalArgumentException, "Version must be between 0 and 65,535"_s);
	}
	return version;
}

$bytes* TlsRsaPremasterSecretParameterSpec::getEncodedSecret() {
	return this->encodedSecret == nullptr ? ($bytes*)nullptr : $cast($bytes, this->encodedSecret->clone());
}

void TlsRsaPremasterSecretParameterSpec::clinit$($Class* clazz) {
	TlsRsaPremasterSecretParameterSpec::rsaPreMasterSecretFix = $GetBooleanAction::privilegedGetProperty("com.sun.net.ssl.rsaPreMasterSecretFix"_s);
}

TlsRsaPremasterSecretParameterSpec::TlsRsaPremasterSecretParameterSpec() {
}

$Class* TlsRsaPremasterSecretParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"encodedSecret", "[B", nullptr, $PRIVATE | $FINAL, $field(TlsRsaPremasterSecretParameterSpec, encodedSecret)},
		{"rsaPreMasterSecretFix", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TlsRsaPremasterSecretParameterSpec, rsaPreMasterSecretFix)},
		{"clientVersion", "I", nullptr, $PRIVATE | $FINAL, $field(TlsRsaPremasterSecretParameterSpec, clientVersion)},
		{"serverVersion", "I", nullptr, $PRIVATE | $FINAL, $field(TlsRsaPremasterSecretParameterSpec, serverVersion)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(TlsRsaPremasterSecretParameterSpec, init$, void, int32_t, int32_t)},
		{"<init>", "(II[B)V", nullptr, $PUBLIC, $method(TlsRsaPremasterSecretParameterSpec, init$, void, int32_t, int32_t, $bytes*)},
		{"checkVersion", "(I)I", nullptr, $PRIVATE, $method(TlsRsaPremasterSecretParameterSpec, checkVersion, int32_t, int32_t)},
		{"getClientVersion", "()I", nullptr, $PUBLIC, $virtualMethod(TlsRsaPremasterSecretParameterSpec, getClientVersion, int32_t)},
		{"getEncodedSecret", "()[B", nullptr, $PUBLIC, $virtualMethod(TlsRsaPremasterSecretParameterSpec, getEncodedSecret, $bytes*)},
		{"getMajorVersion", "()I", nullptr, $PUBLIC, $virtualMethod(TlsRsaPremasterSecretParameterSpec, getMajorVersion, int32_t)},
		{"getMinorVersion", "()I", nullptr, $PUBLIC, $virtualMethod(TlsRsaPremasterSecretParameterSpec, getMinorVersion, int32_t)},
		{"getServerVersion", "()I", nullptr, $PUBLIC, $virtualMethod(TlsRsaPremasterSecretParameterSpec, getServerVersion, int32_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.internal.spec.TlsRsaPremasterSecretParameterSpec",
		"java.lang.Object",
		"java.security.spec.AlgorithmParameterSpec",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(TlsRsaPremasterSecretParameterSpec, name, initialize, &classInfo$$, TlsRsaPremasterSecretParameterSpec::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TlsRsaPremasterSecretParameterSpec);
	});
	return class$;
}

$Class* TlsRsaPremasterSecretParameterSpec::class$ = nullptr;

			} // spec
		} // internal
	} // security
} // sun