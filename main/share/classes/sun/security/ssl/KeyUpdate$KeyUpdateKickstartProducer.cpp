#include <sun/security/ssl/KeyUpdate$KeyUpdateKickstartProducer.h>

#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/KeyUpdate$KeyUpdateMessage.h>
#include <sun/security/ssl/KeyUpdate$KeyUpdateRequest.h>
#include <sun/security/ssl/KeyUpdate.h>
#include <sun/security/ssl/PostHandshakeContext.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <jcpp.h>

#undef REQUESTED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $KeyUpdate = ::sun::security::ssl::KeyUpdate;
using $KeyUpdate$KeyUpdateMessage = ::sun::security::ssl::KeyUpdate$KeyUpdateMessage;
using $KeyUpdate$KeyUpdateRequest = ::sun::security::ssl::KeyUpdate$KeyUpdateRequest;
using $PostHandshakeContext = ::sun::security::ssl::PostHandshakeContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _KeyUpdate$KeyUpdateKickstartProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(KeyUpdate$KeyUpdateKickstartProducer, init$, void)},
	{"produce", "(Lsun/security/ssl/ConnectionContext;)[B", nullptr, $PUBLIC, $virtualMethod(KeyUpdate$KeyUpdateKickstartProducer, produce, $bytes*, $ConnectionContext*), "java.io.IOException"},
	{}
};

$InnerClassInfo _KeyUpdate$KeyUpdateKickstartProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyUpdate$KeyUpdateKickstartProducer", "sun.security.ssl.KeyUpdate", "KeyUpdateKickstartProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyUpdate$KeyUpdateKickstartProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyUpdate$KeyUpdateKickstartProducer",
	"java.lang.Object",
	"sun.security.ssl.SSLProducer",
	nullptr,
	_KeyUpdate$KeyUpdateKickstartProducer_MethodInfo_,
	nullptr,
	nullptr,
	_KeyUpdate$KeyUpdateKickstartProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyUpdate"
};

$Object* allocate$KeyUpdate$KeyUpdateKickstartProducer($Class* clazz) {
	return $of($alloc(KeyUpdate$KeyUpdateKickstartProducer));
}

void KeyUpdate$KeyUpdateKickstartProducer::init$() {
}

$bytes* KeyUpdate$KeyUpdateKickstartProducer::produce($ConnectionContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($PostHandshakeContext, hc, $cast($PostHandshakeContext, context));
	$init($KeyUpdate);
	$init($KeyUpdate$KeyUpdateRequest);
	return $nc($KeyUpdate::handshakeProducer)->produce(context, $$new($KeyUpdate$KeyUpdateMessage, hc, $KeyUpdate$KeyUpdateRequest::REQUESTED));
}

KeyUpdate$KeyUpdateKickstartProducer::KeyUpdate$KeyUpdateKickstartProducer() {
}

$Class* KeyUpdate$KeyUpdateKickstartProducer::load$($String* name, bool initialize) {
	$loadClass(KeyUpdate$KeyUpdateKickstartProducer, name, initialize, &_KeyUpdate$KeyUpdateKickstartProducer_ClassInfo_, allocate$KeyUpdate$KeyUpdateKickstartProducer);
	return class$;
}

$Class* KeyUpdate$KeyUpdateKickstartProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun