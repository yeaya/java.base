#include <java/lang/System$1.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AllPermission.h>
#include <java/security/Permission.h>
#include <java/security/ProtectionDomain.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef ALL_PERMISSION

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace lang {

void System$1::init$($SecurityManager* val$s) {
	$set(this, val$s, val$s);
}

$Object* System$1::run() {
	$init($SecurityConstants);
	$$nc($nc(this->val$s)->getClass()->getProtectionDomain())->implies($SecurityConstants::ALL_PERMISSION);
	return nullptr;
}

System$1::System$1() {
}

$Class* System$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$s", "Ljava/lang/SecurityManager;", nullptr, $FINAL | $SYNTHETIC, $field(System$1, val$s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/SecurityManager;)V", nullptr, 0, $method(System$1, init$, void, $SecurityManager*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(System$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.System",
		"setSecurityManager0",
		"(Ljava/lang/SecurityManager;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.System$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.System$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.System"
	};
	$loadClass(System$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(System$1);
	});
	return class$;
}

$Class* System$1::class$ = nullptr;

	} // lang
} // java