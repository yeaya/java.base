#include <sun/security/ssl/CipherSuite$KeyExchange.h>

#include <java/lang/Enum.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/JsseJce.h>
#include <sun/security/ssl/NamedGroup$NamedGroupSpec.h>
#include <jcpp.h>

#undef ALLOW_ECC
#undef K_DHE_DSS
#undef K_DHE_DSS_EXPORT
#undef K_DHE_RSA
#undef K_DHE_RSA_EXPORT
#undef K_DH_ANON
#undef K_DH_ANON_EXPORT
#undef K_DH_DSS
#undef K_DH_RSA
#undef K_ECDHE_ECDSA
#undef K_ECDHE_RSA
#undef K_ECDH_ANON
#undef K_ECDH_ECDSA
#undef K_ECDH_RSA
#undef K_NULL
#undef K_RSA
#undef K_RSA_EXPORT
#undef K_SCSV
#undef NAMED_GROUP_ECDHE
#undef NAMED_GROUP_FFDHE
#undef NAMED_GROUP_NONE
#undef NAMED_GROUP_XDH

using $CipherSuite$KeyExchangeArray = $Array<::sun::security::ssl::CipherSuite$KeyExchange>;
using $NamedGroup$NamedGroupSpecArray = $Array<::sun::security::ssl::NamedGroup$NamedGroupSpec>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JsseJce = ::sun::security::ssl::JsseJce;
using $NamedGroup$NamedGroupSpec = ::sun::security::ssl::NamedGroup$NamedGroupSpec;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CipherSuite$KeyExchange_FieldInfo_[] = {
	{"K_NULL", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_NULL)},
	{"K_RSA", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_RSA)},
	{"K_RSA_EXPORT", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_RSA_EXPORT)},
	{"K_DH_RSA", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_DH_RSA)},
	{"K_DH_DSS", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_DH_DSS)},
	{"K_DHE_DSS", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_DHE_DSS)},
	{"K_DHE_DSS_EXPORT", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_DHE_DSS_EXPORT)},
	{"K_DHE_RSA", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_DHE_RSA)},
	{"K_DHE_RSA_EXPORT", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_DHE_RSA_EXPORT)},
	{"K_DH_ANON", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_DH_ANON)},
	{"K_DH_ANON_EXPORT", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_DH_ANON_EXPORT)},
	{"K_ECDH_ECDSA", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_ECDH_ECDSA)},
	{"K_ECDH_RSA", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_ECDH_RSA)},
	{"K_ECDHE_ECDSA", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_ECDHE_ECDSA)},
	{"K_ECDHE_RSA", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_ECDHE_RSA)},
	{"K_ECDH_ANON", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_ECDH_ANON)},
	{"K_SCSV", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$KeyExchange, K_SCSV)},
	{"$VALUES", "[Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CipherSuite$KeyExchange, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(CipherSuite$KeyExchange, name$)},
	{"allowed", "Z", nullptr, $FINAL, $field(CipherSuite$KeyExchange, allowed)},
	{"groupTypes", "[Lsun/security/ssl/NamedGroup$NamedGroupSpec;", nullptr, $FINAL, $field(CipherSuite$KeyExchange, groupTypes)},
	{"alwaysAvailable", "Z", nullptr, $PRIVATE | $FINAL, $field(CipherSuite$KeyExchange, alwaysAvailable)},
	{"isAnonymous", "Z", nullptr, $PRIVATE | $FINAL, $field(CipherSuite$KeyExchange, isAnonymous)},
	{}
};

