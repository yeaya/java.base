#include <sun/security/ssl/ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension$ExtendedMasterSecretSpec.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef NOMINAL
#undef SH_EXTENDED_MASTER_SECRET

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ExtendedMasterSecretExtension$ExtendedMasterSecretSpec = ::sun::security::ssl::ExtendedMasterSecretExtension$ExtendedMasterSecretSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer::init$() {
}

$bytes* ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	if ($nc($nc(shc)->handshakeSession)->useExtendedMasterSecret) {
		$var($bytes, extData, $new($bytes, 0));
		$init($SSLExtension);
		$init($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec);
		$nc(shc->handshakeExtensions)->put($SSLExtension::SH_EXTENDED_MASTER_SECRET, $ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::NOMINAL);
		return extData;
	}
	return nullptr;
}

ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer::ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer() {
}

$Class* ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer", "sun.security.ssl.ExtendedMasterSecretExtension", "SHExtendedMasterSecretProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer",
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
		"sun.security.ssl.ExtendedMasterSecretExtension"
	};
	$loadClass(ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer);
	});
	return class$;
}

$Class* ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun