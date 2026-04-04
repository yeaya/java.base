#include <sun/security/ssl/EphemeralKeyManager.h>
#include <java/security/KeyPair.h>
#include <java/security/KeyPairGenerator.h>
#include <java/security/SecureRandom.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/security/ssl/EphemeralKeyManager$EphemeralKeyPair.h>
#include <jcpp.h>

#undef INDEX_RSA512

using $EphemeralKeyManager$EphemeralKeyPairArray = $Array<::sun::security::ssl::EphemeralKeyManager$EphemeralKeyPair>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyPair = ::java::security::KeyPair;
using $KeyPairGenerator = ::java::security::KeyPairGenerator;
using $SecureRandom = ::java::security::SecureRandom;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $EphemeralKeyManager$EphemeralKeyPair = ::sun::security::ssl::EphemeralKeyManager$EphemeralKeyPair;

namespace sun {
	namespace security {
		namespace ssl {

void EphemeralKeyManager::init$() {
	$useLocalObjectStack();
	$set(this, keys, $new($EphemeralKeyManager$EphemeralKeyPairArray, {
		$$new($EphemeralKeyManager$EphemeralKeyPair, nullptr),
		$$new($EphemeralKeyManager$EphemeralKeyPair, nullptr)
	}));
	$set(this, cachedKeysLock, $new($ReentrantLock));
}

$KeyPair* EphemeralKeyManager::getRSAKeyPair(bool export$, $SecureRandom* random) {
	$useLocalObjectStack();
	int32_t length = 0;
	int32_t index = 0;
	if (export$) {
		length = 512;
		index = EphemeralKeyManager::INDEX_RSA512;
	} else {
		length = 1024;
		index = EphemeralKeyManager::INDEX_RSA1024;
	}
	$var($KeyPair, kp, $nc(this->keys->get(index))->getKeyPair());
	if (kp != nullptr) {
		return kp;
	}
	this->cachedKeysLock->lock();
	$var($Throwable, var$0, nullptr);
	$var($KeyPair, var$2, nullptr);
	bool return$1 = false;
	try {
		$assign(kp, $nc(this->keys->get(index))->getKeyPair());
		if (kp != nullptr) {
			$assign(var$2, kp);
			return$1 = true;
			goto $finally;
		}
		try {
			$var($KeyPairGenerator, kgen, $KeyPairGenerator::getInstance("RSA"_s));
			$nc(kgen)->initialize(length, random);
			this->keys->set(index, $$new($EphemeralKeyManager$EphemeralKeyPair, $(kgen->genKeyPair())));
			$assign(kp, $nc(this->keys->get(index))->getKeyPair());
		} catch ($Exception& e) {
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		this->cachedKeysLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	return kp;
}

EphemeralKeyManager::EphemeralKeyManager() {
}

$Class* EphemeralKeyManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INDEX_RSA512", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EphemeralKeyManager, INDEX_RSA512)},
		{"INDEX_RSA1024", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EphemeralKeyManager, INDEX_RSA1024)},
		{"keys", "[Lsun/security/ssl/EphemeralKeyManager$EphemeralKeyPair;", nullptr, $PRIVATE | $FINAL, $field(EphemeralKeyManager, keys)},
		{"cachedKeysLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(EphemeralKeyManager, cachedKeysLock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EphemeralKeyManager, init$, void)},
		{"getRSAKeyPair", "(ZLjava/security/SecureRandom;)Ljava/security/KeyPair;", nullptr, 0, $method(EphemeralKeyManager, getRSAKeyPair, $KeyPair*, bool, $SecureRandom*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.EphemeralKeyManager$EphemeralKeyPair", "sun.security.ssl.EphemeralKeyManager", "EphemeralKeyPair", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.EphemeralKeyManager",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.EphemeralKeyManager$EphemeralKeyPair"
	};
	$loadClass(EphemeralKeyManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EphemeralKeyManager);
	});
	return class$;
}

$Class* EphemeralKeyManager::class$ = nullptr;

		} // ssl
	} // security
} // sun