#include <sun/security/action/GetPropertyAction$1.h>
#include <java/util/Properties.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace action {

void GetPropertyAction$1::init$() {
}

$Object* GetPropertyAction$1::run() {
	return $of($System::getProperties());
}

GetPropertyAction$1::GetPropertyAction$1() {
}

$Class* GetPropertyAction$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GetPropertyAction$1, init$, void)},
		{"run", "()Ljava/util/Properties;", nullptr, $PUBLIC, $virtualMethod(GetPropertyAction$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.action.GetPropertyAction",
		"privilegedGetProperties",
		"()Ljava/util/Properties;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.action.GetPropertyAction$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.action.GetPropertyAction$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/Properties;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.action.GetPropertyAction"
	};
	$loadClass(GetPropertyAction$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetPropertyAction$1);
	});
	return class$;
}

$Class* GetPropertyAction$1::class$ = nullptr;

		} // action
	} // security
} // sun