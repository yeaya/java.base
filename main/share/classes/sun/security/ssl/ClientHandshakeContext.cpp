#include <sun/security/ssl/ClientHandshakeContext.h>
#include <java/security/cert/X509Certificate.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

bool ClientHandshakeContext::allowUnsafeServerCertChange = false;

void ClientHandshakeContext::init$($SSLContextImpl* sslContext, $TransportContext* conContext) {
	$HandshakeContext::init$(sslContext, conContext);
	$set(this, reservedServerCerts, nullptr);
	$set(this, initialClientHelloMsg, nullptr);
}

void ClientHandshakeContext::kickstart() {
	if (this->kickstartMessageDelivered) {
		return;
	}
	$SSLHandshake::kickstart(this);
	this->kickstartMessageDelivered = true;
}

void ClientHandshakeContext::clinit$($Class* clazz) {
	ClientHandshakeContext::allowUnsafeServerCertChange = $Utilities::getBooleanProperty("jdk.tls.allowUnsafeServerCertChange"_s, false);
}

ClientHandshakeContext::ClientHandshakeContext() {
}

$Class* ClientHandshakeContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"allowUnsafeServerCertChange", "Z", nullptr, $STATIC | $FINAL, $staticField(ClientHandshakeContext, allowUnsafeServerCertChange)},
		{"reservedServerCerts", "[Ljava/security/cert/X509Certificate;", nullptr, 0, $field(ClientHandshakeContext, reservedServerCerts)},
		{"deferredCerts", "[Ljava/security/cert/X509Certificate;", nullptr, 0, $field(ClientHandshakeContext, deferredCerts)},
		{"initialClientHelloMsg", "Lsun/security/ssl/ClientHello$ClientHelloMessage;", nullptr, 0, $field(ClientHandshakeContext, initialClientHelloMsg)},
		{"pskIdentity", "[B", nullptr, 0, $field(ClientHandshakeContext, pskIdentity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/SSLContextImpl;Lsun/security/ssl/TransportContext;)V", nullptr, 0, $method(ClientHandshakeContext, init$, void, $SSLContextImpl*, $TransportContext*), "java.io.IOException"},
		{"kickstart", "()V", nullptr, 0, $virtualMethod(ClientHandshakeContext, kickstart, void), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.ClientHandshakeContext",
		"sun.security.ssl.HandshakeContext",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClientHandshakeContext, name, initialize, &classInfo$$, ClientHandshakeContext::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ClientHandshakeContext);
	});
	return class$;
}

$Class* ClientHandshakeContext::class$ = nullptr;

		} // ssl
	} // security
} // sun