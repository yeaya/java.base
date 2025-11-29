#include <sun/security/ssl/ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/crypto/SecretKey.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ECDHClientKeyExchange$ECDHClientKeyExchangeMessage.h>
#include <sun/security/ssl/ECDHClientKeyExchange.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/NamedGroup$ExceptionSupplier.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/NamedGroupPossession.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCredentials.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef ILLEGAL_PARAMETER
#undef INSUFFICIENT_SECURITY
#undef INTERNAL_ERROR
#undef UNEXPECTED_MESSAGE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $SecretKey = ::javax::crypto::SecretKey;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ECDHClientKeyExchange$ECDHClientKeyExchangeMessage = ::sun::security::ssl::ECDHClientKeyExchange$ECDHClientKeyExchangeMessage;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroup$ExceptionSupplier = ::sun::security::ssl::NamedGroup$ExceptionSupplier;
using $NamedGroupPossession = ::sun::security::ssl::NamedGroupPossession;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $SSLTrafficKeyDerivation = ::sun::security::ssl::SSLTrafficKeyDerivation;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

class ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0 : public $NamedGroup$ExceptionSupplier {
	$class(ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0, $NO_CLASS_INIT, $NamedGroup$ExceptionSupplier)
public:
	void init$($ServerHandshakeContext* shc, $NamedGroup* ng) {
		$set(this, shc, shc);
		$set(this, ng, ng);
	}
	virtual void apply($String* s) override {
		ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer::lambda$consume$0(shc, ng, s);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0>());
	}
	$ServerHandshakeContext* shc = nullptr;
	$NamedGroup* ng = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0::fieldInfos[3] = {
	{"shc", "Lsun/security/ssl/ServerHandshakeContext;", nullptr, $PUBLIC, $field(ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0, shc)},
	{"ng", "Lsun/security/ssl/NamedGroup;", nullptr, $PUBLIC, $field(ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0, ng)},
	{}
};
$MethodInfo ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0::methodInfos[3] = {
	{"<init>", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/NamedGroup;)V", nullptr, $PUBLIC, $method(static_cast<void(ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0::*)($ServerHandshakeContext*,$NamedGroup*)>(&ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0::init$))},
	{"apply", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.ssl.ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0",
	"java.lang.Object",
	"sun.security.ssl.NamedGroup$ExceptionSupplier",
	fieldInfos,
	methodInfos
};
$Class* ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0::load$($String* name, bool initialize) {
	$loadClass(ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0::class$ = nullptr;

$MethodInfo _ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer::*)()>(&ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"lambda$consume$0", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/NamedGroup;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ServerHandshakeContext*,$NamedGroup*,$String*)>(&ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer::lambda$consume$0)), "javax.net.ssl.SSLException"},
	{}
};

$InnerClassInfo _ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer", "sun.security.ssl.ECDHClientKeyExchange", "ECDHEClientKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECDHClientKeyExchange"
};

$Object* allocate$ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer($Class* clazz) {
	return $of($alloc(ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer));
}

void ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer::init$() {
}

void ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($SSLPossession, sslPossession, nullptr);
	$NamedGroup* namedGroup = nullptr;
	{
		$var($Iterator, i$, $nc($nc(shc)->handshakePossessions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLPossession, possession, $cast($SSLPossession, i$->next()));
			{
				if ($instanceOf($NamedGroupPossession, possession)) {
					$var($NamedGroupPossession, poss, $cast($NamedGroupPossession, possession));
					namedGroup = $nc(poss)->getNamedGroup();
					$assign(sslPossession, poss);
					break;
				}
			}
		}
	}
	if (sslPossession == nullptr) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::INTERNAL_ERROR, "No expected ECDHE possessions for client key exchange"_s)));
	}
	if (namedGroup == nullptr) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Unsupported EC server cert for ECDHE client key exchange"_s)));
	}
	$var($SSLKeyExchange, ke, $SSLKeyExchange::valueOf($nc(shc->negotiatedCipherSuite)->keyExchange, shc->negotiatedProtocol));
	if (ke == nullptr) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::INTERNAL_ERROR, "Not supported key exchange type"_s)));
	}
	$var($ECDHClientKeyExchange$ECDHClientKeyExchangeMessage, cke, $new($ECDHClientKeyExchange$ECDHClientKeyExchangeMessage, static_cast<$HandshakeContext*>(shc), message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming ECDHE ClientKeyExchange handshake message"_s, $$new($ObjectArray, {$of(cke)}));
	}
	try {
		$NamedGroup* ng = namedGroup;
		$var($SSLCredentials, sslCredentials, $nc(namedGroup)->decodeCredentials(cke->encodedPoint, shc->algorithmConstraints, static_cast<$NamedGroup$ExceptionSupplier*>($$new(ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0, shc, ng))));
		$nc(shc->handshakeCredentials)->add(sslCredentials);
	} catch ($GeneralSecurityException& e) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, $$str({"Cannot decode named group: "_s, namedGroup}))));
	}
	$var($SSLKeyDerivation, masterKD, $nc(ke)->createKeyDerivation(shc));
	$var($SecretKey, masterSecret, $nc(masterKD)->deriveKey("MasterSecret"_s, nullptr));
	$nc(shc->handshakeSession)->setMasterSecret(masterSecret);
	$SSLTrafficKeyDerivation* kd = $SSLTrafficKeyDerivation::valueOf(shc->negotiatedProtocol);
	if (kd == nullptr) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::INTERNAL_ERROR, $$str({"Not supported key derivation: "_s, shc->negotiatedProtocol}))));
	} else {
		$set(shc, handshakeKeyDerivation, $nc(kd)->createKeyDerivation(shc, masterSecret));
	}
}

void ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer::lambda$consume$0($ServerHandshakeContext* shc, $NamedGroup* ng, $String* s) {
	$init(ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer);
	$init($Alert);
	$nc($nc(shc)->conContext)->fatal($Alert::INSUFFICIENT_SECURITY, $$str({"ClientKeyExchange "_s, ng, ": "_s, s}));
}

ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer::ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer() {
}

$Class* ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0::classInfo$.name)) {
			return ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer$$Lambda$lambda$consume$0::load$(name, initialize);
		}
	}
	$loadClass(ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer, name, initialize, &_ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer_ClassInfo_, allocate$ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer);
	return class$;
}

$Class* ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun