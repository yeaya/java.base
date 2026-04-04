#include <java/lang/SecurityManager$2.h>
#include <java/lang/SecurityManager.h>
#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Security = ::java::security::Security;

namespace java {
	namespace lang {

void SecurityManager$2::init$($SecurityManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* SecurityManager$2::run() {
	return $of($Security::getProperty("package.definition"_s));
}

SecurityManager$2::SecurityManager$2() {
}

$Class* SecurityManager$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/SecurityManager;", nullptr, $FINAL | $SYNTHETIC, $field(SecurityManager$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/SecurityManager;)V", nullptr, 0, $method(SecurityManager$2, init$, void, $SecurityManager*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SecurityManager$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.SecurityManager",
		"checkPackageDefinition",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.SecurityManager$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.SecurityManager$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.SecurityManager"
	};
	$loadClass(SecurityManager$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecurityManager$2);
	});
	return class$;
}

$Class* SecurityManager$2::class$ = nullptr;

	} // lang
} // java