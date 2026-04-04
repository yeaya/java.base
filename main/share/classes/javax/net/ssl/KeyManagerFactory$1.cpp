#include <javax/net/ssl/KeyManagerFactory$1.h>
#include <java/security/Security.h>
#include <javax/net/ssl/KeyManagerFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace javax {
	namespace net {
		namespace ssl {

void KeyManagerFactory$1::init$() {
}

$Object* KeyManagerFactory$1::run() {
	return $of($Security::getProperty("ssl.KeyManagerFactory.algorithm"_s));
}

KeyManagerFactory$1::KeyManagerFactory$1() {
}

$Class* KeyManagerFactory$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(KeyManagerFactory$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KeyManagerFactory$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.net.ssl.KeyManagerFactory",
		"getDefaultAlgorithm",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.net.ssl.KeyManagerFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.net.ssl.KeyManagerFactory$1",
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
		"javax.net.ssl.KeyManagerFactory"
	};
	$loadClass(KeyManagerFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyManagerFactory$1);
	});
	return class$;
}

$Class* KeyManagerFactory$1::class$ = nullptr;

		} // ssl
	} // net
} // javax