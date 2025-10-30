#include <sun/security/ssl/SSLKeyExchange.h>

#include <java/security/PublicKey.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/JsseJce.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLAuthentication.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLKeyAgreement.h>
#include <sun/security/ssl/SSLKeyAgreementGenerator.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLKeyExchange$1.h>
#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHANON.h>
#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHANONExport.h>
#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHEDSS.h>
#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHEDSSExport.h>
#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHERSA.h>
#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHERSAExport.h>
#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHERSAOrPSS.h>
#include <sun/security/ssl/SSLKeyExchange$SSLKeyExECDHANON.h>
#include <sun/security/ssl/SSLKeyExchange$SSLKeyExECDHECDSA.h>
#include <sun/security/ssl/SSLKeyExchange$SSLKeyExECDHEECDSA.h>
#include <sun/security/ssl/SSLKeyExchange$SSLKeyExECDHERSA.h>
#include <sun/security/ssl/SSLKeyExchange$SSLKeyExECDHERSAOrPSS.h>
#include <sun/security/ssl/SSLKeyExchange$SSLKeyExECDHRSA.h>
#include <sun/security/ssl/SSLKeyExchange$SSLKeyExRSA.h>
#include <sun/security/ssl/SSLKeyExchange$SSLKeyExRSAExport.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange$T13KeyAgreement.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/X509Authentication$X509Possession.h>
#include <jcpp.h>

