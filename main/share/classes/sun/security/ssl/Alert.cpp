#include <sun/security/ssl/Alert.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLHandshakeException.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <sun/security/ssl/Alert$AlertConsumer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

#undef ACCESS_DENIED
#undef BAD_CERTIFICATE
#undef BAD_CERT_HASH_VALUE
#undef BAD_CERT_STATUS_RESPONSE
#undef BAD_RECORD_MAC
#undef CERTIFICATE_EXPIRED
#undef CERTIFICATE_REQUIRED
#undef CERTIFICATE_REVOKED
#undef CERTIFICATE_UNKNOWN
#undef CERT_UNOBTAINABLE
#undef CLOSE_NOTIFY
#undef DECODE_ERROR
#undef DECOMPRESSION_FAILURE
#undef DECRYPTION_FAILED
#undef DECRYPT_ERROR
#undef EXPORT_RESTRICTION
#undef HANDSHAKE_FAILURE
#undef ILLEGAL_PARAMETER
#undef INAPPROPRIATE_FALLBACK
#undef INSUFFICIENT_SECURITY
#undef INTERNAL_ERROR
#undef MISSING_EXTENSION
#undef NO_APPLICATION_PROTOCOL
#undef NO_CERTIFICATE
#undef NO_RENEGOTIATION
#undef PROTOCOL_VERSION
#undef RECORD_OVERFLOW
#undef UNEXPECTED_MESSAGE
#undef UNKNOWN_CA
#undef UNKNOWN_PSK_IDENTITY
#undef UNRECOGNIZED_NAME
#undef UNSUPPORTED_CERTIFICATE
#undef UNSUPPORTED_EXTENSION
#undef USER_CANCELED