$MethodInfo _CipherSuite$KeyExchange_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CipherSuite$KeyExchange, $values, $CipherSuite$KeyExchangeArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;ZZ[Lsun/security/ssl/NamedGroup$NamedGroupSpec;)V", "(Ljava/lang/String;ZZ[Lsun/security/ssl/NamedGroup$NamedGroupSpec;)V", $PRIVATE | $TRANSIENT, $method(CipherSuite$KeyExchange, init$, void, $String*, int32_t, $String*, bool, bool, $NamedGroup$NamedGroupSpecArray*)},
	{"isAvailable", "()Z", nullptr, 0, $method(CipherSuite$KeyExchange, isAvailable, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CipherSuite$KeyExchange, toString, $String*)},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC, $staticMethod(CipherSuite$KeyExchange, valueOf, CipherSuite$KeyExchange*, $String*)},
	{"values", "()[Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $PUBLIC | $STATIC, $staticMethod(CipherSuite$KeyExchange, values, $CipherSuite$KeyExchangeArray*)},
	{}
};

$InnerClassInfo _CipherSuite$KeyExchange_InnerClassesInfo_[] = {
	{"sun.security.ssl.CipherSuite$KeyExchange", "sun.security.ssl.CipherSuite", "KeyExchange", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CipherSuite$KeyExchange_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.CipherSuite$KeyExchange",
	"java.lang.Enum",
	nullptr,
	_CipherSuite$KeyExchange_FieldInfo_,
	_CipherSuite$KeyExchange_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/CipherSuite$KeyExchange;>;",
	nullptr,
	_CipherSuite$KeyExchange_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CipherSuite"
};

$Object* allocate$CipherSuite$KeyExchange($Class* clazz) {
	return $of($alloc(CipherSuite$KeyExchange));
}

CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_NULL = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_RSA = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_RSA_EXPORT = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_DH_RSA = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_DH_DSS = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_DHE_DSS = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_DHE_DSS_EXPORT = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_DHE_RSA = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_DHE_RSA_EXPORT = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_DH_ANON = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_DH_ANON_EXPORT = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_ECDH_ECDSA = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_ECDH_RSA = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_ECDHE_ECDSA = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_ECDHE_RSA = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_ECDH_ANON = nullptr;
CipherSuite$KeyExchange* CipherSuite$KeyExchange::K_SCSV = nullptr;
$CipherSuite$KeyExchangeArray* CipherSuite$KeyExchange::$VALUES = nullptr;

$CipherSuite$KeyExchangeArray* CipherSuite$KeyExchange::$values() {
	$init(CipherSuite$KeyExchange);
	return $new($CipherSuite$KeyExchangeArray, {
		CipherSuite$KeyExchange::K_NULL,
		CipherSuite$KeyExchange::K_RSA,
		CipherSuite$KeyExchange::K_RSA_EXPORT,
		CipherSuite$KeyExchange::K_DH_RSA,
		CipherSuite$KeyExchange::K_DH_DSS,
		CipherSuite$KeyExchange::K_DHE_DSS,
		CipherSuite$KeyExchange::K_DHE_DSS_EXPORT,
		CipherSuite$KeyExchange::K_DHE_RSA,
		CipherSuite$KeyExchange::K_DHE_RSA_EXPORT,
		CipherSuite$KeyExchange::K_DH_ANON,
		CipherSuite$KeyExchange::K_DH_ANON_EXPORT,
		CipherSuite$KeyExchange::K_ECDH_ECDSA,
		CipherSuite$KeyExchange::K_ECDH_RSA,
		CipherSuite$KeyExchange::K_ECDHE_ECDSA,
		CipherSuite$KeyExchange::K_ECDHE_RSA,
		CipherSuite$KeyExchange::K_ECDH_ANON,
		CipherSuite$KeyExchange::K_SCSV
	});
}

$CipherSuite$KeyExchangeArray* CipherSuite$KeyExchange::values() {
	$init(CipherSuite$KeyExchange);
	return $cast($CipherSuite$KeyExchangeArray, CipherSuite$KeyExchange::$VALUES->clone());
}

CipherSuite$KeyExchange* CipherSuite$KeyExchange::valueOf($String* name) {
	$init(CipherSuite$KeyExchange);
	return $cast(CipherSuite$KeyExchange, $Enum::valueOf(CipherSuite$KeyExchange::class$, name));
}

void CipherSuite$KeyExchange::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, bool allowed, bool isAnonymous, $NamedGroup$NamedGroupSpecArray* groupTypes) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	$set(this, groupTypes, groupTypes);
	this->allowed = allowed;
	this->alwaysAvailable = allowed && (!$nc(name)->startsWith("EC"_s));
	this->isAnonymous = isAnonymous;
}