#undef ECDH
#undef KE
#undef RSA
#undef RSA_EXPORT

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $SSLHandshakeArray = $Array<::sun::security::ssl::SSLHandshake>;
using $SSLPossessionArray = $Array<::sun::security::ssl::SSLPossession>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $Certificate = ::java::security::cert::Certificate;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map$Entry = ::java::util::Map$Entry;
using $CipherSuite$KeyExchange = ::sun::security::ssl::CipherSuite$KeyExchange;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $JsseJce = ::sun::security::ssl::JsseJce;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLAuthentication = ::sun::security::ssl::SSLAuthentication;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshakeBinding = ::sun::security::ssl::SSLHandshakeBinding;
using $SSLKeyAgreement = ::sun::security::ssl::SSLKeyAgreement;
using $SSLKeyAgreementGenerator = ::sun::security::ssl::SSLKeyAgreementGenerator;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLKeyExchange$1 = ::sun::security::ssl::SSLKeyExchange$1;
using $SSLKeyExchange$SSLKeyExDHANON = ::sun::security::ssl::SSLKeyExchange$SSLKeyExDHANON;
using $SSLKeyExchange$SSLKeyExDHANONExport = ::sun::security::ssl::SSLKeyExchange$SSLKeyExDHANONExport;
using $SSLKeyExchange$SSLKeyExDHEDSS = ::sun::security::ssl::SSLKeyExchange$SSLKeyExDHEDSS;
using $SSLKeyExchange$SSLKeyExDHEDSSExport = ::sun::security::ssl::SSLKeyExchange$SSLKeyExDHEDSSExport;
using $SSLKeyExchange$SSLKeyExDHERSA = ::sun::security::ssl::SSLKeyExchange$SSLKeyExDHERSA;
using $SSLKeyExchange$SSLKeyExDHERSAExport = ::sun::security::ssl::SSLKeyExchange$SSLKeyExDHERSAExport;
using $SSLKeyExchange$SSLKeyExDHERSAOrPSS = ::sun::security::ssl::SSLKeyExchange$SSLKeyExDHERSAOrPSS;
using $SSLKeyExchange$SSLKeyExECDHANON = ::sun::security::ssl::SSLKeyExchange$SSLKeyExECDHANON;
using $SSLKeyExchange$SSLKeyExECDHECDSA = ::sun::security::ssl::SSLKeyExchange$SSLKeyExECDHECDSA;
using $SSLKeyExchange$SSLKeyExECDHEECDSA = ::sun::security::ssl::SSLKeyExchange$SSLKeyExECDHEECDSA;
using $SSLKeyExchange$SSLKeyExECDHERSA = ::sun::security::ssl::SSLKeyExchange$SSLKeyExECDHERSA;
using $SSLKeyExchange$SSLKeyExECDHERSAOrPSS = ::sun::security::ssl::SSLKeyExchange$SSLKeyExECDHERSAOrPSS;
using $SSLKeyExchange$SSLKeyExECDHRSA = ::sun::security::ssl::SSLKeyExchange$SSLKeyExECDHRSA;
using $SSLKeyExchange$SSLKeyExRSA = ::sun::security::ssl::SSLKeyExchange$SSLKeyExRSA;
using $SSLKeyExchange$SSLKeyExRSAExport = ::sun::security::ssl::SSLKeyExchange$SSLKeyExRSAExport;
using $SSLKeyExchange$T12KeyAgreement = ::sun::security::ssl::SSLKeyExchange$T12KeyAgreement;
using $SSLKeyExchange$T13KeyAgreement = ::sun::security::ssl::SSLKeyExchange$T13KeyAgreement;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $SSLPossessionGenerator = ::sun::security::ssl::SSLPossessionGenerator;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $X509Authentication$X509Possession = ::sun::security::ssl::X509Authentication$X509Possession;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLKeyExchange_FieldInfo_[] = {
	{"authentication", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/SSLAuthentication;>;", $PRIVATE | $FINAL, $field(SSLKeyExchange, authentication)},
	{"keyAgreement", "Lsun/security/ssl/SSLKeyAgreement;", nullptr, $PRIVATE | $FINAL, $field(SSLKeyExchange, keyAgreement)},
	{}
};

$MethodInfo _SSLKeyExchange_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/List;Lsun/security/ssl/SSLKeyAgreement;)V", "(Ljava/util/List<Lsun/security/ssl/X509Authentication;>;Lsun/security/ssl/SSLKeyAgreement;)V", 0, $method(static_cast<void(SSLKeyExchange::*)($List*,$SSLKeyAgreement*)>(&SSLKeyExchange::init$))},
	{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createPossessions", "(Lsun/security/ssl/HandshakeContext;)[Lsun/security/ssl/SSLPossession;", nullptr, 0, $method(static_cast<$SSLPossessionArray*(SSLKeyExchange::*)($HandshakeContext*)>(&SSLKeyExchange::createPossessions))},
	{"getHandshakeConsumers", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry;", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry<Ljava/lang/Byte;Lsun/security/ssl/SSLConsumer;>;", $PUBLIC},
	{"getHandshakeProducers", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry;", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry<Ljava/lang/Byte;Lsun/security/ssl/HandshakeProducer;>;", $PUBLIC},
	{"getRelatedHandshakers", "(Lsun/security/ssl/HandshakeContext;)[Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Lsun/security/ssl/CipherSuite$KeyExchange;Lsun/security/ssl/ProtocolVersion;)Lsun/security/ssl/SSLKeyExchange;", nullptr, $STATIC, $method(static_cast<SSLKeyExchange*(*)($CipherSuite$KeyExchange*,$ProtocolVersion*)>(&SSLKeyExchange::valueOf))},
	{"valueOf", "(Lsun/security/ssl/NamedGroup;)Lsun/security/ssl/SSLKeyExchange;", nullptr, $STATIC, $method(static_cast<SSLKeyExchange*(*)($NamedGroup*)>(&SSLKeyExchange::valueOf))},
	{}
};

$InnerClassInfo _SSLKeyExchange_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.security.ssl.SSLKeyExchange$T13KeyAgreement", "sun.security.ssl.SSLKeyExchange", "T13KeyAgreement", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLKeyExchange$T12KeyAgreement", "sun.security.ssl.SSLKeyExchange", "T12KeyAgreement", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHANON", "sun.security.ssl.SSLKeyExchange", "SSLKeyExECDHANON", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHERSAOrPSS", "sun.security.ssl.SSLKeyExchange", "SSLKeyExECDHERSAOrPSS", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHERSA", "sun.security.ssl.SSLKeyExchange", "SSLKeyExECDHERSA", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHEECDSA", "sun.security.ssl.SSLKeyExchange", "SSLKeyExECDHEECDSA", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHRSA", "sun.security.ssl.SSLKeyExchange", "SSLKeyExECDHRSA", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHECDSA", "sun.security.ssl.SSLKeyExchange", "SSLKeyExECDHECDSA", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHANONExport", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHANONExport", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHANON", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHANON", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSAExport", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHERSAExport", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSAOrPSS", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHERSAOrPSS", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSA", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHERSA", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHEDSSExport", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHEDSSExport", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHEDSS", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHEDSS", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExRSAExport", "sun.security.ssl.SSLKeyExchange", "SSLKeyExRSAExport", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExRSA", "sun.security.ssl.SSLKeyExchange", "SSLKeyExRSA", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange",
	"java.lang.Object",
	"sun.security.ssl.SSLKeyAgreementGenerator,sun.security.ssl.SSLHandshakeBinding",
	_SSLKeyExchange_FieldInfo_,
	_SSLKeyExchange_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange$1,sun.security.ssl.SSLKeyExchange$T13KeyAgreement,sun.security.ssl.SSLKeyExchange$T12KeyAgreement,sun.security.ssl.SSLKeyExchange$SSLKeyExECDHANON,sun.security.ssl.SSLKeyExchange$SSLKeyExECDHERSAOrPSS,sun.security.ssl.SSLKeyExchange$SSLKeyExECDHERSA,sun.security.ssl.SSLKeyExchange$SSLKeyExECDHEECDSA,sun.security.ssl.SSLKeyExchange$SSLKeyExECDHRSA,sun.security.ssl.SSLKeyExchange$SSLKeyExECDHECDSA,sun.security.ssl.SSLKeyExchange$SSLKeyExDHANONExport,sun.security.ssl.SSLKeyExchange$SSLKeyExDHANON,sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSAExport,sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSAOrPSS,sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSA,sun.security.ssl.SSLKeyExchange$SSLKeyExDHEDSSExport,sun.security.ssl.SSLKeyExchange$SSLKeyExDHEDSS,sun.security.ssl.SSLKeyExchange$SSLKeyExRSAExport,sun.security.ssl.SSLKeyExchange$SSLKeyExRSA"
};

