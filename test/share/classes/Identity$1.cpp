#include <Identity$1.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

void Identity$1::init$() {
	$ThreadLocal::init$();
}

$Object* Identity$1::initialValue() {
	return $of($Integer::valueOf(-1));
}

Identity$1::Identity$1() {
}

$Class* Identity$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Identity$1, init$, void)},
		{"initialValue", "()Ljava/lang/Integer;", nullptr, $PROTECTED, $virtualMethod(Identity$1, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Identity",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Identity$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Identity$1",
		"java.lang.ThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Identity"
	};
	$loadClass(Identity$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Identity$1);
	});
	return class$;
}

$Class* Identity$1::class$ = nullptr;