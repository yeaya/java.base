#include <sun/security/ssl/AlpnExtension$SHAlpnConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/AlpnExtension$AlpnSpec.h>
#include <sun/security/ssl/AlpnExtension.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_ALPN
#undef UNEXPECTED_MESSAGE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Alert = ::sun::security::ssl::Alert;
using $AlpnExtension$AlpnSpec = ::sun::security::ssl::AlpnExtension$AlpnSpec;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _AlpnExtension$SHAlpnConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AlpnExtension$SHAlpnConsumer::*)()>(&AlpnExtension$SHAlpnConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _AlpnExtension$SHAlpnConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.AlpnExtension$SHAlpnConsumer", "sun.security.ssl.AlpnExtension", "SHAlpnConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AlpnExtension$SHAlpnConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.AlpnExtension$SHAlpnConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_AlpnExtension$SHAlpnConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_AlpnExtension$SHAlpnConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.AlpnExtension"
};

$Object* allocate$AlpnExtension$SHAlpnConsumer($Class* clazz) {
	return $of($alloc(AlpnExtension$SHAlpnConsumer));
}

void AlpnExtension$SHAlpnConsumer::init$() {
}

void AlpnExtension$SHAlpnConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($AlpnExtension$AlpnSpec, requestedAlps, $cast($AlpnExtension$AlpnSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::CH_ALPN)));
	if (requestedAlps == nullptr || $nc(requestedAlps)->applicationProtocols == nullptr || $nc($nc(requestedAlps)->applicationProtocols)->isEmpty()) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, $$str({"Unexpected "_s, $SSLExtension::CH_ALPN->name$, " extension"_s}))));
	}
	$var($AlpnExtension$AlpnSpec, spec, $new($AlpnExtension$AlpnSpec, chc, buffer));
	if ($nc(spec->applicationProtocols)->size() != 1) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, $$str({"Invalid "_s, $SSLExtension::CH_ALPN->name$, " extension: Only one application protocol name is allowed in ServerHello message"_s}))));
	}
	if (!$nc($nc(requestedAlps)->applicationProtocols)->containsAll(spec->applicationProtocols)) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, $$str({"Invalid "_s, $SSLExtension::CH_ALPN->name$, " extension: Only client specified application protocol is allowed in ServerHello message"_s}))));
	}
	$set(chc, applicationProtocol, $cast($String, $nc(spec->applicationProtocols)->get(0)));
	$set($nc(chc->conContext), applicationProtocol, chc->applicationProtocol);
	$nc(chc->handshakeExtensions)->remove($SSLExtension::CH_ALPN);
}

AlpnExtension$SHAlpnConsumer::AlpnExtension$SHAlpnConsumer() {
}

$Class* AlpnExtension$SHAlpnConsumer::load$($String* name, bool initialize) {
	$loadClass(AlpnExtension$SHAlpnConsumer, name, initialize, &_AlpnExtension$SHAlpnConsumer_ClassInfo_, allocate$AlpnExtension$SHAlpnConsumer);
	return class$;
}

$Class* AlpnExtension$SHAlpnConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun