#include <sun/security/ssl/KeyUpdate$KeyUpdateMessage.h>
#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
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
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $KeyUpdate$KeyUpdateRequest = ::sun::security::ssl::KeyUpdate$KeyUpdateRequest;
using $PostHandshakeContext = ::sun::security::ssl::PostHandshakeContext;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;

namespace sun {
	namespace security {
		namespace ssl {

void KeyUpdate$KeyUpdateMessage::init$($PostHandshakeContext* context, $KeyUpdate$KeyUpdateRequest* status) {
	$SSLHandshake$HandshakeMessage::init$(context);
	$set(this, status, status);
}

void KeyUpdate$KeyUpdateMessage::init$($PostHandshakeContext* context, $ByteBuffer* m) {
	$useLocalObjectStack();
	$SSLHandshake$HandshakeMessage::init$(context);
	if ($nc(m)->remaining() != 1) {
		$init($Alert);
		$throw($($nc($nc(context)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, $$str({"KeyUpdate has an unexpected length of "_s, $$str(m->remaining())}))));
	}
	int8_t request = m->get();
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
	$useLocalObjectStack();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"KeyUpdate\": \'{\'\n  \"request_update\": {0}\n\'}\'"_s, $Locale::ENGLISH));
	$var($ObjectArray, messageFields, $new($ObjectArray, {this->status->name$}));
	return messageFormat->format(messageFields);
}

KeyUpdate$KeyUpdateMessage::KeyUpdate$KeyUpdateMessage() {
}

$Class* KeyUpdate$KeyUpdateMessage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"status", "Lsun/security/ssl/KeyUpdate$KeyUpdateRequest;", nullptr, $PRIVATE | $FINAL, $field(KeyUpdate$KeyUpdateMessage, status)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/PostHandshakeContext;Lsun/security/ssl/KeyUpdate$KeyUpdateRequest;)V", nullptr, 0, $method(KeyUpdate$KeyUpdateMessage, init$, void, $PostHandshakeContext*, $KeyUpdate$KeyUpdateRequest*)},
		{"<init>", "(Lsun/security/ssl/PostHandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(KeyUpdate$KeyUpdateMessage, init$, void, $PostHandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC, $virtualMethod(KeyUpdate$KeyUpdateMessage, handshakeType, $SSLHandshake*)},
		{"messageLength", "()I", nullptr, $PUBLIC, $virtualMethod(KeyUpdate$KeyUpdateMessage, messageLength, int32_t)},
		{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $PUBLIC, $virtualMethod(KeyUpdate$KeyUpdateMessage, send, void, $HandshakeOutStream*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KeyUpdate$KeyUpdateMessage, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.KeyUpdate$KeyUpdateMessage", "sun.security.ssl.KeyUpdate", "KeyUpdateMessage", $STATIC | $FINAL},
		{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.KeyUpdate$KeyUpdateMessage",
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
		"sun.security.ssl.KeyUpdate"
	};
	$loadClass(KeyUpdate$KeyUpdateMessage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyUpdate$KeyUpdateMessage);
	});
	return class$;
}

$Class* KeyUpdate$KeyUpdateMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun