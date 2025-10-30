#include <sun/security/ssl/ServerNameExtension$SHServerNameProducer.h>

#include <java/util/Map.h>
#include <javax/net/ssl/SNIServerName.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/ServerNameExtension$CHServerNamesSpec.h>
#include <sun/security/ssl/ServerNameExtension$SHServerNamesSpec.h>
#include <sun/security/ssl/ServerNameExtension.h>
#include <jcpp.h>

#undef CH_SERVER_NAME
#undef DEFAULT
#undef SH_SERVER_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $SNIServerName = ::javax::net::ssl::SNIServerName;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $ServerNameExtension = ::sun::security::ssl::ServerNameExtension;
using $ServerNameExtension$CHServerNamesSpec = ::sun::security::ssl::ServerNameExtension$CHServerNamesSpec;
using $ServerNameExtension$SHServerNamesSpec = ::sun::security::ssl::ServerNameExtension$SHServerNamesSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ServerNameExtension$SHServerNameProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerNameExtension$SHServerNameProducer::*)()>(&ServerNameExtension$SHServerNameProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ServerNameExtension$SHServerNameProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerNameExtension$SHServerNameProducer", "sun.security.ssl.ServerNameExtension", "SHServerNameProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ServerNameExtension$SHServerNameProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerNameExtension$SHServerNameProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_ServerNameExtension$SHServerNameProducer_MethodInfo_,
	nullptr,
	nullptr,
	_ServerNameExtension$SHServerNameProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerNameExtension"
};

$Object* allocate$ServerNameExtension$SHServerNameProducer($Class* clazz) {
	return $of($alloc(ServerNameExtension$SHServerNameProducer));
}

void ServerNameExtension$SHServerNameProducer::init$() {
}

$bytes* ServerNameExtension$SHServerNameProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	$var($ServerNameExtension$CHServerNamesSpec, spec, $cast($ServerNameExtension$CHServerNamesSpec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::CH_SERVER_NAME)));
	if (spec == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::finest($$str({"Ignore unavailable extension: "_s, $SSLExtension::SH_SERVER_NAME->name$}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if (shc->isResumption || shc->negotiatedServerName == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::finest("No expected server name indication response"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$init($ServerNameExtension$SHServerNamesSpec);
	$nc(shc->handshakeExtensions)->put($SSLExtension::SH_SERVER_NAME, $ServerNameExtension$SHServerNamesSpec::DEFAULT);
	return ($new($bytes, 0));
}

ServerNameExtension$SHServerNameProducer::ServerNameExtension$SHServerNameProducer() {
}

$Class* ServerNameExtension$SHServerNameProducer::load$($String* name, bool initialize) {
	$loadClass(ServerNameExtension$SHServerNameProducer, name, initialize, &_ServerNameExtension$SHServerNameProducer_ClassInfo_, allocate$ServerNameExtension$SHServerNameProducer);
	return class$;
}

$Class* ServerNameExtension$SHServerNameProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun