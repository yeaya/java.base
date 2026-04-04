#include <java/security/Policy$2.h>
#include <java/lang/ClassLoader.h>
#include <java/security/Policy.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Policy = ::java::security::Policy;

namespace java {
	namespace security {

void Policy$2::init$($String* val$policyProvider) {
	$set(this, val$policyProvider, val$policyProvider);
}

$Object* Policy$2::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$var($ClassLoader, scl, $ClassLoader::getSystemClassLoader());
		$var($Object, o, $Class::forName(this->val$policyProvider, true, scl)->newInstance());
		return $cast($Policy, o);
	} catch ($Exception& e) {
		$init($Policy);
		if ($Policy::debug != nullptr) {
			$Policy::debug->println($$str({"policy provider "_s, this->val$policyProvider, " not available"_s}));
			e->printStackTrace();
		}
		return nullptr;
	}
	$shouldNotReachHere();
}

Policy$2::Policy$2() {
}

$Class* Policy$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$policyProvider", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Policy$2, val$policyProvider)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(Policy$2, init$, void, $String*)},
		{"run", "()Ljava/security/Policy;", nullptr, $PUBLIC, $virtualMethod(Policy$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.Policy",
		"loadPolicyProvider",
		"()Ljava/security/Policy;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.Policy$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.Policy$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/Policy;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.Policy"
	};
	$loadClass(Policy$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Policy$2);
	});
	return class$;
}

$Class* Policy$2::class$ = nullptr;

	} // security
} // java