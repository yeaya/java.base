#include <java/security/cert/CertPathBuilder$1.h>
#include <java/security/Security.h>
#include <java/security/cert/CertPathBuilder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace java {
	namespace security {
		namespace cert {

void CertPathBuilder$1::init$() {
}

$Object* CertPathBuilder$1::run() {
	return $of($Security::getProperty("certpathbuilder.type"_s));
}

CertPathBuilder$1::CertPathBuilder$1() {
}

$Class* CertPathBuilder$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CertPathBuilder$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertPathBuilder$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.cert.CertPathBuilder",
		"getDefaultType",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.cert.CertPathBuilder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.cert.CertPathBuilder$1",
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
		"java.security.cert.CertPathBuilder"
	};
	$loadClass(CertPathBuilder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertPathBuilder$1);
	});
	return class$;
}

$Class* CertPathBuilder$1::class$ = nullptr;

		} // cert
	} // security
} // java