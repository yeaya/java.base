#include <sun/security/ssl/SSLHandshake.h>
#include <java/lang/Enum.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/Map$Entry.h>
#include <sun/security/ssl/CertificateMessage.h>
#include <sun/security/ssl/CertificateRequest.h>
#include <sun/security/ssl/CertificateStatus.h>
#include <sun/security/ssl/CertificateVerify.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ClientHello.h>
#include <sun/security/ssl/ClientKeyExchange.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/EncryptedExtensions.h>
#include <sun/security/ssl/Finished.h>
#include <sun/security/ssl/HandshakeAbsence.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/HelloRequest.h>
#include <sun/security/ssl/HelloVerifyRequest.h>
#include <sun/security/ssl/KeyUpdate.h>
#include <sun/security/ssl/NewSessionTicket.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLProducer.h>
#include <sun/security/ssl/ServerHello.h>
#include <sun/security/ssl/ServerHelloDone.h>
#include <sun/security/ssl/ServerKeyExchange.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CERTIFICATE
#undef CERTIFICATE_REQUEST
#undef CERTIFICATE_STATUS
#undef CERTIFICATE_URL
#undef CERTIFICATE_VERIFY
#undef CLIENT_HELLO
#undef CLIENT_KEY_EXCHANGE
#undef ENCRYPTED_EXTENSIONS
#undef END_OF_EARLY_DATA
#undef FINISHED
#undef HELLO_REQUEST
#undef HELLO_RETRY_REQUEST
#undef HELLO_VERIFY_REQUEST
#undef KEY_UPDATE
#undef MESSAGE_HASH
#undef NEW_SESSION_TICKET
#undef NONE
#undef NOT_APPLICABLE
#undef PROTOCOLS_OF_12
#undef PROTOCOLS_OF_13
#undef PROTOCOLS_OF_30
#undef PROTOCOLS_TO_11
#undef PROTOCOLS_TO_12
#undef PROTOCOLS_TO_13
#undef SERVER_HELLO
#undef SERVER_HELLO_DONE
#undef SERVER_KEY_EXCHANGE
#undef SUPPLEMENTAL_DATA

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $ProtocolVersionArray = $Array<::sun::security::ssl::ProtocolVersion>;
using $SSLHandshakeArray = $Array<::sun::security::ssl::SSLHandshake>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $Map$Entry = ::java::util::Map$Entry;
using $CertificateMessage = ::sun::security::ssl::CertificateMessage;
using $CertificateRequest = ::sun::security::ssl::CertificateRequest;
using $CertificateStatus = ::sun::security::ssl::CertificateStatus;
using $CertificateVerify = ::sun::security::ssl::CertificateVerify;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ClientHello = ::sun::security::ssl::ClientHello;
using $ClientKeyExchange = ::sun::security::ssl::ClientKeyExchange;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $EncryptedExtensions = ::sun::security::ssl::EncryptedExtensions;
using $Finished = ::sun::security::ssl::Finished;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $HelloRequest = ::sun::security::ssl::HelloRequest;
using $HelloVerifyRequest = ::sun::security::ssl::HelloVerifyRequest;
using $KeyUpdate = ::sun::security::ssl::KeyUpdate;
using $NewSessionTicket = ::sun::security::ssl::NewSessionTicket;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHello = ::sun::security::ssl::ServerHello;
using $ServerHelloDone = ::sun::security::ssl::ServerHelloDone;
using $ServerKeyExchange = ::sun::security::ssl::ServerKeyExchange;

namespace sun {
	namespace security {
		namespace ssl {

bool SSLHandshake::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t SSLHandshake::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* SSLHandshake::clone() {
	 return this->$Enum::clone();
}

void SSLHandshake::finalize() {
	this->$Enum::finalize();
}

SSLHandshake* SSLHandshake::HELLO_REQUEST = nullptr;
SSLHandshake* SSLHandshake::CLIENT_HELLO = nullptr;
SSLHandshake* SSLHandshake::SERVER_HELLO = nullptr;
SSLHandshake* SSLHandshake::HELLO_RETRY_REQUEST = nullptr;
SSLHandshake* SSLHandshake::HELLO_VERIFY_REQUEST = nullptr;
SSLHandshake* SSLHandshake::NEW_SESSION_TICKET = nullptr;
SSLHandshake* SSLHandshake::END_OF_EARLY_DATA = nullptr;
SSLHandshake* SSLHandshake::ENCRYPTED_EXTENSIONS = nullptr;
SSLHandshake* SSLHandshake::CERTIFICATE = nullptr;
SSLHandshake* SSLHandshake::SERVER_KEY_EXCHANGE = nullptr;
SSLHandshake* SSLHandshake::CERTIFICATE_REQUEST = nullptr;
SSLHandshake* SSLHandshake::SERVER_HELLO_DONE = nullptr;
SSLHandshake* SSLHandshake::CERTIFICATE_VERIFY = nullptr;
SSLHandshake* SSLHandshake::CLIENT_KEY_EXCHANGE = nullptr;
SSLHandshake* SSLHandshake::FINISHED = nullptr;
SSLHandshake* SSLHandshake::CERTIFICATE_URL = nullptr;
SSLHandshake* SSLHandshake::CERTIFICATE_STATUS = nullptr;
SSLHandshake* SSLHandshake::SUPPLEMENTAL_DATA = nullptr;
SSLHandshake* SSLHandshake::KEY_UPDATE = nullptr;
SSLHandshake* SSLHandshake::MESSAGE_HASH = nullptr;
SSLHandshake* SSLHandshake::NOT_APPLICABLE = nullptr;
$SSLHandshakeArray* SSLHandshake::$VALUES = nullptr;

$SSLHandshakeArray* SSLHandshake::$values() {
	$init(SSLHandshake);
	return $new($SSLHandshakeArray, {
		SSLHandshake::HELLO_REQUEST,
		SSLHandshake::CLIENT_HELLO,
		SSLHandshake::SERVER_HELLO,
		SSLHandshake::HELLO_RETRY_REQUEST,
		SSLHandshake::HELLO_VERIFY_REQUEST,
		SSLHandshake::NEW_SESSION_TICKET,
		SSLHandshake::END_OF_EARLY_DATA,
		SSLHandshake::ENCRYPTED_EXTENSIONS,
		SSLHandshake::CERTIFICATE,
		SSLHandshake::SERVER_KEY_EXCHANGE,
		SSLHandshake::CERTIFICATE_REQUEST,
		SSLHandshake::SERVER_HELLO_DONE,
		SSLHandshake::CERTIFICATE_VERIFY,
		SSLHandshake::CLIENT_KEY_EXCHANGE,
		SSLHandshake::FINISHED,
		SSLHandshake::CERTIFICATE_URL,
		SSLHandshake::CERTIFICATE_STATUS,
		SSLHandshake::SUPPLEMENTAL_DATA,
		SSLHandshake::KEY_UPDATE,
		SSLHandshake::MESSAGE_HASH,
		SSLHandshake::NOT_APPLICABLE
	});
}

$SSLHandshakeArray* SSLHandshake::values() {
	$init(SSLHandshake);
	return $cast($SSLHandshakeArray, SSLHandshake::$VALUES->clone());
}

SSLHandshake* SSLHandshake::valueOf($String* name) {
	$init(SSLHandshake);
	return $cast(SSLHandshake, $Enum::valueOf(SSLHandshake::class$, name));
}

void SSLHandshake::init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name) {
	$useLocalObjectStack();
	SSLHandshake::init$($enum$name, $enum$ordinal, id, name, ($$new($Map$EntryArray, 0)), ($$new($Map$EntryArray, 0)), ($$new($Map$EntryArray, 0)));
}

void SSLHandshake::init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name, $Map$EntryArray* handshakeConsumers, $Map$EntryArray* handshakeProducers) {
	SSLHandshake::init$($enum$name, $enum$ordinal, id, name, handshakeConsumers, handshakeProducers, ($$new($Map$EntryArray, 0)));
}

void SSLHandshake::init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name, $Map$EntryArray* handshakeConsumers, $Map$EntryArray* handshakeProducers, $Map$EntryArray* handshakeAbsence) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->id = id;
	$set(this, name$, name);
	$set(this, handshakeConsumers, handshakeConsumers);
	$set(this, handshakeProducers, handshakeProducers);
	$set(this, handshakeAbsences, handshakeAbsence);
}

void SSLHandshake::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalObjectStack();
	$var($SSLConsumer, hc, getHandshakeConsumer(context));
	if (hc != nullptr) {
		hc->consume(context, message);
	} else {
		$throwNew($UnsupportedOperationException, $$str({"Unsupported handshake consumer: "_s, this->name$}));
	}
}

$SSLConsumer* SSLHandshake::getHandshakeConsumer($ConnectionContext* context) {
	$useLocalObjectStack();
	if ($nc(this->handshakeConsumers)->length == 0) {
		return nullptr;
	}
	$var($HandshakeContext, hc, $cast($HandshakeContext, context));
	$ProtocolVersion* protocolVersion = nullptr;
	$init($ProtocolVersion);
	if (($nc(hc)->negotiatedProtocol == nullptr) || (hc->negotiatedProtocol == $ProtocolVersion::NONE)) {
		if ($nc(hc->conContext)->isNegotiated && hc->conContext->protocolVersion != $ProtocolVersion::NONE) {
			protocolVersion = hc->conContext->protocolVersion;
		} else {
			protocolVersion = hc->maximumActiveProtocol;
		}
	} else {
		protocolVersion = hc->negotiatedProtocol;
	}
	{
		$var($Map$EntryArray, arr$, this->handshakeConsumers);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Map$Entry, phe, arr$->get(i$));
			{
				$var($ProtocolVersionArray, arr$, $cast($ProtocolVersionArray, $nc(phe)->getValue()));
				for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
					$ProtocolVersion* pv = arr$->get(i$);
					if (protocolVersion == pv) {
						return $cast($SSLConsumer, phe->getKey());
					}
				}
			}
		}
	}
	return nullptr;
}

$bytes* SSLHandshake::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($HandshakeProducer, hp, getHandshakeProducer(context));
	if (hp != nullptr) {
		return hp->produce(context, message);
	} else {
		$throwNew($UnsupportedOperationException, $$str({"Unsupported handshake producer: "_s, this->name$}));
	}
}

$HandshakeProducer* SSLHandshake::getHandshakeProducer($ConnectionContext* context) {
	$useLocalObjectStack();
	if ($nc(this->handshakeConsumers)->length == 0) {
		return nullptr;
	}
	$var($HandshakeContext, hc, $cast($HandshakeContext, context));
	$ProtocolVersion* protocolVersion = nullptr;
	$init($ProtocolVersion);
	if (($nc(hc)->negotiatedProtocol == nullptr) || (hc->negotiatedProtocol == $ProtocolVersion::NONE)) {
		if ($nc(hc->conContext)->isNegotiated && hc->conContext->protocolVersion != $ProtocolVersion::NONE) {
			protocolVersion = hc->conContext->protocolVersion;
		} else {
			protocolVersion = hc->maximumActiveProtocol;
		}
	} else {
		protocolVersion = hc->negotiatedProtocol;
	}
	{
		$var($Map$EntryArray, arr$, this->handshakeProducers);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Map$Entry, phe, arr$->get(i$));
			{
				$var($ProtocolVersionArray, arr$, $cast($ProtocolVersionArray, $nc(phe)->getValue()));
				for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
					$ProtocolVersion* pv = arr$->get(i$);
					if (protocolVersion == pv) {
						return $cast($HandshakeProducer, phe->getKey());
					}
				}
			}
		}
	}
	return nullptr;
}

$String* SSLHandshake::toString() {
	return this->name$;
}

$String* SSLHandshake::nameOf(int8_t id) {
	$init(SSLHandshake);
	$useLocalObjectStack();
	{
		$var($SSLHandshakeArray, arr$, SSLHandshake::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			SSLHandshake* hs = arr$->get(i$);
			if ($nc(hs)->id == id) {
				return hs->name$;
			}
		}
	}
	return $str({"UNKNOWN-HANDSHAKE-MESSAGE("_s, $$str(id), ")"_s});
}

bool SSLHandshake::isKnown(int8_t id) {
	$init(SSLHandshake);
	$var($SSLHandshakeArray, arr$, SSLHandshake::values());
	for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
		SSLHandshake* hs = arr$->get(i$);
		if ($nc(hs)->id == id && id != SSLHandshake::NOT_APPLICABLE->id) {
			return true;
		}
	}
	return false;
}

