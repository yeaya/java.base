#include <sun/security/provider/PolicyFile$8.h>
#include <java/security/CodeSource.h>
#include <sun/security/provider/PolicyFile$PolicyEntry.h>
#include <sun/security/provider/PolicyFile.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodeSource = ::java::security::CodeSource;
using $PolicyFile = ::sun::security::provider::PolicyFile;
using $PolicyFile$PolicyEntry = ::sun::security::provider::PolicyFile$PolicyEntry;

namespace sun {
	namespace security {
		namespace provider {

void PolicyFile$8::init$($PolicyFile* this$0, $PolicyFile$PolicyEntry* val$entry, $CodeSource* val$cs) {
	$set(this, this$0, this$0);
	$set(this, val$entry, val$entry);
	$set(this, val$cs, val$cs);
}

$Object* PolicyFile$8::run() {
	return $of($Boolean::valueOf($$nc($nc(this->val$entry)->getCodeSource())->implies(this->val$cs)));
}

PolicyFile$8::PolicyFile$8() {
}

$Class* PolicyFile$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/provider/PolicyFile;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$8, this$0)},
		{"val$cs", "Ljava/security/CodeSource;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$8, val$cs)},
		{"val$entry", "Lsun/security/provider/PolicyFile$PolicyEntry;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$8, val$entry)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/provider/PolicyFile;Lsun/security/provider/PolicyFile$PolicyEntry;Ljava/security/CodeSource;)V", nullptr, 0, $method(PolicyFile$8, init$, void, $PolicyFile*, $PolicyFile$PolicyEntry*, $CodeSource*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(PolicyFile$8, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.PolicyFile",
		"addPermissions",
		"(Ljava/security/Permissions;Ljava/security/CodeSource;[Ljava/security/Principal;Lsun/security/provider/PolicyFile$PolicyEntry;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.PolicyFile$8", nullptr, nullptr, 0},
		{"sun.security.provider.PolicyFile$PolicyEntry", "sun.security.provider.PolicyFile", "PolicyEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.PolicyFile$8",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.PolicyFile"
	};
	$loadClass(PolicyFile$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PolicyFile$8);
	});
	return class$;
}

$Class* PolicyFile$8::class$ = nullptr;

		} // provider
	} // security
} // sun