#ifndef _sun_security_ssl_SSLExtension_h_
#define _sun_security_ssl_SSLExtension_h_
//$ class sun.security.ssl.SSLExtension
//$ extends java.lang.Enum
//$ implements sun.security.ssl.SSLStringizer

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <sun/security/ssl/SSLStringizer.h>

#pragma push_macro("CACHED_INFO")
#undef CACHED_INFO
#pragma push_macro("CERT_TYPE")
#undef CERT_TYPE
#pragma push_macro("CH_ALPN")
#undef CH_ALPN
#pragma push_macro("CH_CERTIFICATE_AUTHORITIES")
#undef CH_CERTIFICATE_AUTHORITIES
#pragma push_macro("CH_COOKIE")
#undef CH_COOKIE
#pragma push_macro("CH_EARLY_DATA")
#undef CH_EARLY_DATA
#pragma push_macro("CH_EC_POINT_FORMATS")
#undef CH_EC_POINT_FORMATS
#pragma push_macro("CH_EXTENDED_MASTER_SECRET")
#undef CH_EXTENDED_MASTER_SECRET
#pragma push_macro("CH_KEY_SHARE")
#undef CH_KEY_SHARE
#pragma push_macro("CH_MAX_FRAGMENT_LENGTH")
#undef CH_MAX_FRAGMENT_LENGTH
#pragma push_macro("CH_PRE_SHARED_KEY")
#undef CH_PRE_SHARED_KEY
#pragma push_macro("CH_RENEGOTIATION_INFO")
#undef CH_RENEGOTIATION_INFO
#pragma push_macro("CH_SERVER_NAME")
#undef CH_SERVER_NAME
#pragma push_macro("CH_SESSION_TICKET")
#undef CH_SESSION_TICKET
#pragma push_macro("CH_SIGNATURE_ALGORITHMS")
#undef CH_SIGNATURE_ALGORITHMS
#pragma push_macro("CH_SIGNATURE_ALGORITHMS_CERT")
#undef CH_SIGNATURE_ALGORITHMS_CERT
#pragma push_macro("CH_STATUS_REQUEST")
#undef CH_STATUS_REQUEST
#pragma push_macro("CH_STATUS_REQUEST_V2")
#undef CH_STATUS_REQUEST_V2
#pragma push_macro("CH_SUPPORTED_GROUPS")
#undef CH_SUPPORTED_GROUPS
#pragma push_macro("CH_SUPPORTED_VERSIONS")
#undef CH_SUPPORTED_VERSIONS
#pragma push_macro("CLIENT_AUTHZ")
#undef CLIENT_AUTHZ
#pragma push_macro("CLIENT_CERTIFICATE_URL")
#undef CLIENT_CERTIFICATE_URL
#pragma push_macro("CLIENT_CERT_TYPE")
#undef CLIENT_CERT_TYPE
#pragma push_macro("CR_CERTIFICATE_AUTHORITIES")
#undef CR_CERTIFICATE_AUTHORITIES
#pragma push_macro("CR_SIGNATURE_ALGORITHMS")
#undef CR_SIGNATURE_ALGORITHMS
#pragma push_macro("CR_SIGNATURE_ALGORITHMS_CERT")
#undef CR_SIGNATURE_ALGORITHMS_CERT
#pragma push_macro("CR_STATUS_REQUEST")
#undef CR_STATUS_REQUEST
#pragma push_macro("CT_STATUS_REQUEST")
#undef CT_STATUS_REQUEST
#pragma push_macro("EE_ALPN")
#undef EE_ALPN
#pragma push_macro("EE_EARLY_DATA")
#undef EE_EARLY_DATA
#pragma push_macro("EE_MAX_FRAGMENT_LENGTH")
#undef EE_MAX_FRAGMENT_LENGTH
#pragma push_macro("EE_SERVER_NAME")
#undef EE_SERVER_NAME
#pragma push_macro("EE_SUPPORTED_GROUPS")
#undef EE_SUPPORTED_GROUPS
#pragma push_macro("ENCRYPT_THEN_MAC")
#undef ENCRYPT_THEN_MAC
#pragma push_macro("HEARTBEAT")
#undef HEARTBEAT
#pragma push_macro("HRR_COOKIE")
#undef HRR_COOKIE
#pragma push_macro("HRR_KEY_SHARE")
#undef HRR_KEY_SHARE
#pragma push_macro("HRR_SUPPORTED_VERSIONS")
#undef HRR_SUPPORTED_VERSIONS
#pragma push_macro("MH_COOKIE")
#undef MH_COOKIE
#pragma push_macro("MH_KEY_SHARE")
#undef MH_KEY_SHARE
#pragma push_macro("MH_SUPPORTED_VERSIONS")
#undef MH_SUPPORTED_VERSIONS
#pragma push_macro("NST_EARLY_DATA")
#undef NST_EARLY_DATA
#pragma push_macro("OID_FILTERS")
#undef OID_FILTERS
#pragma push_macro("PADDING")
#undef PADDING
#pragma push_macro("POST_HANDSHAKE_AUTH")
#undef POST_HANDSHAKE_AUTH
#pragma push_macro("PSK_KEY_EXCHANGE_MODES")
#undef PSK_KEY_EXCHANGE_MODES
#pragma push_macro("SERVER_AUTHZ")
#undef SERVER_AUTHZ
#pragma push_macro("SERVER_CERT_TYPE")
#undef SERVER_CERT_TYPE
#pragma push_macro("SH_ALPN")
#undef SH_ALPN
#pragma push_macro("SH_EC_POINT_FORMATS")
#undef SH_EC_POINT_FORMATS
#pragma push_macro("SH_EXTENDED_MASTER_SECRET")
#undef SH_EXTENDED_MASTER_SECRET
#pragma push_macro("SH_KEY_SHARE")
#undef SH_KEY_SHARE
#pragma push_macro("SH_MAX_FRAGMENT_LENGTH")
#undef SH_MAX_FRAGMENT_LENGTH
#pragma push_macro("SH_PRE_SHARED_KEY")
#undef SH_PRE_SHARED_KEY
#pragma push_macro("SH_RENEGOTIATION_INFO")
#undef SH_RENEGOTIATION_INFO
#pragma push_macro("SH_SERVER_NAME")
#undef SH_SERVER_NAME
#pragma push_macro("SH_SESSION_TICKET")
#undef SH_SESSION_TICKET
#pragma push_macro("SH_STATUS_REQUEST")
#undef SH_STATUS_REQUEST
#pragma push_macro("SH_STATUS_REQUEST_V2")
#undef SH_STATUS_REQUEST_V2
#pragma push_macro("SH_SUPPORTED_VERSIONS")
#undef SH_SUPPORTED_VERSIONS
#pragma push_macro("SIGNED_CERT_TIMESTAMP")
#undef SIGNED_CERT_TIMESTAMP
#pragma push_macro("SRP")
#undef SRP
#pragma push_macro("TOKEN_BINDING")
#undef TOKEN_BINDING
#pragma push_macro("TRUNCATED_HMAC")
#undef TRUNCATED_HMAC
#pragma push_macro("TRUSTED_CA_KEYS")
#undef TRUSTED_CA_KEYS
#pragma push_macro("USER_MAPPING")
#undef USER_MAPPING
#pragma push_macro("USE_SRTP")
#undef USE_SRTP

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class ConnectionContext;
			class HandshakeAbsence;
			class HandshakeConsumer;
			class HandshakeContext;
			class HandshakeProducer;
			class ProtocolVersion;
			class SSLExtension$ExtensionConsumer;
			class SSLHandshake;
			class SSLHandshake$HandshakeMessage;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLExtension : public ::java::lang::Enum, public ::sun::security::ssl::SSLStringizer {
	$class(SSLExtension, 0, ::java::lang::Enum, ::sun::security::ssl::SSLStringizer)
public:
	SSLExtension();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Array<::sun::security::ssl::SSLExtension>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, $String* name);
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, $String* name, ::sun::security::ssl::SSLHandshake* handshakeType, $Array<::sun::security::ssl::ProtocolVersion>* supportedProtocols, ::sun::security::ssl::HandshakeProducer* producer, ::sun::security::ssl::SSLExtension$ExtensionConsumer* onLoadConsumer, ::sun::security::ssl::HandshakeAbsence* onLoadAbsence, ::sun::security::ssl::HandshakeConsumer* onTradeConsumer, ::sun::security::ssl::HandshakeAbsence* onTradeAbsence, ::sun::security::ssl::SSLStringizer* stringize);
	virtual void absentOnLoad(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message);
	virtual void absentOnTrade(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message);
	virtual void consumeOnLoad(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message, ::java::nio::ByteBuffer* buffer);
	virtual void consumeOnTrade(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message);
	static ::java::util::Collection* getDisabledExtensions($String* propertyName);
	virtual bool isAvailable(::sun::security::ssl::ProtocolVersion* protocolVersion);
	static bool isConsumable(int32_t extensionType);
	static $String* nameOf(int32_t extensionType);
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message);
	virtual $String* toString() override;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* byteBuffer) override;
	static ::sun::security::ssl::SSLExtension* valueOf($String* name);
	static ::sun::security::ssl::SSLExtension* valueOf(::sun::security::ssl::SSLHandshake* handshakeType, int32_t extensionType);
	static $Array<::sun::security::ssl::SSLExtension>* values();
	static ::sun::security::ssl::SSLExtension* CH_SERVER_NAME;
	static ::sun::security::ssl::SSLExtension* SH_SERVER_NAME;
	static ::sun::security::ssl::SSLExtension* EE_SERVER_NAME;
	static ::sun::security::ssl::SSLExtension* CH_MAX_FRAGMENT_LENGTH;
	static ::sun::security::ssl::SSLExtension* SH_MAX_FRAGMENT_LENGTH;
	static ::sun::security::ssl::SSLExtension* EE_MAX_FRAGMENT_LENGTH;
	static ::sun::security::ssl::SSLExtension* CLIENT_CERTIFICATE_URL;
	static ::sun::security::ssl::SSLExtension* TRUSTED_CA_KEYS;
	static ::sun::security::ssl::SSLExtension* TRUNCATED_HMAC;
	static ::sun::security::ssl::SSLExtension* CH_STATUS_REQUEST;
	static ::sun::security::ssl::SSLExtension* SH_STATUS_REQUEST;
	static ::sun::security::ssl::SSLExtension* CR_STATUS_REQUEST;
	static ::sun::security::ssl::SSLExtension* CT_STATUS_REQUEST;
	static ::sun::security::ssl::SSLExtension* USER_MAPPING;
	static ::sun::security::ssl::SSLExtension* CLIENT_AUTHZ;
	static ::sun::security::ssl::SSLExtension* SERVER_AUTHZ;
	static ::sun::security::ssl::SSLExtension* CERT_TYPE;
	static ::sun::security::ssl::SSLExtension* CH_SUPPORTED_GROUPS;
	static ::sun::security::ssl::SSLExtension* EE_SUPPORTED_GROUPS;
	static ::sun::security::ssl::SSLExtension* CH_EC_POINT_FORMATS;
	static ::sun::security::ssl::SSLExtension* SH_EC_POINT_FORMATS;
	static ::sun::security::ssl::SSLExtension* SRP;
	static ::sun::security::ssl::SSLExtension* USE_SRTP;
	static ::sun::security::ssl::SSLExtension* HEARTBEAT;
	static ::sun::security::ssl::SSLExtension* CH_ALPN;
	static ::sun::security::ssl::SSLExtension* SH_ALPN;
	static ::sun::security::ssl::SSLExtension* EE_ALPN;
	static ::sun::security::ssl::SSLExtension* CH_STATUS_REQUEST_V2;
	static ::sun::security::ssl::SSLExtension* SH_STATUS_REQUEST_V2;
	static ::sun::security::ssl::SSLExtension* SIGNED_CERT_TIMESTAMP;
	static ::sun::security::ssl::SSLExtension* CLIENT_CERT_TYPE;
	static ::sun::security::ssl::SSLExtension* SERVER_CERT_TYPE;
	static ::sun::security::ssl::SSLExtension* PADDING;
	static ::sun::security::ssl::SSLExtension* ENCRYPT_THEN_MAC;
	static ::sun::security::ssl::SSLExtension* CH_EXTENDED_MASTER_SECRET;
	static ::sun::security::ssl::SSLExtension* SH_EXTENDED_MASTER_SECRET;
	static ::sun::security::ssl::SSLExtension* TOKEN_BINDING;
	static ::sun::security::ssl::SSLExtension* CACHED_INFO;
	static ::sun::security::ssl::SSLExtension* CH_SESSION_TICKET;
	static ::sun::security::ssl::SSLExtension* SH_SESSION_TICKET;
	static ::sun::security::ssl::SSLExtension* CH_SIGNATURE_ALGORITHMS;
	static ::sun::security::ssl::SSLExtension* CR_SIGNATURE_ALGORITHMS;
	static ::sun::security::ssl::SSLExtension* CH_EARLY_DATA;
	static ::sun::security::ssl::SSLExtension* EE_EARLY_DATA;
	static ::sun::security::ssl::SSLExtension* NST_EARLY_DATA;
	static ::sun::security::ssl::SSLExtension* CH_SUPPORTED_VERSIONS;
	static ::sun::security::ssl::SSLExtension* SH_SUPPORTED_VERSIONS;
	static ::sun::security::ssl::SSLExtension* HRR_SUPPORTED_VERSIONS;
	static ::sun::security::ssl::SSLExtension* MH_SUPPORTED_VERSIONS;
	static ::sun::security::ssl::SSLExtension* CH_COOKIE;
	static ::sun::security::ssl::SSLExtension* HRR_COOKIE;
	static ::sun::security::ssl::SSLExtension* MH_COOKIE;
	static ::sun::security::ssl::SSLExtension* PSK_KEY_EXCHANGE_MODES;
	static ::sun::security::ssl::SSLExtension* CH_CERTIFICATE_AUTHORITIES;
	static ::sun::security::ssl::SSLExtension* CR_CERTIFICATE_AUTHORITIES;
	static ::sun::security::ssl::SSLExtension* OID_FILTERS;
	static ::sun::security::ssl::SSLExtension* POST_HANDSHAKE_AUTH;
	static ::sun::security::ssl::SSLExtension* CH_SIGNATURE_ALGORITHMS_CERT;
	static ::sun::security::ssl::SSLExtension* CR_SIGNATURE_ALGORITHMS_CERT;
	static ::sun::security::ssl::SSLExtension* CH_KEY_SHARE;
	static ::sun::security::ssl::SSLExtension* SH_KEY_SHARE;
	static ::sun::security::ssl::SSLExtension* HRR_KEY_SHARE;
	static ::sun::security::ssl::SSLExtension* MH_KEY_SHARE;
	static ::sun::security::ssl::SSLExtension* CH_RENEGOTIATION_INFO;
	static ::sun::security::ssl::SSLExtension* SH_RENEGOTIATION_INFO;
	static ::sun::security::ssl::SSLExtension* CH_PRE_SHARED_KEY;
	static ::sun::security::ssl::SSLExtension* SH_PRE_SHARED_KEY;
	static $Array<::sun::security::ssl::SSLExtension>* $VALUES;
	int32_t id = 0;
	::sun::security::ssl::SSLHandshake* handshakeType = nullptr;
	$String* name$ = nullptr;
	$Array<::sun::security::ssl::ProtocolVersion>* supportedProtocols = nullptr;
	::sun::security::ssl::HandshakeProducer* networkProducer = nullptr;
	::sun::security::ssl::SSLExtension$ExtensionConsumer* onLoadConsumer = nullptr;
	::sun::security::ssl::HandshakeAbsence* onLoadAbsence = nullptr;
	::sun::security::ssl::HandshakeConsumer* onTradeConsumer = nullptr;
	::sun::security::ssl::HandshakeAbsence* onTradeAbsence = nullptr;
	::sun::security::ssl::SSLStringizer* stringizer = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("CACHED_INFO")