void SSLHandshake::kickstart($HandshakeContext* context) {
	$init(SSLHandshake);
	if ($instanceOf($ClientHandshakeContext, context)) {
		if ($nc(context->conContext)->isNegotiated && $nc(context->conContext->protocolVersion)->useTLS13PlusSpec()) {
			$init($KeyUpdate);
			$nc($KeyUpdate::kickstartProducer)->produce(context);
		} else {
			$init($ClientHello);
			$nc($ClientHello::kickstartProducer)->produce(context);
		}
	} else if ($nc($nc($nc(context)->conContext)->protocolVersion)->useTLS13PlusSpec()) {
		$init($KeyUpdate);
		$nc($KeyUpdate::kickstartProducer)->produce(context);
	} else {
		$init($HelloRequest);
		$nc($HelloRequest::kickstartProducer)->produce(context);
	}
}

void SSLHandshake::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$var($String, var$0, "HELLO_REQUEST"_s);
	$var($String, var$1, "hello_request"_s);
	$init($HelloRequest);
	$init($ProtocolVersion);
	$var($Map$EntryArray, var$2, ($new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $HelloRequest::handshakeConsumer, $ProtocolVersion::PROTOCOLS_TO_12)})));
	$assignStatic(SSLHandshake::HELLO_REQUEST, $new(SSLHandshake, var$0, 0, (int8_t)0, var$1, var$2, ($$new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $HelloRequest::handshakeProducer, $ProtocolVersion::PROTOCOLS_TO_12)}))));
	$var($String, var$3, "CLIENT_HELLO"_s);
	$var($String, var$4, "client_hello"_s);
	$init($ClientHello);
	$var($Map$EntryArray, var$5, ($new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $ClientHello::handshakeConsumer, $ProtocolVersion::PROTOCOLS_TO_13)})));
	$assignStatic(SSLHandshake::CLIENT_HELLO, $new(SSLHandshake, var$3, 1, (int8_t)1, var$4, var$5, ($$new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $ClientHello::handshakeProducer, $ProtocolVersion::PROTOCOLS_TO_13)}))));
	$var($String, var$6, "SERVER_HELLO"_s);
	$var($String, var$7, "server_hello"_s);
	$init($ServerHello);
	$var($Map$EntryArray, var$8, ($new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $ServerHello::handshakeConsumer, $ProtocolVersion::PROTOCOLS_TO_13)})));
	$assignStatic(SSLHandshake::SERVER_HELLO, $new(SSLHandshake, var$6, 2, (int8_t)2, var$7, var$8, ($$new($Map$EntryArray, {
		$$new($AbstractMap$SimpleImmutableEntry, $ServerHello::t12HandshakeProducer, $ProtocolVersion::PROTOCOLS_TO_12),
		$$new($AbstractMap$SimpleImmutableEntry, $ServerHello::t13HandshakeProducer, $ProtocolVersion::PROTOCOLS_OF_13)
	}))));
	$var($String, var$9, "HELLO_RETRY_REQUEST"_s);
	$var($String, var$10, "hello_retry_request"_s);
	$var($Map$EntryArray, var$11, ($new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $ServerHello::handshakeConsumer, $ProtocolVersion::PROTOCOLS_TO_13)})));
	$assignStatic(SSLHandshake::HELLO_RETRY_REQUEST, $new(SSLHandshake, var$9, 3, (int8_t)2, var$10, var$11, ($$new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $ServerHello::hrrHandshakeProducer, $ProtocolVersion::PROTOCOLS_OF_13)}))));
	$var($String, var$12, "HELLO_VERIFY_REQUEST"_s);
	$var($String, var$13, "hello_verify_request"_s);
	$init($HelloVerifyRequest);
	$var($Map$EntryArray, var$14, ($new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $HelloVerifyRequest::handshakeConsumer, $ProtocolVersion::PROTOCOLS_TO_12)})));
	$assignStatic(SSLHandshake::HELLO_VERIFY_REQUEST, $new(SSLHandshake, var$12, 4, (int8_t)3, var$13, var$14, ($$new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $HelloVerifyRequest::handshakeProducer, $ProtocolVersion::PROTOCOLS_TO_12)}))));
	$var($String, var$15, "NEW_SESSION_TICKET"_s);
	$var($String, var$16, "new_session_ticket"_s);
	$init($NewSessionTicket);
	$var($Map$EntryArray, var$17, ($new($Map$EntryArray, {
		$$new($AbstractMap$SimpleImmutableEntry, $NewSessionTicket::handshake12Consumer, $ProtocolVersion::PROTOCOLS_TO_12),
		$$new($AbstractMap$SimpleImmutableEntry, $NewSessionTicket::handshakeConsumer, $ProtocolVersion::PROTOCOLS_OF_13)
	})));
	$assignStatic(SSLHandshake::NEW_SESSION_TICKET, $new(SSLHandshake, var$15, 5, (int8_t)4, var$16, var$17, ($$new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $NewSessionTicket::handshake12Producer, $ProtocolVersion::PROTOCOLS_TO_12)}))));
	$assignStatic(SSLHandshake::END_OF_EARLY_DATA, $new(SSLHandshake, "END_OF_EARLY_DATA"_s, 6, (int8_t)5, "end_of_early_data"_s));
	$var($String, var$18, "ENCRYPTED_EXTENSIONS"_s);
	$var($String, var$19, "encrypted_extensions"_s);
	$init($EncryptedExtensions);
	$var($Map$EntryArray, var$20, ($new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $EncryptedExtensions::handshakeConsumer, $ProtocolVersion::PROTOCOLS_OF_13)})));
	$assignStatic(SSLHandshake::ENCRYPTED_EXTENSIONS, $new(SSLHandshake, var$18, 7, (int8_t)8, var$19, var$20, ($$new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $EncryptedExtensions::handshakeProducer, $ProtocolVersion::PROTOCOLS_OF_13)}))));
	$var($String, var$21, "CERTIFICATE"_s);
	$var($String, var$22, "certificate"_s);
	$init($CertificateMessage);
	$var($Map$EntryArray, var$23, ($new($Map$EntryArray, {
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateMessage::t12HandshakeConsumer, $ProtocolVersion::PROTOCOLS_TO_12),
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateMessage::t13HandshakeConsumer, $ProtocolVersion::PROTOCOLS_OF_13)
	})));
	$assignStatic(SSLHandshake::CERTIFICATE, $new(SSLHandshake, var$21, 8, (int8_t)11, var$22, var$23, ($$new($Map$EntryArray, {
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateMessage::t12HandshakeProducer, $ProtocolVersion::PROTOCOLS_TO_12),
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateMessage::t13HandshakeProducer, $ProtocolVersion::PROTOCOLS_OF_13)
	}))));
	$var($String, var$24, "SERVER_KEY_EXCHANGE"_s);
	$var($String, var$25, "server_key_exchange"_s);
	$init($ServerKeyExchange);
	$var($Map$EntryArray, var$26, ($new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $ServerKeyExchange::handshakeConsumer, $ProtocolVersion::PROTOCOLS_TO_12)})));
	$assignStatic(SSLHandshake::SERVER_KEY_EXCHANGE, $new(SSLHandshake, var$24, 9, (int8_t)12, var$25, var$26, ($$new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $ServerKeyExchange::handshakeProducer, $ProtocolVersion::PROTOCOLS_TO_12)}))));
	$var($String, var$27, "CERTIFICATE_REQUEST"_s);
	$var($String, var$28, "certificate_request"_s);
	$init($CertificateRequest);
	$var($Map$EntryArray, var$29, ($new($Map$EntryArray, {
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateRequest::t10HandshakeConsumer, $ProtocolVersion::PROTOCOLS_TO_11),
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateRequest::t12HandshakeConsumer, $ProtocolVersion::PROTOCOLS_OF_12),
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateRequest::t13HandshakeConsumer, $ProtocolVersion::PROTOCOLS_OF_13)
	})));
	$assignStatic(SSLHandshake::CERTIFICATE_REQUEST, $new(SSLHandshake, var$27, 10, (int8_t)13, var$28, var$29, ($$new($Map$EntryArray, {
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateRequest::t10HandshakeProducer, $ProtocolVersion::PROTOCOLS_TO_11),
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateRequest::t12HandshakeProducer, $ProtocolVersion::PROTOCOLS_OF_12),
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateRequest::t13HandshakeProducer, $ProtocolVersion::PROTOCOLS_OF_13)
	}))));
	$var($String, var$30, "SERVER_HELLO_DONE"_s);
	$var($String, var$31, "server_hello_done"_s);
	$init($ServerHelloDone);
	$var($Map$EntryArray, var$32, ($new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $ServerHelloDone::handshakeConsumer, $ProtocolVersion::PROTOCOLS_TO_12)})));
	$assignStatic(SSLHandshake::SERVER_HELLO_DONE, $new(SSLHandshake, var$30, 11, (int8_t)14, var$31, var$32, ($$new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $ServerHelloDone::handshakeProducer, $ProtocolVersion::PROTOCOLS_TO_12)}))));
	$var($String, var$33, "CERTIFICATE_VERIFY"_s);
	$var($String, var$34, "certificate_verify"_s);
	$init($CertificateVerify);
	$var($Map$EntryArray, var$35, ($new($Map$EntryArray, {
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateVerify::s30HandshakeConsumer, $ProtocolVersion::PROTOCOLS_OF_30),
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateVerify::t10HandshakeConsumer, $ProtocolVersion::PROTOCOLS_10_11),
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateVerify::t12HandshakeConsumer, $ProtocolVersion::PROTOCOLS_OF_12),
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateVerify::t13HandshakeConsumer, $ProtocolVersion::PROTOCOLS_OF_13)
	})));
	$assignStatic(SSLHandshake::CERTIFICATE_VERIFY, $new(SSLHandshake, var$33, 12, (int8_t)15, var$34, var$35, ($$new($Map$EntryArray, {
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateVerify::s30HandshakeProducer, $ProtocolVersion::PROTOCOLS_OF_30),
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateVerify::t10HandshakeProducer, $ProtocolVersion::PROTOCOLS_10_11),
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateVerify::t12HandshakeProducer, $ProtocolVersion::PROTOCOLS_OF_12),
		$$new($AbstractMap$SimpleImmutableEntry, $CertificateVerify::t13HandshakeProducer, $ProtocolVersion::PROTOCOLS_OF_13)
	}))));
	$var($String, var$36, "CLIENT_KEY_EXCHANGE"_s);
	$var($String, var$37, "client_key_exchange"_s);
	$init($ClientKeyExchange);
	$var($Map$EntryArray, var$38, ($new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $ClientKeyExchange::handshakeConsumer, $ProtocolVersion::PROTOCOLS_TO_12)})));
	$assignStatic(SSLHandshake::CLIENT_KEY_EXCHANGE, $new(SSLHandshake, var$36, 13, (int8_t)16, var$37, var$38, ($$new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $ClientKeyExchange::handshakeProducer, $ProtocolVersion::PROTOCOLS_TO_12)}))));
	$var($String, var$39, "FINISHED"_s);
	$var($String, var$40, "finished"_s);
	$init($Finished);
	$var($Map$EntryArray, var$41, ($new($Map$EntryArray, {
		$$new($AbstractMap$SimpleImmutableEntry, $Finished::t12HandshakeConsumer, $ProtocolVersion::PROTOCOLS_TO_12),
		$$new($AbstractMap$SimpleImmutableEntry, $Finished::t13HandshakeConsumer, $ProtocolVersion::PROTOCOLS_OF_13)
	})));
	$assignStatic(SSLHandshake::FINISHED, $new(SSLHandshake, var$39, 14, (int8_t)20, var$40, var$41, ($$new($Map$EntryArray, {
		$$new($AbstractMap$SimpleImmutableEntry, $Finished::t12HandshakeProducer, $ProtocolVersion::PROTOCOLS_TO_12),
		$$new($AbstractMap$SimpleImmutableEntry, $Finished::t13HandshakeProducer, $ProtocolVersion::PROTOCOLS_OF_13)
	}))));
	$assignStatic(SSLHandshake::CERTIFICATE_URL, $new(SSLHandshake, "CERTIFICATE_URL"_s, 15, (int8_t)21, "certificate_url"_s));
	$var($String, var$42, "CERTIFICATE_STATUS"_s);
	$var($String, var$43, "certificate_status"_s);
	$init($CertificateStatus);
	$var($Map$EntryArray, var$44, ($new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $CertificateStatus::handshakeConsumer, $ProtocolVersion::PROTOCOLS_TO_12)})));
	$var($Map$EntryArray, var$45, ($new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $CertificateStatus::handshakeProducer, $ProtocolVersion::PROTOCOLS_TO_12)})));
	$assignStatic(SSLHandshake::CERTIFICATE_STATUS, $new(SSLHandshake, var$42, 16, (int8_t)22, var$43, var$44, var$45, ($$new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $CertificateStatus::handshakeAbsence, $ProtocolVersion::PROTOCOLS_TO_12)}))));
	$assignStatic(SSLHandshake::SUPPLEMENTAL_DATA, $new(SSLHandshake, "SUPPLEMENTAL_DATA"_s, 17, (int8_t)23, "supplemental_data"_s));
	$var($String, var$46, "KEY_UPDATE"_s);
	$var($String, var$47, "key_update"_s);
	$init($KeyUpdate);
	$var($Map$EntryArray, var$48, ($new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $KeyUpdate::handshakeConsumer, $ProtocolVersion::PROTOCOLS_OF_13)})));
	$assignStatic(SSLHandshake::KEY_UPDATE, $new(SSLHandshake, var$46, 18, (int8_t)24, var$47, var$48, ($$new($Map$EntryArray, {$$new($AbstractMap$SimpleImmutableEntry, $KeyUpdate::handshakeProducer, $ProtocolVersion::PROTOCOLS_OF_13)}))));
	$assignStatic(SSLHandshake::MESSAGE_HASH, $new(SSLHandshake, "MESSAGE_HASH"_s, 19, (int8_t)254, "message_hash"_s));
	$assignStatic(SSLHandshake::NOT_APPLICABLE, $new(SSLHandshake, "NOT_APPLICABLE"_s, 20, (int8_t)255, "not_applicable"_s));
	$assignStatic(SSLHandshake::$VALUES, SSLHandshake::$values());
}

SSLHandshake::SSLHandshake() {
}

$Class* SSLHandshake::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"HELLO_REQUEST", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, HELLO_REQUEST)},
		{"CLIENT_HELLO", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, CLIENT_HELLO)},
		{"SERVER_HELLO", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, SERVER_HELLO)},
		{"HELLO_RETRY_REQUEST", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, HELLO_RETRY_REQUEST)},
		{"HELLO_VERIFY_REQUEST", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, HELLO_VERIFY_REQUEST)},
		{"NEW_SESSION_TICKET", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, NEW_SESSION_TICKET)},
		{"END_OF_EARLY_DATA", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, END_OF_EARLY_DATA)},
		{"ENCRYPTED_EXTENSIONS", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, ENCRYPTED_EXTENSIONS)},
		{"CERTIFICATE", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, CERTIFICATE)},
		{"SERVER_KEY_EXCHANGE", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, SERVER_KEY_EXCHANGE)},
		{"CERTIFICATE_REQUEST", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, CERTIFICATE_REQUEST)},
		{"SERVER_HELLO_DONE", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, SERVER_HELLO_DONE)},
		{"CERTIFICATE_VERIFY", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, CERTIFICATE_VERIFY)},
		{"CLIENT_KEY_EXCHANGE", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, CLIENT_KEY_EXCHANGE)},
		{"FINISHED", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, FINISHED)},
		{"CERTIFICATE_URL", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, CERTIFICATE_URL)},
		{"CERTIFICATE_STATUS", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, CERTIFICATE_STATUS)},
		{"SUPPLEMENTAL_DATA", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, SUPPLEMENTAL_DATA)},
		{"KEY_UPDATE", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, KEY_UPDATE)},
		{"MESSAGE_HASH", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, MESSAGE_HASH)},
		{"NOT_APPLICABLE", "Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLHandshake, NOT_APPLICABLE)},
		{"$VALUES", "[Lsun/security/ssl/SSLHandshake;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLHandshake, $VALUES)},
		{"id", "B", nullptr, $FINAL, $field(SSLHandshake, id)},
		{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(SSLHandshake, name$)},
		{"handshakeConsumers", "[Ljava/util/Map$Entry;", "[Ljava/util/Map$Entry<Lsun/security/ssl/SSLConsumer;[Lsun/security/ssl/ProtocolVersion;>;", $FINAL, $field(SSLHandshake, handshakeConsumers)},
		{"handshakeProducers", "[Ljava/util/Map$Entry;", "[Ljava/util/Map$Entry<Lsun/security/ssl/HandshakeProducer;[Lsun/security/ssl/ProtocolVersion;>;", $FINAL, $field(SSLHandshake, handshakeProducers)},
		{"handshakeAbsences", "[Ljava/util/Map$Entry;", "[Ljava/util/Map$Entry<Lsun/security/ssl/HandshakeAbsence;[Lsun/security/ssl/ProtocolVersion;>;", $FINAL, $field(SSLHandshake, handshakeAbsences)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/security/ssl/SSLHandshake;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SSLHandshake, $values, $SSLHandshakeArray*)},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
		{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
		{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
		{"<init>", "(Ljava/lang/String;IBLjava/lang/String;)V", "(BLjava/lang/String;)V", $PRIVATE, $method(SSLHandshake, init$, void, $String*, int32_t, int8_t, $String*)},
		{"<init>", "(Ljava/lang/String;IBLjava/lang/String;[Ljava/util/Map$Entry;[Ljava/util/Map$Entry;)V", "(BLjava/lang/String;[Ljava/util/Map$Entry<Lsun/security/ssl/SSLConsumer;[Lsun/security/ssl/ProtocolVersion;>;[Ljava/util/Map$Entry<Lsun/security/ssl/HandshakeProducer;[Lsun/security/ssl/ProtocolVersion;>;)V", $PRIVATE, $method(SSLHandshake, init$, void, $String*, int32_t, int8_t, $String*, $Map$EntryArray*, $Map$EntryArray*)},
		{"<init>", "(Ljava/lang/String;IBLjava/lang/String;[Ljava/util/Map$Entry;[Ljava/util/Map$Entry;[Ljava/util/Map$Entry;)V", "(BLjava/lang/String;[Ljava/util/Map$Entry<Lsun/security/ssl/SSLConsumer;[Lsun/security/ssl/ProtocolVersion;>;[Ljava/util/Map$Entry<Lsun/security/ssl/HandshakeProducer;[Lsun/security/ssl/ProtocolVersion;>;[Ljava/util/Map$Entry<Lsun/security/ssl/HandshakeAbsence;[Lsun/security/ssl/ProtocolVersion;>;)V", $PRIVATE, $method(SSLHandshake, init$, void, $String*, int32_t, int8_t, $String*, $Map$EntryArray*, $Map$EntryArray*, $Map$EntryArray*)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(SSLHandshake, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
		{"getHandshakeConsumer", "(Lsun/security/ssl/ConnectionContext;)Lsun/security/ssl/SSLConsumer;", nullptr, $PRIVATE, $method(SSLHandshake, getHandshakeConsumer, $SSLConsumer*, $ConnectionContext*)},
		{"getHandshakeProducer", "(Lsun/security/ssl/ConnectionContext;)Lsun/security/ssl/HandshakeProducer;", nullptr, $PRIVATE, $method(SSLHandshake, getHandshakeProducer, $HandshakeProducer*, $ConnectionContext*)},
		{"isKnown", "(B)Z", nullptr, $STATIC, $staticMethod(SSLHandshake, isKnown, bool, int8_t)},
		{"kickstart", "(Lsun/security/ssl/HandshakeContext;)V", nullptr, $STATIC | $FINAL, $staticMethod(SSLHandshake, kickstart, void, $HandshakeContext*), "java.io.IOException"},
		{"nameOf", "(B)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(SSLHandshake, nameOf, $String*, int8_t)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(SSLHandshake, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SSLHandshake, toString, $String*)},
		{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC, $staticMethod(SSLHandshake, valueOf, SSLHandshake*, $String*)},
		{"values", "()[Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC | $STATIC, $staticMethod(SSLHandshake, values, $SSLHandshakeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"sun.security.ssl.SSLHandshake",
		"java.lang.Enum",
		"sun.security.ssl.SSLConsumer,sun.security.ssl.HandshakeProducer",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/security/ssl/SSLHandshake;>;Lsun/security/ssl/SSLConsumer;Lsun/security/ssl/HandshakeProducer;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLHandshake$HandshakeMessage"
	};
	$loadClass(SSLHandshake, name, initialize, &classInfo$$, SSLHandshake::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SSLHandshake));
	});
	return class$;
}

$Class* SSLHandshake::class$ = nullptr;

		} // ssl
	} // security
} // sun