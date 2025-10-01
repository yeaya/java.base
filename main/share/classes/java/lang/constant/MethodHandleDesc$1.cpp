#include <java/lang/constant/MethodHandleDesc$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/constant/DirectMethodHandleDesc$Kind.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef GETTER
#undef INTERFACE_SPECIAL
#undef STATIC_GETTER
#undef INTERFACE_VIRTUAL
#undef STATIC_SETTER
#undef SETTER
#undef CONSTRUCTOR
#undef SPECIAL
#undef INTERFACE_STATIC
#undef STATIC
#undef VIRTUAL

using $DirectMethodHandleDesc$KindArray = $Array<::java::lang::constant::DirectMethodHandleDesc$Kind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $DirectMethodHandleDesc$Kind = ::java::lang::constant::DirectMethodHandleDesc$Kind;
using $MethodHandleDesc = ::java::lang::constant::MethodHandleDesc;

namespace java {
	namespace lang {
		namespace constant {

$FieldInfo _MethodHandleDesc$1_FieldInfo_[] = {
	{"$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandleDesc$1, $SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)},
	{}
};

$EnclosingMethodInfo _MethodHandleDesc$1_EnclosingMethodInfo_ = {
	"java.lang.constant.MethodHandleDesc",
	nullptr,
	nullptr
};

$InnerClassInfo _MethodHandleDesc$1_InnerClassesInfo_[] = {
	{"java.lang.constant.MethodHandleDesc$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _MethodHandleDesc$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.lang.constant.MethodHandleDesc$1",
	"java.lang.Object",
	nullptr,
	_MethodHandleDesc$1_FieldInfo_,
	nullptr,
	nullptr,
	&_MethodHandleDesc$1_EnclosingMethodInfo_,
	_MethodHandleDesc$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.constant.MethodHandleDesc"
};

$Object* allocate$MethodHandleDesc$1($Class* clazz) {
	return $of($alloc(MethodHandleDesc$1));
}

$ints* MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind = nullptr;

void clinit$MethodHandleDesc$1($Class* class$) {
	$assignStatic(MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind, $new($ints, $($DirectMethodHandleDesc$Kind::values())->length));
	{
		try {
			$nc(MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::GETTER->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::SETTER->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::STATIC_GETTER->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::STATIC_SETTER->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::VIRTUAL->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::SPECIAL->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::INTERFACE_VIRTUAL->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::INTERFACE_SPECIAL->ordinal(), 8);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::INTERFACE_STATIC->ordinal(), 9);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::STATIC->ordinal(), 10);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::CONSTRUCTOR->ordinal(), 11);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

MethodHandleDesc$1::MethodHandleDesc$1() {
}

$Class* MethodHandleDesc$1::load$($String* name, bool initialize) {
	$loadClass(MethodHandleDesc$1, name, initialize, &_MethodHandleDesc$1_ClassInfo_, clinit$MethodHandleDesc$1, allocate$MethodHandleDesc$1);
	return class$;
}

$Class* MethodHandleDesc$1::class$ = nullptr;

		} // constant
	} // lang
} // java