#include <java/lang/StackStreamFactory$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/StackStreamFactory$WalkerState.h>
#include <java/lang/StackStreamFactory.h>
#include <jcpp.h>

#undef CLOSED
#undef NEW
#undef OPEN

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $StackStreamFactory$WalkerState = ::java::lang::StackStreamFactory$WalkerState;

namespace java {
	namespace lang {

$ints* StackStreamFactory$1::$SwitchMap$java$lang$StackStreamFactory$WalkerState = nullptr;

void StackStreamFactory$1::clinit$($Class* clazz) {
	$assignStatic(StackStreamFactory$1::$SwitchMap$java$lang$StackStreamFactory$WalkerState, $new($ints, $($StackStreamFactory$WalkerState::values())->length));
	{
		try {
			StackStreamFactory$1::$SwitchMap$java$lang$StackStreamFactory$WalkerState->set($StackStreamFactory$WalkerState::NEW->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			StackStreamFactory$1::$SwitchMap$java$lang$StackStreamFactory$WalkerState->set($StackStreamFactory$WalkerState::OPEN->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			StackStreamFactory$1::$SwitchMap$java$lang$StackStreamFactory$WalkerState->set($StackStreamFactory$WalkerState::CLOSED->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

StackStreamFactory$1::StackStreamFactory$1() {
}

$Class* StackStreamFactory$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$lang$StackStreamFactory$WalkerState", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StackStreamFactory$1, $SwitchMap$java$lang$StackStreamFactory$WalkerState)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.StackStreamFactory",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.StackStreamFactory$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.lang.StackStreamFactory$1",
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
		"java.lang.StackStreamFactory"
	};
	$loadClass(StackStreamFactory$1, name, initialize, &classInfo$$, StackStreamFactory$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StackStreamFactory$1);
	});
	return class$;
}

$Class* StackStreamFactory$1::class$ = nullptr;

	} // lang
} // java