#include <InheritIOEHandle$1.h>
#include <InheritIOEHandle$APP.h>
#include <InheritIOEHandle.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef A
#undef B
#undef C

using $InheritIOEHandle$APP = ::InheritIOEHandle$APP;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

$ints* InheritIOEHandle$1::$SwitchMap$InheritIOEHandle$APP = nullptr;

void InheritIOEHandle$1::clinit$($Class* clazz) {
	$assignStatic(InheritIOEHandle$1::$SwitchMap$InheritIOEHandle$APP, $new($ints, $($InheritIOEHandle$APP::values())->length));
	{
		try {
			InheritIOEHandle$1::$SwitchMap$InheritIOEHandle$APP->set($InheritIOEHandle$APP::A->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			InheritIOEHandle$1::$SwitchMap$InheritIOEHandle$APP->set($InheritIOEHandle$APP::B->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			InheritIOEHandle$1::$SwitchMap$InheritIOEHandle$APP->set($InheritIOEHandle$APP::C->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

InheritIOEHandle$1::InheritIOEHandle$1() {
}

$Class* InheritIOEHandle$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$InheritIOEHandle$APP", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(InheritIOEHandle$1, $SwitchMap$InheritIOEHandle$APP)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"InheritIOEHandle",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InheritIOEHandle$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"InheritIOEHandle$1",
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
		"InheritIOEHandle"
	};
	$loadClass(InheritIOEHandle$1, name, initialize, &classInfo$$, InheritIOEHandle$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(InheritIOEHandle$1);
	});
	return class$;
}

$Class* InheritIOEHandle$1::class$ = nullptr;