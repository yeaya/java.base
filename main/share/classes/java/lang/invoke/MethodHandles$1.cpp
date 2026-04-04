#include <java/lang/invoke/MethodHandles$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/invoke/MethodHandles.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

$ints* MethodHandles$1::$SwitchMap$sun$invoke$util$Wrapper = nullptr;

void MethodHandles$1::clinit$($Class* clazz) {
	$assignStatic(MethodHandles$1::$SwitchMap$sun$invoke$util$Wrapper, $new($ints, $($Wrapper::values())->length));
	{
		try {
			MethodHandles$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::INT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MethodHandles$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::LONG->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MethodHandles$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::FLOAT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MethodHandles$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::DOUBLE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MethodHandles$1::MethodHandles$1() {
}

$Class* MethodHandles$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$invoke$util$Wrapper", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandles$1, $SwitchMap$sun$invoke$util$Wrapper)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.MethodHandles",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.MethodHandles$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.lang.invoke.MethodHandles$1",
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
		"java.lang.invoke.MethodHandles"
	};
	$loadClass(MethodHandles$1, name, initialize, &classInfo$$, MethodHandles$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MethodHandles$1);
	});
	return class$;
}

$Class* MethodHandles$1::class$ = nullptr;

		} // invoke
	} // lang
} // java