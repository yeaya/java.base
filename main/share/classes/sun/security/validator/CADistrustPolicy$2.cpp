#include <sun/security/validator/CADistrustPolicy$2.h>

#include <java/security/Security.h>
#include <sun/security/validator/CADistrustPolicy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;
using $CADistrustPolicy = ::sun::security::validator::CADistrustPolicy;

namespace sun {
	namespace security {
		namespace validator {

$MethodInfo _CADistrustPolicy$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CADistrustPolicy$2::*)()>(&CADistrustPolicy$2::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CADistrustPolicy$2_EnclosingMethodInfo_ = {
	"sun.security.validator.CADistrustPolicy",
	"parseProperty",
	"()Ljava/util/EnumSet;"
};

$InnerClassInfo _CADistrustPolicy$2_InnerClassesInfo_[] = {
	{"sun.security.validator.CADistrustPolicy$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CADistrustPolicy$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.validator.CADistrustPolicy$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_CADistrustPolicy$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_CADistrustPolicy$2_EnclosingMethodInfo_,
	_CADistrustPolicy$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.validator.CADistrustPolicy"
};

$Object* allocate$CADistrustPolicy$2($Class* clazz) {
	return $of($alloc(CADistrustPolicy$2));
}

void CADistrustPolicy$2::init$() {
}

$Object* CADistrustPolicy$2::run() {
	return $of($Security::getProperty("jdk.security.caDistrustPolicies"_s));
}

CADistrustPolicy$2::CADistrustPolicy$2() {
}

$Class* CADistrustPolicy$2::load$($String* name, bool initialize) {
	$loadClass(CADistrustPolicy$2, name, initialize, &_CADistrustPolicy$2_ClassInfo_, allocate$CADistrustPolicy$2);
	return class$;
}

$Class* CADistrustPolicy$2::class$ = nullptr;

		} // validator
	} // security
} // sun