$Object* allocate$SSLKeyExchange($Class* clazz) {
	return $of($alloc(SSLKeyExchange));
}

int32_t SSLKeyExchange::hashCode() {
	 return this->$SSLKeyAgreementGenerator::hashCode();
}

bool SSLKeyExchange::equals(Object$* obj) {
	 return this->$SSLKeyAgreementGenerator::equals(obj);
}

$Object* SSLKeyExchange::clone() {
	 return this->$SSLKeyAgreementGenerator::clone();
}

$String* SSLKeyExchange::toString() {
	 return this->$SSLKeyAgreementGenerator::toString();
}

void SSLKeyExchange::finalize() {
	this->$SSLKeyAgreementGenerator::finalize();
}

void SSLKeyExchange::init$($List* authentication, $SSLKeyAgreement* keyAgreement) {
	if (authentication != nullptr) {
		$set(this, authentication, $List::copyOf(authentication));
	} else {
		$set(this, authentication, nullptr);
	}
	$set(this, keyAgreement, keyAgreement);
}

$SSLPossessionArray* SSLKeyExchange::createPossessions($HandshakeContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($SSLPossession, authPossession, nullptr);
	if (this->authentication != nullptr) {
		{
			$var($Iterator, i$, $nc(this->authentication)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($SSLAuthentication, authType, $cast($SSLAuthentication, i$->next()));
				{
					if (($assign(authPossession, $nc(authType)->createPossession(context))) != nullptr) {
						break;
					}
				}
			}
		}
		if (authPossession == nullptr) {
			return $new($SSLPossessionArray, 0);
		} else if ($instanceOf($ServerHandshakeContext, context)) {
			$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
			$set($nc(shc), interimAuthn, authPossession);
		}
	}
	$var($SSLPossession, kaPossession, nullptr);
	$init($SSLKeyExchange$T12KeyAgreement);
	if ($equals(this->keyAgreement, $SSLKeyExchange$T12KeyAgreement::RSA_EXPORT)) {
		$var($X509Authentication$X509Possession, x509Possession, $cast($X509Authentication$X509Possession, authPossession));
		if ($JsseJce::getRSAKeyLength($($nc($nc($nc(x509Possession)->popCerts)->get(0))->getPublicKey())) > 512) {
			$assign(kaPossession, $nc(this->keyAgreement)->createPossession(context));
			if (kaPossession == nullptr) {
				return $new($SSLPossessionArray, 0);
			} else {
				return this->authentication != nullptr ? $new($SSLPossessionArray, {
					authPossession,
					kaPossession
				}) : $new($SSLPossessionArray, {kaPossession});
			}
		} else {
			return this->authentication != nullptr ? $new($SSLPossessionArray, {authPossession}) : $new($SSLPossessionArray, 0);
		}
	} else {
		$assign(kaPossession, $nc(this->keyAgreement)->createPossession(context));
		if (kaPossession == nullptr) {
			if ($equals(this->keyAgreement, $SSLKeyExchange$T12KeyAgreement::RSA) || $equals(this->keyAgreement, $SSLKeyExchange$T12KeyAgreement::ECDH)) {
				return this->authentication != nullptr ? $new($SSLPossessionArray, {authPossession}) : $new($SSLPossessionArray, 0);
			} else {
				return $new($SSLPossessionArray, 0);
			}
		} else {
			return this->authentication != nullptr ? $new($SSLPossessionArray, {
				authPossession,
				kaPossession
			}) : $new($SSLPossessionArray, {kaPossession});
		}
	}
}