using $AlertArray = $Array<::sun::security::ssl::Alert>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLException = ::javax::net::ssl::SSLException;
using $SSLHandshakeException = ::javax::net::ssl::SSLHandshakeException;
using $SSLProtocolException = ::javax::net::ssl::SSLProtocolException;
using $Alert$AlertConsumer = ::sun::security::ssl::Alert$AlertConsumer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Alert_FieldInfo_[] = {
	{"CLOSE_NOTIFY", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, CLOSE_NOTIFY)},
	{"UNEXPECTED_MESSAGE", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, UNEXPECTED_MESSAGE)},
	{"BAD_RECORD_MAC", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, BAD_RECORD_MAC)},
	{"DECRYPTION_FAILED", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, DECRYPTION_FAILED)},
	{"RECORD_OVERFLOW", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, RECORD_OVERFLOW)},
	{"DECOMPRESSION_FAILURE", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, DECOMPRESSION_FAILURE)},
	{"HANDSHAKE_FAILURE", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, HANDSHAKE_FAILURE)},
	{"NO_CERTIFICATE", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, NO_CERTIFICATE)},
	{"BAD_CERTIFICATE", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, BAD_CERTIFICATE)},
	{"UNSUPPORTED_CERTIFICATE", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, UNSUPPORTED_CERTIFICATE)},
	{"CERTIFICATE_REVOKED", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, CERTIFICATE_REVOKED)},
	{"CERTIFICATE_EXPIRED", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, CERTIFICATE_EXPIRED)},
	{"CERTIFICATE_UNKNOWN", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, CERTIFICATE_UNKNOWN)},
	{"ILLEGAL_PARAMETER", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, ILLEGAL_PARAMETER)},
	{"UNKNOWN_CA", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, UNKNOWN_CA)},
	{"ACCESS_DENIED", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, ACCESS_DENIED)},
	{"DECODE_ERROR", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, DECODE_ERROR)},
	{"DECRYPT_ERROR", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, DECRYPT_ERROR)},
	{"EXPORT_RESTRICTION", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, EXPORT_RESTRICTION)},
	{"PROTOCOL_VERSION", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, PROTOCOL_VERSION)},
	{"INSUFFICIENT_SECURITY", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, INSUFFICIENT_SECURITY)},
	{"INTERNAL_ERROR", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, INTERNAL_ERROR)},
	{"INAPPROPRIATE_FALLBACK", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, INAPPROPRIATE_FALLBACK)},
	{"USER_CANCELED", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, USER_CANCELED)},
	{"NO_RENEGOTIATION", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, NO_RENEGOTIATION)},
	{"MISSING_EXTENSION", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, MISSING_EXTENSION)},
	{"UNSUPPORTED_EXTENSION", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, UNSUPPORTED_EXTENSION)},
	{"CERT_UNOBTAINABLE", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, CERT_UNOBTAINABLE)},
	{"UNRECOGNIZED_NAME", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, UNRECOGNIZED_NAME)},
	{"BAD_CERT_STATUS_RESPONSE", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, BAD_CERT_STATUS_RESPONSE)},
	{"BAD_CERT_HASH_VALUE", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, BAD_CERT_HASH_VALUE)},
	{"UNKNOWN_PSK_IDENTITY", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, UNKNOWN_PSK_IDENTITY)},
	{"CERTIFICATE_REQUIRED", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, CERTIFICATE_REQUIRED)},
	{"NO_APPLICATION_PROTOCOL", "Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert, NO_APPLICATION_PROTOCOL)},
	{"$VALUES", "[Lsun/security/ssl/Alert;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Alert, $VALUES)},
	{"id", "B", nullptr, $FINAL, $field(Alert, id)},
	{"description", "Ljava/lang/String;", nullptr, $FINAL, $field(Alert, description)},
	{"handshakeOnly", "Z", nullptr, $FINAL, $field(Alert, handshakeOnly)},
	{"alertConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(Alert, alertConsumer)},
	{}
};

$MethodInfo _Alert_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/Alert;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$AlertArray*(*)()>(&Alert::$values))},
	{"<init>", "(Ljava/lang/String;IBLjava/lang/String;Z)V", "(BLjava/lang/String;Z)V", $PRIVATE, $method(static_cast<void(Alert::*)($String*,int32_t,int8_t,$String*,bool)>(&Alert::init$))},
	{"createSSLException", "(Ljava/lang/String;)Ljavax/net/ssl/SSLException;", nullptr, 0, $method(static_cast<$SSLException*(Alert::*)($String*)>(&Alert::createSSLException))},
	{"createSSLException", "(Ljava/lang/String;Ljava/lang/Throwable;)Ljavax/net/ssl/SSLException;", nullptr, 0, $method(static_cast<$SSLException*(Alert::*)($String*,$Throwable*)>(&Alert::createSSLException))},
	{"nameOf", "(B)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int8_t)>(&Alert::nameOf))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Alert*(*)($String*)>(&Alert::valueOf))},
	{"valueOf", "(B)Lsun/security/ssl/Alert;", nullptr, $STATIC, $method(static_cast<Alert*(*)(int8_t)>(&Alert::valueOf))},
	{"values", "()[Lsun/security/ssl/Alert;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AlertArray*(*)()>(&Alert::values))},
	{}
};

$InnerClassInfo _Alert_InnerClassesInfo_[] = {
	{"sun.security.ssl.Alert$AlertConsumer", "sun.security.ssl.Alert", "AlertConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Alert$AlertMessage", "sun.security.ssl.Alert", "AlertMessage", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Alert$Level", "sun.security.ssl.Alert", "Level", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Alert_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.Alert",
	"java.lang.Enum",
	nullptr,
	_Alert_FieldInfo_,
	_Alert_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/Alert;>;",
	nullptr,
	_Alert_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.Alert$AlertConsumer,sun.security.ssl.Alert$AlertMessage,sun.security.ssl.Alert$Level"
};

$Object* allocate$Alert($Class* clazz) {
	return $of($alloc(Alert));
}

Alert* Alert::CLOSE_NOTIFY = nullptr;
Alert* Alert::UNEXPECTED_MESSAGE = nullptr;
Alert* Alert::BAD_RECORD_MAC = nullptr;
Alert* Alert::DECRYPTION_FAILED = nullptr;
Alert* Alert::RECORD_OVERFLOW = nullptr;
Alert* Alert::DECOMPRESSION_FAILURE = nullptr;
Alert* Alert::HANDSHAKE_FAILURE = nullptr;
Alert* Alert::NO_CERTIFICATE = nullptr;
Alert* Alert::BAD_CERTIFICATE = nullptr;
Alert* Alert::UNSUPPORTED_CERTIFICATE = nullptr;
Alert* Alert::CERTIFICATE_REVOKED = nullptr;
Alert* Alert::CERTIFICATE_EXPIRED = nullptr;
Alert* Alert::CERTIFICATE_UNKNOWN = nullptr;
Alert* Alert::ILLEGAL_PARAMETER = nullptr;
Alert* Alert::UNKNOWN_CA = nullptr;
Alert* Alert::ACCESS_DENIED = nullptr;
Alert* Alert::DECODE_ERROR = nullptr;
Alert* Alert::DECRYPT_ERROR = nullptr;
Alert* Alert::EXPORT_RESTRICTION = nullptr;
Alert* Alert::PROTOCOL_VERSION = nullptr;
Alert* Alert::INSUFFICIENT_SECURITY = nullptr;
Alert* Alert::INTERNAL_ERROR = nullptr;
Alert* Alert::INAPPROPRIATE_FALLBACK = nullptr;
Alert* Alert::USER_CANCELED = nullptr;
Alert* Alert::NO_RENEGOTIATION = nullptr;
Alert* Alert::MISSING_EXTENSION = nullptr;
Alert* Alert::UNSUPPORTED_EXTENSION = nullptr;
Alert* Alert::CERT_UNOBTAINABLE = nullptr;
Alert* Alert::UNRECOGNIZED_NAME = nullptr;
Alert* Alert::BAD_CERT_STATUS_RESPONSE = nullptr;
Alert* Alert::BAD_CERT_HASH_VALUE = nullptr;
Alert* Alert::UNKNOWN_PSK_IDENTITY = nullptr;
Alert* Alert::CERTIFICATE_REQUIRED = nullptr;
Alert* Alert::NO_APPLICATION_PROTOCOL = nullptr;
$AlertArray* Alert::$VALUES = nullptr;
$SSLConsumer* Alert::alertConsumer = nullptr;

$AlertArray* Alert::$values() {
	$init(Alert);
	return $new($AlertArray, {
		Alert::CLOSE_NOTIFY,
		Alert::UNEXPECTED_MESSAGE,
		Alert::BAD_RECORD_MAC,
		Alert::DECRYPTION_FAILED,
		Alert::RECORD_OVERFLOW,
		Alert::DECOMPRESSION_FAILURE,
		Alert::HANDSHAKE_FAILURE,
		Alert::NO_CERTIFICATE,
		Alert::BAD_CERTIFICATE,
		Alert::UNSUPPORTED_CERTIFICATE,
		Alert::CERTIFICATE_REVOKED,
		Alert::CERTIFICATE_EXPIRED,
		Alert::CERTIFICATE_UNKNOWN,
		Alert::ILLEGAL_PARAMETER,
		Alert::UNKNOWN_CA,
		Alert::ACCESS_DENIED,
		Alert::DECODE_ERROR,
		Alert::DECRYPT_ERROR,
		Alert::EXPORT_RESTRICTION,
		Alert::PROTOCOL_VERSION,
		Alert::INSUFFICIENT_SECURITY,
		Alert::INTERNAL_ERROR,
		Alert::INAPPROPRIATE_FALLBACK,
		Alert::USER_CANCELED,
		Alert::NO_RENEGOTIATION,
		Alert::MISSING_EXTENSION,
		Alert::UNSUPPORTED_EXTENSION,
		Alert::CERT_UNOBTAINABLE,
		Alert::UNRECOGNIZED_NAME,
		Alert::BAD_CERT_STATUS_RESPONSE,
		Alert::BAD_CERT_HASH_VALUE,
		Alert::UNKNOWN_PSK_IDENTITY,
		Alert::CERTIFICATE_REQUIRED,
		Alert::NO_APPLICATION_PROTOCOL
	});
}

$AlertArray* Alert::values() {
	$init(Alert);
	return $cast($AlertArray, Alert::$VALUES->clone());
}

Alert* Alert::valueOf($String* name) {
	$init(Alert);
	return $cast(Alert, $Enum::valueOf(Alert::class$, name));
}

void Alert::init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* description, bool handshakeOnly) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->id = id;
	$set(this, description, description);
	this->handshakeOnly = handshakeOnly;
}

