#include <sun/security/ssl/ClientHello.h>
#include <sun/security/ssl/ClientHello$ClientHelloConsumer.h>
#include <sun/security/ssl/ClientHello$ClientHelloKickstartProducer.h>
#include <sun/security/ssl/ClientHello$ClientHelloProducer.h>
#include <sun/security/ssl/ClientHello$D12ClientHelloConsumer.h>
#include <sun/security/ssl/ClientHello$D13ClientHelloConsumer.h>
#include <sun/security/ssl/ClientHello$T12ClientHelloConsumer.h>
#include <sun/security/ssl/ClientHello$T13ClientHelloConsumer.h>
#include <sun/security/ssl/HandshakeConsumer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLProducer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClientHello$ClientHelloConsumer = ::sun::security::ssl::ClientHello$ClientHelloConsumer;
using $ClientHello$ClientHelloKickstartProducer = ::sun::security::ssl::ClientHello$ClientHelloKickstartProducer;
using $ClientHello$ClientHelloProducer = ::sun::security::ssl::ClientHello$ClientHelloProducer;
using $ClientHello$D12ClientHelloConsumer = ::sun::security::ssl::ClientHello$D12ClientHelloConsumer;
using $ClientHello$D13ClientHelloConsumer = ::sun::security::ssl::ClientHello$D13ClientHelloConsumer;
using $ClientHello$T12ClientHelloConsumer = ::sun::security::ssl::ClientHello$T12ClientHelloConsumer;
using $ClientHello$T13ClientHelloConsumer = ::sun::security::ssl::ClientHello$T13ClientHelloConsumer;
using $HandshakeConsumer = ::sun::security::ssl::HandshakeConsumer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLProducer = ::sun::security::ssl::SSLProducer;

namespace sun {
	namespace security {
		namespace ssl {

$SSLProducer* ClientHello::kickstartProducer = nullptr;
$SSLConsumer* ClientHello::handshakeConsumer = nullptr;
$HandshakeProducer* ClientHello::handshakeProducer = nullptr;
$HandshakeConsumer* ClientHello::t12HandshakeConsumer = nullptr;
$HandshakeConsumer* ClientHello::t13HandshakeConsumer = nullptr;
$HandshakeConsumer* ClientHello::d12HandshakeConsumer = nullptr;
$HandshakeConsumer* ClientHello::d13HandshakeConsumer = nullptr;

void ClientHello::init$() {
}

void ClientHello::clinit$($Class* clazz) {
	$assignStatic(ClientHello::kickstartProducer, $new($ClientHello$ClientHelloKickstartProducer));
	$assignStatic(ClientHello::handshakeConsumer, $new($ClientHello$ClientHelloConsumer));
	$assignStatic(ClientHello::handshakeProducer, $new($ClientHello$ClientHelloProducer));
	$assignStatic(ClientHello::t12HandshakeConsumer, $new($ClientHello$T12ClientHelloConsumer));
	$assignStatic(ClientHello::t13HandshakeConsumer, $new($ClientHello$T13ClientHelloConsumer));
	$assignStatic(ClientHello::d12HandshakeConsumer, $new($ClientHello$D12ClientHelloConsumer));
	$assignStatic(ClientHello::d13HandshakeConsumer, $new($ClientHello$D13ClientHelloConsumer));
}

ClientHello::ClientHello() {
}

$Class* ClientHello::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"kickstartProducer", "Lsun/security/ssl/SSLProducer;", nullptr, $STATIC | $FINAL, $staticField(ClientHello, kickstartProducer)},
		{"handshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(ClientHello, handshakeConsumer)},
		{"handshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ClientHello, handshakeProducer)},
		{"t12HandshakeConsumer", "Lsun/security/ssl/HandshakeConsumer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClientHello, t12HandshakeConsumer)},
		{"t13HandshakeConsumer", "Lsun/security/ssl/HandshakeConsumer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClientHello, t13HandshakeConsumer)},
		{"d12HandshakeConsumer", "Lsun/security/ssl/HandshakeConsumer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClientHello, d12HandshakeConsumer)},
		{"d13HandshakeConsumer", "Lsun/security/ssl/HandshakeConsumer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClientHello, d13HandshakeConsumer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ClientHello, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ClientHello$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"sun.security.ssl.ClientHello$D13ClientHelloConsumer", "sun.security.ssl.ClientHello", "D13ClientHelloConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ClientHello$D12ClientHelloConsumer", "sun.security.ssl.ClientHello", "D12ClientHelloConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ClientHello$T13ClientHelloConsumer", "sun.security.ssl.ClientHello", "T13ClientHelloConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ClientHello$T12ClientHelloConsumer", "sun.security.ssl.ClientHello", "T12ClientHelloConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ClientHello$ClientHelloConsumer", "sun.security.ssl.ClientHello", "ClientHelloConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ClientHello$ClientHelloProducer", "sun.security.ssl.ClientHello", "ClientHelloProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ClientHello$ClientHelloKickstartProducer", "sun.security.ssl.ClientHello", "ClientHelloKickstartProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ClientHello$ClientHelloMessage", "sun.security.ssl.ClientHello", "ClientHelloMessage", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ClientHello",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.ClientHello$1,sun.security.ssl.ClientHello$D13ClientHelloConsumer,sun.security.ssl.ClientHello$D12ClientHelloConsumer,sun.security.ssl.ClientHello$T13ClientHelloConsumer,sun.security.ssl.ClientHello$T12ClientHelloConsumer,sun.security.ssl.ClientHello$ClientHelloConsumer,sun.security.ssl.ClientHello$ClientHelloProducer,sun.security.ssl.ClientHello$ClientHelloKickstartProducer,sun.security.ssl.ClientHello$ClientHelloMessage"
	};
	$loadClass(ClientHello, name, initialize, &classInfo$$, ClientHello::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ClientHello);
	});
	return class$;
}

$Class* ClientHello::class$ = nullptr;

		} // ssl
	} // security
} // sun