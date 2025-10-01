#ifndef _sun_security_ssl_Alert_h_
#define _sun_security_ssl_Alert_h_
//$ class sun.security.ssl.Alert
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DECRYPT_ERROR")
#undef DECRYPT_ERROR
#pragma push_macro("NO_APPLICATION_PROTOCOL")
#undef NO_APPLICATION_PROTOCOL
#pragma push_macro("UNKNOWN_CA")
#undef UNKNOWN_CA
#pragma push_macro("CERTIFICATE_REQUIRED")
#undef CERTIFICATE_REQUIRED
#pragma push_macro("BAD_CERT_STATUS_RESPONSE")
#undef BAD_CERT_STATUS_RESPONSE
#pragma push_macro("BAD_CERT_HASH_VALUE")
#undef BAD_CERT_HASH_VALUE
#pragma push_macro("INSUFFICIENT_SECURITY")
#undef INSUFFICIENT_SECURITY
#pragma push_macro("DECODE_ERROR")
#undef DECODE_ERROR
#pragma push_macro("CERTIFICATE_EXPIRED")
#undef CERTIFICATE_EXPIRED
#pragma push_macro("UNSUPPORTED_EXTENSION")
#undef UNSUPPORTED_EXTENSION
#pragma push_macro("BAD_CERTIFICATE")
#undef BAD_CERTIFICATE
#pragma push_macro("ACCESS_DENIED")
#undef ACCESS_DENIED
#pragma push_macro("PROTOCOL_VERSION")
#undef PROTOCOL_VERSION
#pragma push_macro("BAD_RECORD_MAC")
#undef BAD_RECORD_MAC
#pragma push_macro("INAPPROPRIATE_FALLBACK")
#undef INAPPROPRIATE_FALLBACK
#pragma push_macro("NO_CERTIFICATE")
#undef NO_CERTIFICATE
#pragma push_macro("MISSING_EXTENSION")
#undef MISSING_EXTENSION
#pragma push_macro("CERTIFICATE_UNKNOWN")
#undef CERTIFICATE_UNKNOWN
#pragma push_macro("EXPORT_RESTRICTION")
#undef EXPORT_RESTRICTION
#pragma push_macro("DECRYPTION_FAILED")
#undef DECRYPTION_FAILED
#pragma push_macro("HANDSHAKE_FAILURE")
#undef HANDSHAKE_FAILURE
#pragma push_macro("UNKNOWN_PSK_IDENTITY")
#undef UNKNOWN_PSK_IDENTITY
#pragma push_macro("CLOSE_NOTIFY")
#undef CLOSE_NOTIFY
#pragma push_macro("INTERNAL_ERROR")
#undef INTERNAL_ERROR
#pragma push_macro("NO_RENEGOTIATION")
#undef NO_RENEGOTIATION
#pragma push_macro("CERT_UNOBTAINABLE")
#undef CERT_UNOBTAINABLE
#pragma push_macro("UNRECOGNIZED_NAME")
#undef UNRECOGNIZED_NAME
#pragma push_macro("DECOMPRESSION_FAILURE")
#undef DECOMPRESSION_FAILURE
#pragma push_macro("UNEXPECTED_MESSAGE")
#undef UNEXPECTED_MESSAGE
#pragma push_macro("ILLEGAL_PARAMETER")
#undef ILLEGAL_PARAMETER
#pragma push_macro("UNSUPPORTED_CERTIFICATE")
#undef UNSUPPORTED_CERTIFICATE
#pragma push_macro("USER_CANCELED")
#undef USER_CANCELED
#pragma push_macro("RECORD_OVERFLOW")
#undef RECORD_OVERFLOW
#pragma push_macro("CERTIFICATE_REVOKED")
#undef CERTIFICATE_REVOKED

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLException;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class SSLConsumer;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Alert : public ::java::lang::Enum {
	$class(Alert, 0, ::java::lang::Enum)
public:
	Alert();
	static $Array<::sun::security::ssl::Alert>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* description, bool handshakeOnly);
	virtual ::javax::net::ssl::SSLException* createSSLException($String* reason);
	virtual ::javax::net::ssl::SSLException* createSSLException($String* reason, $Throwable* cause);
	static $String* nameOf(int8_t id);
	static ::sun::security::ssl::Alert* valueOf($String* name);
	static ::sun::security::ssl::Alert* valueOf(int8_t id);
	static $Array<::sun::security::ssl::Alert>* values();
	static ::sun::security::ssl::Alert* CLOSE_NOTIFY;
	static ::sun::security::ssl::Alert* UNEXPECTED_MESSAGE;
	static ::sun::security::ssl::Alert* BAD_RECORD_MAC;
	static ::sun::security::ssl::Alert* DECRYPTION_FAILED;
	static ::sun::security::ssl::Alert* RECORD_OVERFLOW;
	static ::sun::security::ssl::Alert* DECOMPRESSION_FAILURE;
	static ::sun::security::ssl::Alert* HANDSHAKE_FAILURE;
	static ::sun::security::ssl::Alert* NO_CERTIFICATE;
	static ::sun::security::ssl::Alert* BAD_CERTIFICATE;
	static ::sun::security::ssl::Alert* UNSUPPORTED_CERTIFICATE;
	static ::sun::security::ssl::Alert* CERTIFICATE_REVOKED;
	static ::sun::security::ssl::Alert* CERTIFICATE_EXPIRED;
	static ::sun::security::ssl::Alert* CERTIFICATE_UNKNOWN;
	static ::sun::security::ssl::Alert* ILLEGAL_PARAMETER;
	static ::sun::security::ssl::Alert* UNKNOWN_CA;
	static ::sun::security::ssl::Alert* ACCESS_DENIED;
	static ::sun::security::ssl::Alert* DECODE_ERROR;
	static ::sun::security::ssl::Alert* DECRYPT_ERROR;
	static ::sun::security::ssl::Alert* EXPORT_RESTRICTION;
	static ::sun::security::ssl::Alert* PROTOCOL_VERSION;
	static ::sun::security::ssl::Alert* INSUFFICIENT_SECURITY;
	static ::sun::security::ssl::Alert* INTERNAL_ERROR;
	static ::sun::security::ssl::Alert* INAPPROPRIATE_FALLBACK;
	static ::sun::security::ssl::Alert* USER_CANCELED;
	static ::sun::security::ssl::Alert* NO_RENEGOTIATION;
	static ::sun::security::ssl::Alert* MISSING_EXTENSION;
	static ::sun::security::ssl::Alert* UNSUPPORTED_EXTENSION;
	static ::sun::security::ssl::Alert* CERT_UNOBTAINABLE;
	static ::sun::security::ssl::Alert* UNRECOGNIZED_NAME;
	static ::sun::security::ssl::Alert* BAD_CERT_STATUS_RESPONSE;
	static ::sun::security::ssl::Alert* BAD_CERT_HASH_VALUE;
	static ::sun::security::ssl::Alert* UNKNOWN_PSK_IDENTITY;
	static ::sun::security::ssl::Alert* CERTIFICATE_REQUIRED;
	static ::sun::security::ssl::Alert* NO_APPLICATION_PROTOCOL;
	static $Array<::sun::security::ssl::Alert>* $VALUES;
	int8_t id = 0;
	$String* description = nullptr;
	bool handshakeOnly = false;
	static ::sun::security::ssl::SSLConsumer* alertConsumer;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("DECRYPT_ERROR")
#pragma pop_macro("NO_APPLICATION_PROTOCOL")
#pragma pop_macro("UNKNOWN_CA")
#pragma pop_macro("CERTIFICATE_REQUIRED")
#pragma pop_macro("BAD_CERT_STATUS_RESPONSE")
#pragma pop_macro("BAD_CERT_HASH_VALUE")
#pragma pop_macro("INSUFFICIENT_SECURITY")
#pragma pop_macro("DECODE_ERROR")
#pragma pop_macro("CERTIFICATE_EXPIRED")
#pragma pop_macro("UNSUPPORTED_EXTENSION")
#pragma pop_macro("BAD_CERTIFICATE")
#pragma pop_macro("ACCESS_DENIED")
#pragma pop_macro("PROTOCOL_VERSION")
#pragma pop_macro("BAD_RECORD_MAC")
#pragma pop_macro("INAPPROPRIATE_FALLBACK")
#pragma pop_macro("NO_CERTIFICATE")
#pragma pop_macro("MISSING_EXTENSION")
#pragma pop_macro("CERTIFICATE_UNKNOWN")
#pragma pop_macro("EXPORT_RESTRICTION")
#pragma pop_macro("DECRYPTION_FAILED")
#pragma pop_macro("HANDSHAKE_FAILURE")
#pragma pop_macro("UNKNOWN_PSK_IDENTITY")
#pragma pop_macro("CLOSE_NOTIFY")
#pragma pop_macro("INTERNAL_ERROR")
#pragma pop_macro("NO_RENEGOTIATION")
#pragma pop_macro("CERT_UNOBTAINABLE")
#pragma pop_macro("UNRECOGNIZED_NAME")
#pragma pop_macro("DECOMPRESSION_FAILURE")
#pragma pop_macro("UNEXPECTED_MESSAGE")
#pragma pop_macro("ILLEGAL_PARAMETER")
#pragma pop_macro("UNSUPPORTED_CERTIFICATE")
#pragma pop_macro("USER_CANCELED")
#pragma pop_macro("RECORD_OVERFLOW")
#pragma pop_macro("CERTIFICATE_REVOKED")

#endif // _sun_security_ssl_Alert_h_