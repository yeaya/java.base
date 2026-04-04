#include <FinInterrupt.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FinInterrupt::init$() {
}

void FinInterrupt::main($StringArray* args) {
	$($Thread::currentThread())->interrupt();
	$System::runFinalization();
	if ($Thread::interrupted()) {
		$nc($System::out)->println("Passed: interrupt bit was still set."_s);
	} else {
		$throwNew($AssertionError, $of("interrupt bit was cleared"_s));
	}
}

FinInterrupt::FinInterrupt() {
}

$Class* FinInterrupt::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FinInterrupt, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FinInterrupt, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"FinInterrupt",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FinInterrupt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinInterrupt);
	});
	return class$;
}

$Class* FinInterrupt::class$ = nullptr;