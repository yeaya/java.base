#include <WithSecurityManager4concat$1.h>
#include <WithSecurityManager4concat.h>
#include <java/lang/SecurityManager.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Permission = ::java::security::Permission;

void WithSecurityManager4concat$1::init$() {
	$SecurityManager::init$();
}

void WithSecurityManager4concat$1::checkPermission($Permission* perm) {
	$useLocalObjectStack();
	$var($String, abc, "abc"_s);
	int32_t ival = $nc(perm)->hashCode();
	$var($String, full, $str({abc, "abc"_s}));
	$assign(full, $str({"abc"_s, $$str(ival), "def"_s, abc, "def"_s, abc, "def"_s, abc, "def"_s, $$str(ival), "def"_s, abc, "def"_s, abc, "def"_s, abc, 
	"def"_s, abc, "def"_s}));
}

WithSecurityManager4concat$1::WithSecurityManager4concat$1() {
}

$Class* WithSecurityManager4concat$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WithSecurityManager4concat$1, init$, void)},
		{"checkPermission", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(WithSecurityManager4concat$1, checkPermission, void, $Permission*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"WithSecurityManager4concat",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WithSecurityManager4concat$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WithSecurityManager4concat$1",
		"java.lang.SecurityManager",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"WithSecurityManager4concat"
	};
	$loadClass(WithSecurityManager4concat$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WithSecurityManager4concat$1);
	});
	return class$;
}

$Class* WithSecurityManager4concat$1::class$ = nullptr;