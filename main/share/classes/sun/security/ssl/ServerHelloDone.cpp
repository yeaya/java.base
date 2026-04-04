#include <sun/security/ssl/ServerHelloDone.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/ServerHelloDone$ServerHelloDoneConsumer.h>
#include <sun/security/ssl/ServerHelloDone$ServerHelloDoneProducer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $ServerHelloDone$ServerHelloDoneConsumer = ::sun::security::ssl::ServerHelloDone$ServerHelloDoneConsumer;
using $ServerHelloDone$ServerHelloDoneProducer = ::sun::security::ssl::ServerHelloDone$ServerHelloDoneProducer;

namespace sun {
	namespace security {
		namespace ssl {

$SSLConsumer* ServerHelloDone::handshakeConsumer = nullptr;
$HandshakeProducer* ServerHelloDone::handshakeProducer = nullptr;

void ServerHelloDone::init$() {
}

void ServerHelloDone::clinit$($Class* clazz) {
	$assignStatic(ServerHelloDone::handshakeConsumer, $new($ServerHelloDone$ServerHelloDoneConsumer));
	$assignStatic(ServerHelloDone::handshakeProducer, $new($ServerHelloDone$ServerHelloDoneProducer));
}

ServerHelloDone::ServerHelloDone() {
}

$Class* ServerHelloDone::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(ServerHelloDone, handshakeConsumer)},
		{"handshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ServerHelloDone, handshakeProducer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ServerHelloDone, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ServerHelloDone$ServerHelloDoneConsumer", "sun.security.ssl.ServerHelloDone", "ServerHelloDoneConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ServerHelloDone$ServerHelloDoneProducer", "sun.security.ssl.ServerHelloDone", "ServerHelloDoneProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ServerHelloDone$ServerHelloDoneMessage", "sun.security.ssl.ServerHelloDone", "ServerHelloDoneMessage", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ServerHelloDone",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.ServerHelloDone$ServerHelloDoneConsumer,sun.security.ssl.ServerHelloDone$ServerHelloDoneProducer,sun.security.ssl.ServerHelloDone$ServerHelloDoneMessage"
	};
	$loadClass(ServerHelloDone, name, initialize, &classInfo$$, ServerHelloDone::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ServerHelloDone);
	});
	return class$;
}

$Class* ServerHelloDone::class$ = nullptr;

		} // ssl
	} // security
} // sun