bool CipherSuite$KeyExchange::isAvailable() {
	if (this->alwaysAvailable) {
		return true;
	}
	$init($NamedGroup$NamedGroupSpec);
	if ($NamedGroup$NamedGroupSpec::arrayContains(this->groupTypes, $NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE)) {
		return (this->allowed && $JsseJce::isEcAvailable());
	} else {
		return this->allowed;
	}
}

$String* CipherSuite$KeyExchange::toString() {
	return this->name$;
}

void clinit$CipherSuite$KeyExchange($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($NamedGroup$NamedGroupSpec);
	$assignStatic(CipherSuite$KeyExchange::K_NULL, $new(CipherSuite$KeyExchange, "K_NULL"_s, 0, "NULL"_s, false, true, $$new($NamedGroup$NamedGroupSpecArray, {$NamedGroup$NamedGroupSpec::NAMED_GROUP_NONE})));
	$assignStatic(CipherSuite$KeyExchange::K_RSA, $new(CipherSuite$KeyExchange, "K_RSA"_s, 1, "RSA"_s, true, false, $$new($NamedGroup$NamedGroupSpecArray, {$NamedGroup$NamedGroupSpec::NAMED_GROUP_NONE})));
	$assignStatic(CipherSuite$KeyExchange::K_RSA_EXPORT, $new(CipherSuite$KeyExchange, "K_RSA_EXPORT"_s, 2, "RSA_EXPORT"_s, true, false, $$new($NamedGroup$NamedGroupSpecArray, {$NamedGroup$NamedGroupSpec::NAMED_GROUP_NONE})));
	$assignStatic(CipherSuite$KeyExchange::K_DH_RSA, $new(CipherSuite$KeyExchange, "K_DH_RSA"_s, 3, "DH_RSA"_s, false, false, $$new($NamedGroup$NamedGroupSpecArray, {$NamedGroup$NamedGroupSpec::NAMED_GROUP_NONE})));
	$assignStatic(CipherSuite$KeyExchange::K_DH_DSS, $new(CipherSuite$KeyExchange, "K_DH_DSS"_s, 4, "DH_DSS"_s, false, false, $$new($NamedGroup$NamedGroupSpecArray, {$NamedGroup$NamedGroupSpec::NAMED_GROUP_NONE})));
	$assignStatic(CipherSuite$KeyExchange::K_DHE_DSS, $new(CipherSuite$KeyExchange, "K_DHE_DSS"_s, 5, "DHE_DSS"_s, true, false, $$new($NamedGroup$NamedGroupSpecArray, {$NamedGroup$NamedGroupSpec::NAMED_GROUP_FFDHE})));
	$assignStatic(CipherSuite$KeyExchange::K_DHE_DSS_EXPORT, $new(CipherSuite$KeyExchange, "K_DHE_DSS_EXPORT"_s, 6, "DHE_DSS_EXPORT"_s, true, false, $$new($NamedGroup$NamedGroupSpecArray, {$NamedGroup$NamedGroupSpec::NAMED_GROUP_NONE})));
	$assignStatic(CipherSuite$KeyExchange::K_DHE_RSA, $new(CipherSuite$KeyExchange, "K_DHE_RSA"_s, 7, "DHE_RSA"_s, true, false, $$new($NamedGroup$NamedGroupSpecArray, {$NamedGroup$NamedGroupSpec::NAMED_GROUP_FFDHE})));
	$assignStatic(CipherSuite$KeyExchange::K_DHE_RSA_EXPORT, $new(CipherSuite$KeyExchange, "K_DHE_RSA_EXPORT"_s, 8, "DHE_RSA_EXPORT"_s, true, false, $$new($NamedGroup$NamedGroupSpecArray, {$NamedGroup$NamedGroupSpec::NAMED_GROUP_NONE})));
	$assignStatic(CipherSuite$KeyExchange::K_DH_ANON, $new(CipherSuite$KeyExchange, "K_DH_ANON"_s, 9, "DH_anon"_s, true, true, $$new($NamedGroup$NamedGroupSpecArray, {$NamedGroup$NamedGroupSpec::NAMED_GROUP_FFDHE})));
	$assignStatic(CipherSuite$KeyExchange::K_DH_ANON_EXPORT, $new(CipherSuite$KeyExchange, "K_DH_ANON_EXPORT"_s, 10, "DH_anon_EXPORT"_s, true, true, $$new($NamedGroup$NamedGroupSpecArray, {$NamedGroup$NamedGroupSpec::NAMED_GROUP_NONE})));
	$init($JsseJce);
	$assignStatic(CipherSuite$KeyExchange::K_ECDH_ECDSA, $new(CipherSuite$KeyExchange, "K_ECDH_ECDSA"_s, 11, "ECDH_ECDSA"_s, $JsseJce::ALLOW_ECC, false, $$new($NamedGroup$NamedGroupSpecArray, {
		$NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE,
		$NamedGroup$NamedGroupSpec::NAMED_GROUP_XDH
	})));
	$assignStatic(CipherSuite$KeyExchange::K_ECDH_RSA, $new(CipherSuite$KeyExchange, "K_ECDH_RSA"_s, 12, "ECDH_RSA"_s, $JsseJce::ALLOW_ECC, false, $$new($NamedGroup$NamedGroupSpecArray, {
		$NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE,
		$NamedGroup$NamedGroupSpec::NAMED_GROUP_XDH
	})));
	$assignStatic(CipherSuite$KeyExchange::K_ECDHE_ECDSA, $new(CipherSuite$KeyExchange, "K_ECDHE_ECDSA"_s, 13, "ECDHE_ECDSA"_s, $JsseJce::ALLOW_ECC, false, $$new($NamedGroup$NamedGroupSpecArray, {
		$NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE,
		$NamedGroup$NamedGroupSpec::NAMED_GROUP_XDH
	})));
	$assignStatic(CipherSuite$KeyExchange::K_ECDHE_RSA, $new(CipherSuite$KeyExchange, "K_ECDHE_RSA"_s, 14, "ECDHE_RSA"_s, $JsseJce::ALLOW_ECC, false, $$new($NamedGroup$NamedGroupSpecArray, {
		$NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE,
		$NamedGroup$NamedGroupSpec::NAMED_GROUP_XDH
	})));
	$assignStatic(CipherSuite$KeyExchange::K_ECDH_ANON, $new(CipherSuite$KeyExchange, "K_ECDH_ANON"_s, 15, "ECDH_anon"_s, $JsseJce::ALLOW_ECC, true, $$new($NamedGroup$NamedGroupSpecArray, {
		$NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE,
		$NamedGroup$NamedGroupSpec::NAMED_GROUP_XDH
	})));
	$assignStatic(CipherSuite$KeyExchange::K_SCSV, $new(CipherSuite$KeyExchange, "K_SCSV"_s, 16, "SCSV"_s, true, true, $$new($NamedGroup$NamedGroupSpecArray, {$NamedGroup$NamedGroupSpec::NAMED_GROUP_NONE})));
	$assignStatic(CipherSuite$KeyExchange::$VALUES, CipherSuite$KeyExchange::$values());
}

CipherSuite$KeyExchange::CipherSuite$KeyExchange() {
}

$Class* CipherSuite$KeyExchange::load$($String* name, bool initialize) {
	$loadClass(CipherSuite$KeyExchange, name, initialize, &_CipherSuite$KeyExchange_ClassInfo_, clinit$CipherSuite$KeyExchange, allocate$CipherSuite$KeyExchange);
	return class$;
}

$Class* CipherSuite$KeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun