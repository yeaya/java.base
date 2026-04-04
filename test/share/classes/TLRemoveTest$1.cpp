#include <TLRemoveTest$1.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

void TLRemoveTest$1::init$() {
	$ThreadLocal::init$();
}

$Object* TLRemoveTest$1::initialValue() {
	$synchronized(this) {
		return $of($Integer::valueOf(101));
	}
}

TLRemoveTest$1::TLRemoveTest$1() {
}

$Class* TLRemoveTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TLRemoveTest$1, init$, void)},
		{"initialValue", "()Ljava/lang/Integer;", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(TLRemoveTest$1, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TLRemoveTest",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TLRemoveTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TLRemoveTest$1",
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
		"TLRemoveTest"
	};
	$loadClass(TLRemoveTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TLRemoveTest$1);
	});
	return class$;
}

$Class* TLRemoveTest$1::class$ = nullptr;