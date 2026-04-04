#include <java/security/KeyStore$1.h>
#include <java/security/KeyStore.h>
#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace java {
	namespace security {

void KeyStore$1::init$() {
}

$Object* KeyStore$1::run() {
	return $of($Security::getProperty("keystore.type"_s));
}

KeyStore$1::KeyStore$1() {
}

$Class* KeyStore$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(KeyStore$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KeyStore$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.KeyStore",
		"getDefaultType",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.KeyStore$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.KeyStore$1",
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
		"java.security.KeyStore"
	};
	$loadClass(KeyStore$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyStore$1);
	});
	return class$;
}

$Class* KeyStore$1::class$ = nullptr;

	} // security
} // java