#include <Restart$1.h>
#include <Restart.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

void Restart$1::init$($AtomicInteger* val$exceptionCount) {
	$set(this, val$exceptionCount, val$exceptionCount);
}

void Restart$1::uncaughtException($Thread* t, $Throwable* e) {
	$nc(this->val$exceptionCount)->incrementAndGet();
}

Restart$1::Restart$1() {
}

$Class* Restart$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$exceptionCount", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(Restart$1, val$exceptionCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/atomic/AtomicInteger;)V", "()V", 0, $method(Restart$1, init$, void, $AtomicInteger*)},
		{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(Restart$1, uncaughtException, void, $Thread*, $Throwable*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Restart",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Restart$1", nullptr, nullptr, 0},
		{"java.lang.Thread$UncaughtExceptionHandler", "java.lang.Thread", "UncaughtExceptionHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Restart$1",
		"java.lang.Object",
		"java.lang.Thread$UncaughtExceptionHandler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Restart"
	};
	$loadClass(Restart$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Restart$1);
	});
	return class$;
}

$Class* Restart$1::class$ = nullptr;