#include <sun/security/ssl/PreSharedKeyExtension$CHPreSharedKeyProducer.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/crypto/SecretKey.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <sun/security/ssl/CipherSuite$HashAlg.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/PreSharedKeyExtension$CHPreSharedKeySpec.h>
#include <sun/security/ssl/PreSharedKeyExtension$PskIdentity.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionContextImpl.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/SessionId.h>
#include <jcpp.h>

#undef CH_PRE_SHARED_KEY

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $SecretKey = ::javax::crypto::SecretKey;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $PreSharedKeyExtension = ::sun::security::ssl::PreSharedKeyExtension;
using $PreSharedKeyExtension$CHPreSharedKeySpec = ::sun::security::ssl::PreSharedKeyExtension$CHPreSharedKeySpec;
using $PreSharedKeyExtension$PskIdentity = ::sun::security::ssl::PreSharedKeyExtension$PskIdentity;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;

namespace sun {
	namespace security {
		namespace ssl {

void PreSharedKeyExtension$CHPreSharedKeyProducer::init$() {
}

$bytes* PreSharedKeyExtension$CHPreSharedKeyProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	if (!$nc(chc)->isResumption || chc->resumingSession == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("No session to resume."_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($Collection, sessionSigAlgs, $nc(chc->resumingSession)->getLocalSupportedSignatureSchemes());
	if (!$nc(chc->localSupportedSignAlgs)->containsAll(sessionSigAlgs)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Existing session uses different signature algorithms"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($SecretKey, psk, chc->resumingSession->getPreSharedKey());
	if (psk == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Existing session has no PSK."_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if (chc->pskIdentity == nullptr) {
		$set(chc, pskIdentity, chc->resumingSession->consumePskIdentity());
	}
	if (chc->pskIdentity == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("PSK has no identity, or identity was already used"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($SSLSessionContextImpl, sessionCache, $cast($SSLSessionContextImpl, $nc(chc->sslContext)->engineGetClientSessionContext()));
	$nc(sessionCache)->remove($(chc->resumingSession->getSessionId()));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Found resumable session. Preparing PSK message."_s, $$new($ObjectArray, 0));
	}
	$var($List, identities, $new($ArrayList));
	int64_t var$0 = $System::currentTimeMillis();
	int32_t ageMillis = (int32_t)(var$0 - chc->resumingSession->getTicketCreationTime());
	int32_t obfuscatedAge = ageMillis + chc->resumingSession->getTicketAgeAdd();
	identities->add($$new($PreSharedKeyExtension$PskIdentity, chc->pskIdentity, obfuscatedAge));
	$var($SecretKey, binderKey, $PreSharedKeyExtension::deriveBinderKey(chc, psk, chc->resumingSession));
	$var($ClientHello$ClientHelloMessage, clientHello, $cast($ClientHello$ClientHelloMessage, message));
	$var($PreSharedKeyExtension$CHPreSharedKeySpec, pskPrototype, createPskPrototype($nc($(chc->resumingSession->getSuite()))->hashAlg->hashLength, identities));
	$var($HandshakeHash, pskBinderHash, $nc(chc->handshakeHash)->copy());
	$var($bytes, binder, $PreSharedKeyExtension::computeBinder(chc, binderKey, pskBinderHash, chc->resumingSession, chc, clientHello, pskPrototype));
	$var($List, binders, $new($ArrayList));
	binders->add(binder);
	$var($PreSharedKeyExtension$CHPreSharedKeySpec, pskMessage, $new($PreSharedKeyExtension$CHPreSharedKeySpec, identities, binders));
	$init($SSLExtension);
	$nc(chc->handshakeExtensions)->put($SSLExtension::CH_PRE_SHARED_KEY, pskMessage);
	return pskMessage->getEncoded();
}

$PreSharedKeyExtension$CHPreSharedKeySpec* PreSharedKeyExtension$CHPreSharedKeyProducer::createPskPrototype(int32_t hashLength, $List* identities) {
	$useLocalObjectStack();
	$var($List, binders, $new($ArrayList));
	$var($bytes, binderProto, $new($bytes, hashLength));
	int32_t i = $nc(identities)->size();
	while (i-- > 0) {
		binders->add(binderProto);
	}
	return $new($PreSharedKeyExtension$CHPreSharedKeySpec, identities, binders);
}

PreSharedKeyExtension$CHPreSharedKeyProducer::PreSharedKeyExtension$CHPreSharedKeyProducer() {
}

$Class* PreSharedKeyExtension$CHPreSharedKeyProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PreSharedKeyExtension$CHPreSharedKeyProducer, init$, void)},
		{"createPskPrototype", "(ILjava/util/List;)Lsun/security/ssl/PreSharedKeyExtension$CHPreSharedKeySpec;", "(ILjava/util/List<Lsun/security/ssl/PreSharedKeyExtension$PskIdentity;>;)Lsun/security/ssl/PreSharedKeyExtension$CHPreSharedKeySpec;", $PRIVATE, $method(PreSharedKeyExtension$CHPreSharedKeyProducer, createPskPrototype, $PreSharedKeyExtension$CHPreSharedKeySpec*, int32_t, $List*)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(PreSharedKeyExtension$CHPreSharedKeyProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyProducer", "sun.security.ssl.PreSharedKeyExtension", "CHPreSharedKeyProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyProducer",
		"java.lang.Object",
		"sun.security.ssl.HandshakeProducer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.PreSharedKeyExtension"
	};
	$loadClass(PreSharedKeyExtension$CHPreSharedKeyProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreSharedKeyExtension$CHPreSharedKeyProducer);
	});
	return class$;
}

$Class* PreSharedKeyExtension$CHPreSharedKeyProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun