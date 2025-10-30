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

using $LambdaForm$BasicTypeArray = $Array<::java::lang::invoke::LambdaForm$BasicType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _BoundMethodHandle$1_FieldInfo_[] = {
	{"$SwitchMap$java$lang$invoke$LambdaForm$BasicType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BoundMethodHandle$1, $SwitchMap$java$lang$invoke$LambdaForm$BasicType)},
	{}
};

$EnclosingMethodInfo _BoundMethodHandle$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.BoundMethodHandle",
	nullptr,
	nullptr
};

$InnerClassInfo _BoundMethodHandle$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.BoundMethodHandle$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _BoundMethodHandle$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.lang.invoke.BoundMethodHandle$1",
	"java.lang.Object",
	nullptr,
	_BoundMethodHandle$1_FieldInfo_,
	nullptr,
	nullptr,
	&_BoundMethodHandle$1_EnclosingMethodInfo_,
	_BoundMethodHandle$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.BoundMethodHandle"
};

$Object* allocate$BoundMethodHandle$1($Class* clazz) {
	return $of($alloc(BoundMethodHandle$1));
}

$ints* BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType = nullptr;

void clinit$BoundMethodHandle$1($Class* class$) {
	$assignStatic(BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType, $new($ints, $($LambdaForm$BasicType::values())->length));
	{
		try {
			$nc(BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::L_TYPE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::I_TYPE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::J_TYPE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::F_TYPE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::D_TYPE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

BoundMethodHandle$1::BoundMethodHandle$1() {
}

$Class* BoundMethodHandle$1::load$($String* name, bool initialize) {
	$loadClass(BoundMethodHandle$1, name, initialize, &_BoundMethodHandle$1_ClassInfo_, clinit$BoundMethodHandle$1, allocate$BoundMethodHandle$1);
	return class$;
}

$Class* BoundMethodHandle$1::class$ = nullptr;

		} // invoke
	} // lang
} // java