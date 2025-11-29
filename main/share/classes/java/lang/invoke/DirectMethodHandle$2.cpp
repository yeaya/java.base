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

$FieldInfo _DirectMethodHandle$2_FieldInfo_[] = {
	{"$SwitchMap$sun$invoke$util$Wrapper", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectMethodHandle$2, $SwitchMap$sun$invoke$util$Wrapper)},
	{}
};

$EnclosingMethodInfo _DirectMethodHandle$2_EnclosingMethodInfo_ = {
	"java.lang.invoke.DirectMethodHandle",
	nullptr,
	nullptr
};

$InnerClassInfo _DirectMethodHandle$2_InnerClassesInfo_[] = {
	{"java.lang.invoke.DirectMethodHandle$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _DirectMethodHandle$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.lang.invoke.DirectMethodHandle$2",
	"java.lang.Object",
	nullptr,
	_DirectMethodHandle$2_FieldInfo_,
	nullptr,
	nullptr,
	&_DirectMethodHandle$2_EnclosingMethodInfo_,
	_DirectMethodHandle$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.DirectMethodHandle"
};

$Object* allocate$DirectMethodHandle$2($Class* clazz) {
	return $of($alloc(DirectMethodHandle$2));
}

$ints* DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper = nullptr;

void clinit$DirectMethodHandle$2($Class* class$) {
	$assignStatic(DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper, $new($ints, $($Wrapper::values())->length));
	{
		try {
			$nc(DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::BOOLEAN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::BYTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::CHAR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::INT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::LONG->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::FLOAT->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::DOUBLE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::OBJECT->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DirectMethodHandle$2::DirectMethodHandle$2() {
}

$Class* DirectMethodHandle$2::load$($String* name, bool initialize) {
	$loadClass(DirectMethodHandle$2, name, initialize, &_DirectMethodHandle$2_ClassInfo_, clinit$DirectMethodHandle$2, allocate$DirectMethodHandle$2);
	return class$;
}

$Class* DirectMethodHandle$2::class$ = nullptr;

		} // invoke
	} // lang
} // java