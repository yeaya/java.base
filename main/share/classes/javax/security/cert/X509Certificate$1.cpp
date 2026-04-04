#include <javax/security/cert/X509Certificate$1.h>
#include <java/security/Security.h>
#include <javax/security/cert/X509Certificate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace javax {
	namespace security {
		namespace cert {

void X509Certificate$1::init$() {
}

$Object* X509Certificate$1::run() {
	return $of($Security::getProperty("cert.provider.x509v1"_s));
}

X509Certificate$1::X509Certificate$1() {
}

$Class* X509Certificate$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(X509Certificate$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(X509Certificate$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.cert.X509Certificate",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.cert.X509Certificate$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.cert.X509Certificate$1",
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
		"javax.security.cert.X509Certificate"
	};
	$loadClass(X509Certificate$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X509Certificate$1);
	});
	return class$;
}

$Class* X509Certificate$1::class$ = nullptr;

		} // cert
	} // security
} // javax