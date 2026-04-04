#include <sun/security/ssl/HelloCookieManager$T13HelloCookieManager.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/SecureRandom.h>
#include <java/util/Arrays.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/security/ssl/CipherSuite$HashAlg.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/HelloCookieManager.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/ServerHello.h>
#include <jcpp.h>

#undef MESSAGE_HASH

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
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $HelloCookieManager = ::sun::security::ssl::HelloCookieManager;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $ServerHello = ::sun::security::ssl::ServerHello;

namespace sun {
	namespace security {
		namespace ssl {

void HelloCookieManager$T13HelloCookieManager::init$($SecureRandom* secureRandom) {
	$HelloCookieManager::init$();
	$set(this, t13ManagerLock, $new($ReentrantLock));
	$set(this, secureRandom, secureRandom);
	this->cookieVersion = $nc(secureRandom)->nextInt();
	$set(this, cookieSecret, $new($bytes, 64));
	$set(this, legacySecret, $new($bytes, 64));
	secureRandom->nextBytes(this->cookieSecret);
	$System::arraycopy(this->cookieSecret, 0, this->legacySecret, 0, 64);
}

$bytes* HelloCookieManager$T13HelloCookieManager::createCookie($ServerHandshakeContext* context, $ClientHello$ClientHelloMessage* clientHello) {
	$useLocalObjectStack();
	int32_t version = 0;
	$var($bytes, secret, nullptr);
	this->t13ManagerLock->lock();
	$var($Throwable, var$0, nullptr);
	try {
		version = this->cookieVersion;
		$assign(secret, this->cookieSecret);
		if ((this->cookieVersion & 0x00ffffff) == 0) {
			$System::arraycopy(this->cookieSecret, 0, this->legacySecret, 0, 64);
			$nc(this->secureRandom)->nextBytes(this->cookieSecret);
		}
		++this->cookieVersion;
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->t13ManagerLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$var($MessageDigest, md, nullptr);
	try {
		$assign(md, $MessageDigest::getInstance($nc($nc(context)->negotiatedCipherSuite)->hashAlg->name$));
	} catch ($NoSuchAlgorithmException& nsae) {
		$throwNew($RuntimeException, $$str({"MessageDigest algorithm "_s, $nc($nc(context)->negotiatedCipherSuite)->hashAlg->name$, " is not available"_s}), nsae);
	}
	$var($bytes, headerBytes, $nc(clientHello)->getHeaderBytes());
	$nc(md)->update(headerBytes);
	$var($bytes, headerCookie, md->digest(secret));
	$nc($nc(context)->handshakeHash)->update();
	$var($bytes, clientHelloHash, context->handshakeHash->digest());
	$var($bytes, prefix, $new($bytes, {
		(int8_t)(($nc(context->negotiatedCipherSuite)->id >> 8) & 0xff),
		(int8_t)($nc(context->negotiatedCipherSuite)->id & 0xff),
		(int8_t)((version >> 24) & 0xff)
	}));
	$var($bytes, cookie, $Arrays::copyOf(prefix, prefix->length + $nc(headerCookie)->length + $nc(clientHelloHash)->length));
	$System::arraycopy(headerCookie, 0, cookie, prefix->length, headerCookie->length);
	$System::arraycopy(clientHelloHash, 0, cookie, prefix->length + headerCookie->length, clientHelloHash->length);
	return cookie;
}

bool HelloCookieManager$T13HelloCookieManager::isCookieValid($ServerHandshakeContext* context, $ClientHello$ClientHelloMessage* clientHello, $bytes* cookie) {
	$useLocalObjectStack();
	if ((cookie == nullptr) || (cookie->length <= 32)) {
		return false;
	}
	int32_t csId = (($nc(cookie)->get(0) & 0xff) << 8) | ($nc(cookie)->get(1) & 0xff);
	$CipherSuite* cs = $CipherSuite::valueOf(csId);
	if (cs == nullptr || cs->hashAlg == nullptr || cs->hashAlg->hashLength == 0) {
		return false;
	}
	int32_t hashLen = cs->hashAlg->hashLength;
	if (cookie->length != (3 + hashLen * 2)) {
		return false;
	}
	$var($bytes, prevHeadCookie, $Arrays::copyOfRange(cookie, 3, 3 + hashLen));
	$var($bytes, prevClientHelloHash, $Arrays::copyOfRange(cookie, 3 + hashLen, cookie->length));
	$var($bytes, secret, nullptr);
	this->t13ManagerLock->lock();
	$var($Throwable, var$0, nullptr);
	try {
		if ((int8_t)((this->cookieVersion >> 24) & 0xff) == cookie->get(2)) {
			$assign(secret, this->cookieSecret);
		} else {
			$assign(secret, this->legacySecret);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->t13ManagerLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$var($MessageDigest, md, nullptr);
	try {
		$assign(md, $MessageDigest::getInstance(cs->hashAlg->name$));
	} catch ($NoSuchAlgorithmException& nsae) {
		$throwNew($RuntimeException, $$str({"MessageDigest algorithm "_s, cs->hashAlg->name$, " is not available"_s}), nsae);
	}
	$var($bytes, headerBytes, $nc(clientHello)->getHeaderBytes());
	$nc(md)->update(headerBytes);
	$var($bytes, headerCookie, md->digest(secret));
	if (!$Arrays::equals(headerCookie, prevHeadCookie)) {
		return false;
	}
	$init($ServerHello);
	$var($bytes, hrrMessage, $nc($ServerHello::hrrReproducer)->produce(context, clientHello));
	$nc($nc(context)->handshakeHash)->push(hrrMessage);
	$var($bytes, hashedClientHello, $new($bytes, 4 + hashLen));
	$init($SSLHandshake);
	hashedClientHello->set(0, $SSLHandshake::MESSAGE_HASH->id);
	hashedClientHello->set(1, (int8_t)0);
	hashedClientHello->set(2, (int8_t)0);
	hashedClientHello->set(3, (int8_t)(hashLen & 0xff));
	$System::arraycopy(prevClientHelloHash, 0, hashedClientHello, 4, hashLen);
	context->handshakeHash->push(hashedClientHello);
	return true;
}

HelloCookieManager$T13HelloCookieManager::HelloCookieManager$T13HelloCookieManager() {
}

$Class* HelloCookieManager$T13HelloCookieManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"secureRandom", "Ljava/security/SecureRandom;", nullptr, $FINAL, $field(HelloCookieManager$T13HelloCookieManager, secureRandom)},
		{"cookieVersion", "I", nullptr, $PRIVATE, $field(HelloCookieManager$T13HelloCookieManager, cookieVersion)},
		{"cookieSecret", "[B", nullptr, $PRIVATE | $FINAL, $field(HelloCookieManager$T13HelloCookieManager, cookieSecret)},
		{"legacySecret", "[B", nullptr, $PRIVATE | $FINAL, $field(HelloCookieManager$T13HelloCookieManager, legacySecret)},
		{"t13ManagerLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(HelloCookieManager$T13HelloCookieManager, t13ManagerLock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/SecureRandom;)V", nullptr, 0, $method(HelloCookieManager$T13HelloCookieManager, init$, void, $SecureRandom*)},
		{"createCookie", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;)[B", nullptr, 0, $virtualMethod(HelloCookieManager$T13HelloCookieManager, createCookie, $bytes*, $ServerHandshakeContext*, $ClientHello$ClientHelloMessage*), "java.io.IOException"},
		{"isCookieValid", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;[B)Z", nullptr, 0, $virtualMethod(HelloCookieManager$T13HelloCookieManager, isCookieValid, bool, $ServerHandshakeContext*, $ClientHello$ClientHelloMessage*, $bytes*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HelloCookieManager$T13HelloCookieManager", "sun.security.ssl.HelloCookieManager", "T13HelloCookieManager", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.HelloCookieManager$T13HelloCookieManager",
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
	$loadClass(HelloCookieManager$T13HelloCookieManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HelloCookieManager$T13HelloCookieManager);
	});
	return class$;
}

$Class* HelloCookieManager$T13HelloCookieManager::class$ = nullptr;

		} // ssl
	} // security
} // sun