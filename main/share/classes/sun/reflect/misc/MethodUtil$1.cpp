#include <sun/reflect/misc/MethodUtil$1.h>
#include <java/lang/reflect/Method.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;

namespace sun {
	namespace reflect {
		namespace misc {

void MethodUtil$1::init$() {
}

$Object* MethodUtil$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* t = $MethodUtil::getTrampolineClass();
	$load($Method);
	$var($ClassArray, types, $new($ClassArray, {
		$Method::class$,
		$Object::class$,
		$getClass($ObjectArray)
	}));
	$var($Method, b, $nc(t)->getDeclaredMethod("invoke"_s, types));
	$nc(b)->setAccessible(true);
	return $of(b);
}

MethodUtil$1::MethodUtil$1() {
}

$Class* MethodUtil$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MethodUtil$1, init$, void)},
		{"run", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $virtualMethod(MethodUtil$1, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.reflect.misc.MethodUtil",
		"getTrampoline",
		"()Ljava/lang/reflect/Method;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.reflect.misc.MethodUtil$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.reflect.misc.MethodUtil$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/reflect/Method;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.reflect.misc.MethodUtil"
	};
	$loadClass(MethodUtil$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodUtil$1);
	});
	return class$;
}

$Class* MethodUtil$1::class$ = nullptr;

		} // misc
	} // reflect
} // sun