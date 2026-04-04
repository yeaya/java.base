#include <sun/security/ssl/CertificateRequest$T13CertificateRequestMessage.h>
#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CertificateRequest.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef CERTIFICATE_REQUEST
#undef ENGLISH
#undef ILLEGAL_PARAMETER

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $Record = ::sun::security::ssl::Record;
using $SSLExtensions = ::sun::security::ssl::SSLExtensions;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

void CertificateRequest$T13CertificateRequestMessage::init$($HandshakeContext* handshakeContext) {
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	$set(this, requestContext, $new($bytes, 0));
	$set(this, extensions, $new($SSLExtensions, this));
}

void CertificateRequest$T13CertificateRequestMessage::init$($HandshakeContext* handshakeContext, $ByteBuffer* m) {
	$useLocalObjectStack();
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	if ($nc(m)->remaining() < 5) {
		$init($Alert);
		$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid CertificateRequest handshake message: no sufficient data"_s)));
	}
	$set(this, requestContext, $Record::getBytes8(m));
	if (m->remaining() < 4) {
		$init($Alert);
		$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid CertificateRequest handshake message: no sufficient extensions data"_s)));
	}
	$init($SSLHandshake);
	$var($SSLExtensionArray, enabledExtensions, $nc($nc(handshakeContext)->sslConfig)->getEnabledExtensions($SSLHandshake::CERTIFICATE_REQUEST));
	$set(this, extensions, $new($SSLExtensions, this, m, enabledExtensions));
}

$SSLHandshake* CertificateRequest$T13CertificateRequestMessage::handshakeType() {
	$init($SSLHandshake);
	return $SSLHandshake::CERTIFICATE_REQUEST;
}

int32_t CertificateRequest$T13CertificateRequestMessage::messageLength() {
	return 1 + $nc(this->requestContext)->length + $nc(this->extensions)->length();
}

void CertificateRequest$T13CertificateRequestMessage::send($HandshakeOutStream* hos) {
	$nc(hos)->putBytes8(this->requestContext);
	$nc(this->extensions)->send(hos);
}

$String* CertificateRequest$T13CertificateRequestMessage::toString() {
	$useLocalObjectStack();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"CertificateRequest\": \'{\'\n  \"certificate_request_context\": \"{0}\",\n  \"extensions\": [\n{1}\n  ]\n\'}\'"_s, $Locale::ENGLISH));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($Utilities::toHexString(this->requestContext)),
		$($Utilities::indent($($Utilities::indent($($nc(this->extensions)->toString())))))
	}));
	return messageFormat->format(messageFields);
}

CertificateRequest$T13CertificateRequestMessage::CertificateRequest$T13CertificateRequestMessage() {
}

$Class* CertificateRequest$T13CertificateRequestMessage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"requestContext", "[B", nullptr, $PRIVATE | $FINAL, $field(CertificateRequest$T13CertificateRequestMessage, requestContext)},
		{"extensions", "Lsun/security/ssl/SSLExtensions;", nullptr, $PRIVATE | $FINAL, $field(CertificateRequest$T13CertificateRequestMessage, extensions)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/HandshakeContext;)V", nullptr, 0, $method(CertificateRequest$T13CertificateRequestMessage, init$, void, $HandshakeContext*), "java.io.IOException"},
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(CertificateRequest$T13CertificateRequestMessage, init$, void, $HandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, 0, $virtualMethod(CertificateRequest$T13CertificateRequestMessage, handshakeType, $SSLHandshake*)},
		{"messageLength", "()I", nullptr, 0, $virtualMethod(CertificateRequest$T13CertificateRequestMessage, messageLength, int32_t)},
		{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, 0, $virtualMethod(CertificateRequest$T13CertificateRequestMessage, send, void, $HandshakeOutStream*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertificateRequest$T13CertificateRequestMessage, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertificateRequest$T13CertificateRequestMessage", "sun.security.ssl.CertificateRequest", "T13CertificateRequestMessage", $STATIC | $FINAL},
		{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertificateRequest$T13CertificateRequestMessage",
		"sun.security.ssl.SSLHandshake$HandshakeMessage",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.CertificateRequest"
	};
	$loadClass(CertificateRequest$T13CertificateRequestMessage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateRequest$T13CertificateRequestMessage);
	});
	return class$;
}

$Class* CertificateRequest$T13CertificateRequestMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun