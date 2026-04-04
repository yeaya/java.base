#include <sun/security/ssl/ServerNameExtension$SHServerNameConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SNIServerName.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerNameExtension$CHServerNamesSpec.h>
#include <sun/security/ssl/ServerNameExtension$SHServerNamesSpec.h>
#include <sun/security/ssl/ServerNameExtension.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_SERVER_NAME
#undef DEFAULT
#undef SH_SERVER_NAME
#undef UNEXPECTED_MESSAGE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SNIServerName = ::javax::net::ssl::SNIServerName;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerNameExtension$CHServerNamesSpec = ::sun::security::ssl::ServerNameExtension$CHServerNamesSpec;
using $ServerNameExtension$SHServerNamesSpec = ::sun::security::ssl::ServerNameExtension$SHServerNamesSpec;

namespace sun {
	namespace security {
		namespace ssl {

void ServerNameExtension$SHServerNameConsumer::init$() {
}

void ServerNameExtension$SHServerNameConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($ServerNameExtension$CHServerNamesSpec, spec, $cast($ServerNameExtension$CHServerNamesSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::CH_SERVER_NAME)));
	if (spec == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected ServerHello server_name extension"_s)));
	}
	if ($nc(buffer)->remaining() != 0) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Invalid ServerHello server_name extension"_s)));
	}
	$init($ServerNameExtension$SHServerNamesSpec);
	chc->handshakeExtensions->put($SSLExtension::SH_SERVER_NAME, $ServerNameExtension$SHServerNamesSpec::DEFAULT);
	$set(chc, negotiatedServerName, $cast($SNIServerName, $nc($nc(spec)->serverNames)->get(0)));
}

ServerNameExtension$SHServerNameConsumer::ServerNameExtension$SHServerNameConsumer() {
}

$Class* ServerNameExtension$SHServerNameConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ServerNameExtension$SHServerNameConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(ServerNameExtension$SHServerNameConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ServerNameExtension$SHServerNameConsumer", "sun.security.ssl.ServerNameExtension", "SHServerNameConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ServerNameExtension$SHServerNameConsumer",
		"java.lang.Object",
		"sun.security.ssl.SSLExtension$ExtensionConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.ServerNameExtension"
	};
	$loadClass(ServerNameExtension$SHServerNameConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerNameExtension$SHServerNameConsumer);
	});
	return class$;
}

$Class* ServerNameExtension$SHServerNameConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun