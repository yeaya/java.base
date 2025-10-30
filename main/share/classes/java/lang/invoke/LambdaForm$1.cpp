#include <java/lang/invoke/LambdaForm$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/LambdaForm.h>
#include <jcpp.h>

#undef D_TYPE
#undef F_TYPE
#undef I_TYPE
#undef J_TYPE
#undef L_TYPE
#undef V_TYPE

using $LambdaForm$BasicTypeArray = $Array<::java::lang::invoke::LambdaForm$BasicType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _LambdaForm$1_FieldInfo_[] = {
	{"$SwitchMap$java$lang$invoke$LambdaForm$BasicType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaForm$1, $SwitchMap$java$lang$invoke$LambdaForm$BasicType)},
	{}
};

$EnclosingMethodInfo _LambdaForm$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.LambdaForm",
	nullptr,
	nullptr
};

$InnerClassInfo _LambdaForm$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.LambdaForm$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _LambdaForm$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.lang.invoke.LambdaForm$1",
	"java.lang.Object",
	nullptr,
	_LambdaForm$1_FieldInfo_,
	nullptr,
	nullptr,
	&_LambdaForm$1_EnclosingMethodInfo_,
	_LambdaForm$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.LambdaForm"
};

$Object* allocate$LambdaForm$1($Class* clazz) {
	return $of($alloc(LambdaForm$1));
}

$ints* LambdaForm$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType = nullptr;

void clinit$LambdaForm$1($Class* class$) {
	$assignStatic(LambdaForm$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType, $new($ints, $($LambdaForm$BasicType::values())->length));
	{
		try {
			$nc(LambdaForm$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::I_TYPE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaForm$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::J_TYPE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaForm$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::F_TYPE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaForm$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::D_TYPE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaForm$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::L_TYPE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaForm$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::V_TYPE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

LambdaForm$1::LambdaForm$1() {
}

$Class* LambdaForm$1::load$($String* name, bool initialize) {
	$loadClass(LambdaForm$1, name, initialize, &_LambdaForm$1_ClassInfo_, clinit$LambdaForm$1, allocate$LambdaForm$1);
	return class$;
}

$Class* LambdaForm$1::class$ = nullptr;

		} // invoke
	} // lang
} // java