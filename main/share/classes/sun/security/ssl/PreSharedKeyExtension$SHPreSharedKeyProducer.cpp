#include <sun/security/ssl/PreSharedKeyExtension$SHPreSharedKeyProducer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/PreSharedKeyExtension$SHPreSharedKeySpec.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef SH_PRE_SHARED_KEY

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $PreSharedKeyExtension$SHPreSharedKeySpec = ::sun::security::ssl::PreSharedKeyExtension$SHPreSharedKeySpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void PreSharedKeyExtension$SHPreSharedKeyProducer::init$() {
}

$bytes* PreSharedKeyExtension$SHPreSharedKeyProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	$var($PreSharedKeyExtension$SHPreSharedKeySpec, psk, $cast($PreSharedKeyExtension$SHPreSharedKeySpec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::SH_PRE_SHARED_KEY)));
	if (psk == nullptr) {
		return nullptr;
	}
	return $nc(psk)->getEncoded();
}

PreSharedKeyExtension$SHPreSharedKeyProducer::PreSharedKeyExtension$SHPreSharedKeyProducer() {
}

$Class* PreSharedKeyExtension$SHPreSharedKeyProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PreSharedKeyExtension$SHPreSharedKeyProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(PreSharedKeyExtension$SHPreSharedKeyProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeyProducer", "sun.security.ssl.PreSharedKeyExtension", "SHPreSharedKeyProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeyProducer",
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
	$loadClass(PreSharedKeyExtension$SHPreSharedKeyProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreSharedKeyExtension$SHPreSharedKeyProducer);
	});
	return class$;
}

$Class* PreSharedKeyExtension$SHPreSharedKeyProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun