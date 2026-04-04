#include <RegAfterPreClose$1.h>
#include <RegAfterPreClose.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

void RegAfterPreClose$1::init$() {
}

$Thread* RegAfterPreClose$1::newThread($Runnable* r) {
	$var($Thread, t, $new($Thread, r));
	t->setDaemon(true);
	return t;
}

RegAfterPreClose$1::RegAfterPreClose$1() {
}

$Class* RegAfterPreClose$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RegAfterPreClose$1, init$, void)},
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(RegAfterPreClose$1, newThread, $Thread*, $Runnable*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"RegAfterPreClose",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RegAfterPreClose$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RegAfterPreClose$1",
		"java.lang.Object",
		"java.util.concurrent.ThreadFactory",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"RegAfterPreClose"
	};
	$loadClass(RegAfterPreClose$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegAfterPreClose$1);
	});
	return class$;
}

$Class* RegAfterPreClose$1::class$ = nullptr;