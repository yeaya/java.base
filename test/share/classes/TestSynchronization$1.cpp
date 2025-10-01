#include <TestSynchronization$1.h>

#include <TestSynchronization.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/Thread$State.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef NEW
#undef TERMINATED
#undef RUNNABLE
#undef WAITING
#undef TIMED_WAITING
#undef BLOCKED

using $TestSynchronization = ::TestSynchronization;
using $Thread$StateArray = $Array<::java::lang::Thread$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Thread$State = ::java::lang::Thread$State;

$FieldInfo _TestSynchronization$1_FieldInfo_[] = {
	{"$SwitchMap$java$lang$Thread$State", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TestSynchronization$1, $SwitchMap$java$lang$Thread$State)},
	{}
};

$EnclosingMethodInfo _TestSynchronization$1_EnclosingMethodInfo_ = {
	"TestSynchronization",
	nullptr,
	nullptr
};

$InnerClassInfo _TestSynchronization$1_InnerClassesInfo_[] = {
	{"TestSynchronization$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TestSynchronization$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"TestSynchronization$1",
	"java.lang.Object",
	nullptr,
	_TestSynchronization$1_FieldInfo_,
	nullptr,
	nullptr,
	&_TestSynchronization$1_EnclosingMethodInfo_,
	_TestSynchronization$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestSynchronization"
};

$Object* allocate$TestSynchronization$1($Class* clazz) {
	return $of($alloc(TestSynchronization$1));
}

$ints* TestSynchronization$1::$SwitchMap$java$lang$Thread$State = nullptr;

void clinit$TestSynchronization$1($Class* class$) {
	$assignStatic(TestSynchronization$1::$SwitchMap$java$lang$Thread$State, $new($ints, $($Thread$State::values())->length));
	{
		try {
			$nc(TestSynchronization$1::$SwitchMap$java$lang$Thread$State)->set($Thread$State::NEW->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TestSynchronization$1::$SwitchMap$java$lang$Thread$State)->set($Thread$State::RUNNABLE->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TestSynchronization$1::$SwitchMap$java$lang$Thread$State)->set($Thread$State::WAITING->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TestSynchronization$1::$SwitchMap$java$lang$Thread$State)->set($Thread$State::TIMED_WAITING->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TestSynchronization$1::$SwitchMap$java$lang$Thread$State)->set($Thread$State::BLOCKED->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TestSynchronization$1::$SwitchMap$java$lang$Thread$State)->set($Thread$State::TERMINATED->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

TestSynchronization$1::TestSynchronization$1() {
}

$Class* TestSynchronization$1::load$($String* name, bool initialize) {
	$loadClass(TestSynchronization$1, name, initialize, &_TestSynchronization$1_ClassInfo_, clinit$TestSynchronization$1, allocate$TestSynchronization$1);
	return class$;
}

$Class* TestSynchronization$1::class$ = nullptr;