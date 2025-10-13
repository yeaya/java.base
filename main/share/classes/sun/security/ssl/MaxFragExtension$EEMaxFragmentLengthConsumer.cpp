#include <sun/security/ssl/MaxFragExtension$EEMaxFragmentLengthConsumer.h>

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
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
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
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $MaxFragExtension = ::sun::security::ssl::MaxFragExtension;
using $MaxFragExtension$MaxFragLenEnum = ::sun::security::ssl::MaxFragExtension$MaxFragLenEnum;
using $MaxFragExtension$MaxFragLenSpec = ::sun::security::ssl::MaxFragExtension$MaxFragLenSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _MaxFragExtension$EEMaxFragmentLengthConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MaxFragExtension$EEMaxFragmentLengthConsumer::*)()>(&MaxFragExtension$EEMaxFragmentLengthConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _MaxFragExtension$EEMaxFragmentLengthConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthConsumer", "sun.security.ssl.MaxFragExtension", "EEMaxFragmentLengthConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MaxFragExtension$EEMaxFragmentLengthConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_MaxFragExtension$EEMaxFragmentLengthConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_MaxFragExtension$EEMaxFragmentLengthConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.MaxFragExtension"
};

$Object* allocate$MaxFragExtension$EEMaxFragmentLengthConsumer($Class* clazz) {
	return $of($alloc(MaxFragExtension$EEMaxFragmentLengthConsumer));
}

void MaxFragExtension$EEMaxFragmentLengthConsumer::init$() {
}

void MaxFragExtension$EEMaxFragmentLengthConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
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
	chc->maxFragmentLength = $nc(mfle)->fragmentSize;
	$nc(chc->handshakeExtensions)->put($SSLExtension::EE_MAX_FRAGMENT_LENGTH, spec);
}

MaxFragExtension$EEMaxFragmentLengthConsumer::MaxFragExtension$EEMaxFragmentLengthConsumer() {
}

$Class* MaxFragExtension$EEMaxFragmentLengthConsumer::load$($String* name, bool initialize) {
	$loadClass(MaxFragExtension$EEMaxFragmentLengthConsumer, name, initialize, &_MaxFragExtension$EEMaxFragmentLengthConsumer_ClassInfo_, allocate$MaxFragExtension$EEMaxFragmentLengthConsumer);
	return class$;
}

$Class* MaxFragExtension$EEMaxFragmentLengthConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun