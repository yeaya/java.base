#include <javax/net/ssl/TrustManagerFactory$1.h>
#include <java/security/Security.h>
#include <javax/net/ssl/TrustManagerFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace javax {
	namespace net {
		namespace ssl {

void TrustManagerFactory$1::init$() {
}

$Object* TrustManagerFactory$1::run() {
	return $of($Security::getProperty("ssl.TrustManagerFactory.algorithm"_s));
}

TrustManagerFactory$1::TrustManagerFactory$1() {
}

$Class* TrustManagerFactory$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TrustManagerFactory$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TrustManagerFactory$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.net.ssl.TrustManagerFactory",
		"getDefaultAlgorithm",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.net.ssl.TrustManagerFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.net.ssl.TrustManagerFactory$1",
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
		"javax.net.ssl.TrustManagerFactory"
	};
	$loadClass(TrustManagerFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TrustManagerFactory$1);
	});
	return class$;
}

$Class* TrustManagerFactory$1::class$ = nullptr;

		} // ssl
	} // net
} // javax