#include <sun/security/ssl/ChangeCipherSpec$T13ChangeCipherSpecConsumer.h>

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ChangeCipherSpec = ::sun::security::ssl::ChangeCipherSpec;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ContentType = ::sun::security::ssl::ContentType;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ChangeCipherSpec$T13ChangeCipherSpecConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ChangeCipherSpec$T13ChangeCipherSpecConsumer::*)()>(&ChangeCipherSpec$T13ChangeCipherSpecConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ChangeCipherSpec$T13ChangeCipherSpecConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ChangeCipherSpec$T13ChangeCipherSpecConsumer", "sun.security.ssl.ChangeCipherSpec", "T13ChangeCipherSpecConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ChangeCipherSpec$T13ChangeCipherSpecConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ChangeCipherSpec$T13ChangeCipherSpecConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_ChangeCipherSpec$T13ChangeCipherSpecConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ChangeCipherSpec$T13ChangeCipherSpecConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ChangeCipherSpec"
};

$Object* allocate$ChangeCipherSpec$T13ChangeCipherSpecConsumer($Class* clazz) {
	return $of($alloc(ChangeCipherSpec$T13ChangeCipherSpecConsumer));
}

void ChangeCipherSpec$T13ChangeCipherSpecConsumer::init$() {
}

void ChangeCipherSpec$T13ChangeCipherSpecConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	$var($TransportContext, tc, $cast($TransportContext, context));
	$init($ContentType);
	$nc($nc(tc)->consumers)->remove($($Byte::valueOf($ContentType::CHANGE_CIPHER_SPEC->id)));
	bool var$0 = $nc(message)->remaining() != 1;
	if (var$0 || $nc(message)->get() != 1) {
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
	$loadClass(ChangeCipherSpec$T13ChangeCipherSpecConsumer, name, initialize, &_ChangeCipherSpec$T13ChangeCipherSpecConsumer_ClassInfo_, allocate$ChangeCipherSpec$T13ChangeCipherSpecConsumer);
	return class$;
}

$Class* ChangeCipherSpec$T13ChangeCipherSpecConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun