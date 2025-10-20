#include <sun/security/ssl/SSLTrafficKeyDerivation.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLKeyDerivationGenerator.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation$1.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator.h>
#include <jcpp.h>

#undef SSL30
#undef TLS10
#undef TLS12
#undef TLS13

using $SSLTrafficKeyDerivationArray = $Array<::sun::security::ssl::SSLTrafficKeyDerivation>;
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
using $SSLTrafficKeyDerivation$1 = ::sun::security::ssl::SSLTrafficKeyDerivation$1;
using $SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator = ::sun::security::ssl::SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator;
using $SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator = ::sun::security::ssl::SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator;
using $SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator = ::sun::security::ssl::SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator;
using $SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator = ::sun::security::ssl::SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLTrafficKeyDerivation_FieldInfo_[] = {
	{"SSL30", "Lsun/security/ssl/SSLTrafficKeyDerivation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLTrafficKeyDerivation, SSL30)},
	{"TLS10", "Lsun/security/ssl/SSLTrafficKeyDerivation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLTrafficKeyDerivation, TLS10)},
	{"TLS12", "Lsun/security/ssl/SSLTrafficKeyDerivation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLTrafficKeyDerivation, TLS12)},
	{"TLS13", "Lsun/security/ssl/SSLTrafficKeyDerivation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLTrafficKeyDerivation, TLS13)},
	{"$VALUES", "[Lsun/security/ssl/SSLTrafficKeyDerivation;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLTrafficKeyDerivation, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(SSLTrafficKeyDerivation, name$)},
	{"keyDerivationGenerator", "Lsun/security/ssl/SSLKeyDerivationGenerator;", nullptr, $FINAL, $field(SSLTrafficKeyDerivation, keyDerivationGenerator)},
	{}
};

$MethodInfo _SSLTrafficKeyDerivation_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/SSLTrafficKeyDerivation;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SSLTrafficKeyDerivationArray*(*)()>(&SSLTrafficKeyDerivation::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Lsun/security/ssl/SSLKeyDerivationGenerator;)V", "(Ljava/lang/String;Lsun/security/ssl/SSLKeyDerivationGenerator;)V", $PRIVATE, $method(static_cast<void(SSLTrafficKeyDerivation::*)($String*,int32_t,$String*,$SSLKeyDerivationGenerator*)>(&SSLTrafficKeyDerivation::init$))},
	{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;Ljavax/crypto/SecretKey;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/SSLTrafficKeyDerivation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SSLTrafficKeyDerivation*(*)($String*)>(&SSLTrafficKeyDerivation::valueOf))},
	{"valueOf", "(Lsun/security/ssl/ProtocolVersion;)Lsun/security/ssl/SSLTrafficKeyDerivation;", nullptr, $STATIC, $method(static_cast<SSLTrafficKeyDerivation*(*)($ProtocolVersion*)>(&SSLTrafficKeyDerivation::valueOf))},
	{"values", "()[Lsun/security/ssl/SSLTrafficKeyDerivation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SSLTrafficKeyDerivationArray*(*)()>(&SSLTrafficKeyDerivation::values))},
	{}
};

$InnerClassInfo _SSLTrafficKeyDerivation_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLTrafficKeyDerivation$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.security.ssl.SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation", "sun.security.ssl.SSLTrafficKeyDerivation", "LegacyTrafficKeyDerivation", $STATIC | $FINAL},
	{"sun.security.ssl.SSLTrafficKeyDerivation$KeySchedule", "sun.security.ssl.SSLTrafficKeyDerivation", "KeySchedule", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{"sun.security.ssl.SSLTrafficKeyDerivation$T13TrafficKeyDerivation", "sun.security.ssl.SSLTrafficKeyDerivation", "T13TrafficKeyDerivation", $STATIC | $FINAL},
	{"sun.security.ssl.SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator", "sun.security.ssl.SSLTrafficKeyDerivation", "T13TrafficKeyDerivationGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator", "sun.security.ssl.SSLTrafficKeyDerivation", "T12TrafficKeyDerivationGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator", "sun.security.ssl.SSLTrafficKeyDerivation", "T10TrafficKeyDerivationGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator", "sun.security.ssl.SSLTrafficKeyDerivation", "S30TrafficKeyDerivationGenerator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLTrafficKeyDerivation_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.SSLTrafficKeyDerivation",
	"java.lang.Enum",
	"sun.security.ssl.SSLKeyDerivationGenerator",
	_SSLTrafficKeyDerivation_FieldInfo_,
	_SSLTrafficKeyDerivation_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/SSLTrafficKeyDerivation;>;Lsun/security/ssl/SSLKeyDerivationGenerator;",
	nullptr,
	_SSLTrafficKeyDerivation_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLTrafficKeyDerivation$1,sun.security.ssl.SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation,sun.security.ssl.SSLTrafficKeyDerivation$KeySchedule,sun.security.ssl.SSLTrafficKeyDerivation$T13TrafficKeyDerivation,sun.security.ssl.SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator,sun.security.ssl.SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator,sun.security.ssl.SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator,sun.security.ssl.SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator"
};

$Object* allocate$SSLTrafficKeyDerivation($Class* clazz) {
	return $of($alloc(SSLTrafficKeyDerivation));
}

$String* SSLTrafficKeyDerivation::toString() {
	 return this->$Enum::toString();
}

bool SSLTrafficKeyDerivation::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t SSLTrafficKeyDerivation::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* SSLTrafficKeyDerivation::clone() {
	 return this->$Enum::clone();
}

void SSLTrafficKeyDerivation::finalize() {
	this->$Enum::finalize();
}

SSLTrafficKeyDerivation* SSLTrafficKeyDerivation::SSL30 = nullptr;
SSLTrafficKeyDerivation* SSLTrafficKeyDerivation::TLS10 = nullptr;
SSLTrafficKeyDerivation* SSLTrafficKeyDerivation::TLS12 = nullptr;
SSLTrafficKeyDerivation* SSLTrafficKeyDerivation::TLS13 = nullptr;
$SSLTrafficKeyDerivationArray* SSLTrafficKeyDerivation::$VALUES = nullptr;

$SSLTrafficKeyDerivationArray* SSLTrafficKeyDerivation::$values() {
	$init(SSLTrafficKeyDerivation);
	return $new($SSLTrafficKeyDerivationArray, {
		SSLTrafficKeyDerivation::SSL30,
		SSLTrafficKeyDerivation::TLS10,
		SSLTrafficKeyDerivation::TLS12,
		SSLTrafficKeyDerivation::TLS13
	});
}

$SSLTrafficKeyDerivationArray* SSLTrafficKeyDerivation::values() {
	$init(SSLTrafficKeyDerivation);
	return $cast($SSLTrafficKeyDerivationArray, SSLTrafficKeyDerivation::$VALUES->clone());
}

SSLTrafficKeyDerivation* SSLTrafficKeyDerivation::valueOf($String* name) {
	$init(SSLTrafficKeyDerivation);
	return $cast(SSLTrafficKeyDerivation, $Enum::valueOf(SSLTrafficKeyDerivation::class$, name));
}

void SSLTrafficKeyDerivation::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $SSLKeyDerivationGenerator* keyDerivationGenerator) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	$set(this, keyDerivationGenerator, keyDerivationGenerator);
}

SSLTrafficKeyDerivation* SSLTrafficKeyDerivation::valueOf($ProtocolVersion* protocolVersion) {
	$init(SSLTrafficKeyDerivation);
	$init($SSLTrafficKeyDerivation$1);
	switch ($nc($SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->get($nc((protocolVersion))->ordinal())) {
	case 1:
		{
			return SSLTrafficKeyDerivation::SSL30;
		}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{
			return SSLTrafficKeyDerivation::TLS10;
		}
	case 5:
		{}
	case 6:
		{
			return SSLTrafficKeyDerivation::TLS12;
		}
	case 7:
		{
			return SSLTrafficKeyDerivation::TLS13;
		}
	}
	return nullptr;
}

$SSLKeyDerivation* SSLTrafficKeyDerivation::createKeyDerivation($HandshakeContext* context, $SecretKey* secretKey) {
	return $nc(this->keyDerivationGenerator)->createKeyDerivation(context, secretKey);
}

void clinit$SSLTrafficKeyDerivation($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(SSLTrafficKeyDerivation::SSL30, $new(SSLTrafficKeyDerivation, "SSL30"_s, 0, "kdf_ssl30"_s, $$new($SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator)));
	$assignStatic(SSLTrafficKeyDerivation::TLS10, $new(SSLTrafficKeyDerivation, "TLS10"_s, 1, "kdf_tls10"_s, $$new($SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator)));
	$assignStatic(SSLTrafficKeyDerivation::TLS12, $new(SSLTrafficKeyDerivation, "TLS12"_s, 2, "kdf_tls12"_s, $$new($SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator)));
	$assignStatic(SSLTrafficKeyDerivation::TLS13, $new(SSLTrafficKeyDerivation, "TLS13"_s, 3, "kdf_tls13"_s, $$new($SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator)));
	$assignStatic(SSLTrafficKeyDerivation::$VALUES, SSLTrafficKeyDerivation::$values());
}

SSLTrafficKeyDerivation::SSLTrafficKeyDerivation() {
}

$Class* SSLTrafficKeyDerivation::load$($String* name, bool initialize) {
	$loadClass(SSLTrafficKeyDerivation, name, initialize, &_SSLTrafficKeyDerivation_ClassInfo_, clinit$SSLTrafficKeyDerivation, allocate$SSLTrafficKeyDerivation);
	return class$;
}

$Class* SSLTrafficKeyDerivation::class$ = nullptr;

		} // ssl
	} // security
} // sun