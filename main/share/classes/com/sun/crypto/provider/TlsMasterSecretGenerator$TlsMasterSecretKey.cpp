#include <com/sun/crypto/provider/TlsMasterSecretGenerator$TlsMasterSecretKey.h>
#include <com/sun/crypto/provider/TlsMasterSecretGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TlsMasterSecretGenerator$TlsMasterSecretKey, serialVersionUID)},
		{"key", "[B", nullptr, $PRIVATE, $field(TlsMasterSecretGenerator$TlsMasterSecretKey, key)},
		{"majorVersion", "I", nullptr, $PRIVATE | $FINAL, $field(TlsMasterSecretGenerator$TlsMasterSecretKey, majorVersion)},
		{"minorVersion", "I", nullptr, $PRIVATE | $FINAL, $field(TlsMasterSecretGenerator$TlsMasterSecretKey, minorVersion)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([BII)V", nullptr, 0, $method(TlsMasterSecretGenerator$TlsMasterSecretKey, init$, void, $bytes*, int32_t, int32_t)},
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TlsMasterSecretGenerator$TlsMasterSecretKey, getAlgorithm, $String*)},
		{"getEncoded", "()[B", nullptr, $PUBLIC, $virtualMethod(TlsMasterSecretGenerator$TlsMasterSecretKey, getEncoded, $bytes*)},
		{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TlsMasterSecretGenerator$TlsMasterSecretKey, getFormat, $String*)},
		{"getMajorVersion", "()I", nullptr, $PUBLIC, $virtualMethod(TlsMasterSecretGenerator$TlsMasterSecretKey, getMajorVersion, int32_t)},
		{"getMinorVersion", "()I", nullptr, $PUBLIC, $virtualMethod(TlsMasterSecretGenerator$TlsMasterSecretKey, getMinorVersion, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.TlsMasterSecretGenerator$TlsMasterSecretKey", "com.sun.crypto.provider.TlsMasterSecretGenerator", "TlsMasterSecretKey", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.TlsMasterSecretGenerator$TlsMasterSecretKey",
		"java.lang.Object",
		"sun.security.internal.interfaces.TlsMasterSecret",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.TlsMasterSecretGenerator"
	};
	$loadClass(TlsMasterSecretGenerator$TlsMasterSecretKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TlsMasterSecretGenerator$TlsMasterSecretKey));
	});
	return class$;
}

$Class* TlsMasterSecretGenerator$TlsMasterSecretKey::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com