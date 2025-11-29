#include <java/lang/invoke/InvokerBytecodeGenerator$2.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/lang/invoke/InvokerBytecodeGenerator.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/LambdaForm$Kind.h>
#include <java/lang/invoke/MethodHandleImpl$Intrinsic.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef ARRAY_LENGTH
#undef ARRAY_LOAD
#undef ARRAY_STORE
#undef BOOLEAN
#undef BOUND_REINVOKER
#undef BYTE
#undef CHAR
#undef DELEGATE
#undef DIRECT_INVOKE_INTERFACE
#undef DIRECT_INVOKE_SPECIAL
#undef DIRECT_INVOKE_SPECIAL_IFC
#undef DIRECT_INVOKE_STATIC
#undef DIRECT_INVOKE_STATIC_INIT
#undef DIRECT_INVOKE_VIRTUAL
#undef DIRECT_NEW_INVOKE_SPECIAL
#undef DOUBLE
#undef D_TYPE
#undef EXACT_INVOKER
#undef EXACT_LINKER
#undef FLOAT
#undef F_TYPE
#undef GENERIC_INVOKER
#undef GENERIC_LINKER
#undef GET_BOOLEAN
#undef GET_BYTE
#undef GET_CHAR
#undef GET_DOUBLE
#undef GET_FLOAT
#undef GET_INT
#undef GET_LONG
#undef GET_REFERENCE
#undef GET_SHORT
#undef GUARD_WITH_CATCH
#undef IDENTITY
#undef INT
#undef I_TYPE
#undef J_TYPE
#undef LINK_TO_CALL_SITE
#undef LINK_TO_TARGET_METHOD
#undef LONG
#undef LOOP
#undef L_TYPE
#undef NONE
#undef OBJECT
#undef PUT_BOOLEAN
#undef PUT_BYTE
#undef PUT_CHAR
#undef PUT_DOUBLE
#undef PUT_FLOAT
#undef PUT_INT
#undef PUT_LONG
#undef PUT_REFERENCE
#undef PUT_SHORT
#undef SELECT_ALTERNATIVE
#undef SHORT
#undef TABLE_SWITCH
#undef TRY_FINALLY
#undef V_TYPE
#undef ZERO

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;
using $LambdaForm$Kind = ::java::lang::invoke::LambdaForm$Kind;
using $MethodHandleImpl$Intrinsic = ::java::lang::invoke::MethodHandleImpl$Intrinsic;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _InvokerBytecodeGenerator$2_FieldInfo_[] = {
	{"$SwitchMap$java$lang$invoke$MethodHandleImpl$Intrinsic", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(InvokerBytecodeGenerator$2, $SwitchMap$java$lang$invoke$MethodHandleImpl$Intrinsic)},
	{"$SwitchMap$java$lang$invoke$LambdaForm$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(InvokerBytecodeGenerator$2, $SwitchMap$java$lang$invoke$LambdaForm$Kind)},
	{"$SwitchMap$sun$invoke$util$Wrapper", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(InvokerBytecodeGenerator$2, $SwitchMap$sun$invoke$util$Wrapper)},
	{"$SwitchMap$java$lang$invoke$LambdaForm$BasicType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(InvokerBytecodeGenerator$2, $SwitchMap$java$lang$invoke$LambdaForm$BasicType)},
	{}
};

$EnclosingMethodInfo _InvokerBytecodeGenerator$2_EnclosingMethodInfo_ = {
	"java.lang.invoke.InvokerBytecodeGenerator",
	nullptr,
	nullptr
};

$InnerClassInfo _InvokerBytecodeGenerator$2_InnerClassesInfo_[] = {
	{"java.lang.invoke.InvokerBytecodeGenerator$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _InvokerBytecodeGenerator$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.lang.invoke.InvokerBytecodeGenerator$2",
	"java.lang.Object",
	nullptr,
	_InvokerBytecodeGenerator$2_FieldInfo_,
	nullptr,
	nullptr,
	&_InvokerBytecodeGenerator$2_EnclosingMethodInfo_,
	_InvokerBytecodeGenerator$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.InvokerBytecodeGenerator"
};

$Object* allocate$InvokerBytecodeGenerator$2($Class* clazz) {
	return $of($alloc(InvokerBytecodeGenerator$2));
}

$ints* InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$Intrinsic = nullptr;
$ints* InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind = nullptr;
$ints* InvokerBytecodeGenerator$2::$SwitchMap$sun$invoke$util$Wrapper = nullptr;
$ints* InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$BasicType = nullptr;

void clinit$InvokerBytecodeGenerator$2($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$Intrinsic, $new($ints, $($MethodHandleImpl$Intrinsic::values())->length));
	{
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$Intrinsic)->set($MethodHandleImpl$Intrinsic::SELECT_ALTERNATIVE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$Intrinsic)->set($MethodHandleImpl$Intrinsic::GUARD_WITH_CATCH->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$Intrinsic)->set($MethodHandleImpl$Intrinsic::TRY_FINALLY->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$Intrinsic)->set($MethodHandleImpl$Intrinsic::TABLE_SWITCH->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$Intrinsic)->set($MethodHandleImpl$Intrinsic::LOOP->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$Intrinsic)->set($MethodHandleImpl$Intrinsic::ARRAY_LOAD->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$Intrinsic)->set($MethodHandleImpl$Intrinsic::ARRAY_STORE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$Intrinsic)->set($MethodHandleImpl$Intrinsic::ARRAY_LENGTH->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$Intrinsic)->set($MethodHandleImpl$Intrinsic::IDENTITY->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$Intrinsic)->set($MethodHandleImpl$Intrinsic::ZERO->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$Intrinsic)->set($MethodHandleImpl$Intrinsic::NONE->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind, $new($ints, $($LambdaForm$Kind::values())->length));
	{
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::BOUND_REINVOKER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::DELEGATE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::ZERO->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::IDENTITY->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::EXACT_INVOKER->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::EXACT_LINKER->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::LINK_TO_CALL_SITE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::LINK_TO_TARGET_METHOD->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::GENERIC_INVOKER->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::GENERIC_LINKER->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::GET_REFERENCE->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::GET_BOOLEAN->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::GET_BYTE->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::GET_CHAR->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::GET_SHORT->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::GET_INT->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::GET_LONG->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::GET_FLOAT->ordinal(), 18);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::GET_DOUBLE->ordinal(), 19);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::PUT_REFERENCE->ordinal(), 20);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::PUT_BOOLEAN->ordinal(), 21);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::PUT_BYTE->ordinal(), 22);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::PUT_CHAR->ordinal(), 23);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::PUT_SHORT->ordinal(), 24);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::PUT_INT->ordinal(), 25);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::PUT_LONG->ordinal(), 26);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::PUT_FLOAT->ordinal(), 27);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::PUT_DOUBLE->ordinal(), 28);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::DIRECT_NEW_INVOKE_SPECIAL->ordinal(), 29);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::DIRECT_INVOKE_INTERFACE->ordinal(), 30);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::DIRECT_INVOKE_SPECIAL->ordinal(), 31);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::DIRECT_INVOKE_SPECIAL_IFC->ordinal(), 32);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::DIRECT_INVOKE_STATIC->ordinal(), 33);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::DIRECT_INVOKE_STATIC_INIT->ordinal(), 34);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$Kind)->set($LambdaForm$Kind::DIRECT_INVOKE_VIRTUAL->ordinal(), 35);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(InvokerBytecodeGenerator$2::$SwitchMap$sun$invoke$util$Wrapper, $new($ints, $($Wrapper::values())->length));
	{
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::BOOLEAN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::BYTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::CHAR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::SHORT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::INT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::LONG->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::FLOAT->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::DOUBLE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::OBJECT->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$BasicType, $new($ints, $($LambdaForm$BasicType::values())->length));
	{
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::I_TYPE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::J_TYPE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::F_TYPE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::D_TYPE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::L_TYPE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InvokerBytecodeGenerator$2::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->set($LambdaForm$BasicType::V_TYPE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

InvokerBytecodeGenerator$2::InvokerBytecodeGenerator$2() {
}

$Class* InvokerBytecodeGenerator$2::load$($String* name, bool initialize) {
	$loadClass(InvokerBytecodeGenerator$2, name, initialize, &_InvokerBytecodeGenerator$2_ClassInfo_, clinit$InvokerBytecodeGenerator$2, allocate$InvokerBytecodeGenerator$2);
	return class$;
}

$Class* InvokerBytecodeGenerator$2::class$ = nullptr;

		} // invoke
	} // lang
} // java