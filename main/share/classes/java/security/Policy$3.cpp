#include <java/security/Policy$3.h>
#include <java/security/Policy.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Policy = ::java::security::Policy;

namespace java {
	namespace security {

void Policy$3::init$($Policy* val$p) {
	$set(this, val$p, val$p);
}

$Object* Policy$3::run() {
	return $nc(this->val$p)->getClass()->getProtectionDomain();
}

Policy$3::Policy$3() {
}

$Class* Policy$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$p", "Ljava/security/Policy;", nullptr, $FINAL | $SYNTHETIC, $field(Policy$3, val$p)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/Policy;)V", nullptr, 0, $method(Policy$3, init$, void, $Policy*)},
		{"run", "()Ljava/security/ProtectionDomain;", nullptr, $PUBLIC, $virtualMethod(Policy$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.Policy",
		"initPolicy",
		"(Ljava/security/Policy;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.Policy$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.Policy$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/ProtectionDomain;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.Policy"
	};
	$loadClass(Policy$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Policy$3);
	});
	return class$;
}

$Class* Policy$3::class$ = nullptr;

	} // security
} // java