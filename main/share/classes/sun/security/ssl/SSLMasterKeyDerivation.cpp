#include <sun/security/ssl/SSLMasterKeyDerivation.h>

#include <java/lang/Enum.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLMasterKeyDerivation$1.h>
#include <sun/security/ssl/SSLMasterKeyDerivation$LegacyMasterKeyDerivation.h>
#include <jcpp.h>

#undef SSL30
#undef TLS10
#undef TLS12

using $SSLMasterKeyDerivationArray = $Array<::sun::security::ssl::SSLMasterKeyDerivation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecretKey = ::javax::crypto::SecretKey;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLKeyDerivationGenerator = ::sun::security::ssl::SSLKeyDerivationGenerator;
using $SSLMasterKeyDerivation$1 = ::sun::security::ssl::SSLMasterKeyDerivation$1;
using $SSLMasterKeyDerivation$LegacyMasterKeyDerivation = ::sun::security::ssl::SSLMasterKeyDerivation$LegacyMasterKeyDerivation;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLMasterKeyDerivation_FieldInfo_[] = {
	{"SSL30", "Lsun/security/ssl/SSLMasterKeyDerivation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLMasterKeyDerivation, SSL30)},
	{"TLS10", "Lsun/security/ssl/SSLMasterKeyDerivation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLMasterKeyDerivation, TLS10)},
	{"TLS12", "Lsun/security/ssl/SSLMasterKeyDerivation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLMasterKeyDerivation, TLS12)},
	{"$VALUES", "[Lsun/security/ssl/SSLMasterKeyDerivation;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLMasterKeyDerivation, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(SSLMasterKeyDerivation, name$)},
	{}
};

$MethodInfo _SSLMasterKeyDerivation_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/SSLMasterKeyDerivation;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SSLMasterKeyDerivationArray*(*)()>(&SSLMasterKeyDerivation::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(SSLMasterKeyDerivation::*)($String*,int32_t,$String*)>(&SSLMasterKeyDerivation::init$))},
	{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;Ljavax/crypto/SecretKey;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/SSLMasterKeyDerivation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SSLMasterKeyDerivation*(*)($String*)>(&SSLMasterKeyDerivation::valueOf))},
	{"valueOf", "(Lsun/security/ssl/ProtocolVersion;)Lsun/security/ssl/SSLMasterKeyDerivation;", nullptr, $STATIC, $method(static_cast<SSLMasterKeyDerivation*(*)($ProtocolVersion*)>(&SSLMasterKeyDerivation::valueOf))},
	{"values", "()[Lsun/security/ssl/SSLMasterKeyDerivation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SSLMasterKeyDerivationArray*(*)()>(&SSLMasterKeyDerivation::values))},
	{}
};

$InnerClassInfo _SSLMasterKeyDerivation_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLMasterKeyDerivation$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.security.ssl.SSLMasterKeyDerivation$LegacyMasterKeyDerivation", "sun.security.ssl.SSLMasterKeyDerivation", "LegacyMasterKeyDerivation", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLMasterKeyDerivation_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.SSLMasterKeyDerivation",
	"java.lang.Enum",
	"sun.security.ssl.SSLKeyDerivationGenerator",
	_SSLMasterKeyDerivation_FieldInfo_,
	_SSLMasterKeyDerivation_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/SSLMasterKeyDerivation;>;Lsun/security/ssl/SSLKeyDerivationGenerator;",
	nullptr,
	_SSLMasterKeyDerivation_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLMasterKeyDerivation$1,sun.security.ssl.SSLMasterKeyDerivation$LegacyMasterKeyDerivation"
};

$Object* allocate$SSLMasterKeyDerivation($Class* clazz) {
	return $of($alloc(SSLMasterKeyDerivation));
}

$String* SSLMasterKeyDerivation::toString() {
	 return this->$Enum::toString();
}

bool SSLMasterKeyDerivation::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t SSLMasterKeyDerivation::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* SSLMasterKeyDerivation::clone() {
	 return this->$Enum::clone();
}

void SSLMasterKeyDerivation::finalize() {
	this->$Enum::finalize();
}

SSLMasterKeyDerivation* SSLMasterKeyDerivation::SSL30 = nullptr;
SSLMasterKeyDerivation* SSLMasterKeyDerivation::TLS10 = nullptr;
SSLMasterKeyDerivation* SSLMasterKeyDerivation::TLS12 = nullptr;
$SSLMasterKeyDerivationArray* SSLMasterKeyDerivation::$VALUES = nullptr;

$SSLMasterKeyDerivationArray* SSLMasterKeyDerivation::$values() {
	$init(SSLMasterKeyDerivation);
	return $new($SSLMasterKeyDerivationArray, {
		SSLMasterKeyDerivation::SSL30,
		SSLMasterKeyDerivation::TLS10,
		SSLMasterKeyDerivation::TLS12
	});
}

$SSLMasterKeyDerivationArray* SSLMasterKeyDerivation::values() {
	$init(SSLMasterKeyDerivation);
	return $cast($SSLMasterKeyDerivationArray, SSLMasterKeyDerivation::$VALUES->clone());
}

SSLMasterKeyDerivation* SSLMasterKeyDerivation::valueOf($String* name) {
	$init(SSLMasterKeyDerivation);
	return $cast(SSLMasterKeyDerivation, $Enum::valueOf(SSLMasterKeyDerivation::class$, name));
}

void SSLMasterKeyDerivation::init$($String* $enum$name, int32_t $enum$ordinal, $String* name) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
}

SSLMasterKeyDerivation* SSLMasterKeyDerivation::valueOf($ProtocolVersion* protocolVersion) {
	$init(SSLMasterKeyDerivation);
	$init($SSLMasterKeyDerivation$1);
	switch ($nc($SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->get($nc((protocolVersion))->ordinal())) {
	case 1:
		{
			return SSLMasterKeyDerivation::SSL30;
		}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{
			return SSLMasterKeyDerivation::TLS10;
		}
	case 5:
		{}
	case 6:
		{
			return SSLMasterKeyDerivation::TLS12;
		}
	default:
		{
			return nullptr;
		}
	}
}

$SSLKeyDerivation* SSLMasterKeyDerivation::createKeyDerivation($HandshakeContext* context, $SecretKey* secretKey) {
	return $new($SSLMasterKeyDerivation$LegacyMasterKeyDerivation, context, secretKey);
}

void clinit$SSLMasterKeyDerivation($Class* class$) {
	$assignStatic(SSLMasterKeyDerivation::SSL30, $new(SSLMasterKeyDerivation, "SSL30"_s, 0, "kdf_ssl30"_s));
	$assignStatic(SSLMasterKeyDerivation::TLS10, $new(SSLMasterKeyDerivation, "TLS10"_s, 1, "kdf_tls10"_s));
	$assignStatic(SSLMasterKeyDerivation::TLS12, $new(SSLMasterKeyDerivation, "TLS12"_s, 2, "kdf_tls12"_s));
	$assignStatic(SSLMasterKeyDerivation::$VALUES, SSLMasterKeyDerivation::$values());
}

SSLMasterKeyDerivation::SSLMasterKeyDerivation() {
}

$Class* SSLMasterKeyDerivation::load$($String* name, bool initialize) {
	$loadClass(SSLMasterKeyDerivation, name, initialize, &_SSLMasterKeyDerivation_ClassInfo_, clinit$SSLMasterKeyDerivation, allocate$SSLMasterKeyDerivation);
	return class$;
}

$Class* SSLMasterKeyDerivation::class$ = nullptr;

		} // ssl
	} // security
} // sun