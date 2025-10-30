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
using $OCSP = ::sun::security::provider::certpath::OCSP;
using $OCSP$RevocationStatus = ::sun::security::provider::certpath::OCSP$RevocationStatus;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _OCSP$RevocationStatus$CertStatus_FieldInfo_[] = {
	{"GOOD", "Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OCSP$RevocationStatus$CertStatus, GOOD)},
	{"REVOKED", "Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OCSP$RevocationStatus$CertStatus, REVOKED)},
	{"UNKNOWN", "Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OCSP$RevocationStatus$CertStatus, UNKNOWN)},
	{"$VALUES", "[Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(OCSP$RevocationStatus$CertStatus, $VALUES)},
	{}
};

$MethodInfo _OCSP$RevocationStatus$CertStatus_MethodInfo_[] = {
	{"$values", "()[Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$OCSP$RevocationStatus$CertStatusArray*(*)()>(&OCSP$RevocationStatus$CertStatus::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(OCSP$RevocationStatus$CertStatus::*)($String*,int32_t)>(&OCSP$RevocationStatus$CertStatus::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PUBLIC | $STATIC, $method(static_cast<OCSP$RevocationStatus$CertStatus*(*)($String*)>(&OCSP$RevocationStatus$CertStatus::valueOf))},
	{"values", "()[Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$OCSP$RevocationStatus$CertStatusArray*(*)()>(&OCSP$RevocationStatus$CertStatus::values))},
	{}
};

$InnerClassInfo _OCSP$RevocationStatus$CertStatus_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.OCSP$RevocationStatus", "sun.security.provider.certpath.OCSP", "RevocationStatus", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.provider.certpath.OCSP$RevocationStatus$CertStatus", "sun.security.provider.certpath.OCSP$RevocationStatus", "CertStatus", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _OCSP$RevocationStatus$CertStatus_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.security.provider.certpath.OCSP$RevocationStatus$CertStatus",
	"java.lang.Enum",
	nullptr,
	_OCSP$RevocationStatus$CertStatus_FieldInfo_,
	_OCSP$RevocationStatus$CertStatus_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;>;",
	nullptr,
	_OCSP$RevocationStatus$CertStatus_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.OCSP"
};

$Object* allocate$OCSP$RevocationStatus$CertStatus($Class* clazz) {
	return $of($alloc(OCSP$RevocationStatus$CertStatus));
}

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

void clinit$OCSP$RevocationStatus$CertStatus($Class* class$) {
	$assignStatic(OCSP$RevocationStatus$CertStatus::GOOD, $new(OCSP$RevocationStatus$CertStatus, "GOOD"_s, 0));
	$assignStatic(OCSP$RevocationStatus$CertStatus::REVOKED, $new(OCSP$RevocationStatus$CertStatus, "REVOKED"_s, 1));
	$assignStatic(OCSP$RevocationStatus$CertStatus::UNKNOWN, $new(OCSP$RevocationStatus$CertStatus, "UNKNOWN"_s, 2));
	$assignStatic(OCSP$RevocationStatus$CertStatus::$VALUES, OCSP$RevocationStatus$CertStatus::$values());
}

OCSP$RevocationStatus$CertStatus::OCSP$RevocationStatus$CertStatus() {
}

$Class* OCSP$RevocationStatus$CertStatus::load$($String* name, bool initialize) {
	$loadClass(OCSP$RevocationStatus$CertStatus, name, initialize, &_OCSP$RevocationStatus$CertStatus_ClassInfo_, clinit$OCSP$RevocationStatus$CertStatus, allocate$OCSP$RevocationStatus$CertStatus);
	return class$;
}

$Class* OCSP$RevocationStatus$CertStatus::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun