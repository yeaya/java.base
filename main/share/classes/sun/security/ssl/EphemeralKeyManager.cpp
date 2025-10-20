#include <sun/security/ssl/EphemeralKeyManager.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _EphemeralKeyManager_FieldInfo_[] = {
	{"INDEX_RSA512", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EphemeralKeyManager, INDEX_RSA512)},
	{"INDEX_RSA1024", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EphemeralKeyManager, INDEX_RSA1024)},
	{"keys", "[Lsun/security/ssl/EphemeralKeyManager$EphemeralKeyPair;", nullptr, $PRIVATE | $FINAL, $field(EphemeralKeyManager, keys)},
	{"cachedKeysLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(EphemeralKeyManager, cachedKeysLock)},
	{}
};

$MethodInfo _EphemeralKeyManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EphemeralKeyManager::*)()>(&EphemeralKeyManager::init$))},
	{"getRSAKeyPair", "(ZLjava/security/SecureRandom;)Ljava/security/KeyPair;", nullptr, 0, $method(static_cast<$KeyPair*(EphemeralKeyManager::*)(bool,$SecureRandom*)>(&EphemeralKeyManager::getRSAKeyPair))},
	{}
};

$InnerClassInfo _EphemeralKeyManager_InnerClassesInfo_[] = {
	{"sun.security.ssl.EphemeralKeyManager$EphemeralKeyPair", "sun.security.ssl.EphemeralKeyManager", "EphemeralKeyPair", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _EphemeralKeyManager_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.EphemeralKeyManager",
	"java.lang.Object",
	nullptr,
	_EphemeralKeyManager_FieldInfo_,
	_EphemeralKeyManager_MethodInfo_,
	nullptr,
	nullptr,
	_EphemeralKeyManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.EphemeralKeyManager$EphemeralKeyPair"
};

$Object* allocate$EphemeralKeyManager($Class* clazz) {
	return $of($alloc(EphemeralKeyManager));
}

void EphemeralKeyManager::init$() {
	$useLocalCurrentObjectStackCache();
	$set(this, keys, $new($EphemeralKeyManager$EphemeralKeyPairArray, {
		$$new($EphemeralKeyManager$EphemeralKeyPair, nullptr),
		$$new($EphemeralKeyManager$EphemeralKeyPair, nullptr)
	}));
	$set(this, cachedKeysLock, $new($ReentrantLock));
}

$KeyPair* EphemeralKeyManager::getRSAKeyPair(bool export$, $SecureRandom* random) {
	$useLocalCurrentObjectStackCache();
	int32_t length = 0;
	int32_t index = 0;
	if (export$) {
		length = 512;
		index = EphemeralKeyManager::INDEX_RSA512;
	} else {
		length = 1024;
		index = EphemeralKeyManager::INDEX_RSA1024;
	}
	$var($KeyPair, kp, $nc($nc(this->keys)->get(index))->getKeyPair());
	if (kp != nullptr) {
		return kp;
	}
	$nc(this->cachedKeysLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($KeyPair, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(kp, $nc($nc(this->keys)->get(index))->getKeyPair());
			if (kp != nullptr) {
				$assign(var$2, kp);
				return$1 = true;
				goto $finally;
			}
			try {
				$var($KeyPairGenerator, kgen, $KeyPairGenerator::getInstance("RSA"_s));
				$nc(kgen)->initialize(length, random);
				$nc(this->keys)->set(index, $$new($EphemeralKeyManager$EphemeralKeyPair, $(kgen->genKeyPair())));
				$assign(kp, $nc($nc(this->keys)->get(index))->getKeyPair());
			} catch ($Exception&) {
				$catch();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->cachedKeysLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return kp;
}

EphemeralKeyManager::EphemeralKeyManager() {
}

$Class* EphemeralKeyManager::load$($String* name, bool initialize) {
	$loadClass(EphemeralKeyManager, name, initialize, &_EphemeralKeyManager_ClassInfo_, allocate$EphemeralKeyManager);
	return class$;
}

$Class* EphemeralKeyManager::class$ = nullptr;

		} // ssl
	} // security
} // sun