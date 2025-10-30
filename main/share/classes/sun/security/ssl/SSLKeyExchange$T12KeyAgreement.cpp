#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>

#include <java/lang/Enum.h>
#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/Map$Entry.h>
#include <sun/security/ssl/DHClientKeyExchange$DHClientKeyExchangeConsumer.h>
#include <sun/security/ssl/DHClientKeyExchange$DHClientKeyExchangeProducer.h>
#include <sun/security/ssl/DHClientKeyExchange.h>
#include <sun/security/ssl/DHKeyExchange.h>
#include <sun/security/ssl/DHServerKeyExchange.h>
#include <sun/security/ssl/ECDHClientKeyExchange.h>
#include <sun/security/ssl/ECDHKeyExchange.h>
#include <sun/security/ssl/ECDHServerKeyExchange.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/RSAClientKeyExchange.h>
#include <sun/security/ssl/RSAKeyExchange.h>
#include <sun/security/ssl/RSAServerKeyExchange.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLKeyAgreementGenerator.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLKeyExchange$1.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/SSLPossessionGenerator.h>
#include <jcpp.h>

#undef CLIENT_KEY_EXCHANGE
#undef DHE
#undef DHE_EXPORT
#undef ECDH
#undef ECDHE
#undef RSA
#undef RSA_EXPORT
#undef SERVER_KEY_EXCHANGE

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $SSLHandshakeArray = $Array<::sun::security::ssl::SSLHandshake>;
using $SSLKeyExchange$T12KeyAgreementArray = $Array<::sun::security::ssl::SSLKeyExchange$T12KeyAgreement>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $Map$Entry = ::java::util::Map$Entry;
using $DHClientKeyExchange = ::sun::security::ssl::DHClientKeyExchange;
using $DHClientKeyExchange$DHClientKeyExchangeConsumer = ::sun::security::ssl::DHClientKeyExchange$DHClientKeyExchangeConsumer;
using $DHClientKeyExchange$DHClientKeyExchangeProducer = ::sun::security::ssl::DHClientKeyExchange$DHClientKeyExchangeProducer;
using $DHKeyExchange = ::sun::security::ssl::DHKeyExchange;
using $DHServerKeyExchange = ::sun::security::ssl::DHServerKeyExchange;
using $ECDHClientKeyExchange = ::sun::security::ssl::ECDHClientKeyExchange;
using $ECDHKeyExchange = ::sun::security::ssl::ECDHKeyExchange;
using $ECDHServerKeyExchange = ::sun::security::ssl::ECDHServerKeyExchange;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $RSAClientKeyExchange = ::sun::security::ssl::RSAClientKeyExchange;
using $RSAKeyExchange = ::sun::security::ssl::RSAKeyExchange;
using $RSAServerKeyExchange = ::sun::security::ssl::RSAServerKeyExchange;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLKeyAgreement = ::sun::security::ssl::SSLKeyAgreement;
using $SSLKeyAgreementGenerator = ::sun::security::ssl::SSLKeyAgreementGenerator;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $SSLKeyExchange$1 = ::sun::security::ssl::SSLKeyExchange$1;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $SSLPossessionGenerator = ::sun::security::ssl::SSLPossessionGenerator;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLKeyExchange$T12KeyAgreement_FieldInfo_[] = {
	{"RSA", "Lsun/security/ssl/SSLKeyExchange$T12KeyAgreement;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLKeyExchange$T12KeyAgreement, RSA)},
	{"RSA_EXPORT", "Lsun/security/ssl/SSLKeyExchange$T12KeyAgreement;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLKeyExchange$T12KeyAgreement, RSA_EXPORT)},
	{"DHE", "Lsun/security/ssl/SSLKeyExchange$T12KeyAgreement;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLKeyExchange$T12KeyAgreement, DHE)},
	{"DHE_EXPORT", "Lsun/security/ssl/SSLKeyExchange$T12KeyAgreement;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLKeyExchange$T12KeyAgreement, DHE_EXPORT)},
	{"ECDH", "Lsun/security/ssl/SSLKeyExchange$T12KeyAgreement;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLKeyExchange$T12KeyAgreement, ECDH)},
	{"ECDHE", "Lsun/security/ssl/SSLKeyExchange$T12KeyAgreement;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLKeyExchange$T12KeyAgreement, ECDHE)},
	{"$VALUES", "[Lsun/security/ssl/SSLKeyExchange$T12KeyAgreement;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLKeyExchange$T12KeyAgreement, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(SSLKeyExchange$T12KeyAgreement, name$)},
	{"possessionGenerator", "Lsun/security/ssl/SSLPossessionGenerator;", nullptr, $FINAL, $field(SSLKeyExchange$T12KeyAgreement, possessionGenerator)},
	{"keyAgreementGenerator", "Lsun/security/ssl/SSLKeyAgreementGenerator;", nullptr, $FINAL, $field(SSLKeyExchange$T12KeyAgreement, keyAgreementGenerator)},
	{}
};

$MethodInfo _SSLKeyExchange$T12KeyAgreement_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/SSLKeyExchange$T12KeyAgreement;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SSLKeyExchange$T12KeyAgreementArray*(*)()>(&SSLKeyExchange$T12KeyAgreement::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Lsun/security/ssl/SSLPossessionGenerator;Lsun/security/ssl/SSLKeyAgreementGenerator;)V", "(Ljava/lang/String;Lsun/security/ssl/SSLPossessionGenerator;Lsun/security/ssl/SSLKeyAgreementGenerator;)V", $PRIVATE, $method(static_cast<void(SSLKeyExchange$T12KeyAgreement::*)($String*,int32_t,$String*,$SSLPossessionGenerator*,$SSLKeyAgreementGenerator*)>(&SSLKeyExchange$T12KeyAgreement::init$))},
	{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createPossession", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLPossession;", nullptr, $PUBLIC},
	{"getHandshakeConsumers", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry;", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry<Ljava/lang/Byte;Lsun/security/ssl/SSLConsumer;>;", $PUBLIC},
	{"getHandshakeProducers", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry;", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry<Ljava/lang/Byte;Lsun/security/ssl/HandshakeProducer;>;", $PUBLIC},
	{"getRelatedHandshakers", "(Lsun/security/ssl/HandshakeContext;)[Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/SSLKeyExchange$T12KeyAgreement;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SSLKeyExchange$T12KeyAgreement*(*)($String*)>(&SSLKeyExchange$T12KeyAgreement::valueOf))},
	{"values", "()[Lsun/security/ssl/SSLKeyExchange$T12KeyAgreement;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SSLKeyExchange$T12KeyAgreementArray*(*)()>(&SSLKeyExchange$T12KeyAgreement::values))},
	{}
};

$InnerClassInfo _SSLKeyExchange$T12KeyAgreement_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$T12KeyAgreement", "sun.security.ssl.SSLKeyExchange", "T12KeyAgreement", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _SSLKeyExchange$T12KeyAgreement_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.SSLKeyExchange$T12KeyAgreement",
	"java.lang.Enum",
	"sun.security.ssl.SSLKeyAgreement",
	_SSLKeyExchange$T12KeyAgreement_FieldInfo_,
	_SSLKeyExchange$T12KeyAgreement_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/SSLKeyExchange$T12KeyAgreement;>;Lsun/security/ssl/SSLKeyAgreement;",
	nullptr,
	_SSLKeyExchange$T12KeyAgreement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$T12KeyAgreement($Class* clazz) {
	return $of($alloc(SSLKeyExchange$T12KeyAgreement));
}

$String* SSLKeyExchange$T12KeyAgreement::toString() {
	 return this->$Enum::toString();
}

bool SSLKeyExchange$T12KeyAgreement::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t SSLKeyExchange$T12KeyAgreement::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* SSLKeyExchange$T12KeyAgreement::clone() {
	 return this->$Enum::clone();
}

void SSLKeyExchange$T12KeyAgreement::finalize() {
	this->$Enum::finalize();
}

SSLKeyExchange$T12KeyAgreement* SSLKeyExchange$T12KeyAgreement::RSA = nullptr;
SSLKeyExchange$T12KeyAgreement* SSLKeyExchange$T12KeyAgreement::RSA_EXPORT = nullptr;
SSLKeyExchange$T12KeyAgreement* SSLKeyExchange$T12KeyAgreement::DHE = nullptr;
SSLKeyExchange$T12KeyAgreement* SSLKeyExchange$T12KeyAgreement::DHE_EXPORT = nullptr;
SSLKeyExchange$T12KeyAgreement* SSLKeyExchange$T12KeyAgreement::ECDH = nullptr;
SSLKeyExchange$T12KeyAgreement* SSLKeyExchange$T12KeyAgreement::ECDHE = nullptr;
$SSLKeyExchange$T12KeyAgreementArray* SSLKeyExchange$T12KeyAgreement::$VALUES = nullptr;

$SSLKeyExchange$T12KeyAgreementArray* SSLKeyExchange$T12KeyAgreement::$values() {
	$init(SSLKeyExchange$T12KeyAgreement);
	return $new($SSLKeyExchange$T12KeyAgreementArray, {
		SSLKeyExchange$T12KeyAgreement::RSA,
		SSLKeyExchange$T12KeyAgreement::RSA_EXPORT,
		SSLKeyExchange$T12KeyAgreement::DHE,
		SSLKeyExchange$T12KeyAgreement::DHE_EXPORT,
		SSLKeyExchange$T12KeyAgreement::ECDH,
		SSLKeyExchange$T12KeyAgreement::ECDHE
	});
}

$SSLKeyExchange$T12KeyAgreementArray* SSLKeyExchange$T12KeyAgreement::values() {
	$init(SSLKeyExchange$T12KeyAgreement);
	return $cast($SSLKeyExchange$T12KeyAgreementArray, SSLKeyExchange$T12KeyAgreement::$VALUES->clone());
}

SSLKeyExchange$T12KeyAgreement* SSLKeyExchange$T12KeyAgreement::valueOf($String* name) {
	$init(SSLKeyExchange$T12KeyAgreement);
	return $cast(SSLKeyExchange$T12KeyAgreement, $Enum::valueOf(SSLKeyExchange$T12KeyAgreement::class$, name));
}

void SSLKeyExchange$T12KeyAgreement::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $SSLPossessionGenerator* possessionGenerator, $SSLKeyAgreementGenerator* keyAgreementGenerator) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	$set(this, possessionGenerator, possessionGenerator);
	$set(this, keyAgreementGenerator, keyAgreementGenerator);
}

$SSLPossession* SSLKeyExchange$T12KeyAgreement::createPossession($HandshakeContext* context) {
	if (this->possessionGenerator != nullptr) {
		return $nc(this->possessionGenerator)->createPossession(context);
	}
	return nullptr;
}

$SSLKeyDerivation* SSLKeyExchange$T12KeyAgreement::createKeyDerivation($HandshakeContext* context) {
	return $nc(this->keyAgreementGenerator)->createKeyDerivation(context);
}

$SSLHandshakeArray* SSLKeyExchange$T12KeyAgreement::getRelatedHandshakers($HandshakeContext* handshakeContext) {
	if (!$nc($nc(handshakeContext)->negotiatedProtocol)->useTLS13PlusSpec()) {
		if (this->possessionGenerator != nullptr) {
			$init($SSLHandshake);
			return $new($SSLHandshakeArray, {$SSLHandshake::SERVER_KEY_EXCHANGE});
		}
	}
	return $new($SSLHandshakeArray, 0);
}

$Map$EntryArray* SSLKeyExchange$T12KeyAgreement::getHandshakeProducers($HandshakeContext* handshakeContext) {
	$useLocalCurrentObjectStackCache();
	if ($nc($nc(handshakeContext)->negotiatedProtocol)->useTLS13PlusSpec()) {
		return ($new($Map$EntryArray, 0));
	}
	if ($nc($nc(handshakeContext)->sslConfig)->isClientMode) {
		$init($SSLKeyExchange$1);
		switch ($nc($SSLKeyExchange$1::$SwitchMap$sun$security$ssl$SSLKeyExchange$T12KeyAgreement)->get((this)->ordinal())) {
		case 1:
			{}
		case 2:
			{
				$init($SSLHandshake);
				$init($RSAClientKeyExchange);
				return ($new($Map$EntryArray, {static_cast<$Map$Entry*>($$new($AbstractMap$SimpleImmutableEntry, $($Byte::valueOf($SSLHandshake::CLIENT_KEY_EXCHANGE->id)), $RSAClientKeyExchange::rsaHandshakeProducer))}));
			}
		case 3:
			{}
		case 4:
			{
				$init($SSLHandshake);
				$init($DHClientKeyExchange);
				return ($new($Map$EntryArray, {static_cast<$Map$Entry*>($$new($AbstractMap$SimpleImmutableEntry, $($Byte::valueOf($SSLHandshake::CLIENT_KEY_EXCHANGE->id)), $DHClientKeyExchange::dhHandshakeProducer))}));
			}
		case 5:
			{
				$init($SSLHandshake);
				$init($ECDHClientKeyExchange);
				return ($new($Map$EntryArray, {static_cast<$Map$Entry*>($$new($AbstractMap$SimpleImmutableEntry, $($Byte::valueOf($SSLHandshake::CLIENT_KEY_EXCHANGE->id)), $ECDHClientKeyExchange::ecdhHandshakeProducer))}));
			}
		case 6:
			{
				$init($SSLHandshake);
				$init($ECDHClientKeyExchange);
				return ($new($Map$EntryArray, {static_cast<$Map$Entry*>($$new($AbstractMap$SimpleImmutableEntry, $($Byte::valueOf($SSLHandshake::CLIENT_KEY_EXCHANGE->id)), $ECDHClientKeyExchange::ecdheHandshakeProducer))}));
			}
		}
	} else {
		$init($SSLKeyExchange$1);
		switch ($nc($SSLKeyExchange$1::$SwitchMap$sun$security$ssl$SSLKeyExchange$T12KeyAgreement)->get((this)->ordinal())) {
		case 2:
			{
				$init($SSLHandshake);
				$init($RSAServerKeyExchange);
				return ($new($Map$EntryArray, {static_cast<$Map$Entry*>($$new($AbstractMap$SimpleImmutableEntry, $($Byte::valueOf($SSLHandshake::SERVER_KEY_EXCHANGE->id)), $RSAServerKeyExchange::rsaHandshakeProducer))}));
			}
		case 3:
			{}
		case 4:
			{
				$init($SSLHandshake);
				$init($DHServerKeyExchange);
				return ($new($Map$EntryArray, {static_cast<$Map$Entry*>($$new($AbstractMap$SimpleImmutableEntry, $($Byte::valueOf($SSLHandshake::SERVER_KEY_EXCHANGE->id)), $DHServerKeyExchange::dhHandshakeProducer))}));
			}
		case 6:
			{
				$init($SSLHandshake);
				$init($ECDHServerKeyExchange);
				return ($new($Map$EntryArray, {static_cast<$Map$Entry*>($$new($AbstractMap$SimpleImmutableEntry, $($Byte::valueOf($SSLHandshake::SERVER_KEY_EXCHANGE->id)), $ECDHServerKeyExchange::ecdheHandshakeProducer))}));
			}
		}
	}
	return ($new($Map$EntryArray, 0));
}

$Map$EntryArray* SSLKeyExchange$T12KeyAgreement::getHandshakeConsumers($HandshakeContext* handshakeContext) {
	$useLocalCurrentObjectStackCache();
	if ($nc($nc(handshakeContext)->negotiatedProtocol)->useTLS13PlusSpec()) {
		return ($new($Map$EntryArray, 0));
	}
	if ($nc($nc(handshakeContext)->sslConfig)->isClientMode) {
		$init($SSLKeyExchange$1);
		switch ($nc($SSLKeyExchange$1::$SwitchMap$sun$security$ssl$SSLKeyExchange$T12KeyAgreement)->get((this)->ordinal())) {
		case 2:
			{
				$init($SSLHandshake);
				$init($RSAServerKeyExchange);
				return ($new($Map$EntryArray, {static_cast<$Map$Entry*>($$new($AbstractMap$SimpleImmutableEntry, $($Byte::valueOf($SSLHandshake::SERVER_KEY_EXCHANGE->id)), $RSAServerKeyExchange::rsaHandshakeConsumer))}));
			}
		case 3:
			{}
		case 4:
			{
				$init($SSLHandshake);
				$init($DHServerKeyExchange);
				return ($new($Map$EntryArray, {static_cast<$Map$Entry*>($$new($AbstractMap$SimpleImmutableEntry, $($Byte::valueOf($SSLHandshake::SERVER_KEY_EXCHANGE->id)), $DHServerKeyExchange::dhHandshakeConsumer))}));
			}
		case 6:
			{
				$init($SSLHandshake);
				$init($ECDHServerKeyExchange);
				return ($new($Map$EntryArray, {static_cast<$Map$Entry*>($$new($AbstractMap$SimpleImmutableEntry, $($Byte::valueOf($SSLHandshake::SERVER_KEY_EXCHANGE->id)), $ECDHServerKeyExchange::ecdheHandshakeConsumer))}));
			}
		}
	} else {
		$init($SSLKeyExchange$1);
		switch ($nc($SSLKeyExchange$1::$SwitchMap$sun$security$ssl$SSLKeyExchange$T12KeyAgreement)->get((this)->ordinal())) {
		case 1:
			{}
		case 2:
			{
				$init($SSLHandshake);
				$init($RSAClientKeyExchange);
				return ($new($Map$EntryArray, {static_cast<$Map$Entry*>($$new($AbstractMap$SimpleImmutableEntry, $($Byte::valueOf($SSLHandshake::CLIENT_KEY_EXCHANGE->id)), $RSAClientKeyExchange::rsaHandshakeConsumer))}));
			}
		case 3:
			{}
		case 4:
			{
				$init($SSLHandshake);
				$init($DHClientKeyExchange);
				return ($new($Map$EntryArray, {static_cast<$Map$Entry*>($$new($AbstractMap$SimpleImmutableEntry, $($Byte::valueOf($SSLHandshake::CLIENT_KEY_EXCHANGE->id)), $DHClientKeyExchange::dhHandshakeConsumer))}));
			}
		case 5:
			{
				$init($SSLHandshake);
				$init($ECDHClientKeyExchange);
				return ($new($Map$EntryArray, {static_cast<$Map$Entry*>($$new($AbstractMap$SimpleImmutableEntry, $($Byte::valueOf($SSLHandshake::CLIENT_KEY_EXCHANGE->id)), $ECDHClientKeyExchange::ecdhHandshakeConsumer))}));
			}
		case 6:
			{
				$init($SSLHandshake);
				$init($ECDHClientKeyExchange);
				return ($new($Map$EntryArray, {static_cast<$Map$Entry*>($$new($AbstractMap$SimpleImmutableEntry, $($Byte::valueOf($SSLHandshake::CLIENT_KEY_EXCHANGE->id)), $ECDHClientKeyExchange::ecdheHandshakeConsumer))}));
			}
		}
	}
	return ($new($Map$EntryArray, 0));
}

void clinit$SSLKeyExchange$T12KeyAgreement($Class* class$) {
	$init($RSAKeyExchange);
	$assignStatic(SSLKeyExchange$T12KeyAgreement::RSA, $new(SSLKeyExchange$T12KeyAgreement, "RSA"_s, 0, "rsa"_s, nullptr, $RSAKeyExchange::kaGenerator));
	$assignStatic(SSLKeyExchange$T12KeyAgreement::RSA_EXPORT, $new(SSLKeyExchange$T12KeyAgreement, "RSA_EXPORT"_s, 1, "rsa_export"_s, $RSAKeyExchange::poGenerator, $RSAKeyExchange::kaGenerator));
	$init($DHKeyExchange);
	$assignStatic(SSLKeyExchange$T12KeyAgreement::DHE, $new(SSLKeyExchange$T12KeyAgreement, "DHE"_s, 2, "dhe"_s, $DHKeyExchange::poGenerator, $DHKeyExchange::kaGenerator));
	$assignStatic(SSLKeyExchange$T12KeyAgreement::DHE_EXPORT, $new(SSLKeyExchange$T12KeyAgreement, "DHE_EXPORT"_s, 3, "dhe_export"_s, $DHKeyExchange::poExportableGenerator, $DHKeyExchange::kaGenerator));
	$init($ECDHKeyExchange);
	$assignStatic(SSLKeyExchange$T12KeyAgreement::ECDH, $new(SSLKeyExchange$T12KeyAgreement, "ECDH"_s, 4, "ecdh"_s, nullptr, $ECDHKeyExchange::ecdhKAGenerator));
	$assignStatic(SSLKeyExchange$T12KeyAgreement::ECDHE, $new(SSLKeyExchange$T12KeyAgreement, "ECDHE"_s, 5, "ecdhe"_s, $ECDHKeyExchange::poGenerator, $ECDHKeyExchange::ecdheXdhKAGenerator));
	$assignStatic(SSLKeyExchange$T12KeyAgreement::$VALUES, SSLKeyExchange$T12KeyAgreement::$values());
}

SSLKeyExchange$T12KeyAgreement::SSLKeyExchange$T12KeyAgreement() {
}

$Class* SSLKeyExchange$T12KeyAgreement::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$T12KeyAgreement, name, initialize, &_SSLKeyExchange$T12KeyAgreement_ClassInfo_, clinit$SSLKeyExchange$T12KeyAgreement, allocate$SSLKeyExchange$T12KeyAgreement);
	return class$;
}

$Class* SSLKeyExchange$T12KeyAgreement::class$ = nullptr;

		} // ssl
	} // security
} // sun