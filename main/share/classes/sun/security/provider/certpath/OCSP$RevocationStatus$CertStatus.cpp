#include <sun/security/provider/certpath/OCSP$RevocationStatus$CertStatus.h>
#include <java/lang/Enum.h>
#include <sun/security/provider/certpath/OCSP$RevocationStatus.h>
#include <sun/security/provider/certpath/OCSP.h>
#include <jcpp.h>

#undef GOOD
#undef REVOKED
#undef UNKNOWN

using $OCSP$RevocationStatus$CertStatusArray = $Array<::sun::security::provider::certpath::OCSP$RevocationStatus$CertStatus>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

OCSP$RevocationStatus$CertStatus* OCSP$RevocationStatus$CertStatus::GOOD = nullptr;
OCSP$RevocationStatus$CertStatus* OCSP$RevocationStatus$CertStatus::REVOKED = nullptr;
OCSP$RevocationStatus$CertStatus* OCSP$RevocationStatus$CertStatus::UNKNOWN = nullptr;
$OCSP$RevocationStatus$CertStatusArray* OCSP$RevocationStatus$CertStatus::$VALUES = nullptr;

$OCSP$RevocationStatus$CertStatusArray* OCSP$RevocationStatus$CertStatus::$values() {
	$init(OCSP$RevocationStatus$CertStatus);
	return $new($OCSP$RevocationStatus$CertStatusArray, {
		OCSP$RevocationStatus$CertStatus::GOOD,
		OCSP$RevocationStatus$CertStatus::REVOKED,
		OCSP$RevocationStatus$CertStatus::UNKNOWN
	});
}

$OCSP$RevocationStatus$CertStatusArray* OCSP$RevocationStatus$CertStatus::values() {
	$init(OCSP$RevocationStatus$CertStatus);
	return $cast($OCSP$RevocationStatus$CertStatusArray, OCSP$RevocationStatus$CertStatus::$VALUES->clone());
}

OCSP$RevocationStatus$CertStatus* OCSP$RevocationStatus$CertStatus::valueOf($String* name) {
	$init(OCSP$RevocationStatus$CertStatus);
	return $cast(OCSP$RevocationStatus$CertStatus, $Enum::valueOf(OCSP$RevocationStatus$CertStatus::class$, name));
}

void OCSP$RevocationStatus$CertStatus::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void OCSP$RevocationStatus$CertStatus::clinit$($Class* clazz) {
	$assignStatic(OCSP$RevocationStatus$CertStatus::GOOD, $new(OCSP$RevocationStatus$CertStatus, "GOOD"_s, 0));
	$assignStatic(OCSP$RevocationStatus$CertStatus::REVOKED, $new(OCSP$RevocationStatus$CertStatus, "REVOKED"_s, 1));
	$assignStatic(OCSP$RevocationStatus$CertStatus::UNKNOWN, $new(OCSP$RevocationStatus$CertStatus, "UNKNOWN"_s, 2));
	$assignStatic(OCSP$RevocationStatus$CertStatus::$VALUES, OCSP$RevocationStatus$CertStatus::$values());
}

OCSP$RevocationStatus$CertStatus::OCSP$RevocationStatus$CertStatus() {
}

$Class* OCSP$RevocationStatus$CertStatus::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"GOOD", "Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OCSP$RevocationStatus$CertStatus, GOOD)},
		{"REVOKED", "Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OCSP$RevocationStatus$CertStatus, REVOKED)},
		{"UNKNOWN", "Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OCSP$RevocationStatus$CertStatus, UNKNOWN)},
		{"$VALUES", "[Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(OCSP$RevocationStatus$CertStatus, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(OCSP$RevocationStatus$CertStatus, $values, $OCSP$RevocationStatus$CertStatusArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(OCSP$RevocationStatus$CertStatus, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PUBLIC | $STATIC, $staticMethod(OCSP$RevocationStatus$CertStatus, valueOf, OCSP$RevocationStatus$CertStatus*, $String*)},
		{"values", "()[Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PUBLIC | $STATIC, $staticMethod(OCSP$RevocationStatus$CertStatus, values, $OCSP$RevocationStatus$CertStatusArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.OCSP$RevocationStatus", "sun.security.provider.certpath.OCSP", "RevocationStatus", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.security.provider.certpath.OCSP$RevocationStatus$CertStatus", "sun.security.provider.certpath.OCSP$RevocationStatus", "CertStatus", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"sun.security.provider.certpath.OCSP$RevocationStatus$CertStatus",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.OCSP"
	};
	$loadClass(OCSP$RevocationStatus$CertStatus, name, initialize, &classInfo$$, OCSP$RevocationStatus$CertStatus::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(OCSP$RevocationStatus$CertStatus));
	});
	return class$;
}

$Class* OCSP$RevocationStatus$CertStatus::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun