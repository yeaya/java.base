#include <java/lang/invoke/VarHandles$2.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandles.h>
#include <jcpp.h>

#undef COMPARE_AND_EXCHANGE
#undef COMPARE_AND_SET
#undef GET
#undef GET_AND_UPDATE
#undef SET

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _VarHandles$2_FieldInfo_[] = {
	{"$SwitchMap$java$lang$invoke$VarHandle$AccessType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(VarHandles$2, $SwitchMap$java$lang$invoke$VarHandle$AccessType)},
	{}
};

$EnclosingMethodInfo _VarHandles$2_EnclosingMethodInfo_ = {
	"java.lang.invoke.VarHandles",
	nullptr,
	nullptr
};

$InnerClassInfo _VarHandles$2_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandles$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _VarHandles$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.lang.invoke.VarHandles$2",
	"java.lang.Object",
	nullptr,
	_VarHandles$2_FieldInfo_,
	nullptr,
	nullptr,
	&_VarHandles$2_EnclosingMethodInfo_,
	_VarHandles$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandles"
};

$Object* allocate$VarHandles$2($Class* clazz) {
	return $of($alloc(VarHandles$2));
}

$ints* VarHandles$2::$SwitchMap$java$lang$invoke$VarHandle$AccessType = nullptr;

void clinit$VarHandles$2($Class* class$) {
	$assignStatic(VarHandles$2::$SwitchMap$java$lang$invoke$VarHandle$AccessType, $new($ints, $($VarHandle$AccessType::values())->length));
	{
		try {
			$nc(VarHandles$2::$SwitchMap$java$lang$invoke$VarHandle$AccessType)->set($VarHandle$AccessType::GET->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(VarHandles$2::$SwitchMap$java$lang$invoke$VarHandle$AccessType)->set($VarHandle$AccessType::GET_AND_UPDATE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(VarHandles$2::$SwitchMap$java$lang$invoke$VarHandle$AccessType)->set($VarHandle$AccessType::SET->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(VarHandles$2::$SwitchMap$java$lang$invoke$VarHandle$AccessType)->set($VarHandle$AccessType::COMPARE_AND_SET->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(VarHandles$2::$SwitchMap$java$lang$invoke$VarHandle$AccessType)->set($VarHandle$AccessType::COMPARE_AND_EXCHANGE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

VarHandles$2::VarHandles$2() {
}

$Class* VarHandles$2::load$($String* name, bool initialize) {
	$loadClass(VarHandles$2, name, initialize, &_VarHandles$2_ClassInfo_, clinit$VarHandles$2, allocate$VarHandles$2);
	return class$;
}

$Class* VarHandles$2::class$ = nullptr;

		} // invoke
	} // lang
} // java