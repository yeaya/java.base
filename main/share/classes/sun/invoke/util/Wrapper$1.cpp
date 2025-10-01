#include <sun/invoke/util/Wrapper$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef FLOAT
#undef BYTE
#undef CHAR
#undef DOUBLE
#undef VOID
#undef OBJECT
#undef BOOLEAN
#undef INT
#undef SHORT
#undef LONG

using $WrapperArray = $Array<::sun::invoke::util::Wrapper>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace sun {
	namespace invoke {
		namespace util {

$FieldInfo _Wrapper$1_FieldInfo_[] = {
	{"$SwitchMap$sun$invoke$util$Wrapper", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Wrapper$1, $SwitchMap$sun$invoke$util$Wrapper)},
	{}
};

$EnclosingMethodInfo _Wrapper$1_EnclosingMethodInfo_ = {
	"sun.invoke.util.Wrapper",
	nullptr,
	nullptr
};

$InnerClassInfo _Wrapper$1_InnerClassesInfo_[] = {
	{"sun.invoke.util.Wrapper$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Wrapper$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.invoke.util.Wrapper$1",
	"java.lang.Object",
	nullptr,
	_Wrapper$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Wrapper$1_EnclosingMethodInfo_,
	_Wrapper$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.invoke.util.Wrapper"
};

$Object* allocate$Wrapper$1($Class* clazz) {
	return $of($alloc(Wrapper$1));
}

$ints* Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper = nullptr;

void clinit$Wrapper$1($Class* class$) {
	$assignStatic(Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper, $new($ints, $($Wrapper::values())->length));
	{
		try {
			$nc(Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::BOOLEAN->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::INT->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::BYTE->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::CHAR->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::SHORT->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::LONG->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::FLOAT->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::DOUBLE->ordinal(), 8);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::VOID->ordinal(), 9);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::OBJECT->ordinal(), 10);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

Wrapper$1::Wrapper$1() {
}

$Class* Wrapper$1::load$($String* name, bool initialize) {
	$loadClass(Wrapper$1, name, initialize, &_Wrapper$1_ClassInfo_, clinit$Wrapper$1, allocate$Wrapper$1);
	return class$;
}

$Class* Wrapper$1::class$ = nullptr;

		} // util
	} // invoke
} // sun