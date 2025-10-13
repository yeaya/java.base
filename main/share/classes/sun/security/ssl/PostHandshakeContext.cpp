#include <sun/security/ssl/PostHandshakeContext.h>

#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/BufferOverflowException.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef DECODE_ERROR
#undef KEY_UPDATE
#undef NEW_SESSION_TICKET
#undef UNEXPECTED_MESSAGE

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $BufferOverflowException = ::java::nio::BufferOverflowException;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _PostHandshakeContext_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/TransportContext;)V", nullptr, 0, $method(static_cast<void(PostHandshakeContext::*)($TransportContext*)>(&PostHandshakeContext::init$)), "java.io.IOException"},
	{"dispatch", "(BLjava/nio/ByteBuffer;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"isConsumable", "(Lsun/security/ssl/TransportContext;B)Z", nullptr, $STATIC, $method(static_cast<bool(*)($TransportContext*,int8_t)>(&PostHandshakeContext::isConsumable))},
	{"kickstart", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _PostHandshakeContext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PostHandshakeContext",
	"sun.security.ssl.HandshakeContext",
	nullptr,
	nullptr,
	_PostHandshakeContext_MethodInfo_
};

$Object* allocate$PostHandshakeContext($Class* clazz) {
	return $of($alloc(PostHandshakeContext));
}

void PostHandshakeContext::init$($TransportContext* context) {
	$HandshakeContext::init$(context);
	if (!$nc(this->negotiatedProtocol)->useTLS13PlusSpec()) {
		$init($Alert);
		$throw($($nc(this->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, $$str({"Post-handshake not supported in "_s, $nc(this->negotiatedProtocol)->name$}))));
	}
	$set(this, localSupportedSignAlgs, $new($ArrayList, $($nc($nc(context)->conSession)->getLocalSupportedSignatureSchemes())));
	if ($nc($nc(context)->sslConfig)->isClientMode) {
		$init($SSLHandshake);
		$nc(this->handshakeConsumers)->putIfAbsent($($Byte::valueOf($SSLHandshake::KEY_UPDATE->id)), $SSLHandshake::KEY_UPDATE);
		$nc(this->handshakeConsumers)->putIfAbsent($($Byte::valueOf($SSLHandshake::NEW_SESSION_TICKET->id)), $SSLHandshake::NEW_SESSION_TICKET);
	} else {
		$init($SSLHandshake);
		$nc(this->handshakeConsumers)->putIfAbsent($($Byte::valueOf($SSLHandshake::KEY_UPDATE->id)), $SSLHandshake::KEY_UPDATE);
	}
	this->handshakeFinished = true;
	$set(this, handshakeSession, $nc(context)->conSession);
}

void PostHandshakeContext::kickstart() {
	$SSLHandshake::kickstart(this);
}

void PostHandshakeContext::dispatch(int8_t handshakeType, $ByteBuffer* fragment) {
	$var($SSLConsumer, consumer, $cast($SSLConsumer, $nc(this->handshakeConsumers)->get($($Byte::valueOf(handshakeType)))));
	if (consumer == nullptr) {
		$init($Alert);
		$throw($($nc(this->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, $$str({"Unexpected post-handshake message: "_s, $($SSLHandshake::nameOf(handshakeType))}))));
	}
	try {
		$nc(consumer)->consume(this, fragment);
	} catch ($UnsupportedOperationException&) {
		$var($UnsupportedOperationException, unsoe, $catch());
		$init($Alert);
		$throw($($nc(this->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, $$str({"Unsupported post-handshake message: "_s, $($SSLHandshake::nameOf(handshakeType))}), unsoe)));
	} catch ($BufferUnderflowException&) {
		$var($RuntimeException, be, $catch());
		$init($Alert);
		$throw($($nc(this->conContext)->fatal($Alert::DECODE_ERROR, $$str({"Illegal handshake message: "_s, $($SSLHandshake::nameOf(handshakeType))}), be)));
	} catch ($BufferOverflowException&) {
		$var($RuntimeException, be, $catch());
		$init($Alert);
		$throw($($nc(this->conContext)->fatal($Alert::DECODE_ERROR, $$str({"Illegal handshake message: "_s, $($SSLHandshake::nameOf(handshakeType))}), be)));
	}
}

bool PostHandshakeContext::isConsumable($TransportContext* context, int8_t handshakeType) {
	$init(PostHandshakeContext);
	$init($SSLHandshake);
	if (handshakeType == $SSLHandshake::KEY_UPDATE->id) {
		return $nc($nc(context)->protocolVersion)->useTLS13PlusSpec();
	}
	if (handshakeType == $SSLHandshake::NEW_SESSION_TICKET->id) {
		return $nc($nc(context)->sslConfig)->isClientMode;
	}
	return false;
}

PostHandshakeContext::PostHandshakeContext() {
}

$Class* PostHandshakeContext::load$($String* name, bool initialize) {
	$loadClass(PostHandshakeContext, name, initialize, &_PostHandshakeContext_ClassInfo_, allocate$PostHandshakeContext);
	return class$;
}

$Class* PostHandshakeContext::class$ = nullptr;

		} // ssl
	} // security
} // sun