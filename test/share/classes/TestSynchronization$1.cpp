#include <TestSynchronization$1.h>
#include <TestSynchronization.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/Thread$State.h>
#include <jcpp.h>

#undef BLOCKED
#undef NEW
#undef RUNNABLE
#undef TERMINATED
#undef TIMED_WAITING
#undef WAITING

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Thread$State = ::java::lang::Thread$State;

$ints* TestSynchronization$1::$SwitchMap$java$lang$Thread$State = nullptr;

void TestSynchronization$1::clinit$($Class* clazz) {
	$assignStatic(TestSynchronization$1::$SwitchMap$java$lang$Thread$State, $new($ints, $($Thread$State::values())->length));
	{
		try {
			TestSynchronization$1::$SwitchMap$java$lang$Thread$State->set($Thread$State::NEW->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TestSynchronization$1::$SwitchMap$java$lang$Thread$State->set($Thread$State::RUNNABLE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TestSynchronization$1::$SwitchMap$java$lang$Thread$State->set($Thread$State::WAITING->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TestSynchronization$1::$SwitchMap$java$lang$Thread$State->set($Thread$State::TIMED_WAITING->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TestSynchronization$1::$SwitchMap$java$lang$Thread$State->set($Thread$State::BLOCKED->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TestSynchronization$1::$SwitchMap$java$lang$Thread$State->set($Thread$State::TERMINATED->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TestSynchronization$1::TestSynchronization$1() {
}

$Class* TestSynchronization$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$lang$Thread$State", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TestSynchronization$1, $SwitchMap$java$lang$Thread$State)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestSynchronization",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestSynchronization$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"TestSynchronization$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestSynchronization"
	};
	$loadClass(TestSynchronization$1, name, initialize, &classInfo$$, TestSynchronization$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestSynchronization$1);
	});
	return class$;
}

$Class* TestSynchronization$1::class$ = nullptr;