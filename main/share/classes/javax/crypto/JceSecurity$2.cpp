#include <javax/crypto/JceSecurity$2.h>
#include <java/net/URL.h>
#include <java/security/CodeSource.h>
#include <java/security/ProtectionDomain.h>
#include <javax/crypto/JceSecurity.h>
#include <jcpp.h>

#undef NULL_URL

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodeSource = ::java::security::CodeSource;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $JceSecurity = ::javax::crypto::JceSecurity;

namespace javax {
	namespace crypto {

void JceSecurity$2::init$($Class* val$clazz) {
	$set(this, val$clazz, val$clazz);
}

$Object* JceSecurity$2::run() {
	$useLocalObjectStack();
	$var($ProtectionDomain, pd, $nc(this->val$clazz)->getProtectionDomain());
	if (pd != nullptr) {
		$var($CodeSource, cs, pd->getCodeSource());
		if (cs != nullptr) {
			return cs->getLocation();
		}
	}
	$init($JceSecurity);
	return $JceSecurity::NULL_URL;
}

JceSecurity$2::JceSecurity$2() {
}

$Class* JceSecurity$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$clazz", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(JceSecurity$2, val$clazz)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, 0, $method(JceSecurity$2, init$, void, $Class*)},
		{"run", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(JceSecurity$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.crypto.JceSecurity",
		"getCodeBase",
		"(Ljava/lang/Class;)Ljava/net/URL;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.crypto.JceSecurity$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.crypto.JceSecurity$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URL;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.crypto.JceSecurity"
	};
	$loadClass(JceSecurity$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JceSecurity$2);
	});
	return class$;
}

$Class* JceSecurity$2::class$ = nullptr;

	} // crypto
} // javax