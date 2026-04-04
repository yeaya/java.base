#include <sun/security/ssl/ChangeCipherSpec$T13ChangeCipherSpecConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ChangeCipherSpec.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CHANGE_CIPHER_SPEC
#undef UNEXPECTED_MESSAGE

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ContentType = ::sun::security::ssl::ContentType;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

void ChangeCipherSpec$T13ChangeCipherSpecConsumer::init$() {
}

void ChangeCipherSpec$T13ChangeCipherSpecConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalObjectStack();
	$var($TransportContext, tc, $cast($TransportContext, context));
	$init($ContentType);
	$nc($nc(tc)->consumers)->remove($($Byte::valueOf($ContentType::CHANGE_CIPHER_SPEC->id)));
	bool var$0 = $nc(message)->remaining() != 1;
	if (var$0 || message->get() != 1) {
		$init($Alert);
		$throw($(tc->fatal($Alert::UNEXPECTED_MESSAGE, "Malformed or unexpected ChangeCipherSpec message"_s)));
	}
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming ChangeCipherSpec message"_s, $$new($ObjectArray, 0));
	}
}

ChangeCipherSpec$T13ChangeCipherSpecConsumer::ChangeCipherSpec$T13ChangeCipherSpecConsumer() {
}

$Class* ChangeCipherSpec$T13ChangeCipherSpecConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ChangeCipherSpec$T13ChangeCipherSpecConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(ChangeCipherSpec$T13ChangeCipherSpecConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ChangeCipherSpec$T13ChangeCipherSpecConsumer", "sun.security.ssl.ChangeCipherSpec", "T13ChangeCipherSpecConsumer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ChangeCipherSpec$T13ChangeCipherSpecConsumer",
		"java.lang.Object",
		"sun.security.ssl.SSLConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.ChangeCipherSpec"
	};
	$loadClass(ChangeCipherSpec$T13ChangeCipherSpecConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ChangeCipherSpec$T13ChangeCipherSpecConsumer);
	});
	return class$;
}

$Class* ChangeCipherSpec$T13ChangeCipherSpecConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun