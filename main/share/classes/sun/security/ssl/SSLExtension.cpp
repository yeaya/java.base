#include <sun/security/ssl/SSLExtension.h>

#include <java/lang/Enum.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/ssl/AlpnExtension.h>
#include <sun/security/ssl/CertSignAlgsExtension.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/CookieExtension$CookieStringizer.h>
#include <sun/security/ssl/CookieExtension.h>
#include <sun/security/ssl/ECPointFormatsExtension.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension.h>
#include <sun/security/ssl/HandshakeAbsence.h>
#include <sun/security/ssl/HandshakeConsumer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/KeyShareExtension.h>
#include <sun/security/ssl/MaxFragExtension.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension.h>
#include <sun/security/ssl/RenegoInfoExtension.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <sun/security/ssl/ServerNameExtension.h>
#include <sun/security/ssl/SessionTicketExtension.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension.h>
#include <sun/security/ssl/SupportedGroupsExtension.h>
#include <sun/security/ssl/SupportedVersionsExtension.h>
#include <sun/security/ssl/Utilities.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef CACHED_INFO
#undef CERTIFICATE
#undef CERTIFICATE_REQUEST
#undef CERT_TYPE
#undef CH_ALPN
#undef CH_CERTIFICATE_AUTHORITIES
#undef CH_COOKIE
#undef CH_EARLY_DATA
#undef CH_EC_POINT_FORMATS
#undef CH_EXTENDED_MASTER_SECRET
#undef CH_KEY_SHARE
#undef CH_MAX_FRAGMENT_LENGTH
#undef CH_PRE_SHARED_KEY
#undef CH_RENEGOTIATION_INFO
#undef CH_SERVER_NAME
#undef CH_SESSION_TICKET
#undef CH_SIGNATURE_ALGORITHMS
#undef CH_SIGNATURE_ALGORITHMS_CERT
#undef CH_STATUS_REQUEST
#undef CH_STATUS_REQUEST_V2
#undef CH_SUPPORTED_GROUPS
#undef CH_SUPPORTED_VERSIONS
#undef CLIENT_AUTHZ
#undef CLIENT_CERTIFICATE_URL
#undef CLIENT_CERT_TYPE
#undef CLIENT_HELLO
#undef CR_CERTIFICATE_AUTHORITIES
#undef CR_SIGNATURE_ALGORITHMS
#undef CR_SIGNATURE_ALGORITHMS_CERT
#undef CR_STATUS_REQUEST
#undef CT_STATUS_REQUEST
#undef EE_ALPN
#undef EE_EARLY_DATA
#undef EE_MAX_FRAGMENT_LENGTH
#undef EE_SERVER_NAME
#undef EE_SUPPORTED_GROUPS
#undef ENCRYPTED_EXTENSIONS
#undef ENCRYPT_THEN_MAC
#undef ENGLISH
#undef HEARTBEAT
#undef HELLO_RETRY_REQUEST
#undef HRR_COOKIE
#undef HRR_KEY_SHARE
#undef HRR_SUPPORTED_VERSIONS
#undef MESSAGE_HASH
#undef MH_COOKIE
#undef MH_KEY_SHARE
#undef MH_SUPPORTED_VERSIONS
#undef NOT_APPLICABLE
#undef NST_EARLY_DATA
#undef OID_FILTERS
#undef PADDING
#undef POST_HANDSHAKE_AUTH
#undef PROTOCOLS_OF_13
#undef PROTOCOLS_TO_12
#undef PROTOCOLS_TO_13
#undef PSK_KEY_EXCHANGE_MODES
#undef SERVER_AUTHZ
#undef SERVER_CERT_TYPE
#undef SERVER_HELLO
#undef SH_ALPN
#undef SH_EC_POINT_FORMATS
#undef SH_EXTENDED_MASTER_SECRET
#undef SH_KEY_SHARE
#undef SH_MAX_FRAGMENT_LENGTH
#undef SH_PRE_SHARED_KEY
#undef SH_RENEGOTIATION_INFO
#undef SH_SERVER_NAME
#undef SH_SESSION_TICKET
#undef SH_STATUS_REQUEST
#undef SH_STATUS_REQUEST_V2
#undef SH_SUPPORTED_VERSIONS
#undef SIGNED_CERT_TIMESTAMP
#undef SRP
#undef TOKEN_BINDING
#undef TRUNCATED_HMAC
#undef TRUSTED_CA_KEYS
#undef USER_MAPPING
#undef USE_SRTP

