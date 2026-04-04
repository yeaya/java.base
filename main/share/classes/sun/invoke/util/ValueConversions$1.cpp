#include <sun/invoke/util/ValueConversions$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/invoke/util/ValueConversions.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG
#undef OBJECT
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

$ints* ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper = nullptr;

void ValueConversions$1::clinit$($Class* clazz) {
	$assignStatic(ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper, $new($ints, $($Wrapper::values())->length));
	{
		try {
			ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::OBJECT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::VOID->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::INT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::LONG->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::FLOAT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper->set($Wrapper::DOUBLE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ValueConversions$1::ValueConversions$1() {
}

$Class* ValueConversions$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$invoke$util$Wrapper", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ValueConversions$1, $SwitchMap$sun$invoke$util$Wrapper)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.invoke.util.ValueConversions",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.invoke.util.ValueConversions$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.invoke.util.ValueConversions$1",
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
		"sun.invoke.util.ValueConversions"
	};
	$loadClass(ValueConversions$1, name, initialize, &classInfo$$, ValueConversions$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ValueConversions$1);
	});
	return class$;
}

$Class* ValueConversions$1::class$ = nullptr;

		} // util
	} // invoke
} // sun