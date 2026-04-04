#include <Truncate$4.h>
#include <Truncate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Truncate$4::init$() {
}

void Truncate$4::uncaughtException($Thread* t, $Throwable* e) {
	$nc(e)->printStackTrace();
}

Truncate$4::Truncate$4() {
}

$Class* Truncate$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Truncate$4, init$, void)},
		{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(Truncate$4, uncaughtException, void, $Thread*, $Throwable*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Truncate",
		"execute",
		"(Ljava/util/concurrent/Callable;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Truncate$4", nullptr, nullptr, 0},
		{"java.lang.Thread$UncaughtExceptionHandler", "java.lang.Thread", "UncaughtExceptionHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Truncate$4",
		"java.lang.Object",
		"java.lang.Thread$UncaughtExceptionHandler",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Truncate"
	};
	$loadClass(Truncate$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Truncate$4);
	});
	return class$;
}

$Class* Truncate$4::class$ = nullptr;