using $ProtocolVersionArray = $Array<::sun::security::ssl::ProtocolVersion>;
using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MessageFormat = ::java::text::MessageFormat;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Locale = ::java::util::Locale;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $AlpnExtension = ::sun::security::ssl::AlpnExtension;
using $CertSignAlgsExtension = ::sun::security::ssl::CertSignAlgsExtension;
using $CertStatusExtension = ::sun::security::ssl::CertStatusExtension;
using $CertificateAuthoritiesExtension = ::sun::security::ssl::CertificateAuthoritiesExtension;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $CookieExtension = ::sun::security::ssl::CookieExtension;
using $ECPointFormatsExtension = ::sun::security::ssl::ECPointFormatsExtension;
using $ExtendedMasterSecretExtension = ::sun::security::ssl::ExtendedMasterSecretExtension;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeConsumer = ::sun::security::ssl::HandshakeConsumer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $KeyShareExtension = ::sun::security::ssl::KeyShareExtension;
using $MaxFragExtension = ::sun::security::ssl::MaxFragExtension;
using $PreSharedKeyExtension = ::sun::security::ssl::PreSharedKeyExtension;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $PskKeyExchangeModesExtension = ::sun::security::ssl::PskKeyExchangeModesExtension;
using $RenegoInfoExtension = ::sun::security::ssl::RenegoInfoExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;
using $ServerNameExtension = ::sun::security::ssl::ServerNameExtension;
using $SessionTicketExtension = ::sun::security::ssl::SessionTicketExtension;
using $SignatureAlgorithmsExtension = ::sun::security::ssl::SignatureAlgorithmsExtension;
using $SupportedGroupsExtension = ::sun::security::ssl::SupportedGroupsExtension;
using $SupportedVersionsExtension = ::sun::security::ssl::SupportedVersionsExtension;
using $Utilities = ::sun::security::ssl::Utilities;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLExtension_FieldInfo_[] = {
	{"CH_SERVER_NAME", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_SERVER_NAME)},
	{"SH_SERVER_NAME", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SH_SERVER_NAME)},
	{"EE_SERVER_NAME", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, EE_SERVER_NAME)},
	{"CH_MAX_FRAGMENT_LENGTH", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_MAX_FRAGMENT_LENGTH)},
	{"SH_MAX_FRAGMENT_LENGTH", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SH_MAX_FRAGMENT_LENGTH)},
	{"EE_MAX_FRAGMENT_LENGTH", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, EE_MAX_FRAGMENT_LENGTH)},
	{"CLIENT_CERTIFICATE_URL", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CLIENT_CERTIFICATE_URL)},
	{"TRUSTED_CA_KEYS", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, TRUSTED_CA_KEYS)},
	{"TRUNCATED_HMAC", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, TRUNCATED_HMAC)},
	{"CH_STATUS_REQUEST", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_STATUS_REQUEST)},
	{"SH_STATUS_REQUEST", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SH_STATUS_REQUEST)},
	{"CR_STATUS_REQUEST", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CR_STATUS_REQUEST)},
	{"CT_STATUS_REQUEST", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CT_STATUS_REQUEST)},
	{"USER_MAPPING", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, USER_MAPPING)},
	{"CLIENT_AUTHZ", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CLIENT_AUTHZ)},
	{"SERVER_AUTHZ", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SERVER_AUTHZ)},
	{"CERT_TYPE", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CERT_TYPE)},
	{"CH_SUPPORTED_GROUPS", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_SUPPORTED_GROUPS)},
	{"EE_SUPPORTED_GROUPS", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, EE_SUPPORTED_GROUPS)},
	{"CH_EC_POINT_FORMATS", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_EC_POINT_FORMATS)},
	{"SH_EC_POINT_FORMATS", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SH_EC_POINT_FORMATS)},
	{"SRP", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SRP)},
	{"USE_SRTP", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, USE_SRTP)},
	{"HEARTBEAT", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, HEARTBEAT)},
	{"CH_ALPN", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_ALPN)},
	{"SH_ALPN", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SH_ALPN)},
	{"EE_ALPN", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, EE_ALPN)},
	{"CH_STATUS_REQUEST_V2", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_STATUS_REQUEST_V2)},
	{"SH_STATUS_REQUEST_V2", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SH_STATUS_REQUEST_V2)},
	{"SIGNED_CERT_TIMESTAMP", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SIGNED_CERT_TIMESTAMP)},
	{"CLIENT_CERT_TYPE", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CLIENT_CERT_TYPE)},
	{"SERVER_CERT_TYPE", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SERVER_CERT_TYPE)},
	{"PADDING", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, PADDING)},
	{"ENCRYPT_THEN_MAC", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, ENCRYPT_THEN_MAC)},
	{"CH_EXTENDED_MASTER_SECRET", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_EXTENDED_MASTER_SECRET)},
	{"SH_EXTENDED_MASTER_SECRET", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SH_EXTENDED_MASTER_SECRET)},
	{"TOKEN_BINDING", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, TOKEN_BINDING)},
	{"CACHED_INFO", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CACHED_INFO)},
	{"CH_SESSION_TICKET", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_SESSION_TICKET)},
	{"SH_SESSION_TICKET", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SH_SESSION_TICKET)},
	{"CH_SIGNATURE_ALGORITHMS", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_SIGNATURE_ALGORITHMS)},
	{"CR_SIGNATURE_ALGORITHMS", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CR_SIGNATURE_ALGORITHMS)},
	{"CH_EARLY_DATA", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_EARLY_DATA)},
	{"EE_EARLY_DATA", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, EE_EARLY_DATA)},
	{"NST_EARLY_DATA", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, NST_EARLY_DATA)},
	{"CH_SUPPORTED_VERSIONS", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_SUPPORTED_VERSIONS)},
	{"SH_SUPPORTED_VERSIONS", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SH_SUPPORTED_VERSIONS)},
	{"HRR_SUPPORTED_VERSIONS", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, HRR_SUPPORTED_VERSIONS)},
	{"MH_SUPPORTED_VERSIONS", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, MH_SUPPORTED_VERSIONS)},
	{"CH_COOKIE", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_COOKIE)},
	{"HRR_COOKIE", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, HRR_COOKIE)},
	{"MH_COOKIE", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, MH_COOKIE)},
	{"PSK_KEY_EXCHANGE_MODES", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, PSK_KEY_EXCHANGE_MODES)},
	{"CH_CERTIFICATE_AUTHORITIES", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_CERTIFICATE_AUTHORITIES)},
	{"CR_CERTIFICATE_AUTHORITIES", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CR_CERTIFICATE_AUTHORITIES)},
	{"OID_FILTERS", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, OID_FILTERS)},
	{"POST_HANDSHAKE_AUTH", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, POST_HANDSHAKE_AUTH)},
	{"CH_SIGNATURE_ALGORITHMS_CERT", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_SIGNATURE_ALGORITHMS_CERT)},
	{"CR_SIGNATURE_ALGORITHMS_CERT", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CR_SIGNATURE_ALGORITHMS_CERT)},
	{"CH_KEY_SHARE", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_KEY_SHARE)},
	{"SH_KEY_SHARE", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SH_KEY_SHARE)},
	{"HRR_KEY_SHARE", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, HRR_KEY_SHARE)},
	{"MH_KEY_SHARE", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, MH_KEY_SHARE)},
	{"CH_RENEGOTIATION_INFO", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_RENEGOTIATION_INFO)},
	{"SH_RENEGOTIATION_INFO", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SH_RENEGOTIATION_INFO)},
	{"CH_PRE_SHARED_KEY", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, CH_PRE_SHARED_KEY)},
	{"SH_PRE_SHARED_KEY", "Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLExtension, SH_PRE_SHARED_KEY)},
	{"$VALUES", "[Lsun/security/ssl/SSLExtension;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLExtension, $VALUES)},
	{"id", "I", nullptr, $FINAL, $field(SSLExtension, id)},
	{"handshakeType", "Lsun/security/ssl/SSLHandshake;", nullptr, $FINAL, $field(SSLExtension, handshakeType)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(SSLExtension, name$)},
	{"supportedProtocols", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $FINAL, $field(SSLExtension, supportedProtocols)},
	{"networkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $FINAL, $field(SSLExtension, networkProducer)},
	{"onLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $FINAL, $field(SSLExtension, onLoadConsumer)},
	{"onLoadAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $FINAL, $field(SSLExtension, onLoadAbsence)},
	{"onTradeConsumer", "Lsun/security/ssl/HandshakeConsumer;", nullptr, $FINAL, $field(SSLExtension, onTradeConsumer)},
	{"onTradeAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $FINAL, $field(SSLExtension, onTradeAbsence)},
	{"stringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $FINAL, $field(SSLExtension, stringizer)},
	{}
};

$MethodInfo _SSLExtension_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/SSLExtension;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SSLExtension, $values, $SSLExtensionArray*)},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;IILjava/lang/String;)V", "(ILjava/lang/String;)V", $PRIVATE, $method(SSLExtension, init$, void, $String*, int32_t, int32_t, $String*)},
	{"<init>", "(Ljava/lang/String;IILjava/lang/String;Lsun/security/ssl/SSLHandshake;[Lsun/security/ssl/ProtocolVersion;Lsun/security/ssl/HandshakeProducer;Lsun/security/ssl/SSLExtension$ExtensionConsumer;Lsun/security/ssl/HandshakeAbsence;Lsun/security/ssl/HandshakeConsumer;Lsun/security/ssl/HandshakeAbsence;Lsun/security/ssl/SSLStringizer;)V", "(ILjava/lang/String;Lsun/security/ssl/SSLHandshake;[Lsun/security/ssl/ProtocolVersion;Lsun/security/ssl/HandshakeProducer;Lsun/security/ssl/SSLExtension$ExtensionConsumer;Lsun/security/ssl/HandshakeAbsence;Lsun/security/ssl/HandshakeConsumer;Lsun/security/ssl/HandshakeAbsence;Lsun/security/ssl/SSLStringizer;)V", $PRIVATE, $method(SSLExtension, init$, void, $String*, int32_t, int32_t, $String*, $SSLHandshake*, $ProtocolVersionArray*, $HandshakeProducer*, $SSLExtension$ExtensionConsumer*, $HandshakeAbsence*, $HandshakeConsumer*, $HandshakeAbsence*, $SSLStringizer*)},
	{"absentOnLoad", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, 0, $method(SSLExtension, absentOnLoad, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{"absentOnTrade", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, 0, $method(SSLExtension, absentOnTrade, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{"consumeOnLoad", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(SSLExtension, consumeOnLoad, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
	{"consumeOnTrade", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $method(SSLExtension, consumeOnTrade, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{"getDisabledExtensions", "(Ljava/lang/String;)Ljava/util/Collection;", "(Ljava/lang/String;)Ljava/util/Collection<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticMethod(SSLExtension, getDisabledExtensions, $Collection*, $String*)},
	{"isAvailable", "(Lsun/security/ssl/ProtocolVersion;)Z", nullptr, $PUBLIC, $method(SSLExtension, isAvailable, bool, $ProtocolVersion*)},
	{"isConsumable", "(I)Z", nullptr, $STATIC, $staticMethod(SSLExtension, isConsumable, bool, int32_t)},
	{"nameOf", "(I)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(SSLExtension, nameOf, $String*, int32_t)},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $method(SSLExtension, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SSLExtension, toString, $String*)},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SSLExtension, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC, $staticMethod(SSLExtension, valueOf, SSLExtension*, $String*)},
	{"valueOf", "(Lsun/security/ssl/SSLHandshake;I)Lsun/security/ssl/SSLExtension;", nullptr, $STATIC, $staticMethod(SSLExtension, valueOf, SSLExtension*, $SSLHandshake*, int32_t)},
	{"values", "()[Lsun/security/ssl/SSLExtension;", nullptr, $PUBLIC | $STATIC, $staticMethod(SSLExtension, values, $SSLExtensionArray*)},
	{}
};

$InnerClassInfo _SSLExtension_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLExtension$ServerExtensions", "sun.security.ssl.SSLExtension", "ServerExtensions", $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ClientExtensions", "sun.security.ssl.SSLExtension", "ClientExtensions", $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SSLExtension_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.SSLExtension",
	"java.lang.Enum",
	"sun.security.ssl.SSLStringizer",
	_SSLExtension_FieldInfo_,
	_SSLExtension_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/SSLExtension;>;Lsun/security/ssl/SSLStringizer;",
	nullptr,
	_SSLExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLExtension$ServerExtensions,sun.security.ssl.SSLExtension$ClientExtensions,sun.security.ssl.SSLExtension$SSLExtensionSpec,sun.security.ssl.SSLExtension$ExtensionConsumer"
};

$Object* allocate$SSLExtension($Class* clazz) {
	return $of($alloc(SSLExtension));
}

bool SSLExtension::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t SSLExtension::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* SSLExtension::clone() {
	 return this->$Enum::clone();
}

void SSLExtension::finalize() {
	this->$Enum::finalize();
}

SSLExtension* SSLExtension::CH_SERVER_NAME = nullptr;
SSLExtension* SSLExtension::SH_SERVER_NAME = nullptr;
SSLExtension* SSLExtension::EE_SERVER_NAME = nullptr;
SSLExtension* SSLExtension::CH_MAX_FRAGMENT_LENGTH = nullptr;
SSLExtension* SSLExtension::SH_MAX_FRAGMENT_LENGTH = nullptr;
SSLExtension* SSLExtension::EE_MAX_FRAGMENT_LENGTH = nullptr;
SSLExtension* SSLExtension::CLIENT_CERTIFICATE_URL = nullptr;
SSLExtension* SSLExtension::TRUSTED_CA_KEYS = nullptr;
SSLExtension* SSLExtension::TRUNCATED_HMAC = nullptr;
SSLExtension* SSLExtension::CH_STATUS_REQUEST = nullptr;
SSLExtension* SSLExtension::SH_STATUS_REQUEST = nullptr;
SSLExtension* SSLExtension::CR_STATUS_REQUEST = nullptr;
SSLExtension* SSLExtension::CT_STATUS_REQUEST = nullptr;
SSLExtension* SSLExtension::USER_MAPPING = nullptr;
SSLExtension* SSLExtension::CLIENT_AUTHZ = nullptr;
SSLExtension* SSLExtension::SERVER_AUTHZ = nullptr;
SSLExtension* SSLExtension::CERT_TYPE = nullptr;
SSLExtension* SSLExtension::CH_SUPPORTED_GROUPS = nullptr;
SSLExtension* SSLExtension::EE_SUPPORTED_GROUPS = nullptr;
SSLExtension* SSLExtension::CH_EC_POINT_FORMATS = nullptr;
SSLExtension* SSLExtension::SH_EC_POINT_FORMATS = nullptr;
SSLExtension* SSLExtension::SRP = nullptr;
SSLExtension* SSLExtension::USE_SRTP = nullptr;
SSLExtension* SSLExtension::HEARTBEAT = nullptr;
SSLExtension* SSLExtension::CH_ALPN = nullptr;
SSLExtension* SSLExtension::SH_ALPN = nullptr;
SSLExtension* SSLExtension::EE_ALPN = nullptr;
SSLExtension* SSLExtension::CH_STATUS_REQUEST_V2 = nullptr;
SSLExtension* SSLExtension::SH_STATUS_REQUEST_V2 = nullptr;
SSLExtension* SSLExtension::SIGNED_CERT_TIMESTAMP = nullptr;
SSLExtension* SSLExtension::CLIENT_CERT_TYPE = nullptr;
SSLExtension* SSLExtension::SERVER_CERT_TYPE = nullptr;
SSLExtension* SSLExtension::PADDING = nullptr;
SSLExtension* SSLExtension::ENCRYPT_THEN_MAC = nullptr;
SSLExtension* SSLExtension::CH_EXTENDED_MASTER_SECRET = nullptr;
SSLExtension* SSLExtension::SH_EXTENDED_MASTER_SECRET = nullptr;
SSLExtension* SSLExtension::TOKEN_BINDING = nullptr;
SSLExtension* SSLExtension::CACHED_INFO = nullptr;
SSLExtension* SSLExtension::CH_SESSION_TICKET = nullptr;
SSLExtension* SSLExtension::SH_SESSION_TICKET = nullptr;
SSLExtension* SSLExtension::CH_SIGNATURE_ALGORITHMS = nullptr;
SSLExtension* SSLExtension::CR_SIGNATURE_ALGORITHMS = nullptr;
SSLExtension* SSLExtension::CH_EARLY_DATA = nullptr;
SSLExtension* SSLExtension::EE_EARLY_DATA = nullptr;
SSLExtension* SSLExtension::NST_EARLY_DATA = nullptr;
SSLExtension* SSLExtension::CH_SUPPORTED_VERSIONS = nullptr;
SSLExtension* SSLExtension::SH_SUPPORTED_VERSIONS = nullptr;
SSLExtension* SSLExtension::HRR_SUPPORTED_VERSIONS = nullptr;
SSLExtension* SSLExtension::MH_SUPPORTED_VERSIONS = nullptr;
SSLExtension* SSLExtension::CH_COOKIE = nullptr;
SSLExtension* SSLExtension::HRR_COOKIE = nullptr;
SSLExtension* SSLExtension::MH_COOKIE = nullptr;
SSLExtension* SSLExtension::PSK_KEY_EXCHANGE_MODES = nullptr;
SSLExtension* SSLExtension::CH_CERTIFICATE_AUTHORITIES = nullptr;
SSLExtension* SSLExtension::CR_CERTIFICATE_AUTHORITIES = nullptr;
SSLExtension* SSLExtension::OID_FILTERS = nullptr;
SSLExtension* SSLExtension::POST_HANDSHAKE_AUTH = nullptr;
SSLExtension* SSLExtension::CH_SIGNATURE_ALGORITHMS_CERT = nullptr;
SSLExtension* SSLExtension::CR_SIGNATURE_ALGORITHMS_CERT = nullptr;
SSLExtension* SSLExtension::CH_KEY_SHARE = nullptr;
SSLExtension* SSLExtension::SH_KEY_SHARE = nullptr;
SSLExtension* SSLExtension::HRR_KEY_SHARE = nullptr;
SSLExtension* SSLExtension::MH_KEY_SHARE = nullptr;
SSLExtension* SSLExtension::CH_RENEGOTIATION_INFO = nullptr;
SSLExtension* SSLExtension::SH_RENEGOTIATION_INFO = nullptr;
SSLExtension* SSLExtension::CH_PRE_SHARED_KEY = nullptr;
SSLExtension* SSLExtension::SH_PRE_SHARED_KEY = nullptr;
$SSLExtensionArray* SSLExtension::$VALUES = nullptr;

$SSLExtensionArray* SSLExtension::$values() {
	$init(SSLExtension);
	return $new($SSLExtensionArray, {
		SSLExtension::CH_SERVER_NAME,
		SSLExtension::SH_SERVER_NAME,
		SSLExtension::EE_SERVER_NAME,
		SSLExtension::CH_MAX_FRAGMENT_LENGTH,
		SSLExtension::SH_MAX_FRAGMENT_LENGTH,
		SSLExtension::EE_MAX_FRAGMENT_LENGTH,
		SSLExtension::CLIENT_CERTIFICATE_URL,
		SSLExtension::TRUSTED_CA_KEYS,
		SSLExtension::TRUNCATED_HMAC,
		SSLExtension::CH_STATUS_REQUEST,
		SSLExtension::SH_STATUS_REQUEST,
		SSLExtension::CR_STATUS_REQUEST,
		SSLExtension::CT_STATUS_REQUEST,
		SSLExtension::USER_MAPPING,
		SSLExtension::CLIENT_AUTHZ,
		SSLExtension::SERVER_AUTHZ,
		SSLExtension::CERT_TYPE,
		SSLExtension::CH_SUPPORTED_GROUPS,
		SSLExtension::EE_SUPPORTED_GROUPS,
		SSLExtension::CH_EC_POINT_FORMATS,
		SSLExtension::SH_EC_POINT_FORMATS,
		SSLExtension::SRP,
		SSLExtension::USE_SRTP,
		SSLExtension::HEARTBEAT,
		SSLExtension::CH_ALPN,
		SSLExtension::SH_ALPN,
		SSLExtension::EE_ALPN,
		SSLExtension::CH_STATUS_REQUEST_V2,
		SSLExtension::SH_STATUS_REQUEST_V2,
		SSLExtension::SIGNED_CERT_TIMESTAMP,
		SSLExtension::CLIENT_CERT_TYPE,
		SSLExtension::SERVER_CERT_TYPE,
		SSLExtension::PADDING,
		SSLExtension::ENCRYPT_THEN_MAC,
		SSLExtension::CH_EXTENDED_MASTER_SECRET,
		SSLExtension::SH_EXTENDED_MASTER_SECRET,
		SSLExtension::TOKEN_BINDING,
		SSLExtension::CACHED_INFO,
		SSLExtension::CH_SESSION_TICKET,
		SSLExtension::SH_SESSION_TICKET,
		SSLExtension::CH_SIGNATURE_ALGORITHMS,
		SSLExtension::CR_SIGNATURE_ALGORITHMS,
		SSLExtension::CH_EARLY_DATA,
		SSLExtension::EE_EARLY_DATA,
		SSLExtension::NST_EARLY_DATA,
		SSLExtension::CH_SUPPORTED_VERSIONS,
		SSLExtension::SH_SUPPORTED_VERSIONS,
		SSLExtension::HRR_SUPPORTED_VERSIONS,
		SSLExtension::MH_SUPPORTED_VERSIONS,
		SSLExtension::CH_COOKIE,
		SSLExtension::HRR_COOKIE,
		SSLExtension::MH_COOKIE,
		SSLExtension::PSK_KEY_EXCHANGE_MODES,
		SSLExtension::CH_CERTIFICATE_AUTHORITIES,
		SSLExtension::CR_CERTIFICATE_AUTHORITIES,
		SSLExtension::OID_FILTERS,
		SSLExtension::POST_HANDSHAKE_AUTH,
		SSLExtension::CH_SIGNATURE_ALGORITHMS_CERT,
		SSLExtension::CR_SIGNATURE_ALGORITHMS_CERT,
		SSLExtension::CH_KEY_SHARE,
		SSLExtension::SH_KEY_SHARE,
		SSLExtension::HRR_KEY_SHARE,
		SSLExtension::MH_KEY_SHARE,
		SSLExtension::CH_RENEGOTIATION_INFO,
		SSLExtension::SH_RENEGOTIATION_INFO,
		SSLExtension::CH_PRE_SHARED_KEY,
		SSLExtension::SH_PRE_SHARED_KEY
	});
}

$SSLExtensionArray* SSLExtension::values() {
	$init(SSLExtension);
	return $cast($SSLExtensionArray, SSLExtension::$VALUES->clone());
}

SSLExtension* SSLExtension::valueOf($String* name) {
	$init(SSLExtension);
	return $cast(SSLExtension, $Enum::valueOf(SSLExtension::class$, name));
}

void SSLExtension::init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, $String* name) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->id = id;
	$init($SSLHandshake);
	$set(this, handshakeType, $SSLHandshake::NOT_APPLICABLE);
	$set(this, name$, name);
	$set(this, supportedProtocols, $new($ProtocolVersionArray, 0));
	$set(this, networkProducer, nullptr);
	$set(this, onLoadConsumer, nullptr);
	$set(this, onLoadAbsence, nullptr);
	$set(this, onTradeConsumer, nullptr);
	$set(this, onTradeAbsence, nullptr);
	$set(this, stringizer, nullptr);
}

void SSLExtension::init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, $String* name, $SSLHandshake* handshakeType, $ProtocolVersionArray* supportedProtocols, $HandshakeProducer* producer, $SSLExtension$ExtensionConsumer* onLoadConsumer, $HandshakeAbsence* onLoadAbsence, $HandshakeConsumer* onTradeConsumer, $HandshakeAbsence* onTradeAbsence, $SSLStringizer* stringize) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->id = id;
	$set(this, handshakeType, handshakeType);
	$set(this, name$, name);
	$set(this, supportedProtocols, supportedProtocols);
	$set(this, networkProducer, producer);
	$set(this, onLoadConsumer, onLoadConsumer);
	$set(this, onLoadAbsence, onLoadAbsence);
	$set(this, onTradeConsumer, onTradeConsumer);
	$set(this, onTradeAbsence, onTradeAbsence);
	$set(this, stringizer, stringize);
}

SSLExtension* SSLExtension::valueOf($SSLHandshake* handshakeType, int32_t extensionType) {
	$init(SSLExtension);
	{
		$var($SSLExtensionArray, arr$, SSLExtension::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			SSLExtension* ext = arr$->get(i$);
			{
				if ($nc(ext)->id == extensionType && ext->handshakeType == handshakeType) {
					return ext;
				}
			}
		}
	}
	return nullptr;
}

$String* SSLExtension::nameOf(int32_t extensionType) {
	$init(SSLExtension);
	{
		$var($SSLExtensionArray, arr$, SSLExtension::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			SSLExtension* ext = arr$->get(i$);
			{
				if ($nc(ext)->id == extensionType) {
					return ext->name$;
				}
			}
		}
	}
	return "unknown extension"_s;
}

bool SSLExtension::isConsumable(int32_t extensionType) {
	$init(SSLExtension);
	{
		$var($SSLExtensionArray, arr$, SSLExtension::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			SSLExtension* ext = arr$->get(i$);
			{
				if ($nc(ext)->id == extensionType && ext->onLoadConsumer != nullptr) {
					return true;
				}
			}
		}
	}
	return false;
}

$bytes* SSLExtension::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	if (this->networkProducer != nullptr) {
		return $nc(this->networkProducer)->produce(context, message);
	} else {
		$throwNew($UnsupportedOperationException, "Not yet supported extension producing."_s);
	}
}

void SSLExtension::consumeOnLoad($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	if (this->onLoadConsumer != nullptr) {
		$nc(this->onLoadConsumer)->consume(context, message, buffer);
	} else {
		$throwNew($UnsupportedOperationException, "Not yet supported extension loading."_s);
	}
}

void SSLExtension::consumeOnTrade($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	if (this->onTradeConsumer != nullptr) {
		$nc(this->onTradeConsumer)->consume(context, message);
	} else {
		$throwNew($UnsupportedOperationException, "Not yet supported extension processing."_s);
	}
}

void SSLExtension::absentOnLoad($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	if (this->onLoadAbsence != nullptr) {
		$nc(this->onLoadAbsence)->absent(context, message);
	} else {
		$throwNew($UnsupportedOperationException, "Not yet supported extension absence processing."_s);
	}
}

void SSLExtension::absentOnTrade($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	if (this->onTradeAbsence != nullptr) {
		$nc(this->onTradeAbsence)->absent(context, message);
	} else {
		$throwNew($UnsupportedOperationException, "Not yet supported extension absence processing."_s);
	}
}

bool SSLExtension::isAvailable($ProtocolVersion* protocolVersion) {
	{
		$var($ProtocolVersionArray, arr$, this->supportedProtocols);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$ProtocolVersion* supportedProtocol = arr$->get(i$);
			{
				if (supportedProtocol == protocolVersion) {
					return true;
				}
			}
		}
	}
	return false;
}

$String* SSLExtension::toString() {
	return this->name$;
}

$String* SSLExtension::toString($HandshakeContext* handshakeContext, $ByteBuffer* byteBuffer) {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"{0} ({1})\": \'{\'\n{2}\n\'}\'"_s, $Locale::ENGLISH));
	$var($String, extData, nullptr);
	if (this->stringizer == nullptr) {
		$var($HexDumpEncoder, hexEncoder, $new($HexDumpEncoder));
		$assign(extData, hexEncoder->encode($($nc(byteBuffer)->duplicate())));
	} else {
		$assign(extData, $nc(this->stringizer)->toString(handshakeContext, byteBuffer));
	}
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$of(this->name$),
		$($of($Integer::valueOf(this->id))),
		$($of($Utilities::indent(extData)))
	}));
	return messageFormat->format(messageFields);
}

