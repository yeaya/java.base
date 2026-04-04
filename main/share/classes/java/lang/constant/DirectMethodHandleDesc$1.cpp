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

$ints* DirectMethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind = nullptr;

void DirectMethodHandleDesc$1::clinit$($Class* clazz) {
	$assignStatic(DirectMethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind, $new($ints, $($DirectMethodHandleDesc$Kind::values())->length));
	{
		try {
			DirectMethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind->set($DirectMethodHandleDesc$Kind::VIRTUAL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DirectMethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind->set($DirectMethodHandleDesc$Kind::SPECIAL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DirectMethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind->set($DirectMethodHandleDesc$Kind::INTERFACE_VIRTUAL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DirectMethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind->set($DirectMethodHandleDesc$Kind::INTERFACE_SPECIAL->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DirectMethodHandleDesc$1::DirectMethodHandleDesc$1() {
}

$Class* DirectMethodHandleDesc$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectMethodHandleDesc$1, $SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.constant.DirectMethodHandleDesc",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.constant.DirectMethodHandleDesc$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.lang.constant.DirectMethodHandleDesc$1",
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
		"java.lang.constant.DirectMethodHandleDesc"
	};
	$loadClass(DirectMethodHandleDesc$1, name, initialize, &classInfo$$, DirectMethodHandleDesc$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DirectMethodHandleDesc$1);
	});
	return class$;
}

$Class* DirectMethodHandleDesc$1::class$ = nullptr;

		} // constant
	} // lang
} // java