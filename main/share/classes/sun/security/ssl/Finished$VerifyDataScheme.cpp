#include <sun/security/ssl/Finished$VerifyDataScheme.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/Finished$1.h>
#include <sun/security/ssl/Finished$S30VerifyDataGenerator.h>
#include <sun/security/ssl/Finished$T10VerifyDataGenerator.h>
#include <sun/security/ssl/Finished$T12VerifyDataGenerator.h>
#include <sun/security/ssl/Finished$T13VerifyDataGenerator.h>
#include <sun/security/ssl/Finished$VerifyDataGenerator.h>
#include <sun/security/ssl/Finished.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <jcpp.h>

#undef SSL30
#undef TLS10
#undef TLS12
#undef TLS13

using $Finished$VerifyDataSchemeArray = $Array<::sun::security::ssl::Finished$VerifyDataScheme>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Finished = ::sun::security::ssl::Finished;
using $Finished$1 = ::sun::security::ssl::Finished$1;
using $Finished$S30VerifyDataGenerator = ::sun::security::ssl::Finished$S30VerifyDataGenerator;
using $Finished$T10VerifyDataGenerator = ::sun::security::ssl::Finished$T10VerifyDataGenerator;
using $Finished$T12VerifyDataGenerator = ::sun::security::ssl::Finished$T12VerifyDataGenerator;
using $Finished$T13VerifyDataGenerator = ::sun::security::ssl::Finished$T13VerifyDataGenerator;
using $Finished$VerifyDataGenerator = ::sun::security::ssl::Finished$VerifyDataGenerator;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Finished$VerifyDataScheme_FieldInfo_[] = {
	{"SSL30", "Lsun/security/ssl/Finished$VerifyDataScheme;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Finished$VerifyDataScheme, SSL30)},
	{"TLS10", "Lsun/security/ssl/Finished$VerifyDataScheme;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Finished$VerifyDataScheme, TLS10)},
	{"TLS12", "Lsun/security/ssl/Finished$VerifyDataScheme;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Finished$VerifyDataScheme, TLS12)},
	{"TLS13", "Lsun/security/ssl/Finished$VerifyDataScheme;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Finished$VerifyDataScheme, TLS13)},
	{"$VALUES", "[Lsun/security/ssl/Finished$VerifyDataScheme;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Finished$VerifyDataScheme, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(Finished$VerifyDataScheme, name$)},
	{"generator", "Lsun/security/ssl/Finished$VerifyDataGenerator;", nullptr, $FINAL, $field(Finished$VerifyDataScheme, generator)},
	{}
};

$MethodInfo _Finished$VerifyDataScheme_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/Finished$VerifyDataScheme;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Finished$VerifyDataSchemeArray*(*)()>(&Finished$VerifyDataScheme::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Lsun/security/ssl/Finished$VerifyDataGenerator;)V", "(Ljava/lang/String;Lsun/security/ssl/Finished$VerifyDataGenerator;)V", $PRIVATE, $method(static_cast<void(Finished$VerifyDataScheme::*)($String*,int32_t,$String*,$Finished$VerifyDataGenerator*)>(&Finished$VerifyDataScheme::init$))},
	{"createVerifyData", "(Lsun/security/ssl/HandshakeContext;Z)[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(Finished$VerifyDataScheme::*)($HandshakeContext*,bool)>(&Finished$VerifyDataScheme::createVerifyData)), "java.io.IOException"},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/Finished$VerifyDataScheme;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Finished$VerifyDataScheme*(*)($String*)>(&Finished$VerifyDataScheme::valueOf))},
	{"valueOf", "(Lsun/security/ssl/ProtocolVersion;)Lsun/security/ssl/Finished$VerifyDataScheme;", nullptr, $STATIC, $method(static_cast<Finished$VerifyDataScheme*(*)($ProtocolVersion*)>(&Finished$VerifyDataScheme::valueOf))},
	{"values", "()[Lsun/security/ssl/Finished$VerifyDataScheme;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Finished$VerifyDataSchemeArray*(*)()>(&Finished$VerifyDataScheme::values))},
	{}
};

$InnerClassInfo _Finished$VerifyDataScheme_InnerClassesInfo_[] = {
	{"sun.security.ssl.Finished$VerifyDataScheme", "sun.security.ssl.Finished", "VerifyDataScheme", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Finished$VerifyDataScheme_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.Finished$VerifyDataScheme",
	"java.lang.Enum",
	nullptr,
	_Finished$VerifyDataScheme_FieldInfo_,
	_Finished$VerifyDataScheme_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/Finished$VerifyDataScheme;>;",
	nullptr,
	_Finished$VerifyDataScheme_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Finished"
};

$Object* allocate$Finished$VerifyDataScheme($Class* clazz) {
	return $of($alloc(Finished$VerifyDataScheme));
}

Finished$VerifyDataScheme* Finished$VerifyDataScheme::SSL30 = nullptr;
Finished$VerifyDataScheme* Finished$VerifyDataScheme::TLS10 = nullptr;
Finished$VerifyDataScheme* Finished$VerifyDataScheme::TLS12 = nullptr;
Finished$VerifyDataScheme* Finished$VerifyDataScheme::TLS13 = nullptr;
$Finished$VerifyDataSchemeArray* Finished$VerifyDataScheme::$VALUES = nullptr;

$Finished$VerifyDataSchemeArray* Finished$VerifyDataScheme::$values() {
	$init(Finished$VerifyDataScheme);
	return $new($Finished$VerifyDataSchemeArray, {
		Finished$VerifyDataScheme::SSL30,
		Finished$VerifyDataScheme::TLS10,
		Finished$VerifyDataScheme::TLS12,
		Finished$VerifyDataScheme::TLS13
	});
}

$Finished$VerifyDataSchemeArray* Finished$VerifyDataScheme::values() {
	$init(Finished$VerifyDataScheme);
	return $cast($Finished$VerifyDataSchemeArray, Finished$VerifyDataScheme::$VALUES->clone());
}

Finished$VerifyDataScheme* Finished$VerifyDataScheme::valueOf($String* name) {
	$init(Finished$VerifyDataScheme);
	return $cast(Finished$VerifyDataScheme, $Enum::valueOf(Finished$VerifyDataScheme::class$, name));
}

void Finished$VerifyDataScheme::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $Finished$VerifyDataGenerator* verifyDataGenerator) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	$set(this, generator, verifyDataGenerator);
}

Finished$VerifyDataScheme* Finished$VerifyDataScheme::valueOf($ProtocolVersion* protocolVersion) {
	$init(Finished$VerifyDataScheme);
	$init($Finished$1);
	switch ($nc($Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->get($nc((protocolVersion))->ordinal())) {
	case 1:
		{
			return Finished$VerifyDataScheme::SSL30;
		}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{
			return Finished$VerifyDataScheme::TLS10;
		}
	case 5:
		{}
	case 6:
		{
			return Finished$VerifyDataScheme::TLS12;
		}
	case 7:
		{
			return Finished$VerifyDataScheme::TLS13;
		}
	default:
		{
			return nullptr;
		}
	}
}

$bytes* Finished$VerifyDataScheme::createVerifyData($HandshakeContext* context, bool isValidation) {
	if (this->generator != nullptr) {
		return $nc(this->generator)->createVerifyData(context, isValidation);
	}
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
}

void clinit$Finished$VerifyDataScheme($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Finished$VerifyDataScheme::SSL30, $new(Finished$VerifyDataScheme, "SSL30"_s, 0, "kdf_ssl30"_s, $$new($Finished$S30VerifyDataGenerator)));
	$assignStatic(Finished$VerifyDataScheme::TLS10, $new(Finished$VerifyDataScheme, "TLS10"_s, 1, "kdf_tls10"_s, $$new($Finished$T10VerifyDataGenerator)));
	$assignStatic(Finished$VerifyDataScheme::TLS12, $new(Finished$VerifyDataScheme, "TLS12"_s, 2, "kdf_tls12"_s, $$new($Finished$T12VerifyDataGenerator)));
	$assignStatic(Finished$VerifyDataScheme::TLS13, $new(Finished$VerifyDataScheme, "TLS13"_s, 3, "kdf_tls13"_s, $$new($Finished$T13VerifyDataGenerator)));
	$assignStatic(Finished$VerifyDataScheme::$VALUES, Finished$VerifyDataScheme::$values());
}

Finished$VerifyDataScheme::Finished$VerifyDataScheme() {
}

$Class* Finished$VerifyDataScheme::load$($String* name, bool initialize) {
	$loadClass(Finished$VerifyDataScheme, name, initialize, &_Finished$VerifyDataScheme_ClassInfo_, clinit$Finished$VerifyDataScheme, allocate$Finished$VerifyDataScheme);
	return class$;
}

$Class* Finished$VerifyDataScheme::class$ = nullptr;

		} // ssl
	} // security
} // sun