#include <java/lang/invoke/VarHandle$2.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc$Kind.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <jcpp.h>

#undef ARRAY
#undef COMPARE_AND_EXCHANGE
#undef COMPARE_AND_SET
#undef FIELD
#undef GET
#undef GET_AND_UPDATE
#undef SET
#undef STATIC_FIELD

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandle$VarHandleDesc$Kind = ::java::lang::invoke::VarHandle$VarHandleDesc$Kind;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _VarHandle$2_FieldInfo_[] = {
	{"$SwitchMap$java$lang$invoke$VarHandle$VarHandleDesc$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(VarHandle$2, $SwitchMap$java$lang$invoke$VarHandle$VarHandleDesc$Kind)},
	{"$SwitchMap$java$lang$invoke$VarHandle$AccessType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(VarHandle$2, $SwitchMap$java$lang$invoke$VarHandle$AccessType)},
	{}
};

$EnclosingMethodInfo _VarHandle$2_EnclosingMethodInfo_ = {
	"java.lang.invoke.VarHandle",
	nullptr,
	nullptr
};

$InnerClassInfo _VarHandle$2_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandle$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _VarHandle$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.lang.invoke.VarHandle$2",
	"java.lang.Object",
	nullptr,
	_VarHandle$2_FieldInfo_,
	nullptr,
	nullptr,
	&_VarHandle$2_EnclosingMethodInfo_,
	_VarHandle$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandle"
};

$Object* allocate$VarHandle$2($Class* clazz) {
	return $of($alloc(VarHandle$2));
}

$ints* VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$VarHandleDesc$Kind = nullptr;
$ints* VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$AccessType = nullptr;

void clinit$VarHandle$2($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$VarHandleDesc$Kind, $new($ints, $($VarHandle$VarHandleDesc$Kind::values())->length));
	{
		try {
			$nc(VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$VarHandleDesc$Kind)->set($VarHandle$VarHandleDesc$Kind::FIELD->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$VarHandleDesc$Kind)->set($VarHandle$VarHandleDesc$Kind::STATIC_FIELD->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$VarHandleDesc$Kind)->set($VarHandle$VarHandleDesc$Kind::ARRAY->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$AccessType, $new($ints, $($VarHandle$AccessType::values())->length));
	{
		try {
			$nc(VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$AccessType)->set($VarHandle$AccessType::GET->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$AccessType)->set($VarHandle$AccessType::SET->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$AccessType)->set($VarHandle$AccessType::COMPARE_AND_SET->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$AccessType)->set($VarHandle$AccessType::COMPARE_AND_EXCHANGE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$AccessType)->set($VarHandle$AccessType::GET_AND_UPDATE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

VarHandle$2::VarHandle$2() {
}

$Class* VarHandle$2::load$($String* name, bool initialize) {
	$loadClass(VarHandle$2, name, initialize, &_VarHandle$2_ClassInfo_, clinit$VarHandle$2, allocate$VarHandle$2);
	return class$;
}

$Class* VarHandle$2::class$ = nullptr;

		} // invoke
	} // lang
} // java