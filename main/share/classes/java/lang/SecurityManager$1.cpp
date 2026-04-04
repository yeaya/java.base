#include <java/lang/SecurityManager$1.h>
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

void SecurityManager$1::init$($SecurityManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* SecurityManager$1::run() {
	return $of($Security::getProperty("package.access"_s));
}

SecurityManager$1::SecurityManager$1() {
}

$Class* SecurityManager$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/SecurityManager;", nullptr, $FINAL | $SYNTHETIC, $field(SecurityManager$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/SecurityManager;)V", nullptr, 0, $method(SecurityManager$1, init$, void, $SecurityManager*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SecurityManager$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.SecurityManager",
		"checkPackageAccess",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.SecurityManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.SecurityManager$1",
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
	$loadClass(SecurityManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecurityManager$1);
	});
	return class$;
}

$Class* SecurityManager$1::class$ = nullptr;

	} // lang
} // java