#include <sun/security/ssl/RandomCookie.h>

#include <java/nio/ByteBuffer.h>
#include <java/security/SecureRandom.h>
#include <java/util/Arrays.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SecureRandom = ::java::security::SecureRandom;
using $Arrays = ::java::util::Arrays;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _RandomCookie_FieldInfo_[] = {
	{"randomBytes", "[B", nullptr, $FINAL, $field(RandomCookie, randomBytes)},
	{"hrrRandomBytes", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RandomCookie, hrrRandomBytes)},
	{"t12Protection", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RandomCookie, t12Protection)},
	{"t11Protection", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RandomCookie, t11Protection)},
	{"hrrRandom", "Lsun/security/ssl/RandomCookie;", nullptr, $STATIC | $FINAL, $staticField(RandomCookie, hrrRandom)},
	{}
};

$MethodInfo _RandomCookie_MethodInfo_[] = {
	{"<init>", "(Ljava/security/SecureRandom;)V", nullptr, 0, $method(static_cast<void(RandomCookie::*)($SecureRandom*)>(&RandomCookie::init$))},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;)V", nullptr, 0, $method(static_cast<void(RandomCookie::*)($HandshakeContext*)>(&RandomCookie::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(RandomCookie::*)($ByteBuffer*)>(&RandomCookie::init$)), "java.io.IOException"},
	{"<init>", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(RandomCookie::*)($bytes*)>(&RandomCookie::init$))},
	{"isHelloRetryRequest", "()Z", nullptr, 0, $method(static_cast<bool(RandomCookie::*)()>(&RandomCookie::isHelloRetryRequest))},
	{"isT11Downgrade", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(RandomCookie::*)()>(&RandomCookie::isT11Downgrade))},
	{"isT12Downgrade", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(RandomCookie::*)()>(&RandomCookie::isT12Downgrade))},
	{"isVersionDowngrade", "(Lsun/security/ssl/HandshakeContext;)Z", nullptr, 0, $method(static_cast<bool(RandomCookie::*)($HandshakeContext*)>(&RandomCookie::isVersionDowngrade))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RandomCookie_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RandomCookie",
	"java.lang.Object",
	nullptr,
	_RandomCookie_FieldInfo_,
	_RandomCookie_MethodInfo_
};

$Object* allocate$RandomCookie($Class* clazz) {
	return $of($alloc(RandomCookie));
}

$bytes* RandomCookie::hrrRandomBytes = nullptr;
$bytes* RandomCookie::t12Protection = nullptr;
$bytes* RandomCookie::t11Protection = nullptr;
RandomCookie* RandomCookie::hrrRandom = nullptr;

void RandomCookie::init$($SecureRandom* generator) {
	$set(this, randomBytes, $new($bytes, 32));
	$nc(generator)->nextBytes(this->randomBytes);
}

void RandomCookie::init$($HandshakeContext* context) {
	$useLocalCurrentObjectStackCache();
	$set(this, randomBytes, $new($bytes, 32));
	$var($SecureRandom, generator, $nc($nc(context)->sslContext)->getSecureRandom());
	$nc(generator)->nextBytes(this->randomBytes);
	$var($bytes, protection, nullptr);
	if (context->maximumActiveProtocol->useTLS13PlusSpec()) {
		if (!$nc(context->negotiatedProtocol)->useTLS13PlusSpec()) {
			if ($nc(context->negotiatedProtocol)->useTLS12PlusSpec()) {
				$assign(protection, RandomCookie::t12Protection);
			} else {
				$assign(protection, RandomCookie::t11Protection);
			}
		}
	} else if (context->maximumActiveProtocol->useTLS12PlusSpec()) {
		if (!$nc(context->negotiatedProtocol)->useTLS12PlusSpec()) {
			$assign(protection, RandomCookie::t11Protection);
		}
	}
	if (protection != nullptr) {
		$System::arraycopy(protection, 0, this->randomBytes, $nc(this->randomBytes)->length - protection->length, protection->length);
	}
}

void RandomCookie::init$($ByteBuffer* m) {
	$set(this, randomBytes, $new($bytes, 32));
	$nc(m)->get(this->randomBytes);
}

void RandomCookie::init$($bytes* randomBytes) {
	$set(this, randomBytes, $new($bytes, 32));
	$System::arraycopy(randomBytes, 0, this->randomBytes, 0, 32);
}

$String* RandomCookie::toString() {
	return $str({"random_bytes = {"_s, $($Utilities::toHexString(this->randomBytes)), "}"_s});
}

bool RandomCookie::isHelloRetryRequest() {
	return $Arrays::equals(RandomCookie::hrrRandomBytes, this->randomBytes);
}

bool RandomCookie::isVersionDowngrade($HandshakeContext* context) {
	if ($nc(context)->maximumActiveProtocol->useTLS13PlusSpec()) {
		if (!$nc(context->negotiatedProtocol)->useTLS13PlusSpec()) {
			bool var$0 = isT12Downgrade();
			return var$0 || isT11Downgrade();
		}
	} else if (context->maximumActiveProtocol->useTLS12PlusSpec()) {
		if (!$nc(context->negotiatedProtocol)->useTLS12PlusSpec()) {
			return isT11Downgrade();
		}
	}
	return false;
}

bool RandomCookie::isT12Downgrade() {
	return $Arrays::equals(this->randomBytes, 24, 32, RandomCookie::t12Protection, 0, 8);
}

bool RandomCookie::isT11Downgrade() {
	return $Arrays::equals(this->randomBytes, 24, 32, RandomCookie::t11Protection, 0, 8);
}

void clinit$RandomCookie($Class* class$) {
	$assignStatic(RandomCookie::hrrRandomBytes, $new($bytes, {
		(int8_t)207,
		(int8_t)33,
		(int8_t)173,
		(int8_t)116,
		(int8_t)229,
		(int8_t)154,
		(int8_t)97,
		(int8_t)17,
		(int8_t)190,
		(int8_t)29,
		(int8_t)140,
		(int8_t)2,
		(int8_t)30,
		(int8_t)101,
		(int8_t)184,
		(int8_t)145,
		(int8_t)194,
		(int8_t)162,
		(int8_t)17,
		(int8_t)22,
		(int8_t)122,
		(int8_t)187,
		(int8_t)140,
		(int8_t)94,
		(int8_t)7,
		(int8_t)158,
		(int8_t)9,
		(int8_t)226,
		(int8_t)200,
		(int8_t)168,
		(int8_t)51,
		(int8_t)156
	}));
	$assignStatic(RandomCookie::t12Protection, $new($bytes, {
		(int8_t)68,
		(int8_t)79,
		(int8_t)87,
		(int8_t)78,
		(int8_t)71,
		(int8_t)82,
		(int8_t)68,
		(int8_t)1
	}));
	$assignStatic(RandomCookie::t11Protection, $new($bytes, {
		(int8_t)68,
		(int8_t)79,
		(int8_t)87,
		(int8_t)78,
		(int8_t)71,
		(int8_t)82,
		(int8_t)68,
		(int8_t)0
	}));
	$assignStatic(RandomCookie::hrrRandom, $new(RandomCookie, RandomCookie::hrrRandomBytes));
}

RandomCookie::RandomCookie() {
}

$Class* RandomCookie::load$($String* name, bool initialize) {
	$loadClass(RandomCookie, name, initialize, &_RandomCookie_ClassInfo_, clinit$RandomCookie, allocate$RandomCookie);
	return class$;
}

$Class* RandomCookie::class$ = nullptr;

		} // ssl
	} // security
} // sun