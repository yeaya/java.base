#include <sun/security/validator/CADistrustPolicy$2.h>
#include <java/security/Security.h>
#include <sun/security/validator/CADistrustPolicy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace sun {
	namespace security {
		namespace validator {

void CADistrustPolicy$2::init$() {
}

$Object* CADistrustPolicy$2::run() {
	return $of($Security::getProperty("jdk.security.caDistrustPolicies"_s));
}

CADistrustPolicy$2::CADistrustPolicy$2() {
}

$Class* CADistrustPolicy$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CADistrustPolicy$2, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CADistrustPolicy$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.validator.CADistrustPolicy",
		"parseProperty",
		"()Ljava/util/EnumSet;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.validator.CADistrustPolicy$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.validator.CADistrustPolicy$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.validator.CADistrustPolicy"
	};
	$loadClass(CADistrustPolicy$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CADistrustPolicy$2);
	});
	return class$;
}

$Class* CADistrustPolicy$2::class$ = nullptr;

		} // validator
	} // security
} // sun