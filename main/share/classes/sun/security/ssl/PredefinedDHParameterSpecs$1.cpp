#include <sun/security/ssl/PredefinedDHParameterSpecs$1.h>
#include <java/security/Security.h>
#include <sun/security/ssl/PredefinedDHParameterSpecs.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace sun {
	namespace security {
		namespace ssl {

void PredefinedDHParameterSpecs$1::init$() {
}

$Object* PredefinedDHParameterSpecs$1::run() {
	return $of($Security::getProperty("jdk.tls.server.defaultDHEParameters"_s));
}

PredefinedDHParameterSpecs$1::PredefinedDHParameterSpecs$1() {
}

$Class* PredefinedDHParameterSpecs$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PredefinedDHParameterSpecs$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PredefinedDHParameterSpecs$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.PredefinedDHParameterSpecs",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.PredefinedDHParameterSpecs$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.PredefinedDHParameterSpecs$1",
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
		"sun.security.ssl.PredefinedDHParameterSpecs"
	};
	$loadClass(PredefinedDHParameterSpecs$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PredefinedDHParameterSpecs$1);
	});
	return class$;
}

$Class* PredefinedDHParameterSpecs$1::class$ = nullptr;

		} // ssl
	} // security
} // sun