#pragma pop_macro("CERT_TYPE")
#pragma pop_macro("CH_ALPN")
#pragma pop_macro("CH_CERTIFICATE_AUTHORITIES")
#pragma pop_macro("CH_COOKIE")
#pragma pop_macro("CH_EARLY_DATA")
#pragma pop_macro("CH_EC_POINT_FORMATS")
#pragma pop_macro("CH_EXTENDED_MASTER_SECRET")
#pragma pop_macro("CH_KEY_SHARE")
#pragma pop_macro("CH_MAX_FRAGMENT_LENGTH")
#pragma pop_macro("CH_PRE_SHARED_KEY")
#pragma pop_macro("CH_RENEGOTIATION_INFO")
#pragma pop_macro("CH_SERVER_NAME")
#pragma pop_macro("CH_SESSION_TICKET")
#pragma pop_macro("CH_SIGNATURE_ALGORITHMS")
#pragma pop_macro("CH_SIGNATURE_ALGORITHMS_CERT")
#pragma pop_macro("CH_STATUS_REQUEST")
#pragma pop_macro("CH_STATUS_REQUEST_V2")
#pragma pop_macro("CH_SUPPORTED_GROUPS")
#pragma pop_macro("CH_SUPPORTED_VERSIONS")
#pragma pop_macro("CLIENT_AUTHZ")
#pragma pop_macro("CLIENT_CERTIFICATE_URL")
#pragma pop_macro("CLIENT_CERT_TYPE")
#pragma pop_macro("CR_CERTIFICATE_AUTHORITIES")
#pragma pop_macro("CR_SIGNATURE_ALGORITHMS")
#pragma pop_macro("CR_SIGNATURE_ALGORITHMS_CERT")
#pragma pop_macro("CR_STATUS_REQUEST")
#pragma pop_macro("CT_STATUS_REQUEST")
#pragma pop_macro("EE_ALPN")
#pragma pop_macro("EE_EARLY_DATA")
#pragma pop_macro("EE_MAX_FRAGMENT_LENGTH")
#pragma pop_macro("EE_SERVER_NAME")
#pragma pop_macro("EE_SUPPORTED_GROUPS")
#pragma pop_macro("ENCRYPT_THEN_MAC")
#pragma pop_macro("HEARTBEAT")
#pragma pop_macro("HRR_COOKIE")
#pragma pop_macro("HRR_KEY_SHARE")
#pragma pop_macro("HRR_SUPPORTED_VERSIONS")
#pragma pop_macro("MH_COOKIE")
#pragma pop_macro("MH_KEY_SHARE")
#pragma pop_macro("MH_SUPPORTED_VERSIONS")
#pragma pop_macro("NST_EARLY_DATA")
#pragma pop_macro("OID_FILTERS")
#pragma pop_macro("PADDING")
#pragma pop_macro("POST_HANDSHAKE_AUTH")
#pragma pop_macro("PSK_KEY_EXCHANGE_MODES")
#pragma pop_macro("SERVER_AUTHZ")
#pragma pop_macro("SERVER_CERT_TYPE")
#pragma pop_macro("SH_ALPN")
#pragma pop_macro("SH_EC_POINT_FORMATS")
#pragma pop_macro("SH_EXTENDED_MASTER_SECRET")
#pragma pop_macro("SH_KEY_SHARE")
#pragma pop_macro("SH_MAX_FRAGMENT_LENGTH")
#pragma pop_macro("SH_PRE_SHARED_KEY")
#pragma pop_macro("SH_RENEGOTIATION_INFO")
#pragma pop_macro("SH_SERVER_NAME")
#pragma pop_macro("SH_SESSION_TICKET")
#pragma pop_macro("SH_STATUS_REQUEST")
#pragma pop_macro("SH_STATUS_REQUEST_V2")
#pragma pop_macro("SH_SUPPORTED_VERSIONS")
#pragma pop_macro("SIGNED_CERT_TIMESTAMP")
#pragma pop_macro("SRP")
#pragma pop_macro("TOKEN_BINDING")
#pragma pop_macro("TRUNCATED_HMAC")
#pragma pop_macro("TRUSTED_CA_KEYS")
#pragma pop_macro("USER_MAPPING")
#pragma pop_macro("USE_SRTP")

#endif // _sun_security_ssl_SSLExtension_h_