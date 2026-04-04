#include <java/security/SecureClassLoader$1.h>
#include <java/security/CodeSource.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Principal.h>
#include <java/security/ProtectionDomain.h>
#include <java/security/SecureClassLoader$CodeSourceKey.h>
#include <java/security/SecureClassLoader$DebugHolder.h>
#include <java/security/SecureClassLoader.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $PrincipalArray = $Array<::java::security::Principal>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodeSource = ::java::security::CodeSource;
using $PermissionCollection = ::java::security::PermissionCollection;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $SecureClassLoader$CodeSourceKey = ::java::security::SecureClassLoader$CodeSourceKey;
using $SecureClassLoader$DebugHolder = ::java::security::SecureClassLoader$DebugHolder;

namespace java {
	namespace security {

void SecureClassLoader$1::init$($SecureClassLoader* this$0, $CodeSource* val$cs) {
	$set(this, this$0, this$0);
	$set(this, val$cs, val$cs);
}

$ProtectionDomain* SecureClassLoader$1::apply($SecureClassLoader$CodeSourceKey* key) {
	$useLocalObjectStack();
	$var($PermissionCollection, perms, this->this$0->getPermissions(this->val$cs));
	$var($ProtectionDomain, pd, $new($ProtectionDomain, this->val$cs, perms, this->this$0, nullptr));
	$init($SecureClassLoader$DebugHolder);
	if ($SecureClassLoader$DebugHolder::debug != nullptr) {
		$SecureClassLoader$DebugHolder::debug->println($$str({" getPermissions "_s, pd}));
		$SecureClassLoader$DebugHolder::debug->println(""_s);
	}
	return pd;
}

$Object* SecureClassLoader$1::apply(Object$* key) {
	return this->apply($cast($SecureClassLoader$CodeSourceKey, key));
}

SecureClassLoader$1::SecureClassLoader$1() {
}

$Class* SecureClassLoader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/security/SecureClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(SecureClassLoader$1, this$0)},
		{"val$cs", "Ljava/security/CodeSource;", nullptr, $FINAL | $SYNTHETIC, $field(SecureClassLoader$1, val$cs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/SecureClassLoader;Ljava/security/CodeSource;)V", nullptr, 0, $method(SecureClassLoader$1, init$, void, $SecureClassLoader*, $CodeSource*)},
		{"apply", "(Ljava/security/SecureClassLoader$CodeSourceKey;)Ljava/security/ProtectionDomain;", nullptr, $PUBLIC, $virtualMethod(SecureClassLoader$1, apply, $ProtectionDomain*, $SecureClassLoader$CodeSourceKey*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SecureClassLoader$1, apply, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.SecureClassLoader",
		"getProtectionDomain",
		"(Ljava/security/CodeSource;)Ljava/security/ProtectionDomain;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.SecureClassLoader$1", nullptr, nullptr, 0},
		{"java.security.SecureClassLoader$CodeSourceKey", "java.security.SecureClassLoader", "CodeSourceKey", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.SecureClassLoader$1",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Function<Ljava/security/SecureClassLoader$CodeSourceKey;Ljava/security/ProtectionDomain;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.SecureClassLoader"
	};
	$loadClass(SecureClassLoader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecureClassLoader$1);
	});
	return class$;
}

$Class* SecureClassLoader$1::class$ = nullptr;

	} // security
} // java