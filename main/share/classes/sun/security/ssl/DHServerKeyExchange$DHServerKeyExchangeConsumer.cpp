#include <sun/security/ssl/DHServerKeyExchange$DHServerKeyExchangeConsumer.h>
#include <java/math/BigInteger.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/security/CryptoPrimitive.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/KeyFactory.h>
#include <java/security/PublicKey.h>
#include <java/util/EnumSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/crypto/interfaces/DHPublicKey.h>
#include <javax/crypto/spec/DHParameterSpec.h>
#include <javax/crypto/spec/DHPublicKeySpec.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/DHKeyExchange$DHECredentials.h>
#include <sun/security/ssl/DHServerKeyExchange$DHServerKeyExchangeMessage.h>
#include <sun/security/ssl/DHServerKeyExchange.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef INSUFFICIENT_SECURITY
#undef KEY_AGREEMENT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CryptoPrimitive = ::java::security::CryptoPrimitive;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $KeyFactory = ::java::security::KeyFactory;
using $EnumSet = ::java::util::EnumSet;
using $DHPublicKey = ::javax::crypto::interfaces::DHPublicKey;
using $DHPublicKeySpec = ::javax::crypto::spec::DHPublicKeySpec;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $DHKeyExchange$DHECredentials = ::sun::security::ssl::DHKeyExchange$DHECredentials;
using $DHServerKeyExchange$DHServerKeyExchangeMessage = ::sun::security::ssl::DHServerKeyExchange$DHServerKeyExchangeMessage;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void DHServerKeyExchange$DHServerKeyExchangeConsumer::init$() {
}

void DHServerKeyExchange$DHServerKeyExchangeConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$var($DHServerKeyExchange$DHServerKeyExchangeMessage, skem, $new($DHServerKeyExchange$DHServerKeyExchangeMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming DH ServerKeyExchange handshake message"_s, $$new($ObjectArray, {skem}));
	}
	$var($DHPublicKey, publicKey, nullptr);
	try {
		$var($KeyFactory, kf, $KeyFactory::getInstance("DiffieHellman"_s));
		$var($BigInteger, var$0, $new($BigInteger, 1, skem->y));
		$var($BigInteger, var$1, $new($BigInteger, 1, skem->p));
		$var($DHPublicKeySpec, spec, $new($DHPublicKeySpec, var$0, var$1, $$new($BigInteger, 1, skem->g)));
		$assign(publicKey, $cast($DHPublicKey, $nc(kf)->generatePublic(spec)));
	} catch ($GeneralSecurityException& gse) {
		$init($Alert);
		$throw($($nc($nc(chc)->conContext)->fatal($Alert::INSUFFICIENT_SECURITY, "Could not generate DHPublicKey"_s, gse)));
	}
	$init($CryptoPrimitive);
	if (!$nc($nc(chc)->algorithmConstraints)->permits($($EnumSet::of($CryptoPrimitive::KEY_AGREEMENT)), publicKey)) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::INSUFFICIENT_SECURITY, "DH ServerKeyExchange does not comply to algorithm constraints"_s)));
	}
	$NamedGroup* namedGroup = $NamedGroup::valueOf($($nc(publicKey)->getParams()));
	$nc(chc->handshakeCredentials)->add($$new($DHKeyExchange$DHECredentials, publicKey, namedGroup));
}

DHServerKeyExchange$DHServerKeyExchangeConsumer::DHServerKeyExchange$DHServerKeyExchangeConsumer() {
}

$Class* DHServerKeyExchange$DHServerKeyExchangeConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DHServerKeyExchange$DHServerKeyExchangeConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(DHServerKeyExchange$DHServerKeyExchangeConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeConsumer", "sun.security.ssl.DHServerKeyExchange", "DHServerKeyExchangeConsumer", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeConsumer",
		"java.lang.Object",
		"sun.security.ssl.SSLConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.DHServerKeyExchange"
	};
	$loadClass(DHServerKeyExchange$DHServerKeyExchangeConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DHServerKeyExchange$DHServerKeyExchangeConsumer);
	});
	return class$;
}

$Class* DHServerKeyExchange$DHServerKeyExchangeConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun