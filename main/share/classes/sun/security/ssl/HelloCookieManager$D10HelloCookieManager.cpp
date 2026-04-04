#include <sun/security/ssl/HelloCookieManager$D10HelloCookieManager.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/SecureRandom.h>
#include <java/util/Arrays.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/HelloCookieManager.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $SecureRandom = ::java::security::SecureRandom;
using $Arrays = ::java::util::Arrays;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $HelloCookieManager = ::sun::security::ssl::HelloCookieManager;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void HelloCookieManager$D10HelloCookieManager::init$($SecureRandom* secureRandom) {
	$HelloCookieManager::init$();
	$set(this, d10ManagerLock, $new($ReentrantLock));
	$set(this, secureRandom, secureRandom);
	this->cookieVersion = $nc(secureRandom)->nextInt();
	$set(this, cookieSecret, $new($bytes, 32));
	$set(this, legacySecret, $new($bytes, 32));
	secureRandom->nextBytes(this->cookieSecret);
	$System::arraycopy(this->cookieSecret, 0, this->legacySecret, 0, 32);
}

$bytes* HelloCookieManager$D10HelloCookieManager::createCookie($ServerHandshakeContext* context, $ClientHello$ClientHelloMessage* clientHello) {
	$useLocalObjectStack();
	int32_t version = 0;
	$var($bytes, secret, nullptr);
	this->d10ManagerLock->lock();
	$var($Throwable, var$0, nullptr);
	try {
		version = this->cookieVersion;
		$assign(secret, this->cookieSecret);
		if ((this->cookieVersion & 0x00ffffff) == 0) {
			$System::arraycopy(this->cookieSecret, 0, this->legacySecret, 0, 32);
			$nc(this->secureRandom)->nextBytes(this->cookieSecret);
		}
		++this->cookieVersion;
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->d10ManagerLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$var($MessageDigest, md, nullptr);
	try {
		$assign(md, $MessageDigest::getInstance("SHA-256"_s));
	} catch ($NoSuchAlgorithmException& nsae) {
		$throwNew($RuntimeException, "MessageDigest algorithm SHA-256 is not available"_s, nsae);
	}
	$var($bytes, helloBytes, $nc(clientHello)->getHelloCookieBytes());
	$nc(md)->update(helloBytes);
	$var($bytes, cookie, md->digest(secret));
	$nc(cookie)->set(0, (int8_t)((version >> 24) & 0xff));
	return cookie;
}

bool HelloCookieManager$D10HelloCookieManager::isCookieValid($ServerHandshakeContext* context, $ClientHello$ClientHelloMessage* clientHello, $bytes* cookie) {
	$useLocalObjectStack();
	if ((cookie == nullptr) || (cookie->length != 32)) {
		return false;
	}
	$var($bytes, secret, nullptr);
	this->d10ManagerLock->lock();
	$var($Throwable, var$0, nullptr);
	try {
		if (((this->cookieVersion >> 24) & 0xff) == $nc(cookie)->get(0)) {
			$assign(secret, this->cookieSecret);
		} else {
			$assign(secret, this->legacySecret);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->d10ManagerLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$var($MessageDigest, md, nullptr);
	try {
		$assign(md, $MessageDigest::getInstance("SHA-256"_s));
	} catch ($NoSuchAlgorithmException& nsae) {
		$throwNew($RuntimeException, "MessageDigest algorithm SHA-256 is not available"_s, nsae);
	}
	$var($bytes, helloBytes, $nc(clientHello)->getHelloCookieBytes());
	$nc(md)->update(helloBytes);
	$var($bytes, target, md->digest(secret));
	$nc(target)->set(0, $nc(cookie)->get(0));
	return $Arrays::equals(target, cookie);
}

HelloCookieManager$D10HelloCookieManager::HelloCookieManager$D10HelloCookieManager() {
}

$Class* HelloCookieManager$D10HelloCookieManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"secureRandom", "Ljava/security/SecureRandom;", nullptr, $FINAL, $field(HelloCookieManager$D10HelloCookieManager, secureRandom)},
		{"cookieVersion", "I", nullptr, $PRIVATE, $field(HelloCookieManager$D10HelloCookieManager, cookieVersion)},
		{"cookieSecret", "[B", nullptr, $PRIVATE | $FINAL, $field(HelloCookieManager$D10HelloCookieManager, cookieSecret)},
		{"legacySecret", "[B", nullptr, $PRIVATE | $FINAL, $field(HelloCookieManager$D10HelloCookieManager, legacySecret)},
		{"d10ManagerLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(HelloCookieManager$D10HelloCookieManager, d10ManagerLock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/SecureRandom;)V", nullptr, 0, $method(HelloCookieManager$D10HelloCookieManager, init$, void, $SecureRandom*)},
		{"createCookie", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;)[B", nullptr, 0, $virtualMethod(HelloCookieManager$D10HelloCookieManager, createCookie, $bytes*, $ServerHandshakeContext*, $ClientHello$ClientHelloMessage*), "java.io.IOException"},
		{"isCookieValid", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;[B)Z", nullptr, 0, $virtualMethod(HelloCookieManager$D10HelloCookieManager, isCookieValid, bool, $ServerHandshakeContext*, $ClientHello$ClientHelloMessage*, $bytes*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HelloCookieManager$D10HelloCookieManager", "sun.security.ssl.HelloCookieManager", "D10HelloCookieManager", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.HelloCookieManager$D10HelloCookieManager",
		"sun.security.ssl.HelloCookieManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.HelloCookieManager"
	};
	$loadClass(HelloCookieManager$D10HelloCookieManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HelloCookieManager$D10HelloCookieManager);
	});
	return class$;
}

$Class* HelloCookieManager$D10HelloCookieManager::class$ = nullptr;

		} // ssl
	} // security
} // sun