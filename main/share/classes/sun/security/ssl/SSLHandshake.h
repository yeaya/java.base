#ifndef _sun_security_ssl_SSLHandshake_h_
#define _sun_security_ssl_SSLHandshake_h_
//$ class sun.security.ssl.SSLHandshake
//$ extends java.lang.Enum
//$ implements sun.security.ssl.SSLConsumer,sun.security.ssl.HandshakeProducer

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>

#pragma push_macro("CERTIFICATE_REQUEST")
#undef CERTIFICATE_REQUEST
#pragma push_macro("NOT_APPLICABLE")
#undef NOT_APPLICABLE
#pragma push_macro("HELLO_VERIFY_REQUEST")
#undef HELLO_VERIFY_REQUEST
#pragma push_macro("CERTIFICATE")
#undef CERTIFICATE
#pragma push_macro("KEY_UPDATE")
#undef KEY_UPDATE
#pragma push_macro("FINISHED")
#undef FINISHED
#pragma push_macro("SERVER_HELLO_DONE")
#undef SERVER_HELLO_DONE
#pragma push_macro("MESSAGE_HASH")
#undef MESSAGE_HASH
#pragma push_macro("ENCRYPTED_EXTENSIONS")
#undef ENCRYPTED_EXTENSIONS
#pragma push_macro("CERTIFICATE_VERIFY")
#undef CERTIFICATE_VERIFY
#pragma push_macro("CLIENT_KEY_EXCHANGE")
#undef CLIENT_KEY_EXCHANGE
#pragma push_macro("HELLO_REQUEST")
#undef HELLO_REQUEST
#pragma push_macro("SERVER_HELLO")
#undef SERVER_HELLO
#pragma push_macro("HELLO_RETRY_REQUEST")
#undef HELLO_RETRY_REQUEST
#pragma push_macro("END_OF_EARLY_DATA")
#undef END_OF_EARLY_DATA
#pragma push_macro("CERTIFICATE_STATUS")
#undef CERTIFICATE_STATUS
#pragma push_macro("NEW_SESSION_TICKET")
#undef NEW_SESSION_TICKET
#pragma push_macro("SERVER_KEY_EXCHANGE")
#undef SERVER_KEY_EXCHANGE
#pragma push_macro("CERTIFICATE_URL")
#undef CERTIFICATE_URL
#pragma push_macro("SUPPLEMENTAL_DATA")
#undef SUPPLEMENTAL_DATA
#pragma push_macro("CLIENT_HELLO")
#undef CLIENT_HELLO

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class Map$Entry;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class ConnectionContext;
			class HandshakeContext;
			class SSLHandshake$HandshakeMessage;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLHandshake : public ::java::lang::Enum, public ::sun::security::ssl::SSLConsumer, public ::sun::security::ssl::HandshakeProducer {
	$class(SSLHandshake, 0, ::java::lang::Enum, ::sun::security::ssl::SSLConsumer, ::sun::security::ssl::HandshakeProducer)
public:
	SSLHandshake();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Array<::sun::security::ssl::SSLHandshake>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name);
	void init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name, $Array<::java::util::Map$Entry>* handshakeConsumers, $Array<::java::util::Map$Entry>* handshakeProducers);
	void init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name, $Array<::java::util::Map$Entry>* handshakeConsumers, $Array<::java::util::Map$Entry>* handshakeProducers, $Array<::java::util::Map$Entry>* handshakeAbsence);
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
	::sun::security::ssl::SSLConsumer* getHandshakeConsumer(::sun::security::ssl::ConnectionContext* context);
	::sun::security::ssl::HandshakeProducer* getHandshakeProducer(::sun::security::ssl::ConnectionContext* context);
	static bool isKnown(int8_t id);
	static void kickstart(::sun::security::ssl::HandshakeContext* context);
	static $String* nameOf(int8_t id);
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
	virtual $String* toString() override;
	static ::sun::security::ssl::SSLHandshake* valueOf($String* name);
	static $Array<::sun::security::ssl::SSLHandshake>* values();
	static ::sun::security::ssl::SSLHandshake* HELLO_REQUEST;
	static ::sun::security::ssl::SSLHandshake* CLIENT_HELLO;
	static ::sun::security::ssl::SSLHandshake* SERVER_HELLO;
	static ::sun::security::ssl::SSLHandshake* HELLO_RETRY_REQUEST;
	static ::sun::security::ssl::SSLHandshake* HELLO_VERIFY_REQUEST;
	static ::sun::security::ssl::SSLHandshake* NEW_SESSION_TICKET;
	static ::sun::security::ssl::SSLHandshake* END_OF_EARLY_DATA;
	static ::sun::security::ssl::SSLHandshake* ENCRYPTED_EXTENSIONS;
	static ::sun::security::ssl::SSLHandshake* CERTIFICATE;
	static ::sun::security::ssl::SSLHandshake* SERVER_KEY_EXCHANGE;
	static ::sun::security::ssl::SSLHandshake* CERTIFICATE_REQUEST;
	static ::sun::security::ssl::SSLHandshake* SERVER_HELLO_DONE;
	static ::sun::security::ssl::SSLHandshake* CERTIFICATE_VERIFY;
	static ::sun::security::ssl::SSLHandshake* CLIENT_KEY_EXCHANGE;
	static ::sun::security::ssl::SSLHandshake* FINISHED;
	static ::sun::security::ssl::SSLHandshake* CERTIFICATE_URL;
	static ::sun::security::ssl::SSLHandshake* CERTIFICATE_STATUS;
	static ::sun::security::ssl::SSLHandshake* SUPPLEMENTAL_DATA;
	static ::sun::security::ssl::SSLHandshake* KEY_UPDATE;
	static ::sun::security::ssl::SSLHandshake* MESSAGE_HASH;
	static ::sun::security::ssl::SSLHandshake* NOT_APPLICABLE;
	static $Array<::sun::security::ssl::SSLHandshake>* $VALUES;
	int8_t id = 0;
	$String* name$ = nullptr;
	$Array<::java::util::Map$Entry>* handshakeConsumers = nullptr;
	$Array<::java::util::Map$Entry>* handshakeProducers = nullptr;
	$Array<::java::util::Map$Entry>* handshakeAbsences = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("CERTIFICATE_REQUEST")
#pragma pop_macro("NOT_APPLICABLE")
#pragma pop_macro("HELLO_VERIFY_REQUEST")
#pragma pop_macro("CERTIFICATE")
#pragma pop_macro("KEY_UPDATE")
#pragma pop_macro("FINISHED")
#pragma pop_macro("SERVER_HELLO_DONE")
#pragma pop_macro("MESSAGE_HASH")
#pragma pop_macro("ENCRYPTED_EXTENSIONS")
#pragma pop_macro("CERTIFICATE_VERIFY")
#pragma pop_macro("CLIENT_KEY_EXCHANGE")
#pragma pop_macro("HELLO_REQUEST")
#pragma pop_macro("SERVER_HELLO")
#pragma pop_macro("HELLO_RETRY_REQUEST")
#pragma pop_macro("END_OF_EARLY_DATA")
#pragma pop_macro("CERTIFICATE_STATUS")
#pragma pop_macro("NEW_SESSION_TICKET")
#pragma pop_macro("SERVER_KEY_EXCHANGE")
#pragma pop_macro("CERTIFICATE_URL")
#pragma pop_macro("SUPPLEMENTAL_DATA")
#pragma pop_macro("CLIENT_HELLO")

#endif // _sun_security_ssl_SSLHandshake_h_