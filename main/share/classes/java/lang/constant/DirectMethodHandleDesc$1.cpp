#include <java/lang/constant/DirectMethodHandleDesc$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/lang/constant/DirectMethodHandleDesc$Kind.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <jcpp.h>

#undef INTERFACE_SPECIAL
#undef INTERFACE_VIRTUAL
#undef SPECIAL
#undef VIRTUAL

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DirectMethodHandleDesc$Kind = ::java::lang::constant::DirectMethodHandleDesc$Kind;

namespace java {
	namespace lang {
		namespace constant {

$FieldInfo _DirectMethodHandleDesc$1_FieldInfo_[] = {
	{"$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectMethodHandleDesc$1, $SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)},
	{}
};

$EnclosingMethodInfo _DirectMethodHandleDesc$1_EnclosingMethodInfo_ = {
	"java.lang.constant.DirectMethodHandleDesc",
	nullptr,
	nullptr
};

$InnerClassInfo _DirectMethodHandleDesc$1_InnerClassesInfo_[] = {
	{"java.lang.constant.DirectMethodHandleDesc$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _DirectMethodHandleDesc$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.lang.constant.DirectMethodHandleDesc$1",
	"java.lang.Object",
	nullptr,
	_DirectMethodHandleDesc$1_FieldInfo_,
	nullptr,
	nullptr,
	&_DirectMethodHandleDesc$1_EnclosingMethodInfo_,
	_DirectMethodHandleDesc$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.constant.DirectMethodHandleDesc"
};

$Object* allocate$DirectMethodHandleDesc$1($Class* clazz) {
	return $of($alloc(DirectMethodHandleDesc$1));
}

$ints* DirectMethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind = nullptr;

void clinit$DirectMethodHandleDesc$1($Class* class$) {
	$assignStatic(DirectMethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind, $new($ints, $($DirectMethodHandleDesc$Kind::values())->length));
	{
		try {
			$nc(DirectMethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::VIRTUAL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DirectMethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::SPECIAL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DirectMethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::INTERFACE_VIRTUAL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DirectMethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->set($DirectMethodHandleDesc$Kind::INTERFACE_SPECIAL->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DirectMethodHandleDesc$1::DirectMethodHandleDesc$1() {
}

$Class* DirectMethodHandleDesc$1::load$($String* name, bool initialize) {
	$loadClass(DirectMethodHandleDesc$1, name, initialize, &_DirectMethodHandleDesc$1_ClassInfo_, clinit$DirectMethodHandleDesc$1, allocate$DirectMethodHandleDesc$1);
	return class$;
}

$Class* DirectMethodHandleDesc$1::class$ = nullptr;

		} // constant
	} // lang
} // java