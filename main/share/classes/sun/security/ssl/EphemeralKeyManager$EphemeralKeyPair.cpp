#include <sun/security/ssl/EphemeralKeyManager$EphemeralKeyPair.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $EphemeralKeyManager = ::sun::security::ssl::EphemeralKeyManager;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _EphemeralKeyManager$EphemeralKeyPair_FieldInfo_[] = {
	{"MAX_USE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EphemeralKeyManager$EphemeralKeyPair, MAX_USE)},
	{"USE_INTERVAL", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EphemeralKeyManager$EphemeralKeyPair, USE_INTERVAL)},
	{"keyPair", "Ljava/security/KeyPair;", nullptr, $PRIVATE, $field(EphemeralKeyManager$EphemeralKeyPair, keyPair)},
	{"uses", "I", nullptr, $PRIVATE, $field(EphemeralKeyManager$EphemeralKeyPair, uses)},
	{"expirationTime", "J", nullptr, $PRIVATE | $FINAL, $field(EphemeralKeyManager$EphemeralKeyPair, expirationTime)},
	{}
};

$MethodInfo _EphemeralKeyManager$EphemeralKeyPair_MethodInfo_[] = {
	{"<init>", "(Ljava/security/KeyPair;)V", nullptr, $PRIVATE, $method(static_cast<void(EphemeralKeyManager$EphemeralKeyPair::*)($KeyPair*)>(&EphemeralKeyManager$EphemeralKeyPair::init$))},
	{"getKeyPair", "()Ljava/security/KeyPair;", nullptr, $PRIVATE, $method(static_cast<$KeyPair*(EphemeralKeyManager$EphemeralKeyPair::*)()>(&EphemeralKeyManager$EphemeralKeyPair::getKeyPair))},
	{"isValid", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(EphemeralKeyManager$EphemeralKeyPair::*)()>(&EphemeralKeyManager$EphemeralKeyPair::isValid))},
	{}
};

$InnerClassInfo _EphemeralKeyManager$EphemeralKeyPair_InnerClassesInfo_[] = {
	{"sun.security.ssl.EphemeralKeyManager$EphemeralKeyPair", "sun.security.ssl.EphemeralKeyManager", "EphemeralKeyPair", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _EphemeralKeyManager$EphemeralKeyPair_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.EphemeralKeyManager$EphemeralKeyPair",
	"java.lang.Object",
	nullptr,
	_EphemeralKeyManager$EphemeralKeyPair_FieldInfo_,
	_EphemeralKeyManager$EphemeralKeyPair_MethodInfo_,
	nullptr,
	nullptr,
	_EphemeralKeyManager$EphemeralKeyPair_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.EphemeralKeyManager"
};

$Object* allocate$EphemeralKeyManager$EphemeralKeyPair($Class* clazz) {
	return $of($alloc(EphemeralKeyManager$EphemeralKeyPair));
}

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
	$loadClass(EphemeralKeyManager$EphemeralKeyPair, name, initialize, &_EphemeralKeyManager$EphemeralKeyPair_ClassInfo_, allocate$EphemeralKeyManager$EphemeralKeyPair);
	return class$;
}

$Class* EphemeralKeyManager$EphemeralKeyPair::class$ = nullptr;

		} // ssl
	} // security
} // sun