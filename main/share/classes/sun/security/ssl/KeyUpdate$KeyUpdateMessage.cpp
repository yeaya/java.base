#include <sun/security/ssl/KeyUpdate$KeyUpdateMessage.h>

#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/KeyUpdate$KeyUpdateRequest.h>
#include <sun/security/ssl/KeyUpdate.h>
#include <sun/security/ssl/PostHandshakeContext.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef ENGLISH
#undef ILLEGAL_PARAMETER
#undef KEY_UPDATE

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
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $KeyUpdate = ::sun::security::ssl::KeyUpdate;
using $KeyUpdate$KeyUpdateRequest = ::sun::security::ssl::KeyUpdate$KeyUpdateRequest;
using $PostHandshakeContext = ::sun::security::ssl::PostHandshakeContext;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _KeyUpdate$KeyUpdateMessage_FieldInfo_[] = {
	{"status", "Lsun/security/ssl/KeyUpdate$KeyUpdateRequest;", nullptr, $PRIVATE | $FINAL, $field(KeyUpdate$KeyUpdateMessage, status)},
	{}
};

$MethodInfo _KeyUpdate$KeyUpdateMessage_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/PostHandshakeContext;Lsun/security/ssl/KeyUpdate$KeyUpdateRequest;)V", nullptr, 0, $method(static_cast<void(KeyUpdate$KeyUpdateMessage::*)($PostHandshakeContext*,$KeyUpdate$KeyUpdateRequest*)>(&KeyUpdate$KeyUpdateMessage::init$))},
	{"<init>", "(Lsun/security/ssl/PostHandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(KeyUpdate$KeyUpdateMessage::*)($PostHandshakeContext*,$ByteBuffer*)>(&KeyUpdate$KeyUpdateMessage::init$)), "java.io.IOException"},
	{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC},
	{"messageLength", "()I", nullptr, $PUBLIC},
	{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _KeyUpdate$KeyUpdateMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyUpdate$KeyUpdateMessage", "sun.security.ssl.KeyUpdate", "KeyUpdateMessage", $STATIC | $FINAL},
	{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _KeyUpdate$KeyUpdateMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyUpdate$KeyUpdateMessage",
	"sun.security.ssl.SSLHandshake$HandshakeMessage",
	nullptr,
	_KeyUpdate$KeyUpdateMessage_FieldInfo_,
	_KeyUpdate$KeyUpdateMessage_MethodInfo_,
	nullptr,
	nullptr,
	_KeyUpdate$KeyUpdateMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyUpdate"
};

$Object* allocate$KeyUpdate$KeyUpdateMessage($Class* clazz) {
	return $of($alloc(KeyUpdate$KeyUpdateMessage));
}

void KeyUpdate$KeyUpdateMessage::init$($PostHandshakeContext* context, $KeyUpdate$KeyUpdateRequest* status) {
	$SSLHandshake$HandshakeMessage::init$(context);
	$set(this, status, status);
}

void KeyUpdate$KeyUpdateMessage::init$($PostHandshakeContext* context, $ByteBuffer* m) {
	$useLocalCurrentObjectStackCache();
	$SSLHandshake$HandshakeMessage::init$(context);
	if ($nc(m)->remaining() != 1) {
		$init($Alert);
		$throw($($nc($nc(context)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, $$str({"KeyUpdate has an unexpected length of "_s, $$str(m->remaining())}))));
	}
	int8_t request = $nc(m)->get();
	$set(this, status, $KeyUpdate$KeyUpdateRequest::valueOf(request));
	if (this->status == nullptr) {
		$init($Alert);
		$throw($($nc($nc(context)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, $$str({"Invalid KeyUpdate message value: "_s, $($KeyUpdate$KeyUpdateRequest::nameOf(request))}))));
	}
}

$SSLHandshake* KeyUpdate$KeyUpdateMessage::handshakeType() {
	$init($SSLHandshake);
	return $SSLHandshake::KEY_UPDATE;
}

int32_t KeyUpdate$KeyUpdateMessage::messageLength() {
	return 1;
}

void KeyUpdate$KeyUpdateMessage::send($HandshakeOutStream* s) {
	$nc(s)->putInt8(this->status->id);
}

$String* KeyUpdate$KeyUpdateMessage::toString() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"KeyUpdate\": \'{\'\n  \"request_update\": {0}\n\'}\'"_s, $Locale::ENGLISH));
	$var($ObjectArray, messageFields, $new($ObjectArray, {$of(this->status->name$)}));
	return messageFormat->format(messageFields);
}

KeyUpdate$KeyUpdateMessage::KeyUpdate$KeyUpdateMessage() {
}

$Class* KeyUpdate$KeyUpdateMessage::load$($String* name, bool initialize) {
	$loadClass(KeyUpdate$KeyUpdateMessage, name, initialize, &_KeyUpdate$KeyUpdateMessage_ClassInfo_, allocate$KeyUpdate$KeyUpdateMessage);
	return class$;
}

$Class* KeyUpdate$KeyUpdateMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun