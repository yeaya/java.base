#include <sun/security/ssl/EncryptedExtensions$EncryptedExtensionsMessage.h>

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
#include <sun/security/ssl/EncryptedExtensions.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef ENCRYPTED_EXTENSIONS
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
using $EncryptedExtensions = ::sun::security::ssl::EncryptedExtensions;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
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

$FieldInfo _EncryptedExtensions$EncryptedExtensionsMessage_FieldInfo_[] = {
	{"extensions", "Lsun/security/ssl/SSLExtensions;", nullptr, $PRIVATE | $FINAL, $field(EncryptedExtensions$EncryptedExtensionsMessage, extensions)},
	{}
};

$MethodInfo _EncryptedExtensions$EncryptedExtensionsMessage_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;)V", nullptr, 0, $method(static_cast<void(EncryptedExtensions$EncryptedExtensionsMessage::*)($HandshakeContext*)>(&EncryptedExtensions$EncryptedExtensionsMessage::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(EncryptedExtensions$EncryptedExtensionsMessage::*)($HandshakeContext*,$ByteBuffer*)>(&EncryptedExtensions$EncryptedExtensionsMessage::init$)), "java.io.IOException"},
	{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, 0},
	{"messageLength", "()I", nullptr, 0},
	{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _EncryptedExtensions$EncryptedExtensionsMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsMessage", "sun.security.ssl.EncryptedExtensions", "EncryptedExtensionsMessage", $STATIC | $FINAL},
	{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _EncryptedExtensions$EncryptedExtensionsMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsMessage",
	"sun.security.ssl.SSLHandshake$HandshakeMessage",
	nullptr,
	_EncryptedExtensions$EncryptedExtensionsMessage_FieldInfo_,
	_EncryptedExtensions$EncryptedExtensionsMessage_MethodInfo_,
	nullptr,
	nullptr,
	_EncryptedExtensions$EncryptedExtensionsMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.EncryptedExtensions"
};

$Object* allocate$EncryptedExtensions$EncryptedExtensionsMessage($Class* clazz) {
	return $of($alloc(EncryptedExtensions$EncryptedExtensionsMessage));
}

void EncryptedExtensions$EncryptedExtensionsMessage::init$($HandshakeContext* handshakeContext) {
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	$set(this, extensions, $new($SSLExtensions, this));
}

void EncryptedExtensions$EncryptedExtensionsMessage::init$($HandshakeContext* handshakeContext, $ByteBuffer* m) {
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	if ($nc(m)->remaining() < 2) {
		$init($Alert);
		$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid EncryptedExtensions handshake message: no sufficient data"_s)));
	}
	$init($SSLHandshake);
	$var($SSLExtensionArray, encryptedExtensions, $nc($nc(handshakeContext)->sslConfig)->getEnabledExtensions($SSLHandshake::ENCRYPTED_EXTENSIONS));
	$set(this, extensions, $new($SSLExtensions, this, m, encryptedExtensions));
}

$SSLHandshake* EncryptedExtensions$EncryptedExtensionsMessage::handshakeType() {
	$init($SSLHandshake);
	return $SSLHandshake::ENCRYPTED_EXTENSIONS;
}

int32_t EncryptedExtensions$EncryptedExtensionsMessage::messageLength() {
	int32_t extLen = $nc(this->extensions)->length();
	if (extLen == 0) {
		extLen = 2;
	}
	return extLen;
}

void EncryptedExtensions$EncryptedExtensionsMessage::send($HandshakeOutStream* hos) {
	if ($nc(this->extensions)->length() == 0) {
		$nc(hos)->putInt16(0);
	} else {
		$nc(this->extensions)->send(hos);
	}
}

$String* EncryptedExtensions$EncryptedExtensionsMessage::toString() {
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"EncryptedExtensions\": [\n{0}\n]"_s, $Locale::ENGLISH));
	$var($ObjectArray, messageFields, $new($ObjectArray, {$($of($Utilities::indent($($nc(this->extensions)->toString()))))}));
	return messageFormat->format(messageFields);
}

EncryptedExtensions$EncryptedExtensionsMessage::EncryptedExtensions$EncryptedExtensionsMessage() {
}

$Class* EncryptedExtensions$EncryptedExtensionsMessage::load$($String* name, bool initialize) {
	$loadClass(EncryptedExtensions$EncryptedExtensionsMessage, name, initialize, &_EncryptedExtensions$EncryptedExtensionsMessage_ClassInfo_, allocate$EncryptedExtensions$EncryptedExtensionsMessage);
	return class$;
}

$Class* EncryptedExtensions$EncryptedExtensionsMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun