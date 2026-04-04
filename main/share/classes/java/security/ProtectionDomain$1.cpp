#include <java/security/ProtectionDomain$1.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Policy.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Policy = ::java::security::Policy;
using $ProtectionDomain = ::java::security::ProtectionDomain;

namespace java {
	namespace security {

void ProtectionDomain$1::init$($ProtectionDomain* this$0) {
	$set(this, this$0, this$0);
}

$Object* ProtectionDomain$1::run() {
	$var($Policy, p, $Policy::getPolicyNoCheck());
	return $nc(p)->getPermissions(this->this$0);
}

ProtectionDomain$1::ProtectionDomain$1() {
}

$Class* ProtectionDomain$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/security/ProtectionDomain;", nullptr, $FINAL | $SYNTHETIC, $field(ProtectionDomain$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/ProtectionDomain;)V", nullptr, 0, $method(ProtectionDomain$1, init$, void, $ProtectionDomain*)},
		{"run", "()Ljava/security/PermissionCollection;", nullptr, $PUBLIC, $virtualMethod(ProtectionDomain$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.ProtectionDomain",
		"mergePermissions",
		"()Ljava/security/PermissionCollection;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.ProtectionDomain$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.ProtectionDomain$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/PermissionCollection;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.ProtectionDomain"
	};
	$loadClass(ProtectionDomain$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProtectionDomain$1);
	});
	return class$;
}

$Class* ProtectionDomain$1::class$ = nullptr;

	} // security
} // java