Alert* Alert::valueOf(int8_t id) {
	$init(Alert);
	{
		$var($AlertArray, arr$, Alert::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			Alert* al = arr$->get(i$);
			{
				if ($nc(al)->id == id) {
					return al;
				}
			}
		}
	}
	return nullptr;
}

$String* Alert::nameOf(int8_t id) {
	$init(Alert);
	{
		$var($AlertArray, arr$, Alert::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			Alert* al = arr$->get(i$);
			{
				if ($nc(al)->id == id) {
					return al->description;
				}
			}
		}
	}
	return $str({"UNKNOWN ALERT ("_s, $$str(((int32_t)(id & (uint32_t)255))), ")"_s});
}

$SSLException* Alert::createSSLException($String* reason) {
	return createSSLException(reason, nullptr);
}

$SSLException* Alert::createSSLException($String* reason$renamed, $Throwable* cause) {
	$var($String, reason, reason$renamed);
	if (reason == nullptr) {
		$assign(reason, (cause != nullptr) ? $nc(cause)->getMessage() : ""_s);
	}
	$var($SSLException, ssle, nullptr);
	if ($instanceOf($IOException, cause)) {
		$assign(ssle, $new($SSLException, reason));
	} else if (this == Alert::UNEXPECTED_MESSAGE) {
		$assign(ssle, $new($SSLProtocolException, reason));
	} else if (this->handshakeOnly) {
		$assign(ssle, $new($SSLHandshakeException, reason));
	} else {
		$assign(ssle, $new($SSLException, reason));
	}
	if (cause != nullptr) {
		$nc(ssle)->initCause(cause);
	}
	return ssle;
}

