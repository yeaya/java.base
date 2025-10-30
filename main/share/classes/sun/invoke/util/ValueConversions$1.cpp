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

using $WrapperArray = $Array<::sun::invoke::util::Wrapper>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ValueConversions = ::sun::invoke::util::ValueConversions;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace sun {
	namespace invoke {
		namespace util {

$FieldInfo _ValueConversions$1_FieldInfo_[] = {
	{"$SwitchMap$sun$invoke$util$Wrapper", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ValueConversions$1, $SwitchMap$sun$invoke$util$Wrapper)},
	{}
};

$EnclosingMethodInfo _ValueConversions$1_EnclosingMethodInfo_ = {
	"sun.invoke.util.ValueConversions",
	nullptr,
	nullptr
};

$InnerClassInfo _ValueConversions$1_InnerClassesInfo_[] = {
	{"sun.invoke.util.ValueConversions$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ValueConversions$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.invoke.util.ValueConversions$1",
	"java.lang.Object",
	nullptr,
	_ValueConversions$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ValueConversions$1_EnclosingMethodInfo_,
	_ValueConversions$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.invoke.util.ValueConversions"
};

$Object* allocate$ValueConversions$1($Class* clazz) {
	return $of($alloc(ValueConversions$1));
}

$ints* ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper = nullptr;

void clinit$ValueConversions$1($Class* class$) {
	$assignStatic(ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper, $new($ints, $($Wrapper::values())->length));
	{
		try {
			$nc(ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::OBJECT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::VOID->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::INT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::LONG->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::FLOAT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ValueConversions$1::$SwitchMap$sun$invoke$util$Wrapper)->set($Wrapper::DOUBLE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ValueConversions$1::ValueConversions$1() {
}

$Class* ValueConversions$1::load$($String* name, bool initialize) {
	$loadClass(ValueConversions$1, name, initialize, &_ValueConversions$1_ClassInfo_, clinit$ValueConversions$1, allocate$ValueConversions$1);
	return class$;
}

$Class* ValueConversions$1::class$ = nullptr;

		} // util
	} // invoke
} // sun