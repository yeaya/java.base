#include <java/lang/invoke/MethodHandleImpl$2.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/invoke/MethodHandleImpl$ArrayAccess.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <jcpp.h>

#undef GET
#undef LENGTH
#undef SET

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $MethodHandleImpl$ArrayAccess = ::java::lang::invoke::MethodHandleImpl$ArrayAccess;

namespace java {
	namespace lang {
		namespace invoke {

$ints* MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess = nullptr;

void MethodHandleImpl$2::clinit$($Class* clazz) {
	$assignStatic(MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess, $new($ints, $($MethodHandleImpl$ArrayAccess::values())->length));
	{
		try {
			MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess->set($MethodHandleImpl$ArrayAccess::GET->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess->set($MethodHandleImpl$ArrayAccess::SET->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess->set($MethodHandleImpl$ArrayAccess::LENGTH->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MethodHandleImpl$2::MethodHandleImpl$2() {
}

$Class* MethodHandleImpl$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandleImpl$2, $SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.MethodHandleImpl",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.MethodHandleImpl$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.lang.invoke.MethodHandleImpl$2",
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
		"java.lang.invoke.MethodHandleImpl"
	};
	$loadClass(MethodHandleImpl$2, name, initialize, &classInfo$$, MethodHandleImpl$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MethodHandleImpl$2);
	});
	return class$;
}

$Class* MethodHandleImpl$2::class$ = nullptr;

		} // invoke
	} // lang
} // java