$SSLKeyDerivation* SSLKeyExchange::createKeyDerivation($HandshakeContext* handshakeContext) {
	return $nc(this->keyAgreement)->createKeyDerivation(handshakeContext);
}

$SSLHandshakeArray* SSLKeyExchange::getRelatedHandshakers($HandshakeContext* handshakeContext) {
	$useLocalCurrentObjectStackCache();
	$var($SSLHandshakeArray, auHandshakes, nullptr);
	if (this->authentication != nullptr) {
		{
			$var($Iterator, i$, $nc(this->authentication)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($SSLAuthentication, authType, $cast($SSLAuthentication, i$->next()));
				{
					$assign(auHandshakes, $nc(authType)->getRelatedHandshakers(handshakeContext));
					if (auHandshakes != nullptr && auHandshakes->length > 0) {
						break;
					}
				}
			}
		}
	}
	$var($SSLHandshakeArray, kaHandshakes, $nc(this->keyAgreement)->getRelatedHandshakers(handshakeContext));
	if (auHandshakes == nullptr || $nc(auHandshakes)->length == 0) {
		return kaHandshakes;
	} else if (kaHandshakes == nullptr || $nc(kaHandshakes)->length == 0) {
		return auHandshakes;
	} else {
		$var($SSLHandshakeArray, producers, $fcast($SSLHandshakeArray, $Arrays::copyOf(auHandshakes, auHandshakes->length + kaHandshakes->length)));
		$System::arraycopy(kaHandshakes, 0, producers, auHandshakes->length, kaHandshakes->length);
		return producers;
	}
}

$Map$EntryArray* SSLKeyExchange::getHandshakeProducers($HandshakeContext* handshakeContext) {
	$useLocalCurrentObjectStackCache();
	$var($Map$EntryArray, auProducers, nullptr);
	if (this->authentication != nullptr) {
		{
			$var($Iterator, i$, $nc(this->authentication)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($SSLAuthentication, authType, $cast($SSLAuthentication, i$->next()));
				{
					$assign(auProducers, $nc(authType)->getHandshakeProducers(handshakeContext));
					if (auProducers != nullptr && auProducers->length > 0) {
						break;
					}
				}
			}
		}
	}
	$var($Map$EntryArray, kaProducers, $nc(this->keyAgreement)->getHandshakeProducers(handshakeContext));
	if (auProducers == nullptr || $nc(auProducers)->length == 0) {
		return kaProducers;
	} else if (kaProducers == nullptr || $nc(kaProducers)->length == 0) {
		return auProducers;
	} else {
		$var($Map$EntryArray, producers, $fcast($Map$EntryArray, $Arrays::copyOf(auProducers, auProducers->length + kaProducers->length)));
		$System::arraycopy(kaProducers, 0, producers, auProducers->length, kaProducers->length);
		return producers;
	}
}

$Map$EntryArray* SSLKeyExchange::getHandshakeConsumers($HandshakeContext* handshakeContext) {
	$useLocalCurrentObjectStackCache();
	$var($Map$EntryArray, auConsumers, nullptr);
	if (this->authentication != nullptr) {
		{
			$var($Iterator, i$, $nc(this->authentication)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($SSLAuthentication, authType, $cast($SSLAuthentication, i$->next()));
				{
					$assign(auConsumers, $nc(authType)->getHandshakeConsumers(handshakeContext));
					if (auConsumers != nullptr && auConsumers->length > 0) {
						break;
					}
				}
			}
		}
	}
	$var($Map$EntryArray, kaConsumers, $nc(this->keyAgreement)->getHandshakeConsumers(handshakeContext));
	if (auConsumers == nullptr || $nc(auConsumers)->length == 0) {
		return kaConsumers;
	} else if (kaConsumers == nullptr || $nc(kaConsumers)->length == 0) {
		return auConsumers;
	} else {
		$var($Map$EntryArray, producers, $fcast($Map$EntryArray, $Arrays::copyOf(auConsumers, auConsumers->length + kaConsumers->length)));
		$System::arraycopy(kaConsumers, 0, producers, auConsumers->length, kaConsumers->length);
		return producers;
	}
}

