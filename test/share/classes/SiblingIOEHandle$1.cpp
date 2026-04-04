#include <SiblingIOEHandle$1.h>
#include <SiblingIOEHandle$APP.h>
#include <SiblingIOEHandle.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef A
#undef B
#undef C

using $SiblingIOEHandle$APP = ::SiblingIOEHandle$APP;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

$ints* SiblingIOEHandle$1::$SwitchMap$SiblingIOEHandle$APP = nullptr;

void SiblingIOEHandle$1::clinit$($Class* clazz) {
	$assignStatic(SiblingIOEHandle$1::$SwitchMap$SiblingIOEHandle$APP, $new($ints, $($SiblingIOEHandle$APP::values())->length));
	{
		try {
			SiblingIOEHandle$1::$SwitchMap$SiblingIOEHandle$APP->set($SiblingIOEHandle$APP::A->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SiblingIOEHandle$1::$SwitchMap$SiblingIOEHandle$APP->set($SiblingIOEHandle$APP::B->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SiblingIOEHandle$1::$SwitchMap$SiblingIOEHandle$APP->set($SiblingIOEHandle$APP::C->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SiblingIOEHandle$1::SiblingIOEHandle$1() {
}

$Class* SiblingIOEHandle$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$SiblingIOEHandle$APP", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SiblingIOEHandle$1, $SwitchMap$SiblingIOEHandle$APP)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SiblingIOEHandle",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SiblingIOEHandle$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"SiblingIOEHandle$1",
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
		"SiblingIOEHandle"
	};
	$loadClass(SiblingIOEHandle$1, name, initialize, &classInfo$$, SiblingIOEHandle$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SiblingIOEHandle$1);
	});
	return class$;
}

$Class* SiblingIOEHandle$1::class$ = nullptr;