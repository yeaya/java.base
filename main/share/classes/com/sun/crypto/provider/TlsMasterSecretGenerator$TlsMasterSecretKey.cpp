#include <com/sun/crypto/provider/TlsMasterSecretGenerator$TlsMasterSecretKey.h>

#include <com/sun/crypto/provider/TlsMasterSecretGenerator.h>
#include <jcpp.h>

using $TlsMasterSecretGenerator = ::com::sun::crypto::provider::TlsMasterSecretGenerator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TlsMasterSecret = ::sun::security::internal::interfaces::TlsMasterSecret;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _TlsMasterSecretGenerator$TlsMasterSecretKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TlsMasterSecretGenerator$TlsMasterSecretKey, serialVersionUID)},
	{"key", "[B", nullptr, $PRIVATE, $field(TlsMasterSecretGenerator$TlsMasterSecretKey, key)},
	{"majorVersion", "I", nullptr, $PRIVATE | $FINAL, $field(TlsMasterSecretGenerator$TlsMasterSecretKey, majorVersion)},
	{"minorVersion", "I", nullptr, $PRIVATE | $FINAL, $field(TlsMasterSecretGenerator$TlsMasterSecretKey, minorVersion)},
	{}
};

$MethodInfo _TlsMasterSecretGenerator$TlsMasterSecretKey_MethodInfo_[] = {
	{"<init>", "([BII)V", nullptr, 0, $method(static_cast<void(TlsMasterSecretGenerator$TlsMasterSecretKey::*)($bytes*,int32_t,int32_t)>(&TlsMasterSecretGenerator$TlsMasterSecretKey::init$))},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEncoded", "()[B", nullptr, $PUBLIC},
	{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMajorVersion", "()I", nullptr, $PUBLIC},
	{"getMinorVersion", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TlsMasterSecretGenerator$TlsMasterSecretKey_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.TlsMasterSecretGenerator$TlsMasterSecretKey", "com.sun.crypto.provider.TlsMasterSecretGenerator", "TlsMasterSecretKey", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _TlsMasterSecretGenerator$TlsMasterSecretKey_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.TlsMasterSecretGenerator$TlsMasterSecretKey",
	"java.lang.Object",
	"sun.security.internal.interfaces.TlsMasterSecret",
	_TlsMasterSecretGenerator$TlsMasterSecretKey_FieldInfo_,
	_TlsMasterSecretGenerator$TlsMasterSecretKey_MethodInfo_,
	nullptr,
	nullptr,
	_TlsMasterSecretGenerator$TlsMasterSecretKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.TlsMasterSecretGenerator"
};

$Object* allocate$TlsMasterSecretGenerator$TlsMasterSecretKey($Class* clazz) {
	return $of($alloc(TlsMasterSecretGenerator$TlsMasterSecretKey));
}

void TlsMasterSecretGenerator$TlsMasterSecretKey::init$($bytes* key, int32_t majorVersion, int32_t minorVersion) {
	$set(this, key, key);
	this->majorVersion = majorVersion;
	this->minorVersion = minorVersion;
}

int32_t TlsMasterSecretGenerator$TlsMasterSecretKey::getMajorVersion() {
	return this->majorVersion;
}

int32_t TlsMasterSecretGenerator$TlsMasterSecretKey::getMinorVersion() {
	return this->minorVersion;
}

$String* TlsMasterSecretGenerator$TlsMasterSecretKey::getAlgorithm() {
	return "TlsMasterSecret"_s;
}

$String* TlsMasterSecretGenerator$TlsMasterSecretKey::getFormat() {
	return "RAW"_s;
}

$bytes* TlsMasterSecretGenerator$TlsMasterSecretKey::getEncoded() {
	return $cast($bytes, $nc(this->key)->clone());
}

TlsMasterSecretGenerator$TlsMasterSecretKey::TlsMasterSecretGenerator$TlsMasterSecretKey() {
}

$Class* TlsMasterSecretGenerator$TlsMasterSecretKey::load$($String* name, bool initialize) {
	$loadClass(TlsMasterSecretGenerator$TlsMasterSecretKey, name, initialize, &_TlsMasterSecretGenerator$TlsMasterSecretKey_ClassInfo_, allocate$TlsMasterSecretGenerator$TlsMasterSecretKey);
	return class$;
}

$Class* TlsMasterSecretGenerator$TlsMasterSecretKey::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com