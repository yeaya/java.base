#include <java/security/cert/CRLReason.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef AA_COMPROMISE
#undef AFFILIATION_CHANGED
#undef CA_COMPROMISE
#undef CERTIFICATE_HOLD
#undef CESSATION_OF_OPERATION
#undef KEY_COMPROMISE
#undef PRIVILEGE_WITHDRAWN
#undef REMOVE_FROM_CRL
#undef SUPERSEDED
#undef UNSPECIFIED
#undef UNUSED

using $CRLReasonArray = $Array<::java::security::cert::CRLReason>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CRLReason_FieldInfo_[] = {
	{"UNSPECIFIED", "Ljava/security/cert/CRLReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CRLReason, UNSPECIFIED)},
	{"KEY_COMPROMISE", "Ljava/security/cert/CRLReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CRLReason, KEY_COMPROMISE)},
	{"CA_COMPROMISE", "Ljava/security/cert/CRLReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CRLReason, CA_COMPROMISE)},
	{"AFFILIATION_CHANGED", "Ljava/security/cert/CRLReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CRLReason, AFFILIATION_CHANGED)},
	{"SUPERSEDED", "Ljava/security/cert/CRLReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CRLReason, SUPERSEDED)},
	{"CESSATION_OF_OPERATION", "Ljava/security/cert/CRLReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CRLReason, CESSATION_OF_OPERATION)},
	{"CERTIFICATE_HOLD", "Ljava/security/cert/CRLReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CRLReason, CERTIFICATE_HOLD)},
	{"UNUSED", "Ljava/security/cert/CRLReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CRLReason, UNUSED)},
	{"REMOVE_FROM_CRL", "Ljava/security/cert/CRLReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CRLReason, REMOVE_FROM_CRL)},
	{"PRIVILEGE_WITHDRAWN", "Ljava/security/cert/CRLReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CRLReason, PRIVILEGE_WITHDRAWN)},
	{"AA_COMPROMISE", "Ljava/security/cert/CRLReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CRLReason, AA_COMPROMISE)},
	{"$VALUES", "[Ljava/security/cert/CRLReason;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CRLReason, $VALUES)},
	{}
};

$MethodInfo _CRLReason_MethodInfo_[] = {
	{"$values", "()[Ljava/security/cert/CRLReason;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CRLReason, $values, $CRLReasonArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(CRLReason, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljava/security/cert/CRLReason;", nullptr, $PUBLIC | $STATIC, $staticMethod(CRLReason, valueOf, CRLReason*, $String*)},
	{"values", "()[Ljava/security/cert/CRLReason;", nullptr, $PUBLIC | $STATIC, $staticMethod(CRLReason, values, $CRLReasonArray*)},
	{}
};

$ClassInfo _CRLReason_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.security.cert.CRLReason",
	"java.lang.Enum",
	nullptr,
	_CRLReason_FieldInfo_,
	_CRLReason_MethodInfo_,
	"Ljava/lang/Enum<Ljava/security/cert/CRLReason;>;"
};

$Object* allocate$CRLReason($Class* clazz) {
	return $of($alloc(CRLReason));
}

CRLReason* CRLReason::UNSPECIFIED = nullptr;
CRLReason* CRLReason::KEY_COMPROMISE = nullptr;
CRLReason* CRLReason::CA_COMPROMISE = nullptr;
CRLReason* CRLReason::AFFILIATION_CHANGED = nullptr;
CRLReason* CRLReason::SUPERSEDED = nullptr;
CRLReason* CRLReason::CESSATION_OF_OPERATION = nullptr;
CRLReason* CRLReason::CERTIFICATE_HOLD = nullptr;
CRLReason* CRLReason::UNUSED = nullptr;
CRLReason* CRLReason::REMOVE_FROM_CRL = nullptr;
CRLReason* CRLReason::PRIVILEGE_WITHDRAWN = nullptr;
CRLReason* CRLReason::AA_COMPROMISE = nullptr;
$CRLReasonArray* CRLReason::$VALUES = nullptr;

$CRLReasonArray* CRLReason::$values() {
	$init(CRLReason);
	return $new($CRLReasonArray, {
		CRLReason::UNSPECIFIED,
		CRLReason::KEY_COMPROMISE,
		CRLReason::CA_COMPROMISE,
		CRLReason::AFFILIATION_CHANGED,
		CRLReason::SUPERSEDED,
		CRLReason::CESSATION_OF_OPERATION,
		CRLReason::CERTIFICATE_HOLD,
		CRLReason::UNUSED,
		CRLReason::REMOVE_FROM_CRL,
		CRLReason::PRIVILEGE_WITHDRAWN,
		CRLReason::AA_COMPROMISE
	});
}

$CRLReasonArray* CRLReason::values() {
	$init(CRLReason);
	return $cast($CRLReasonArray, CRLReason::$VALUES->clone());
}

CRLReason* CRLReason::valueOf($String* name) {
	$init(CRLReason);
	return $cast(CRLReason, $Enum::valueOf(CRLReason::class$, name));
}

void CRLReason::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$CRLReason($Class* class$) {
	$assignStatic(CRLReason::UNSPECIFIED, $new(CRLReason, "UNSPECIFIED"_s, 0));
	$assignStatic(CRLReason::KEY_COMPROMISE, $new(CRLReason, "KEY_COMPROMISE"_s, 1));
	$assignStatic(CRLReason::CA_COMPROMISE, $new(CRLReason, "CA_COMPROMISE"_s, 2));
	$assignStatic(CRLReason::AFFILIATION_CHANGED, $new(CRLReason, "AFFILIATION_CHANGED"_s, 3));
	$assignStatic(CRLReason::SUPERSEDED, $new(CRLReason, "SUPERSEDED"_s, 4));
	$assignStatic(CRLReason::CESSATION_OF_OPERATION, $new(CRLReason, "CESSATION_OF_OPERATION"_s, 5));
	$assignStatic(CRLReason::CERTIFICATE_HOLD, $new(CRLReason, "CERTIFICATE_HOLD"_s, 6));
	$assignStatic(CRLReason::UNUSED, $new(CRLReason, "UNUSED"_s, 7));
	$assignStatic(CRLReason::REMOVE_FROM_CRL, $new(CRLReason, "REMOVE_FROM_CRL"_s, 8));
	$assignStatic(CRLReason::PRIVILEGE_WITHDRAWN, $new(CRLReason, "PRIVILEGE_WITHDRAWN"_s, 9));
	$assignStatic(CRLReason::AA_COMPROMISE, $new(CRLReason, "AA_COMPROMISE"_s, 10));
	$assignStatic(CRLReason::$VALUES, CRLReason::$values());
}

CRLReason::CRLReason() {
}

$Class* CRLReason::load$($String* name, bool initialize) {
	$loadClass(CRLReason, name, initialize, &_CRLReason_ClassInfo_, clinit$CRLReason, allocate$CRLReason);
	return class$;
}

$Class* CRLReason::class$ = nullptr;

		} // cert
	} // security
} // java