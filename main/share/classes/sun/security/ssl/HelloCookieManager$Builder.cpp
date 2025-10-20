#include <sun/security/ssl/HelloCookieManager$Builder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/SecureRandom.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/security/ssl/HelloCookieManager$D10HelloCookieManager.h>
#include <sun/security/ssl/HelloCookieManager$D13HelloCookieManager.h>
#include <sun/security/ssl/HelloCookieManager$T13HelloCookieManager.h>
#include <sun/security/ssl/HelloCookieManager.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandom = ::java::security::SecureRandom;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $HelloCookieManager = ::sun::security::ssl::HelloCookieManager;
using $HelloCookieManager$D10HelloCookieManager = ::sun::security::ssl::HelloCookieManager$D10HelloCookieManager;
using $HelloCookieManager$D13HelloCookieManager = ::sun::security::ssl::HelloCookieManager$D13HelloCookieManager;
using $HelloCookieManager$T13HelloCookieManager = ::sun::security::ssl::HelloCookieManager$T13HelloCookieManager;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _HelloCookieManager$Builder_FieldInfo_[] = {
	{"secureRandom", "Ljava/security/SecureRandom;", nullptr, $FINAL, $field(HelloCookieManager$Builder, secureRandom)},
	{"d10HelloCookieManager", "Lsun/security/ssl/HelloCookieManager$D10HelloCookieManager;", nullptr, $PRIVATE | $VOLATILE, $field(HelloCookieManager$Builder, d10HelloCookieManager)},
	{"d13HelloCookieManager", "Lsun/security/ssl/HelloCookieManager$D13HelloCookieManager;", nullptr, $PRIVATE | $VOLATILE, $field(HelloCookieManager$Builder, d13HelloCookieManager)},
	{"t13HelloCookieManager", "Lsun/security/ssl/HelloCookieManager$T13HelloCookieManager;", nullptr, $PRIVATE | $VOLATILE, $field(HelloCookieManager$Builder, t13HelloCookieManager)},
	{"managerLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(HelloCookieManager$Builder, managerLock)},
	{}
};

$MethodInfo _HelloCookieManager$Builder_MethodInfo_[] = {
	{"<init>", "(Ljava/security/SecureRandom;)V", nullptr, 0, $method(static_cast<void(HelloCookieManager$Builder::*)($SecureRandom*)>(&HelloCookieManager$Builder::init$))},
	{"valueOf", "(Lsun/security/ssl/ProtocolVersion;)Lsun/security/ssl/HelloCookieManager;", nullptr, 0},
	{}
};

$InnerClassInfo _HelloCookieManager$Builder_InnerClassesInfo_[] = {
	{"sun.security.ssl.HelloCookieManager$Builder", "sun.security.ssl.HelloCookieManager", "Builder", $STATIC},
	{}
};

$ClassInfo _HelloCookieManager$Builder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.HelloCookieManager$Builder",
	"java.lang.Object",
	nullptr,
	_HelloCookieManager$Builder_FieldInfo_,
	_HelloCookieManager$Builder_MethodInfo_,
	nullptr,
	nullptr,
	_HelloCookieManager$Builder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.HelloCookieManager"
};

$Object* allocate$HelloCookieManager$Builder($Class* clazz) {
	return $of($alloc(HelloCookieManager$Builder));
}

void HelloCookieManager$Builder::init$($SecureRandom* secureRandom) {
	$set(this, managerLock, $new($ReentrantLock));
	$set(this, secureRandom, secureRandom);
}

$HelloCookieManager* HelloCookieManager$Builder::valueOf($ProtocolVersion* protocolVersion) {
	$useLocalCurrentObjectStackCache();
	if ($nc(protocolVersion)->isDTLS) {
		if (protocolVersion->useTLS13PlusSpec()) {
			if (this->d13HelloCookieManager != nullptr) {
				return this->d13HelloCookieManager;
			}
			$nc(this->managerLock)->lock();
			{
				$var($Throwable, var$0, nullptr);
				try {
					if (this->d13HelloCookieManager == nullptr) {
						$set(this, d13HelloCookieManager, $new($HelloCookieManager$D13HelloCookieManager, this->secureRandom));
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					$nc(this->managerLock)->unlock();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
			return this->d13HelloCookieManager;
		} else {
			if (this->d10HelloCookieManager != nullptr) {
				return this->d10HelloCookieManager;
			}
			$nc(this->managerLock)->lock();
			{
				$var($Throwable, var$1, nullptr);
				try {
					if (this->d10HelloCookieManager == nullptr) {
						$set(this, d10HelloCookieManager, $new($HelloCookieManager$D10HelloCookieManager, this->secureRandom));
					}
				} catch ($Throwable&) {
					$assign(var$1, $catch());
				} /*finally*/ {
					$nc(this->managerLock)->unlock();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
			return this->d10HelloCookieManager;
		}
	} else if (protocolVersion->useTLS13PlusSpec()) {
		if (this->t13HelloCookieManager != nullptr) {
			return this->t13HelloCookieManager;
		}
		$nc(this->managerLock)->lock();
		{
			$var($Throwable, var$2, nullptr);
			try {
				if (this->t13HelloCookieManager == nullptr) {
					$set(this, t13HelloCookieManager, $new($HelloCookieManager$T13HelloCookieManager, this->secureRandom));
				}
			} catch ($Throwable&) {
				$assign(var$2, $catch());
			} /*finally*/ {
				$nc(this->managerLock)->unlock();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
		return this->t13HelloCookieManager;
	}
	return nullptr;
}

HelloCookieManager$Builder::HelloCookieManager$Builder() {
}

$Class* HelloCookieManager$Builder::load$($String* name, bool initialize) {
	$loadClass(HelloCookieManager$Builder, name, initialize, &_HelloCookieManager$Builder_ClassInfo_, allocate$HelloCookieManager$Builder);
	return class$;
}

$Class* HelloCookieManager$Builder::class$ = nullptr;

		} // ssl
	} // security
} // sun