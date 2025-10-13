#include <java/lang/constant/DirectMethodHandleDescImpl$1.h>

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
#include <java/lang/constant/DirectMethodHandleDescImpl.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CONSTRUCTOR
#undef GETTER
#undef INTERFACE_SPECIAL
#undef INTERFACE_STATIC
#undef INTERFACE_VIRTUAL
#undef SETTER
#undef SPECIAL
#undef STATIC
#undef STATIC_GETTER
#undef STATIC_SETTER
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
using $DirectMethodHandleDescImpl = ::java::lang::constant::DirectMethodHandleDescImpl;

namespace java {
	namespace lang {
		namespace constant {

$FieldInfo _DirectMethodHandleDescImpl$1_FieldInfo_[] = {
	{"$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectMethodHandleDescImpl$1, $SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)},
	{}
};

$EnclosingMethodInfo _DirectMethodHandleDescImpl$1_EnclosingMethodInfo_ = {
	"java.lang.constant.DirectMethodHandleDescImpl",
	nullptr,
	nullptr
};

$InnerClassInfo _DirectMethodHandleDescImpl$1_InnerClassesInfo_[] = {
	{"java.lang.constant.DirectMethodHandleDescImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _DirectMethodHandleDescImpl$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.lang.constant.DirectMethodHandleDescImpl$1",
	"java.lang.Object",
	nullptr,
	_DirectMethodHandleDescImpl$1_FieldInfo_,
	nullptr,
	nullptr,
	&_DirectMethodHandleDescImpl$1_EnclosingMethodInfo_,
	_DirectMethodHandleDescImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.constant.DirectMethodHandleDescImpl"
};

$Object* allocate$DirectMethodHandleDescImpl$1($Class* clazz) {
	return $of($alloc(DirectMethodHandleDescImpl$1));
}

$ints* DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind = nullptr;

void clinit$DirectMethodHandleDescImpl$1($Class* class$) {
	$assignStatic(DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind, $new($ints, $($DirectMethodHandleDesc$Kind::values())->length));
	{
		try {
			$nc(DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::CONSTRUCTOR->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::GETTER->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::SETTER->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::STATIC_GETTER->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::STATIC_SETTER->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::VIRTUAL->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::SPECIAL->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::INTERFACE_VIRTUAL->ordinal(), 8);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::INTERFACE_SPECIAL->ordinal(), 9);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::STATIC->ordinal(), 10);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::INTERFACE_STATIC->ordinal(), 11);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

DirectMethodHandleDescImpl$1::DirectMethodHandleDescImpl$1() {
}

$Class* DirectMethodHandleDescImpl$1::load$($String* name, bool initialize) {
	$loadClass(DirectMethodHandleDescImpl$1, name, initialize, &_DirectMethodHandleDescImpl$1_ClassInfo_, clinit$DirectMethodHandleDescImpl$1, allocate$DirectMethodHandleDescImpl$1);
	return class$;
}

$Class* DirectMethodHandleDescImpl$1::class$ = nullptr;

		} // constant
	} // lang
} // java