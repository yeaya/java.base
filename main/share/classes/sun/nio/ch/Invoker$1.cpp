#include <sun/nio/ch/Invoker$1.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

namespace sun {
	namespace nio {
		namespace ch {

void Invoker$1::init$() {
	$ThreadLocal::init$();
}

$Object* Invoker$1::initialValue() {
	return nullptr;
}

Invoker$1::Invoker$1() {
}

$Class* Invoker$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Invoker$1, init$, void)},
		{"initialValue", "()Lsun/nio/ch/Invoker$GroupAndInvokeCount;", nullptr, $PROTECTED, $virtualMethod(Invoker$1, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.Invoker",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.Invoker$1", nullptr, nullptr, 0},
		{"sun.nio.ch.Invoker$GroupAndInvokeCount", "sun.nio.ch.Invoker", "GroupAndInvokeCount", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.Invoker$1",
		"java.lang.ThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ThreadLocal<Lsun/nio/ch/Invoker$GroupAndInvokeCount;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.Invoker"
	};
	$loadClass(Invoker$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Invoker$1);
	});
	return class$;
}

$Class* Invoker$1::class$ = nullptr;

		} // ch
	} // nio
} // sun