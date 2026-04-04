#include <sun/security/ssl/EphemeralKeyManager$EphemeralKeyPair.h>
#include <java/security/KeyPair.h>
#include <sun/security/ssl/EphemeralKeyManager.h>
#include <jcpp.h>

#undef MAX_USE
#undef USE_INTERVAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyPair = ::java::security::KeyPair;

namespace sun {
	namespace security {
		namespace ssl {

void EphemeralKeyManager$EphemeralKeyPair::init$($KeyPair* keyPair) {
	$set(this, keyPair, keyPair);
	this->expirationTime = $System::currentTimeMillis() + EphemeralKeyManager$EphemeralKeyPair::USE_INTERVAL;
}

bool EphemeralKeyManager$EphemeralKeyPair::isValid() {
	return (this->keyPair != nullptr) && (this->uses < EphemeralKeyManager$EphemeralKeyPair::MAX_USE) && ($System::currentTimeMillis() < this->expirationTime);
}

$KeyPair* EphemeralKeyManager$EphemeralKeyPair::getKeyPair() {
	if (!isValid()) {
		$set(this, keyPair, nullptr);
		return nullptr;
	}
	++this->uses;
	return this->keyPair;
}

EphemeralKeyManager$EphemeralKeyPair::EphemeralKeyManager$EphemeralKeyPair() {
}

$Class* EphemeralKeyManager$EphemeralKeyPair::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MAX_USE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EphemeralKeyManager$EphemeralKeyPair, MAX_USE)},
		{"USE_INTERVAL", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EphemeralKeyManager$EphemeralKeyPair, USE_INTERVAL)},
		{"keyPair", "Ljava/security/KeyPair;", nullptr, $PRIVATE, $field(EphemeralKeyManager$EphemeralKeyPair, keyPair)},
		{"uses", "I", nullptr, $PRIVATE, $field(EphemeralKeyManager$EphemeralKeyPair, uses)},
		{"expirationTime", "J", nullptr, $PRIVATE | $FINAL, $field(EphemeralKeyManager$EphemeralKeyPair, expirationTime)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/KeyPair;)V", nullptr, $PRIVATE, $method(EphemeralKeyManager$EphemeralKeyPair, init$, void, $KeyPair*)},
		{"getKeyPair", "()Ljava/security/KeyPair;", nullptr, $PRIVATE, $method(EphemeralKeyManager$EphemeralKeyPair, getKeyPair, $KeyPair*)},
		{"isValid", "()Z", nullptr, $PRIVATE, $method(EphemeralKeyManager$EphemeralKeyPair, isValid, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.EphemeralKeyManager$EphemeralKeyPair", "sun.security.ssl.EphemeralKeyManager", "EphemeralKeyPair", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.EphemeralKeyManager$EphemeralKeyPair",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.EphemeralKeyManager"
	};
	$loadClass(EphemeralKeyManager$EphemeralKeyPair, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EphemeralKeyManager$EphemeralKeyPair);
	});
	return class$;
}

$Class* EphemeralKeyManager$EphemeralKeyPair::class$ = nullptr;

		} // ssl
	} // security
} // sun