$Collection* SSLExtension::getDisabledExtensions($String* propertyName) {
	$init(SSLExtension);
	$useLocalCurrentObjectStackCache();
	$var($String, property, $GetPropertyAction::privilegedGetProperty(propertyName));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,sslctx"_s)) {
		$SSLLogger::fine($$str({"System property "_s, propertyName, " is set to \'"_s, property, "\'"_s}), $$new($ObjectArray, 0));
	}
	if (property != nullptr && !property->isEmpty()) {
		bool var$1 = property->length() > 1;
		bool var$0 = var$1 && property->charAt(0) == u'\"';
		if (var$0 && property->charAt(property->length() - 1) == u'\"') {
			$assign(property, property->substring(1, property->length() - 1));
		}
	}
	if (property != nullptr && !property->isEmpty()) {
		$var($StringArray, extensionNames, property->split(","_s));
		$var($Collection, extensions, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>($new($ArrayList, extensionNames->length)))));
		{
			$var($StringArray, arr$, extensionNames);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, extension, arr$->get(i$));
				{
					$assign(extension, $nc(extension)->trim());
					if (!extension->isEmpty()) {
						extensions->add(extension);
					}
				}
			}
		}
		return extensions;
	}
	return $Collections::emptyList();
}

void clinit$SSLExtension($Class* class$) {
	$init($SSLHandshake);
	$init($ProtocolVersion);
	$init($ServerNameExtension);
	$assignStatic(SSLExtension::CH_SERVER_NAME, $new(SSLExtension, "CH_SERVER_NAME"_s, 0, 0, "server_name"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_TO_13, $ServerNameExtension::chNetworkProducer, $ServerNameExtension::chOnLoadConsumer, nullptr, nullptr, nullptr, $ServerNameExtension::chStringizer));
	$assignStatic(SSLExtension::SH_SERVER_NAME, $new(SSLExtension, "SH_SERVER_NAME"_s, 1, 0, "server_name"_s, $SSLHandshake::SERVER_HELLO, $ProtocolVersion::PROTOCOLS_TO_12, $ServerNameExtension::shNetworkProducer, $ServerNameExtension::shOnLoadConsumer, nullptr, nullptr, nullptr, $ServerNameExtension::shStringizer));
	$assignStatic(SSLExtension::EE_SERVER_NAME, $new(SSLExtension, "EE_SERVER_NAME"_s, 2, 0, "server_name"_s, $SSLHandshake::ENCRYPTED_EXTENSIONS, $ProtocolVersion::PROTOCOLS_OF_13, $ServerNameExtension::eeNetworkProducer, $ServerNameExtension::eeOnLoadConsumer, nullptr, nullptr, nullptr, $ServerNameExtension::shStringizer));
	$init($MaxFragExtension);
	$assignStatic(SSLExtension::CH_MAX_FRAGMENT_LENGTH, $new(SSLExtension, "CH_MAX_FRAGMENT_LENGTH"_s, 3, 1, "max_fragment_length"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_TO_13, $MaxFragExtension::chNetworkProducer, $MaxFragExtension::chOnLoadConsumer, nullptr, nullptr, nullptr, $MaxFragExtension::maxFragLenStringizer));
	$assignStatic(SSLExtension::SH_MAX_FRAGMENT_LENGTH, $new(SSLExtension, "SH_MAX_FRAGMENT_LENGTH"_s, 4, 1, "max_fragment_length"_s, $SSLHandshake::SERVER_HELLO, $ProtocolVersion::PROTOCOLS_TO_12, $MaxFragExtension::shNetworkProducer, $MaxFragExtension::shOnLoadConsumer, nullptr, $MaxFragExtension::shOnTradeConsumer, nullptr, $MaxFragExtension::maxFragLenStringizer));
	$assignStatic(SSLExtension::EE_MAX_FRAGMENT_LENGTH, $new(SSLExtension, "EE_MAX_FRAGMENT_LENGTH"_s, 5, 1, "max_fragment_length"_s, $SSLHandshake::ENCRYPTED_EXTENSIONS, $ProtocolVersion::PROTOCOLS_OF_13, $MaxFragExtension::eeNetworkProducer, $MaxFragExtension::eeOnLoadConsumer, nullptr, $MaxFragExtension::eeOnTradeConsumer, nullptr, $MaxFragExtension::maxFragLenStringizer));
	$assignStatic(SSLExtension::CLIENT_CERTIFICATE_URL, $new(SSLExtension, "CLIENT_CERTIFICATE_URL"_s, 6, 2, "client_certificate_url"_s));
	$assignStatic(SSLExtension::TRUSTED_CA_KEYS, $new(SSLExtension, "TRUSTED_CA_KEYS"_s, 7, 3, "trusted_ca_keys"_s));
	$assignStatic(SSLExtension::TRUNCATED_HMAC, $new(SSLExtension, "TRUNCATED_HMAC"_s, 8, 4, "truncated_hmac"_s));
	$init($CertStatusExtension);
	$assignStatic(SSLExtension::CH_STATUS_REQUEST, $new(SSLExtension, "CH_STATUS_REQUEST"_s, 9, 5, "status_request"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_TO_13, $CertStatusExtension::chNetworkProducer, $CertStatusExtension::chOnLoadConsumer, nullptr, nullptr, nullptr, $CertStatusExtension::certStatusReqStringizer));
	$assignStatic(SSLExtension::SH_STATUS_REQUEST, $new(SSLExtension, "SH_STATUS_REQUEST"_s, 10, 5, "status_request"_s, $SSLHandshake::SERVER_HELLO, $ProtocolVersion::PROTOCOLS_TO_12, $CertStatusExtension::shNetworkProducer, $CertStatusExtension::shOnLoadConsumer, nullptr, nullptr, nullptr, $CertStatusExtension::certStatusReqStringizer));
	$assignStatic(SSLExtension::CR_STATUS_REQUEST, $new(SSLExtension, "CR_STATUS_REQUEST"_s, 11, 5, "status_request"_s));
	$assignStatic(SSLExtension::CT_STATUS_REQUEST, $new(SSLExtension, "CT_STATUS_REQUEST"_s, 12, 5, "status_request"_s, $SSLHandshake::CERTIFICATE, $ProtocolVersion::PROTOCOLS_OF_13, $CertStatusExtension::ctNetworkProducer, $CertStatusExtension::ctOnLoadConsumer, nullptr, nullptr, nullptr, $CertStatusExtension::certStatusRespStringizer));
	$assignStatic(SSLExtension::USER_MAPPING, $new(SSLExtension, "USER_MAPPING"_s, 13, 6, "user_mapping"_s));
	$assignStatic(SSLExtension::CLIENT_AUTHZ, $new(SSLExtension, "CLIENT_AUTHZ"_s, 14, 7, "client_authz"_s));
	$assignStatic(SSLExtension::SERVER_AUTHZ, $new(SSLExtension, "SERVER_AUTHZ"_s, 15, 8, "server_authz"_s));
	$assignStatic(SSLExtension::CERT_TYPE, $new(SSLExtension, "CERT_TYPE"_s, 16, 9, "cert_type"_s));
	$init($SupportedGroupsExtension);
	$assignStatic(SSLExtension::CH_SUPPORTED_GROUPS, $new(SSLExtension, "CH_SUPPORTED_GROUPS"_s, 17, 10, "supported_groups"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_TO_13, $SupportedGroupsExtension::chNetworkProducer, $SupportedGroupsExtension::chOnLoadConsumer, nullptr, nullptr, $SupportedGroupsExtension::chOnTradAbsence, $SupportedGroupsExtension::sgsStringizer));
	$assignStatic(SSLExtension::EE_SUPPORTED_GROUPS, $new(SSLExtension, "EE_SUPPORTED_GROUPS"_s, 18, 10, "supported_groups"_s, $SSLHandshake::ENCRYPTED_EXTENSIONS, $ProtocolVersion::PROTOCOLS_OF_13, $SupportedGroupsExtension::eeNetworkProducer, $SupportedGroupsExtension::eeOnLoadConsumer, nullptr, nullptr, nullptr, $SupportedGroupsExtension::sgsStringizer));
	$init($ECPointFormatsExtension);
	$assignStatic(SSLExtension::CH_EC_POINT_FORMATS, $new(SSLExtension, "CH_EC_POINT_FORMATS"_s, 19, 11, "ec_point_formats"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_TO_12, $ECPointFormatsExtension::chNetworkProducer, $ECPointFormatsExtension::chOnLoadConsumer, nullptr, nullptr, nullptr, $ECPointFormatsExtension::epfStringizer));
	$assignStatic(SSLExtension::SH_EC_POINT_FORMATS, $new(SSLExtension, "SH_EC_POINT_FORMATS"_s, 20, 11, "ec_point_formats"_s, $SSLHandshake::SERVER_HELLO, $ProtocolVersion::PROTOCOLS_TO_12, nullptr, $ECPointFormatsExtension::shOnLoadConsumer, nullptr, nullptr, nullptr, $ECPointFormatsExtension::epfStringizer));
	$assignStatic(SSLExtension::SRP, $new(SSLExtension, "SRP"_s, 21, 12, "srp"_s));
	$assignStatic(SSLExtension::USE_SRTP, $new(SSLExtension, "USE_SRTP"_s, 22, 14, "use_srtp"_s));
	$assignStatic(SSLExtension::HEARTBEAT, $new(SSLExtension, "HEARTBEAT"_s, 23, 14, "heartbeat"_s));
	$init($AlpnExtension);
	$assignStatic(SSLExtension::CH_ALPN, $new(SSLExtension, "CH_ALPN"_s, 24, 16, "application_layer_protocol_negotiation"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_TO_13, $AlpnExtension::chNetworkProducer, $AlpnExtension::chOnLoadConsumer, $AlpnExtension::chOnLoadAbsence, nullptr, nullptr, $AlpnExtension::alpnStringizer));
	$assignStatic(SSLExtension::SH_ALPN, $new(SSLExtension, "SH_ALPN"_s, 25, 16, "application_layer_protocol_negotiation"_s, $SSLHandshake::SERVER_HELLO, $ProtocolVersion::PROTOCOLS_TO_12, $AlpnExtension::shNetworkProducer, $AlpnExtension::shOnLoadConsumer, $AlpnExtension::shOnLoadAbsence, nullptr, nullptr, $AlpnExtension::alpnStringizer));
	$assignStatic(SSLExtension::EE_ALPN, $new(SSLExtension, "EE_ALPN"_s, 26, 16, "application_layer_protocol_negotiation"_s, $SSLHandshake::ENCRYPTED_EXTENSIONS, $ProtocolVersion::PROTOCOLS_OF_13, $AlpnExtension::shNetworkProducer, $AlpnExtension::shOnLoadConsumer, $AlpnExtension::shOnLoadAbsence, nullptr, nullptr, $AlpnExtension::alpnStringizer));
	$assignStatic(SSLExtension::CH_STATUS_REQUEST_V2, $new(SSLExtension, "CH_STATUS_REQUEST_V2"_s, 27, 17, "status_request_v2"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_TO_12, $CertStatusExtension::chV2NetworkProducer, $CertStatusExtension::chV2OnLoadConsumer, nullptr, nullptr, nullptr, $CertStatusExtension::certStatusReqV2Stringizer));
	$assignStatic(SSLExtension::SH_STATUS_REQUEST_V2, $new(SSLExtension, "SH_STATUS_REQUEST_V2"_s, 28, 17, "status_request_v2"_s, $SSLHandshake::SERVER_HELLO, $ProtocolVersion::PROTOCOLS_TO_12, $CertStatusExtension::shV2NetworkProducer, $CertStatusExtension::shV2OnLoadConsumer, nullptr, nullptr, nullptr, $CertStatusExtension::certStatusReqV2Stringizer));
	$assignStatic(SSLExtension::SIGNED_CERT_TIMESTAMP, $new(SSLExtension, "SIGNED_CERT_TIMESTAMP"_s, 29, 18, "signed_certificate_timestamp"_s));
	$assignStatic(SSLExtension::CLIENT_CERT_TYPE, $new(SSLExtension, "CLIENT_CERT_TYPE"_s, 30, 19, "client_certificate_type"_s));
	$assignStatic(SSLExtension::SERVER_CERT_TYPE, $new(SSLExtension, "SERVER_CERT_TYPE"_s, 31, 20, "server_certificate_type"_s));
	$assignStatic(SSLExtension::PADDING, $new(SSLExtension, "PADDING"_s, 32, 21, "padding"_s));
	$assignStatic(SSLExtension::ENCRYPT_THEN_MAC, $new(SSLExtension, "ENCRYPT_THEN_MAC"_s, 33, 22, "encrypt_then_mac"_s));
	$init($ExtendedMasterSecretExtension);
	$assignStatic(SSLExtension::CH_EXTENDED_MASTER_SECRET, $new(SSLExtension, "CH_EXTENDED_MASTER_SECRET"_s, 34, 23, "extended_master_secret"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_TO_12, $ExtendedMasterSecretExtension::chNetworkProducer, $ExtendedMasterSecretExtension::chOnLoadConsumer, $ExtendedMasterSecretExtension::chOnLoadAbsence, nullptr, nullptr, $ExtendedMasterSecretExtension::emsStringizer));
	$assignStatic(SSLExtension::SH_EXTENDED_MASTER_SECRET, $new(SSLExtension, "SH_EXTENDED_MASTER_SECRET"_s, 35, 23, "extended_master_secret"_s, $SSLHandshake::SERVER_HELLO, $ProtocolVersion::PROTOCOLS_TO_12, $ExtendedMasterSecretExtension::shNetworkProducer, $ExtendedMasterSecretExtension::shOnLoadConsumer, $ExtendedMasterSecretExtension::shOnLoadAbsence, nullptr, nullptr, $ExtendedMasterSecretExtension::emsStringizer));
	$assignStatic(SSLExtension::TOKEN_BINDING, $new(SSLExtension, "TOKEN_BINDING"_s, 36, 24, "token_binding"_s));
	$assignStatic(SSLExtension::CACHED_INFO, $new(SSLExtension, "CACHED_INFO"_s, 37, 25, "cached_info"_s));
	$init($SessionTicketExtension);
	$assignStatic(SSLExtension::CH_SESSION_TICKET, $new(SSLExtension, "CH_SESSION_TICKET"_s, 38, 35, "session_ticket"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_10_12, $SessionTicketExtension::chNetworkProducer, $SessionTicketExtension::chOnLoadConsumer, nullptr, nullptr, nullptr, $SessionTicketExtension::steStringizer));
	$assignStatic(SSLExtension::SH_SESSION_TICKET, $new(SSLExtension, "SH_SESSION_TICKET"_s, 39, 35, "session_ticket"_s, $SSLHandshake::SERVER_HELLO, $ProtocolVersion::PROTOCOLS_10_12, $SessionTicketExtension::shNetworkProducer, $SessionTicketExtension::shOnLoadConsumer, nullptr, nullptr, nullptr, $SessionTicketExtension::steStringizer));
	$init($SignatureAlgorithmsExtension);
	$assignStatic(SSLExtension::CH_SIGNATURE_ALGORITHMS, $new(SSLExtension, "CH_SIGNATURE_ALGORITHMS"_s, 40, 13, "signature_algorithms"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_12_13, $SignatureAlgorithmsExtension::chNetworkProducer, $SignatureAlgorithmsExtension::chOnLoadConsumer, $SignatureAlgorithmsExtension::chOnLoadAbsence, $SignatureAlgorithmsExtension::chOnTradeConsumer, $SignatureAlgorithmsExtension::chOnTradeAbsence, $SignatureAlgorithmsExtension::ssStringizer));
	$assignStatic(SSLExtension::CR_SIGNATURE_ALGORITHMS, $new(SSLExtension, "CR_SIGNATURE_ALGORITHMS"_s, 41, 13, "signature_algorithms"_s, $SSLHandshake::CERTIFICATE_REQUEST, $ProtocolVersion::PROTOCOLS_OF_13, $SignatureAlgorithmsExtension::crNetworkProducer, $SignatureAlgorithmsExtension::crOnLoadConsumer, $SignatureAlgorithmsExtension::crOnLoadAbsence, $SignatureAlgorithmsExtension::crOnTradeConsumer, nullptr, $SignatureAlgorithmsExtension::ssStringizer));
	$assignStatic(SSLExtension::CH_EARLY_DATA, $new(SSLExtension, "CH_EARLY_DATA"_s, 42, 42, "early_data"_s));
	$assignStatic(SSLExtension::EE_EARLY_DATA, $new(SSLExtension, "EE_EARLY_DATA"_s, 43, 42, "early_data"_s));
	$assignStatic(SSLExtension::NST_EARLY_DATA, $new(SSLExtension, "NST_EARLY_DATA"_s, 44, 42, "early_data"_s));
	$init($SupportedVersionsExtension);
	$assignStatic(SSLExtension::CH_SUPPORTED_VERSIONS, $new(SSLExtension, "CH_SUPPORTED_VERSIONS"_s, 45, 43, "supported_versions"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_TO_13, $SupportedVersionsExtension::chNetworkProducer, $SupportedVersionsExtension::chOnLoadConsumer, nullptr, nullptr, nullptr, $SupportedVersionsExtension::chStringizer));
	$assignStatic(SSLExtension::SH_SUPPORTED_VERSIONS, $new(SSLExtension, "SH_SUPPORTED_VERSIONS"_s, 46, 43, "supported_versions"_s, $SSLHandshake::SERVER_HELLO, $ProtocolVersion::PROTOCOLS_OF_13, $SupportedVersionsExtension::shNetworkProducer, $SupportedVersionsExtension::shOnLoadConsumer, nullptr, nullptr, nullptr, $SupportedVersionsExtension::shStringizer));
	$assignStatic(SSLExtension::HRR_SUPPORTED_VERSIONS, $new(SSLExtension, "HRR_SUPPORTED_VERSIONS"_s, 47, 43, "supported_versions"_s, $SSLHandshake::HELLO_RETRY_REQUEST, $ProtocolVersion::PROTOCOLS_OF_13, $SupportedVersionsExtension::hrrNetworkProducer, $SupportedVersionsExtension::hrrOnLoadConsumer, nullptr, nullptr, nullptr, $SupportedVersionsExtension::hrrStringizer));
	$assignStatic(SSLExtension::MH_SUPPORTED_VERSIONS, $new(SSLExtension, "MH_SUPPORTED_VERSIONS"_s, 48, 43, "supported_versions"_s, $SSLHandshake::MESSAGE_HASH, $ProtocolVersion::PROTOCOLS_OF_13, $SupportedVersionsExtension::hrrReproducer, nullptr, nullptr, nullptr, nullptr, $SupportedVersionsExtension::hrrStringizer));
	$init($CookieExtension);
	$assignStatic(SSLExtension::CH_COOKIE, $new(SSLExtension, "CH_COOKIE"_s, 49, 44, "cookie"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_OF_13, $CookieExtension::chNetworkProducer, $CookieExtension::chOnLoadConsumer, nullptr, $CookieExtension::chOnTradeConsumer, nullptr, $CookieExtension::cookieStringizer));
	$assignStatic(SSLExtension::HRR_COOKIE, $new(SSLExtension, "HRR_COOKIE"_s, 50, 44, "cookie"_s, $SSLHandshake::HELLO_RETRY_REQUEST, $ProtocolVersion::PROTOCOLS_OF_13, $CookieExtension::hrrNetworkProducer, $CookieExtension::hrrOnLoadConsumer, nullptr, nullptr, nullptr, $CookieExtension::cookieStringizer));
	$assignStatic(SSLExtension::MH_COOKIE, $new(SSLExtension, "MH_COOKIE"_s, 51, 44, "cookie"_s, $SSLHandshake::MESSAGE_HASH, $ProtocolVersion::PROTOCOLS_OF_13, $CookieExtension::hrrNetworkReproducer, nullptr, nullptr, nullptr, nullptr, $CookieExtension::cookieStringizer));
	$init($PskKeyExchangeModesExtension);
	$assignStatic(SSLExtension::PSK_KEY_EXCHANGE_MODES, $new(SSLExtension, "PSK_KEY_EXCHANGE_MODES"_s, 52, 45, "psk_key_exchange_modes"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_OF_13, $PskKeyExchangeModesExtension::chNetworkProducer, $PskKeyExchangeModesExtension::chOnLoadConsumer, $PskKeyExchangeModesExtension::chOnLoadAbsence, nullptr, $PskKeyExchangeModesExtension::chOnTradeAbsence, $PskKeyExchangeModesExtension::pkemStringizer));
	$init($CertificateAuthoritiesExtension);
	$assignStatic(SSLExtension::CH_CERTIFICATE_AUTHORITIES, $new(SSLExtension, "CH_CERTIFICATE_AUTHORITIES"_s, 53, 47, "certificate_authorities"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_OF_13, $CertificateAuthoritiesExtension::chNetworkProducer, $CertificateAuthoritiesExtension::chOnLoadConsumer, nullptr, nullptr, nullptr, $CertificateAuthoritiesExtension::ssStringizer));
	$assignStatic(SSLExtension::CR_CERTIFICATE_AUTHORITIES, $new(SSLExtension, "CR_CERTIFICATE_AUTHORITIES"_s, 54, 47, "certificate_authorities"_s, $SSLHandshake::CERTIFICATE_REQUEST, $ProtocolVersion::PROTOCOLS_OF_13, $CertificateAuthoritiesExtension::crNetworkProducer, $CertificateAuthoritiesExtension::crOnLoadConsumer, nullptr, nullptr, nullptr, $CertificateAuthoritiesExtension::ssStringizer));
	$assignStatic(SSLExtension::OID_FILTERS, $new(SSLExtension, "OID_FILTERS"_s, 55, 48, "oid_filters"_s));
	$assignStatic(SSLExtension::POST_HANDSHAKE_AUTH, $new(SSLExtension, "POST_HANDSHAKE_AUTH"_s, 56, 48, "post_handshake_auth"_s));
	$init($CertSignAlgsExtension);
	$assignStatic(SSLExtension::CH_SIGNATURE_ALGORITHMS_CERT, $new(SSLExtension, "CH_SIGNATURE_ALGORITHMS_CERT"_s, 57, 50, "signature_algorithms_cert"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_12_13, $CertSignAlgsExtension::chNetworkProducer, $CertSignAlgsExtension::chOnLoadConsumer, nullptr, $CertSignAlgsExtension::chOnTradeConsumer, nullptr, $CertSignAlgsExtension::ssStringizer));
	$assignStatic(SSLExtension::CR_SIGNATURE_ALGORITHMS_CERT, $new(SSLExtension, "CR_SIGNATURE_ALGORITHMS_CERT"_s, 58, 50, "signature_algorithms_cert"_s, $SSLHandshake::CERTIFICATE_REQUEST, $ProtocolVersion::PROTOCOLS_OF_13, $CertSignAlgsExtension::crNetworkProducer, $CertSignAlgsExtension::crOnLoadConsumer, nullptr, $CertSignAlgsExtension::crOnTradeConsumer, nullptr, $CertSignAlgsExtension::ssStringizer));
	$init($KeyShareExtension);
	$assignStatic(SSLExtension::CH_KEY_SHARE, $new(SSLExtension, "CH_KEY_SHARE"_s, 59, 51, "key_share"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_OF_13, $KeyShareExtension::chNetworkProducer, $KeyShareExtension::chOnLoadConsumer, nullptr, nullptr, $KeyShareExtension::chOnTradAbsence, $KeyShareExtension::chStringizer));
	$assignStatic(SSLExtension::SH_KEY_SHARE, $new(SSLExtension, "SH_KEY_SHARE"_s, 60, 51, "key_share"_s, $SSLHandshake::SERVER_HELLO, $ProtocolVersion::PROTOCOLS_OF_13, $KeyShareExtension::shNetworkProducer, $KeyShareExtension::shOnLoadConsumer, $KeyShareExtension::shOnLoadAbsence, nullptr, nullptr, $KeyShareExtension::shStringizer));
	$assignStatic(SSLExtension::HRR_KEY_SHARE, $new(SSLExtension, "HRR_KEY_SHARE"_s, 61, 51, "key_share"_s, $SSLHandshake::HELLO_RETRY_REQUEST, $ProtocolVersion::PROTOCOLS_OF_13, $KeyShareExtension::hrrNetworkProducer, $KeyShareExtension::hrrOnLoadConsumer, nullptr, nullptr, nullptr, $KeyShareExtension::hrrStringizer));
	$assignStatic(SSLExtension::MH_KEY_SHARE, $new(SSLExtension, "MH_KEY_SHARE"_s, 62, 51, "key_share"_s, $SSLHandshake::MESSAGE_HASH, $ProtocolVersion::PROTOCOLS_OF_13, $KeyShareExtension::hrrNetworkReproducer, nullptr, nullptr, nullptr, nullptr, $KeyShareExtension::hrrStringizer));
	$init($RenegoInfoExtension);
	$assignStatic(SSLExtension::CH_RENEGOTIATION_INFO, $new(SSLExtension, "CH_RENEGOTIATION_INFO"_s, 63, 0x0000FF01, "renegotiation_info"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_TO_12, $RenegoInfoExtension::chNetworkProducer, $RenegoInfoExtension::chOnLoadConsumer, $RenegoInfoExtension::chOnLoadAbsence, nullptr, nullptr, $RenegoInfoExtension::rniStringizer));
	$assignStatic(SSLExtension::SH_RENEGOTIATION_INFO, $new(SSLExtension, "SH_RENEGOTIATION_INFO"_s, 64, 0x0000FF01, "renegotiation_info"_s, $SSLHandshake::SERVER_HELLO, $ProtocolVersion::PROTOCOLS_TO_12, $RenegoInfoExtension::shNetworkProducer, $RenegoInfoExtension::shOnLoadConsumer, $RenegoInfoExtension::shOnLoadAbsence, nullptr, nullptr, $RenegoInfoExtension::rniStringizer));
	$init($PreSharedKeyExtension);
	$assignStatic(SSLExtension::CH_PRE_SHARED_KEY, $new(SSLExtension, "CH_PRE_SHARED_KEY"_s, 65, 41, "pre_shared_key"_s, $SSLHandshake::CLIENT_HELLO, $ProtocolVersion::PROTOCOLS_OF_13, $PreSharedKeyExtension::chNetworkProducer, $PreSharedKeyExtension::chOnLoadConsumer, $PreSharedKeyExtension::chOnLoadAbsence, $PreSharedKeyExtension::chOnTradeConsumer, $PreSharedKeyExtension::chOnTradAbsence, $PreSharedKeyExtension::chStringizer));
	$assignStatic(SSLExtension::SH_PRE_SHARED_KEY, $new(SSLExtension, "SH_PRE_SHARED_KEY"_s, 66, 41, "pre_shared_key"_s, $SSLHandshake::SERVER_HELLO, $ProtocolVersion::PROTOCOLS_OF_13, $PreSharedKeyExtension::shNetworkProducer, $PreSharedKeyExtension::shOnLoadConsumer, $PreSharedKeyExtension::shOnLoadAbsence, nullptr, nullptr, $PreSharedKeyExtension::shStringizer));
	$assignStatic(SSLExtension::$VALUES, SSLExtension::$values());
}

SSLExtension::SSLExtension() {
}

$Class* SSLExtension::load$($String* name, bool initialize) {
	$loadClass(SSLExtension, name, initialize, &_SSLExtension_ClassInfo_, clinit$SSLExtension, allocate$SSLExtension);
	return class$;
}

$Class* SSLExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun