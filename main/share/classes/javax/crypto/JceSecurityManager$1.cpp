#include <javax/crypto/JceSecurityManager$1.h>
#include <javax/crypto/JceSecurityManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JceSecurityManager = ::javax::crypto::JceSecurityManager;

namespace javax {
	namespace crypto {

void JceSecurityManager$1::init$() {
}

$Object* JceSecurityManager$1::run() {
	return $new($JceSecurityManager);
}

JceSecurityManager$1::JceSecurityManager$1() {
}

$Class* JceSecurityManager$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JceSecurityManager$1, init$, void)},
		{"run", "()Ljavax/crypto/JceSecurityManager;", nullptr, $PUBLIC, $virtualMethod(JceSecurityManager$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.crypto.JceSecurityManager",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.crypto.JceSecurityManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.crypto.JceSecurityManager$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/crypto/JceSecurityManager;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.crypto.JceSecurityManager"
	};
	$loadClass(JceSecurityManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JceSecurityManager$1);
	});
	return class$;
}

$Class* JceSecurityManager$1::class$ = nullptr;

	} // crypto
} // javax