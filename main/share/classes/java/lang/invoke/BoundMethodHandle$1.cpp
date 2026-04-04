#include <java/lang/invoke/BoundMethodHandle$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <jcpp.h>

#undef D_TYPE
#undef F_TYPE
#undef I_TYPE
#undef J_TYPE
#undef L_TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;

namespace java {
	namespace lang {
		namespace invoke {

$ints* BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType = nullptr;

void BoundMethodHandle$1::clinit$($Class* clazz) {
	$assignStatic(BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType, $new($ints, $($LambdaForm$BasicType::values())->length));
	{
		try {
			BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType->set($LambdaForm$BasicType::L_TYPE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType->set($LambdaForm$BasicType::I_TYPE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType->set($LambdaForm$BasicType::J_TYPE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType->set($LambdaForm$BasicType::F_TYPE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType->set($LambdaForm$BasicType::D_TYPE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

BoundMethodHandle$1::BoundMethodHandle$1() {
}

$Class* BoundMethodHandle$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$lang$invoke$LambdaForm$BasicType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BoundMethodHandle$1, $SwitchMap$java$lang$invoke$LambdaForm$BasicType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.BoundMethodHandle",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.BoundMethodHandle$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.lang.invoke.BoundMethodHandle$1",
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
		"java.lang.invoke.BoundMethodHandle"
	};
	$loadClass(BoundMethodHandle$1, name, initialize, &classInfo$$, BoundMethodHandle$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BoundMethodHandle$1);
	});
	return class$;
}

$Class* BoundMethodHandle$1::class$ = nullptr;

		} // invoke
	} // lang
} // java