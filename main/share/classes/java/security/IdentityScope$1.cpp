#include <java/security/IdentityScope$1.h>
#include <java/security/IdentityScope.h>
#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace java {
	namespace security {

void IdentityScope$1::init$() {
}

$Object* IdentityScope$1::run() {
	return $of($Security::getProperty("system.scope"_s));
}

IdentityScope$1::IdentityScope$1() {
}

$Class* IdentityScope$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IdentityScope$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IdentityScope$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.IdentityScope",
		"initializeSystemScope",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.IdentityScope$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.IdentityScope$1",
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
		"java.security.IdentityScope"
	};
	$loadClass(IdentityScope$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IdentityScope$1);
	});
	return class$;
}

$Class* IdentityScope$1::class$ = nullptr;

	} // security
} // java