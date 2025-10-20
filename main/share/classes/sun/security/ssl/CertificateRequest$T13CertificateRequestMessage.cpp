#include <sun/security/ssl/CertificateRequest$T13CertificateRequestMessage.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $CertificateRequest = ::sun::security::ssl::CertificateRequest;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $Record = ::sun::security::ssl::Record;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtensions = ::sun::security::ssl::SSLExtensions;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CertificateRequest$T13CertificateRequestMessage_FieldInfo_[] = {
	{"requestContext", "[B", nullptr, $PRIVATE | $FINAL, $field(CertificateRequest$T13CertificateRequestMessage, requestContext)},
	{"extensions", "Lsun/security/ssl/SSLExtensions;", nullptr, $PRIVATE | $FINAL, $field(CertificateRequest$T13CertificateRequestMessage, extensions)},
	{}
};

$MethodInfo _CertificateRequest$T13CertificateRequestMessage_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;)V", nullptr, 0, $method(static_cast<void(CertificateRequest$T13CertificateRequestMessage::*)($HandshakeContext*)>(&CertificateRequest$T13CertificateRequestMessage::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(CertificateRequest$T13CertificateRequestMessage::*)($HandshakeContext*,$ByteBuffer*)>(&CertificateRequest$T13CertificateRequestMessage::init$)), "java.io.IOException"},
	{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, 0},
	{"messageLength", "()I", nullptr, 0},
	{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CertificateRequest$T13CertificateRequestMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateRequest$T13CertificateRequestMessage", "sun.security.ssl.CertificateRequest", "T13CertificateRequestMessage", $STATIC | $FINAL},
	{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CertificateRequest$T13CertificateRequestMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateRequest$T13CertificateRequestMessage",
	"sun.security.ssl.SSLHandshake$HandshakeMessage",
	nullptr,
	_CertificateRequest$T13CertificateRequestMessage_FieldInfo_,
	_CertificateRequest$T13CertificateRequestMessage_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateRequest$T13CertificateRequestMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateRequest"
};

$Object* allocate$CertificateRequest$T13CertificateRequestMessage($Class* clazz) {
	return $of($alloc(CertificateRequest$T13CertificateRequestMessage));
}

void CertificateRequest$T13CertificateRequestMessage::init$($HandshakeContext* handshakeContext) {
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	$set(this, requestContext, $new($bytes, 0));
	$set(this, extensions, $new($SSLExtensions, this));
}

void CertificateRequest$T13CertificateRequestMessage::init$($HandshakeContext* handshakeContext, $ByteBuffer* m) {
	$useLocalCurrentObjectStackCache();
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	if ($nc(m)->remaining() < 5) {
		$init($Alert);
		$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid CertificateRequest handshake message: no sufficient data"_s)));
	}
	$set(this, requestContext, $Record::getBytes8(m));
	if ($nc(m)->remaining() < 4) {
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
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"CertificateRequest\": \'{\'\n  \"certificate_request_context\": \"{0}\",\n  \"extensions\": [\n{1}\n  ]\n\'}\'"_s, $Locale::ENGLISH));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($of($Utilities::toHexString(this->requestContext))),
		$($of($Utilities::indent($($Utilities::indent($($nc(this->extensions)->toString()))))))
	}));
	return messageFormat->format(messageFields);
}

CertificateRequest$T13CertificateRequestMessage::CertificateRequest$T13CertificateRequestMessage() {
}

$Class* CertificateRequest$T13CertificateRequestMessage::load$($String* name, bool initialize) {
	$loadClass(CertificateRequest$T13CertificateRequestMessage, name, initialize, &_CertificateRequest$T13CertificateRequestMessage_ClassInfo_, allocate$CertificateRequest$T13CertificateRequestMessage);
	return class$;
}

$Class* CertificateRequest$T13CertificateRequestMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun