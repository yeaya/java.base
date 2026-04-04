#include <java/security/cert/CertPathValidator$1.h>
#include <java/security/Security.h>
#include <java/security/cert/CertPathValidator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace java {
	namespace security {
		namespace cert {

void CertPathValidator$1::init$() {
}

$Object* CertPathValidator$1::run() {
	return $of($Security::getProperty("certpathvalidator.type"_s));
}

CertPathValidator$1::CertPathValidator$1() {
}

$Class* CertPathValidator$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CertPathValidator$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertPathValidator$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.cert.CertPathValidator",
		"getDefaultType",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.cert.CertPathValidator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.cert.CertPathValidator$1",
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
		"java.security.cert.CertPathValidator"
	};
	$loadClass(CertPathValidator$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertPathValidator$1);
	});
	return class$;
}

$Class* CertPathValidator$1::class$ = nullptr;

		} // cert
	} // security
} // java