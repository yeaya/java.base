#include <java/security/Policy$1.h>
#include <java/security/Policy.h>
#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace java {
	namespace security {

void Policy$1::init$() {
}

$Object* Policy$1::run() {
	return $of($Security::getProperty("policy.provider"_s));
}

Policy$1::Policy$1() {
}

$Class* Policy$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Policy$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Policy$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.Policy",
		"loadPolicyProvider",
		"()Ljava/security/Policy;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.Policy$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.Policy$1",
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
		"java.security.Policy"
	};
	$loadClass(Policy$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Policy$1);
	});
	return class$;
}

$Class* Policy$1::class$ = nullptr;

	} // security
} // java