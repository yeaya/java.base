#include <FinThreads$1.h>
#include <FinThreads.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;

void FinThreads$1::init$(int64_t val$delay, $Thread* val$sleeper) {
	this->val$delay = val$delay;
	$set(this, val$sleeper, val$sleeper);
}

void FinThreads$1::run() {
	try {
		$Thread::sleep(this->val$delay);
		$nc($System::err)->println($$str({"Waking "_s, this->val$sleeper}));
		$nc(this->val$sleeper)->interrupt();
	} catch ($InterruptedException& x) {
	}
}

FinThreads$1::FinThreads$1() {
}

$Class* FinThreads$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$sleeper", "Ljava/lang/Thread;", nullptr, $FINAL | $SYNTHETIC, $field(FinThreads$1, val$sleeper)},
		{"val$delay", "J", nullptr, $FINAL | $SYNTHETIC, $field(FinThreads$1, val$delay)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JLjava/lang/Thread;)V", "()V", 0, $method(FinThreads$1, init$, void, int64_t, $Thread*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FinThreads$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"FinThreads",
		"alarm",
		"(Ljava/lang/Thread;J)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FinThreads$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FinThreads$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FinThreads"
	};
	$loadClass(FinThreads$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinThreads$1);
	});
	return class$;
}

$Class* FinThreads$1::class$ = nullptr;