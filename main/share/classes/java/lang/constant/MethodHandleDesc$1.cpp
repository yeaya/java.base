#include <java/lang/constant/MethodHandleDesc$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/constant/DirectMethodHandleDesc$Kind.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
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

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DirectMethodHandleDesc$Kind = ::java::lang::constant::DirectMethodHandleDesc$Kind;

namespace java {
	namespace lang {
		namespace constant {

$ints* MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind = nullptr;

void MethodHandleDesc$1::clinit$($Class* clazz) {
	$assignStatic(MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind, $new($ints, $($DirectMethodHandleDesc$Kind::values())->length));
	{
		try {
			MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind->set($DirectMethodHandleDesc$Kind::GETTER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind->set($DirectMethodHandleDesc$Kind::SETTER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind->set($DirectMethodHandleDesc$Kind::STATIC_GETTER->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind->set($DirectMethodHandleDesc$Kind::STATIC_SETTER->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind->set($DirectMethodHandleDesc$Kind::VIRTUAL->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind->set($DirectMethodHandleDesc$Kind::SPECIAL->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind->set($DirectMethodHandleDesc$Kind::INTERFACE_VIRTUAL->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind->set($DirectMethodHandleDesc$Kind::INTERFACE_SPECIAL->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind->set($DirectMethodHandleDesc$Kind::INTERFACE_STATIC->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind->set($DirectMethodHandleDesc$Kind::STATIC->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind->set($DirectMethodHandleDesc$Kind::CONSTRUCTOR->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MethodHandleDesc$1::MethodHandleDesc$1() {
}

$Class* MethodHandleDesc$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandleDesc$1, $SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.constant.MethodHandleDesc",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.constant.MethodHandleDesc$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.lang.constant.MethodHandleDesc$1",
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
		"java.lang.constant.MethodHandleDesc"
	};
	$loadClass(MethodHandleDesc$1, name, initialize, &classInfo$$, MethodHandleDesc$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MethodHandleDesc$1);
	});
	return class$;
}

$Class* MethodHandleDesc$1::class$ = nullptr;

		} // constant
	} // lang
} // java