#include <sun/security/ssl/PreSharedKeyExtension$CHPreSharedKeyUpdate.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/PreSharedKeyExtension$CHPreSharedKeySpec.h>
#include <sun/security/ssl/PreSharedKeyExtension$SHPreSharedKeySpec.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_PRE_SHARED_KEY
#undef INTERNAL_ERROR
#undef SH_PRE_SHARED_KEY

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $PreSharedKeyExtension = ::sun::security::ssl::PreSharedKeyExtension;
using $PreSharedKeyExtension$CHPreSharedKeySpec = ::sun::security::ssl::PreSharedKeyExtension$CHPreSharedKeySpec;
using $PreSharedKeyExtension$SHPreSharedKeySpec = ::sun::security::ssl::PreSharedKeyExtension$SHPreSharedKeySpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void PreSharedKeyExtension$CHPreSharedKeyUpdate::init$() {
}

void PreSharedKeyExtension$CHPreSharedKeyUpdate::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	if (!$nc(shc)->isResumption || shc->resumingSession == nullptr) {
		return;
	}
	$init($SSLExtension);
	$var($PreSharedKeyExtension$CHPreSharedKeySpec, chPsk, $cast($PreSharedKeyExtension$CHPreSharedKeySpec, $nc(shc->handshakeExtensions)->get($SSLExtension::CH_PRE_SHARED_KEY)));
	$var($PreSharedKeyExtension$SHPreSharedKeySpec, shPsk, $cast($PreSharedKeyExtension$SHPreSharedKeySpec, shc->handshakeExtensions->get($SSLExtension::SH_PRE_SHARED_KEY)));
	if (chPsk == nullptr || shPsk == nullptr) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::INTERNAL_ERROR, "Required extensions are unavailable"_s)));
	}
	$var($bytes, binder, $cast($bytes, $nc($nc(chPsk)->binders)->get($nc(shPsk)->selectedIdentity)));
	$var($HandshakeHash, pskBinderHash, $nc(shc->handshakeHash)->copy());
	$var($bytes, lastMessage, $nc(pskBinderHash)->removeLastReceived());
	$var($ByteBuffer, messageBuf, $ByteBuffer::wrap(lastMessage));
	$nc(messageBuf)->position(4);
	$ClientHello$ClientHelloMessage::readPartial(shc->conContext, messageBuf);
	int32_t length = messageBuf->position();
	messageBuf->position(0);
	pskBinderHash->receive(messageBuf, length);
	$PreSharedKeyExtension::checkBinder(shc, shc->resumingSession, pskBinderHash, binder);
}

PreSharedKeyExtension$CHPreSharedKeyUpdate::PreSharedKeyExtension$CHPreSharedKeyUpdate() {
}

$Class* PreSharedKeyExtension$CHPreSharedKeyUpdate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PreSharedKeyExtension$CHPreSharedKeyUpdate, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(PreSharedKeyExtension$CHPreSharedKeyUpdate, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyUpdate", "sun.security.ssl.PreSharedKeyExtension", "CHPreSharedKeyUpdate", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyUpdate",
		"java.lang.Object",
		"sun.security.ssl.HandshakeConsumer",
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
	$loadClass(PreSharedKeyExtension$CHPreSharedKeyUpdate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreSharedKeyExtension$CHPreSharedKeyUpdate);
	});
	return class$;
}

$Class* PreSharedKeyExtension$CHPreSharedKeyUpdate::class$ = nullptr;

		} // ssl
	} // security
} // sun