SSLKeyExchange* SSLKeyExchange::valueOf($CipherSuite$KeyExchange* keyExchange, $ProtocolVersion* protocolVersion) {
	$init(SSLKeyExchange);
	if (keyExchange == nullptr || protocolVersion == nullptr) {
		return nullptr;
	}
	$init($SSLKeyExchange$1);
	switch ($nc($SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)->get($nc((keyExchange))->ordinal())) {
	case 1:
		{
			$init($SSLKeyExchange$SSLKeyExRSA);
			return $SSLKeyExchange$SSLKeyExRSA::KE;
		}
	case 2:
		{
			$init($SSLKeyExchange$SSLKeyExRSAExport);
			return $SSLKeyExchange$SSLKeyExRSAExport::KE;
		}
	case 3:
		{
			$init($SSLKeyExchange$SSLKeyExDHEDSS);
			return $SSLKeyExchange$SSLKeyExDHEDSS::KE;
		}
	case 4:
		{
			$init($SSLKeyExchange$SSLKeyExDHEDSSExport);
			return $SSLKeyExchange$SSLKeyExDHEDSSExport::KE;
		}
	case 5:
		{
			if ($nc(protocolVersion)->useTLS12PlusSpec()) {
				$init($SSLKeyExchange$SSLKeyExDHERSAOrPSS);
				return $SSLKeyExchange$SSLKeyExDHERSAOrPSS::KE;
			} else {
				$init($SSLKeyExchange$SSLKeyExDHERSA);
				return $SSLKeyExchange$SSLKeyExDHERSA::KE;
			}
		}
	case 6:
		{
			$init($SSLKeyExchange$SSLKeyExDHERSAExport);
			return $SSLKeyExchange$SSLKeyExDHERSAExport::KE;
		}
	case 7:
		{
			$init($SSLKeyExchange$SSLKeyExDHANON);
			return $SSLKeyExchange$SSLKeyExDHANON::KE;
		}
	case 8:
		{
			$init($SSLKeyExchange$SSLKeyExDHANONExport);
			return $SSLKeyExchange$SSLKeyExDHANONExport::KE;
		}
	case 9:
		{
			$init($SSLKeyExchange$SSLKeyExECDHECDSA);
			return $SSLKeyExchange$SSLKeyExECDHECDSA::KE;
		}
	case 10:
		{
			$init($SSLKeyExchange$SSLKeyExECDHRSA);
			return $SSLKeyExchange$SSLKeyExECDHRSA::KE;
		}
	case 11:
		{
			$init($SSLKeyExchange$SSLKeyExECDHEECDSA);
			return $SSLKeyExchange$SSLKeyExECDHEECDSA::KE;
		}
	case 12:
		{
			if ($nc(protocolVersion)->useTLS12PlusSpec()) {
				$init($SSLKeyExchange$SSLKeyExECDHERSAOrPSS);
				return $SSLKeyExchange$SSLKeyExECDHERSAOrPSS::KE;
			} else {
				$init($SSLKeyExchange$SSLKeyExECDHERSA);
				return $SSLKeyExchange$SSLKeyExECDHERSA::KE;
			}
		}
	case 13:
		{
			$init($SSLKeyExchange$SSLKeyExECDHANON);
			return $SSLKeyExchange$SSLKeyExECDHANON::KE;
		}
	}
	return nullptr;
}

SSLKeyExchange* SSLKeyExchange::valueOf($NamedGroup* namedGroup) {
	$init(SSLKeyExchange);
	$var($SSLKeyAgreement, ka, $SSLKeyExchange$T13KeyAgreement::valueOf(namedGroup));
	if (ka != nullptr) {
		return $new(SSLKeyExchange, nullptr, ka);
	}
	return nullptr;
}

SSLKeyExchange::SSLKeyExchange() {
}

$Class* SSLKeyExchange::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange, name, initialize, &_SSLKeyExchange_ClassInfo_, allocate$SSLKeyExchange);
	return class$;
}

$Class* SSLKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun