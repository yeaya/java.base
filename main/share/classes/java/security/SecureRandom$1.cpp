#include <java/security/SecureRandom$1.h>
#include <java/security/SecureRandom.h>
#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace java {
	namespace security {

void SecureRandom$1::init$() {
}

$Object* SecureRandom$1::run() {
	return $of($Security::getProperty("securerandom.strongAlgorithms"_s));
}

SecureRandom$1::SecureRandom$1() {
}

$Class* SecureRandom$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SecureRandom$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SecureRandom$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.SecureRandom",
		"getInstanceStrong",
		"()Ljava/security/SecureRandom;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.SecureRandom$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.SecureRandom$1",
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
		"java.security.SecureRandom"
	};
	$loadClass(SecureRandom$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecureRandom$1);
	});
	return class$;
}

$Class* SecureRandom$1::class$ = nullptr;

	} // security
} // java