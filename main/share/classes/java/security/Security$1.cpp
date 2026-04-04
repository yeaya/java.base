#include <java/security/Security$1.h>
#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace java {
	namespace security {

void Security$1::init$() {
}

$Object* Security$1::run() {
	$Security::initialize();
	return nullptr;
}

Security$1::Security$1() {
}

$Class* Security$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Security$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Security$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.Security",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.Security$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.Security$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.Security"
	};
	$loadClass(Security$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Security$1);
	});
	return class$;
}

$Class* Security$1::class$ = nullptr;

	} // security
} // java