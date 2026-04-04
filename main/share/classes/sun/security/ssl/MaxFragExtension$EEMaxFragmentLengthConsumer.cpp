#include <sun/security/ssl/MaxFragExtension$EEMaxFragmentLengthConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/MaxFragExtension$MaxFragLenEnum.h>
#include <sun/security/ssl/MaxFragExtension$MaxFragLenSpec.h>
#include <sun/security/ssl/MaxFragExtension.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_MAX_FRAGMENT_LENGTH
#undef EE_MAX_FRAGMENT_LENGTH
#undef ILLEGAL_PARAMETER
#undef UNEXPECTED_MESSAGE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $MaxFragExtension$MaxFragLenEnum = ::sun::security::ssl::MaxFragExtension$MaxFragLenEnum;
using $MaxFragExtension$MaxFragLenSpec = ::sun::security::ssl::MaxFragExtension$MaxFragLenSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;

namespace sun {
	namespace security {
		namespace ssl {

void MaxFragExtension$EEMaxFragmentLengthConsumer::init$() {
}

void MaxFragExtension$EEMaxFragmentLengthConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($MaxFragExtension$MaxFragLenSpec, requestedSpec, $cast($MaxFragExtension$MaxFragLenSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::CH_MAX_FRAGMENT_LENGTH)));
	if (requestedSpec == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected max_fragment_length extension in ServerHello"_s)));
	}
	$var($MaxFragExtension$MaxFragLenSpec, spec, $new($MaxFragExtension$MaxFragLenSpec, chc, buffer));
	if (spec->id != $nc(requestedSpec)->id) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "The maximum fragment length response is not requested"_s)));
	}
	$MaxFragExtension$MaxFragLenEnum* mfle = $MaxFragExtension$MaxFragLenEnum::valueOf(spec->id);
	if (mfle == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "the requested maximum fragment length is other than the allowed values"_s)));
	}
	chc->maxFragmentLength = mfle->fragmentSize;
	chc->handshakeExtensions->put($SSLExtension::EE_MAX_FRAGMENT_LENGTH, spec);
}

MaxFragExtension$EEMaxFragmentLengthConsumer::MaxFragExtension$EEMaxFragmentLengthConsumer() {
}

$Class* MaxFragExtension$EEMaxFragmentLengthConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MaxFragExtension$EEMaxFragmentLengthConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(MaxFragExtension$EEMaxFragmentLengthConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthConsumer", "sun.security.ssl.MaxFragExtension", "EEMaxFragmentLengthConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthConsumer",
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
		"sun.security.ssl.MaxFragExtension"
	};
	$loadClass(MaxFragExtension$EEMaxFragmentLengthConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MaxFragExtension$EEMaxFragmentLengthConsumer);
	});
	return class$;
}

$Class* MaxFragExtension$EEMaxFragmentLengthConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun