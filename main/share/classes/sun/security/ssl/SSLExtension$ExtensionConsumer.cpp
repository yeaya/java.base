#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;

namespace sun {
	namespace security {
		namespace ssl {

$Class* SSLExtension$ExtensionConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLExtension$ExtensionConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.SSLExtension$ExtensionConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLExtension"
	};
	$loadClass(SSLExtension$ExtensionConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLExtension$ExtensionConsumer);
	});
	return class$;
}

$Class* SSLExtension$ExtensionConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun