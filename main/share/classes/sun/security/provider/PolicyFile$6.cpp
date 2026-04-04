#include <sun/security/provider/PolicyFile$6.h>
#include <java/security/CodeSource.h>
#include <sun/security/provider/PolicyFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodeSource = ::java::security::CodeSource;
using $PolicyFile = ::sun::security::provider::PolicyFile;

namespace sun {
	namespace security {
		namespace provider {

void PolicyFile$6::init$($PolicyFile* this$0, $CodeSource* val$cs) {
	$set(this, this$0, this$0);
	$set(this, val$cs, val$cs);
}

$Object* PolicyFile$6::run() {
	return this->this$0->canonicalizeCodebase(this->val$cs, true);
}

PolicyFile$6::PolicyFile$6() {
}

$Class* PolicyFile$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/provider/PolicyFile;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$6, this$0)},
		{"val$cs", "Ljava/security/CodeSource;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$6, val$cs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/provider/PolicyFile;Ljava/security/CodeSource;)V", nullptr, 0, $method(PolicyFile$6, init$, void, $PolicyFile*, $CodeSource*)},
		{"run", "()Ljava/security/CodeSource;", nullptr, $PUBLIC, $virtualMethod(PolicyFile$6, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.PolicyFile",
		"getPermissions",
		"(Ljava/security/Permissions;Ljava/security/ProtectionDomain;)Ljava/security/PermissionCollection;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.PolicyFile$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.PolicyFile$6",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/CodeSource;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.PolicyFile"
	};
	$loadClass(PolicyFile$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PolicyFile$6);
	});
	return class$;
}

$Class* PolicyFile$6::class$ = nullptr;

		} // provider
	} // security
} // sun