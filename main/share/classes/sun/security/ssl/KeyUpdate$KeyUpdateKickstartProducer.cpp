#include <sun/security/ssl/KeyUpdate$KeyUpdateKickstartProducer.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/KeyUpdate$KeyUpdateMessage.h>
#include <sun/security/ssl/KeyUpdate$KeyUpdateRequest.h>
#include <sun/security/ssl/KeyUpdate.h>
#include <sun/security/ssl/PostHandshakeContext.h>
#include <jcpp.h>

#undef REQUESTED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $KeyUpdate = ::sun::security::ssl::KeyUpdate;
using $KeyUpdate$KeyUpdateMessage = ::sun::security::ssl::KeyUpdate$KeyUpdateMessage;
using $KeyUpdate$KeyUpdateRequest = ::sun::security::ssl::KeyUpdate$KeyUpdateRequest;
using $PostHandshakeContext = ::sun::security::ssl::PostHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void KeyUpdate$KeyUpdateKickstartProducer::init$() {
}

$bytes* KeyUpdate$KeyUpdateKickstartProducer::produce($ConnectionContext* context) {
	$useLocalObjectStack();
	$var($PostHandshakeContext, hc, $cast($PostHandshakeContext, context));
	$init($KeyUpdate);
	$init($KeyUpdate$KeyUpdateRequest);
	return $nc($KeyUpdate::handshakeProducer)->produce(context, $$new($KeyUpdate$KeyUpdateMessage, hc, $KeyUpdate$KeyUpdateRequest::REQUESTED));
}

KeyUpdate$KeyUpdateKickstartProducer::KeyUpdate$KeyUpdateKickstartProducer() {
}

$Class* KeyUpdate$KeyUpdateKickstartProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(KeyUpdate$KeyUpdateKickstartProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;)[B", nullptr, $PUBLIC, $virtualMethod(KeyUpdate$KeyUpdateKickstartProducer, produce, $bytes*, $ConnectionContext*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.KeyUpdate$KeyUpdateKickstartProducer", "sun.security.ssl.KeyUpdate", "KeyUpdateKickstartProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.KeyUpdate$KeyUpdateKickstartProducer",
		"java.lang.Object",
		"sun.security.ssl.SSLProducer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.KeyUpdate"
	};
	$loadClass(KeyUpdate$KeyUpdateKickstartProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyUpdate$KeyUpdateKickstartProducer);
	});
	return class$;
}

$Class* KeyUpdate$KeyUpdateKickstartProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun