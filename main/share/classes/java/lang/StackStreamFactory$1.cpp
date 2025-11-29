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

$FieldInfo _StackStreamFactory$1_FieldInfo_[] = {
	{"$SwitchMap$java$lang$StackStreamFactory$WalkerState", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StackStreamFactory$1, $SwitchMap$java$lang$StackStreamFactory$WalkerState)},
	{}
};

$EnclosingMethodInfo _StackStreamFactory$1_EnclosingMethodInfo_ = {
	"java.lang.StackStreamFactory",
	nullptr,
	nullptr
};

$InnerClassInfo _StackStreamFactory$1_InnerClassesInfo_[] = {
	{"java.lang.StackStreamFactory$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _StackStreamFactory$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.lang.StackStreamFactory$1",
	"java.lang.Object",
	nullptr,
	_StackStreamFactory$1_FieldInfo_,
	nullptr,
	nullptr,
	&_StackStreamFactory$1_EnclosingMethodInfo_,
	_StackStreamFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StackStreamFactory"
};

$Object* allocate$StackStreamFactory$1($Class* clazz) {
	return $of($alloc(StackStreamFactory$1));
}

$ints* StackStreamFactory$1::$SwitchMap$java$lang$StackStreamFactory$WalkerState = nullptr;

void clinit$StackStreamFactory$1($Class* class$) {
	$assignStatic(StackStreamFactory$1::$SwitchMap$java$lang$StackStreamFactory$WalkerState, $new($ints, $($StackStreamFactory$WalkerState::values())->length));
	{
		try {
			$nc(StackStreamFactory$1::$SwitchMap$java$lang$StackStreamFactory$WalkerState)->set($StackStreamFactory$WalkerState::NEW->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(StackStreamFactory$1::$SwitchMap$java$lang$StackStreamFactory$WalkerState)->set($StackStreamFactory$WalkerState::OPEN->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(StackStreamFactory$1::$SwitchMap$java$lang$StackStreamFactory$WalkerState)->set($StackStreamFactory$WalkerState::CLOSED->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

StackStreamFactory$1::StackStreamFactory$1() {
}

$Class* StackStreamFactory$1::load$($String* name, bool initialize) {
	$loadClass(StackStreamFactory$1, name, initialize, &_StackStreamFactory$1_ClassInfo_, clinit$StackStreamFactory$1, allocate$StackStreamFactory$1);
	return class$;
}

$Class* StackStreamFactory$1::class$ = nullptr;

	} // lang
} // java