#include <java/security/cert/CertPathValidatorException$BasicReason.h>

#include <java/lang/Enum.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <jcpp.h>

#undef ALGORITHM_CONSTRAINED
#undef EXPIRED
#undef INVALID_SIGNATURE
#undef NOT_YET_VALID
#undef REVOKED
#undef UNDETERMINED_REVOCATION_STATUS
#undef UNSPECIFIED

using $CertPathValidatorException$BasicReasonArray = $Array<::java::security::cert::CertPathValidatorException$BasicReason>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CertPathValidatorException$BasicReason_FieldInfo_[] = {
	{"UNSPECIFIED", "Ljava/security/cert/CertPathValidatorException$BasicReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertPathValidatorException$BasicReason, UNSPECIFIED)},
	{"EXPIRED", "Ljava/security/cert/CertPathValidatorException$BasicReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertPathValidatorException$BasicReason, EXPIRED)},
	{"NOT_YET_VALID", "Ljava/security/cert/CertPathValidatorException$BasicReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertPathValidatorException$BasicReason, NOT_YET_VALID)},
	{"REVOKED", "Ljava/security/cert/CertPathValidatorException$BasicReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertPathValidatorException$BasicReason, REVOKED)},
	{"UNDETERMINED_REVOCATION_STATUS", "Ljava/security/cert/CertPathValidatorException$BasicReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertPathValidatorException$BasicReason, UNDETERMINED_REVOCATION_STATUS)},
	{"INVALID_SIGNATURE", "Ljava/security/cert/CertPathValidatorException$BasicReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertPathValidatorException$BasicReason, INVALID_SIGNATURE)},
	{"ALGORITHM_CONSTRAINED", "Ljava/security/cert/CertPathValidatorException$BasicReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertPathValidatorException$BasicReason, ALGORITHM_CONSTRAINED)},
	{"$VALUES", "[Ljava/security/cert/CertPathValidatorException$BasicReason;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CertPathValidatorException$BasicReason, $VALUES)},
	{}
};

$MethodInfo _CertPathValidatorException$BasicReason_MethodInfo_[] = {
	{"$values", "()[Ljava/security/cert/CertPathValidatorException$BasicReason;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CertPathValidatorException$BasicReasonArray*(*)()>(&CertPathValidatorException$BasicReason::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(CertPathValidatorException$BasicReason::*)($String*,int32_t)>(&CertPathValidatorException$BasicReason::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/security/cert/CertPathValidatorException$BasicReason;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CertPathValidatorException$BasicReason*(*)($String*)>(&CertPathValidatorException$BasicReason::valueOf))},
	{"values", "()[Ljava/security/cert/CertPathValidatorException$BasicReason;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CertPathValidatorException$BasicReasonArray*(*)()>(&CertPathValidatorException$BasicReason::values))},
	{}
};

$InnerClassInfo _CertPathValidatorException$BasicReason_InnerClassesInfo_[] = {
	{"java.security.cert.CertPathValidatorException$BasicReason", "java.security.cert.CertPathValidatorException", "BasicReason", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"java.security.cert.CertPathValidatorException$Reason", "java.security.cert.CertPathValidatorException", "Reason", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CertPathValidatorException$BasicReason_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.security.cert.CertPathValidatorException$BasicReason",
	"java.lang.Enum",
	"java.security.cert.CertPathValidatorException$Reason",
	_CertPathValidatorException$BasicReason_FieldInfo_,
	_CertPathValidatorException$BasicReason_MethodInfo_,
	"Ljava/lang/Enum<Ljava/security/cert/CertPathValidatorException$BasicReason;>;Ljava/security/cert/CertPathValidatorException$Reason;",
	nullptr,
	_CertPathValidatorException$BasicReason_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.cert.CertPathValidatorException"
};

$Object* allocate$CertPathValidatorException$BasicReason($Class* clazz) {
	return $of($alloc(CertPathValidatorException$BasicReason));
}

$String* CertPathValidatorException$BasicReason::toString() {
	 return this->$Enum::toString();
}

bool CertPathValidatorException$BasicReason::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t CertPathValidatorException$BasicReason::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* CertPathValidatorException$BasicReason::clone() {
	 return this->$Enum::clone();
}

void CertPathValidatorException$BasicReason::finalize() {
	this->$Enum::finalize();
}

CertPathValidatorException$BasicReason* CertPathValidatorException$BasicReason::UNSPECIFIED = nullptr;
CertPathValidatorException$BasicReason* CertPathValidatorException$BasicReason::EXPIRED = nullptr;
CertPathValidatorException$BasicReason* CertPathValidatorException$BasicReason::NOT_YET_VALID = nullptr;
CertPathValidatorException$BasicReason* CertPathValidatorException$BasicReason::REVOKED = nullptr;
CertPathValidatorException$BasicReason* CertPathValidatorException$BasicReason::UNDETERMINED_REVOCATION_STATUS = nullptr;
CertPathValidatorException$BasicReason* CertPathValidatorException$BasicReason::INVALID_SIGNATURE = nullptr;
CertPathValidatorException$BasicReason* CertPathValidatorException$BasicReason::ALGORITHM_CONSTRAINED = nullptr;
$CertPathValidatorException$BasicReasonArray* CertPathValidatorException$BasicReason::$VALUES = nullptr;

$CertPathValidatorException$BasicReasonArray* CertPathValidatorException$BasicReason::$values() {
	$init(CertPathValidatorException$BasicReason);
	return $new($CertPathValidatorException$BasicReasonArray, {
		CertPathValidatorException$BasicReason::UNSPECIFIED,
		CertPathValidatorException$BasicReason::EXPIRED,
		CertPathValidatorException$BasicReason::NOT_YET_VALID,
		CertPathValidatorException$BasicReason::REVOKED,
		CertPathValidatorException$BasicReason::UNDETERMINED_REVOCATION_STATUS,
		CertPathValidatorException$BasicReason::INVALID_SIGNATURE,
		CertPathValidatorException$BasicReason::ALGORITHM_CONSTRAINED
	});
}

$CertPathValidatorException$BasicReasonArray* CertPathValidatorException$BasicReason::values() {
	$init(CertPathValidatorException$BasicReason);
	return $cast($CertPathValidatorException$BasicReasonArray, CertPathValidatorException$BasicReason::$VALUES->clone());
}

CertPathValidatorException$BasicReason* CertPathValidatorException$BasicReason::valueOf($String* name) {
	$init(CertPathValidatorException$BasicReason);
	return $cast(CertPathValidatorException$BasicReason, $Enum::valueOf(CertPathValidatorException$BasicReason::class$, name));
}

void CertPathValidatorException$BasicReason::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$CertPathValidatorException$BasicReason($Class* class$) {
	$assignStatic(CertPathValidatorException$BasicReason::UNSPECIFIED, $new(CertPathValidatorException$BasicReason, "UNSPECIFIED"_s, 0));
	$assignStatic(CertPathValidatorException$BasicReason::EXPIRED, $new(CertPathValidatorException$BasicReason, "EXPIRED"_s, 1));
	$assignStatic(CertPathValidatorException$BasicReason::NOT_YET_VALID, $new(CertPathValidatorException$BasicReason, "NOT_YET_VALID"_s, 2));
	$assignStatic(CertPathValidatorException$BasicReason::REVOKED, $new(CertPathValidatorException$BasicReason, "REVOKED"_s, 3));
	$assignStatic(CertPathValidatorException$BasicReason::UNDETERMINED_REVOCATION_STATUS, $new(CertPathValidatorException$BasicReason, "UNDETERMINED_REVOCATION_STATUS"_s, 4));
	$assignStatic(CertPathValidatorException$BasicReason::INVALID_SIGNATURE, $new(CertPathValidatorException$BasicReason, "INVALID_SIGNATURE"_s, 5));
	$assignStatic(CertPathValidatorException$BasicReason::ALGORITHM_CONSTRAINED, $new(CertPathValidatorException$BasicReason, "ALGORITHM_CONSTRAINED"_s, 6));
	$assignStatic(CertPathValidatorException$BasicReason::$VALUES, CertPathValidatorException$BasicReason::$values());
}

CertPathValidatorException$BasicReason::CertPathValidatorException$BasicReason() {
}

$Class* CertPathValidatorException$BasicReason::load$($String* name, bool initialize) {
	$loadClass(CertPathValidatorException$BasicReason, name, initialize, &_CertPathValidatorException$BasicReason_ClassInfo_, clinit$CertPathValidatorException$BasicReason, allocate$CertPathValidatorException$BasicReason);
	return class$;
}

$Class* CertPathValidatorException$BasicReason::class$ = nullptr;

		} // cert
	} // security
} // java