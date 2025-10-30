#include <sun/security/validator/CADistrustPolicy$1.h>

#include <java/security/cert/X509Certificate.h>
#include <sun/security/validator/CADistrustPolicy.h>
#include <sun/security/validator/SymantecTLSPolicy.h>
#include <sun/security/validator/Validator.h>
#include <jcpp.h>

#undef VAR_TLS_SERVER

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CADistrustPolicy = ::sun::security::validator::CADistrustPolicy;
using $SymantecTLSPolicy = ::sun::security::validator::SymantecTLSPolicy;
using $Validator = ::sun::security::validator::Validator;

namespace sun {
	namespace security {
		namespace validator {

$MethodInfo _CADistrustPolicy$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(CADistrustPolicy$1::*)($String*,int32_t)>(&CADistrustPolicy$1::init$))},
	{"checkDistrust", "(Ljava/lang/String;[Ljava/security/cert/X509Certificate;)V", nullptr, 0, nullptr, "sun.security.validator.ValidatorException"},
	{}
};

$EnclosingMethodInfo _CADistrustPolicy$1_EnclosingMethodInfo_ = {
	"sun.security.validator.CADistrustPolicy",
	nullptr,
	nullptr
};

$InnerClassInfo _CADistrustPolicy$1_InnerClassesInfo_[] = {
	{"sun.security.validator.CADistrustPolicy$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _CADistrustPolicy$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.validator.CADistrustPolicy$1",
	"sun.security.validator.CADistrustPolicy",
	nullptr,
	nullptr,
	_CADistrustPolicy$1_MethodInfo_,
	nullptr,
	&_CADistrustPolicy$1_EnclosingMethodInfo_,
	_CADistrustPolicy$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.validator.CADistrustPolicy"
};

$Object* allocate$CADistrustPolicy$1($Class* clazz) {
	return $of($alloc(CADistrustPolicy$1));
}

void CADistrustPolicy$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$CADistrustPolicy::init$($enum$name, $enum$ordinal);
}

void CADistrustPolicy$1::checkDistrust($String* variant, $X509CertificateArray* chain) {
	$init($Validator);
	if (!$nc(variant)->equals($Validator::VAR_TLS_SERVER)) {
		return;
	}
	$SymantecTLSPolicy::checkDistrust(chain);
}

CADistrustPolicy$1::CADistrustPolicy$1() {
}

$Class* CADistrustPolicy$1::load$($String* name, bool initialize) {
	$loadClass(CADistrustPolicy$1, name, initialize, &_CADistrustPolicy$1_ClassInfo_, allocate$CADistrustPolicy$1);
	return class$;
}

$Class* CADistrustPolicy$1::class$ = nullptr;

		} // validator
	} // security
} // sun