void clinit$Alert($Class* class$) {
	$assignStatic(Alert::CLOSE_NOTIFY, $new(Alert, "CLOSE_NOTIFY"_s, 0, (int8_t)0, "close_notify"_s, false));
	$assignStatic(Alert::UNEXPECTED_MESSAGE, $new(Alert, "UNEXPECTED_MESSAGE"_s, 1, (int8_t)10, "unexpected_message"_s, false));
	$assignStatic(Alert::BAD_RECORD_MAC, $new(Alert, "BAD_RECORD_MAC"_s, 2, (int8_t)20, "bad_record_mac"_s, false));
	$assignStatic(Alert::DECRYPTION_FAILED, $new(Alert, "DECRYPTION_FAILED"_s, 3, (int8_t)21, "decryption_failed"_s, false));
	$assignStatic(Alert::RECORD_OVERFLOW, $new(Alert, "RECORD_OVERFLOW"_s, 4, (int8_t)22, "record_overflow"_s, false));
	$assignStatic(Alert::DECOMPRESSION_FAILURE, $new(Alert, "DECOMPRESSION_FAILURE"_s, 5, (int8_t)30, "decompression_failure"_s, false));
	$assignStatic(Alert::HANDSHAKE_FAILURE, $new(Alert, "HANDSHAKE_FAILURE"_s, 6, (int8_t)40, "handshake_failure"_s, true));
	$assignStatic(Alert::NO_CERTIFICATE, $new(Alert, "NO_CERTIFICATE"_s, 7, (int8_t)41, "no_certificate"_s, true));
	$assignStatic(Alert::BAD_CERTIFICATE, $new(Alert, "BAD_CERTIFICATE"_s, 8, (int8_t)42, "bad_certificate"_s, true));
	$assignStatic(Alert::UNSUPPORTED_CERTIFICATE, $new(Alert, "UNSUPPORTED_CERTIFICATE"_s, 9, (int8_t)43, "unsupported_certificate"_s, true));
	$assignStatic(Alert::CERTIFICATE_REVOKED, $new(Alert, "CERTIFICATE_REVOKED"_s, 10, (int8_t)44, "certificate_revoked"_s, true));
	$assignStatic(Alert::CERTIFICATE_EXPIRED, $new(Alert, "CERTIFICATE_EXPIRED"_s, 11, (int8_t)45, "certificate_expired"_s, true));
	$assignStatic(Alert::CERTIFICATE_UNKNOWN, $new(Alert, "CERTIFICATE_UNKNOWN"_s, 12, (int8_t)46, "certificate_unknown"_s, true));
	$assignStatic(Alert::ILLEGAL_PARAMETER, $new(Alert, "ILLEGAL_PARAMETER"_s, 13, (int8_t)47, "illegal_parameter"_s, true));
	$assignStatic(Alert::UNKNOWN_CA, $new(Alert, "UNKNOWN_CA"_s, 14, (int8_t)48, "unknown_ca"_s, true));
	$assignStatic(Alert::ACCESS_DENIED, $new(Alert, "ACCESS_DENIED"_s, 15, (int8_t)49, "access_denied"_s, true));
	$assignStatic(Alert::DECODE_ERROR, $new(Alert, "DECODE_ERROR"_s, 16, (int8_t)50, "decode_error"_s, true));
	$assignStatic(Alert::DECRYPT_ERROR, $new(Alert, "DECRYPT_ERROR"_s, 17, (int8_t)51, "decrypt_error"_s, true));
	$assignStatic(Alert::EXPORT_RESTRICTION, $new(Alert, "EXPORT_RESTRICTION"_s, 18, (int8_t)60, "export_restriction"_s, true));
	$assignStatic(Alert::PROTOCOL_VERSION, $new(Alert, "PROTOCOL_VERSION"_s, 19, (int8_t)70, "protocol_version"_s, true));
	$assignStatic(Alert::INSUFFICIENT_SECURITY, $new(Alert, "INSUFFICIENT_SECURITY"_s, 20, (int8_t)71, "insufficient_security"_s, true));
	$assignStatic(Alert::INTERNAL_ERROR, $new(Alert, "INTERNAL_ERROR"_s, 21, (int8_t)80, "internal_error"_s, false));
	$assignStatic(Alert::INAPPROPRIATE_FALLBACK, $new(Alert, "INAPPROPRIATE_FALLBACK"_s, 22, (int8_t)86, "inappropriate_fallback"_s, false));
	$assignStatic(Alert::USER_CANCELED, $new(Alert, "USER_CANCELED"_s, 23, (int8_t)90, "user_canceled"_s, false));
	$assignStatic(Alert::NO_RENEGOTIATION, $new(Alert, "NO_RENEGOTIATION"_s, 24, (int8_t)100, "no_renegotiation"_s, true));
	$assignStatic(Alert::MISSING_EXTENSION, $new(Alert, "MISSING_EXTENSION"_s, 25, (int8_t)109, "missing_extension"_s, true));
	$assignStatic(Alert::UNSUPPORTED_EXTENSION, $new(Alert, "UNSUPPORTED_EXTENSION"_s, 26, (int8_t)110, "unsupported_extension"_s, true));
	$assignStatic(Alert::CERT_UNOBTAINABLE, $new(Alert, "CERT_UNOBTAINABLE"_s, 27, (int8_t)111, "certificate_unobtainable"_s, true));
	$assignStatic(Alert::UNRECOGNIZED_NAME, $new(Alert, "UNRECOGNIZED_NAME"_s, 28, (int8_t)112, "unrecognized_name"_s, true));
	$assignStatic(Alert::BAD_CERT_STATUS_RESPONSE, $new(Alert, "BAD_CERT_STATUS_RESPONSE"_s, 29, (int8_t)113, "bad_certificate_status_response"_s, true));
	$assignStatic(Alert::BAD_CERT_HASH_VALUE, $new(Alert, "BAD_CERT_HASH_VALUE"_s, 30, (int8_t)114, "bad_certificate_hash_value"_s, true));
	$assignStatic(Alert::UNKNOWN_PSK_IDENTITY, $new(Alert, "UNKNOWN_PSK_IDENTITY"_s, 31, (int8_t)115, "unknown_psk_identity"_s, true));
	$assignStatic(Alert::CERTIFICATE_REQUIRED, $new(Alert, "CERTIFICATE_REQUIRED"_s, 32, (int8_t)116, "certificate_required"_s, true));
	$assignStatic(Alert::NO_APPLICATION_PROTOCOL, $new(Alert, "NO_APPLICATION_PROTOCOL"_s, 33, (int8_t)120, "no_application_protocol"_s, true));
	$assignStatic(Alert::$VALUES, Alert::$values());
	$assignStatic(Alert::alertConsumer, $new($Alert$AlertConsumer));
}

Alert::Alert() {
}

$Class* Alert::load$($String* name, bool initialize) {
	$loadClass(Alert, name, initialize, &_Alert_ClassInfo_, clinit$Alert, allocate$Alert);
	return class$;
}

$Class* Alert::class$ = nullptr;

		} // ssl
	} // security
} // sun