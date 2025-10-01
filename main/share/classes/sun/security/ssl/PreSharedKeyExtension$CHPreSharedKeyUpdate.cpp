#include <sun/security/ssl/PreSharedKeyExtension$CHPreSharedKeyUpdate.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

#undef INTERNAL_ERROR
#undef CH_PRE_SHARED_KEY
#undef SH_PRE_SHARED_KEY

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeConsumer = ::sun::security::ssl::HandshakeConsumer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $PreSharedKeyExtension = ::sun::security::ssl::PreSharedKeyExtension;
using $PreSharedKeyExtension$CHPreSharedKeySpec = ::sun::security::ssl::PreSharedKeyExtension$CHPreSharedKeySpec;
using $PreSharedKeyExtension$SHPreSharedKeySpec = ::sun::security::ssl::PreSharedKeyExtension$SHPreSharedKeySpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _PreSharedKeyExtension$CHPreSharedKeyUpdate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PreSharedKeyExtension$CHPreSharedKeyUpdate::*)()>(&PreSharedKeyExtension$CHPreSharedKeyUpdate::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _PreSharedKeyExtension$CHPreSharedKeyUpdate_InnerClassesInfo_[] = {
	{"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyUpdate", "sun.security.ssl.PreSharedKeyExtension", "CHPreSharedKeyUpdate", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PreSharedKeyExtension$CHPreSharedKeyUpdate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyUpdate",
	"java.lang.Object",
	"sun.security.ssl.HandshakeConsumer",
	nullptr,
	_PreSharedKeyExtension$CHPreSharedKeyUpdate_MethodInfo_,
	nullptr,
	nullptr,
	_PreSharedKeyExtension$CHPreSharedKeyUpdate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.PreSharedKeyExtension"
};

$Object* allocate$PreSharedKeyExtension$CHPreSharedKeyUpdate($Class* clazz) {
	return $of($alloc(PreSharedKeyExtension$CHPreSharedKeyUpdate));
}

void PreSharedKeyExtension$CHPreSharedKeyUpdate::init$() {
}

void PreSharedKeyExtension$CHPreSharedKeyUpdate::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	if (!$nc(shc)->isResumption || $nc(shc)->resumingSession == nullptr) {
		return;
	}
	$init($SSLExtension);
	$var($PreSharedKeyExtension$CHPreSharedKeySpec, chPsk, $cast($PreSharedKeyExtension$CHPreSharedKeySpec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::CH_PRE_SHARED_KEY)));
	$var($PreSharedKeyExtension$SHPreSharedKeySpec, shPsk, $cast($PreSharedKeyExtension$SHPreSharedKeySpec, $nc(shc->handshakeExtensions)->get($SSLExtension::SH_PRE_SHARED_KEY)));
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
	$loadClass(PreSharedKeyExtension$CHPreSharedKeyUpdate, name, initialize, &_PreSharedKeyExtension$CHPreSharedKeyUpdate_ClassInfo_, allocate$PreSharedKeyExtension$CHPreSharedKeyUpdate);
	return class$;
}

$Class* PreSharedKeyExtension$CHPreSharedKeyUpdate::class$ = nullptr;

		} // ssl
	} // security
} // sun