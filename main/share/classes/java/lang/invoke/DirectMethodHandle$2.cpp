#include <java/lang/invoke/DirectMethodHandle$2.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/invoke/DirectMethodHandle.h>
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

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

$ints* DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper = nullptr;

void DirectMethodHandle$2::clinit$($Class* clazz) {
	$assignStatic(DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper, $new($ints, $($Wrapper::values())->length));
	{
		try {
			DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::BOOLEAN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::BYTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::CHAR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::INT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::LONG->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::FLOAT->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::DOUBLE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::OBJECT->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DirectMethodHandle$2::DirectMethodHandle$2() {
}

$Class* DirectMethodHandle$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$invoke$util$Wrapper", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectMethodHandle$2, $SwitchMap$sun$invoke$util$Wrapper)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.DirectMethodHandle",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.DirectMethodHandle$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.lang.invoke.DirectMethodHandle$2",
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
		"java.lang.invoke.DirectMethodHandle"
	};
	$loadClass(DirectMethodHandle$2, name, initialize, &classInfo$$, DirectMethodHandle$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DirectMethodHandle$2);
	});
	return class$;
}

$Class* DirectMethodHandle$2::class$ = nullptr;

		} // invoke
	} // lang
} // java