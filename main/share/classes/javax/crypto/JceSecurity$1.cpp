#include <javax/crypto/JceSecurity$1.h>
#include <javax/crypto/JceSecurity.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JceSecurity = ::javax::crypto::JceSecurity;

namespace javax {
	namespace crypto {

void JceSecurity$1::init$() {
}

$Object* JceSecurity$1::run() {
	$JceSecurity::setupJurisdictionPolicies();
	return nullptr;
}

JceSecurity$1::JceSecurity$1() {
}

$Class* JceSecurity$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JceSecurity$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(JceSecurity$1, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.crypto.JceSecurity",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.crypto.JceSecurity$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.crypto.JceSecurity$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.crypto.JceSecurity"
	};
	$loadClass(JceSecurity$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JceSecurity$1);
	});
	return class$;
}

$Class* JceSecurity$1::class$ = nullptr;

	} // crypto
} // javax