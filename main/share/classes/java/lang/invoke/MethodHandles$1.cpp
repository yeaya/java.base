#include <java/lang/invoke/MethodHandles$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef FLOAT
#undef DOUBLE
#undef INT
#undef LONG

using $WrapperArray = $Array<::sun::invoke::util::Wrapper>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandles$1_FieldInfo_[] = {
	{"$SwitchMap$sun$invoke$util$Wrapper", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandles$1, $SwitchMap$sun$invoke$util$Wrapper)},
	{}
};

$EnclosingMethodInfo _MethodHandles$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.MethodHandles",
	nullptr,
	nullptr
};

$InnerClassInfo _MethodHandles$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandles$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _MethodHandles$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.lang.invoke.MethodHandles$1",
	"java.lang.Object",
	nullptr,
	_MethodHandles$1_FieldInfo_,
	nullptr,
	nullptr,
	&_MethodHandles$1_EnclosingMethodInfo_,
	_MethodHandles$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandles"
};

$Object* allocate$MethodHandles$1($Class* clazz) {
	return $of($alloc(MethodHandles$1));
}

$ints* MethodHandles$1::$SwitchMap$sun$invoke$util$Wrapper = nullptr;

void clinit$MethodHandles$1($Class* class$) {
	$assignStatic(MethodHandles$1::$SwitchMap$sun$invoke$util$Wrapper, $new($ints, $($Wrapper::values())->length));
	{
		try {
			$nc(MethodHandles$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::INT->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MethodHandles$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::LONG->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MethodHandles$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::FLOAT->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MethodHandles$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::DOUBLE->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

MethodHandles$1::MethodHandles$1() {
}

$Class* MethodHandles$1::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$1, name, initialize, &_MethodHandles$1_ClassInfo_, clinit$MethodHandles$1, allocate$MethodHandles$1);
	return class$;
}

$Class* MethodHandles$1::class$ = nullptr;

		} // invoke
	} // lang
} // java