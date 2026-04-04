#include <sun/invoke/util/Wrapper$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG
#undef OBJECT
#undef SHORT
#undef VOID

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace sun {
	namespace invoke {
		namespace util {

$ints* Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper = nullptr;

void Wrapper$1::clinit$($Class* clazz) {
	$assignStatic(Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper, $new($ints, $($Wrapper::values())->length));
	{
		try {
			Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::BOOLEAN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::INT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::BYTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::CHAR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::SHORT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::LONG->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::FLOAT->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::DOUBLE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::VOID->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::OBJECT->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Wrapper$1::Wrapper$1() {
}

$Class* Wrapper$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$invoke$util$Wrapper", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Wrapper$1, $SwitchMap$sun$invoke$util$Wrapper)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.invoke.util.Wrapper",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.invoke.util.Wrapper$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.invoke.util.Wrapper$1",
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
		"sun.invoke.util.Wrapper"
	};
	$loadClass(Wrapper$1, name, initialize, &classInfo$$, Wrapper$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Wrapper$1);
	});
	return class$;
}

$Class* Wrapper$1::class$ = nullptr;

		} // util
	} // invoke
} // sun