#include <java/lang/invoke/MethodHandleImpl$2.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/lang/invoke/MethodHandleImpl$ArrayAccess.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <jcpp.h>

#undef GET
#undef LENGTH
#undef SET

using $MethodHandleImpl$ArrayAccessArray = $Array<::java::lang::invoke::MethodHandleImpl$ArrayAccess>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodHandleImpl$ArrayAccess = ::java::lang::invoke::MethodHandleImpl$ArrayAccess;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandleImpl$2_FieldInfo_[] = {
	{"$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandleImpl$2, $SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess)},
	{}
};

$EnclosingMethodInfo _MethodHandleImpl$2_EnclosingMethodInfo_ = {
	"java.lang.invoke.MethodHandleImpl",
	nullptr,
	nullptr
};

$InnerClassInfo _MethodHandleImpl$2_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _MethodHandleImpl$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.lang.invoke.MethodHandleImpl$2",
	"java.lang.Object",
	nullptr,
	_MethodHandleImpl$2_FieldInfo_,
	nullptr,
	nullptr,
	&_MethodHandleImpl$2_EnclosingMethodInfo_,
	_MethodHandleImpl$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$2($Class* clazz) {
	return $of($alloc(MethodHandleImpl$2));
}

$ints* MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess = nullptr;

void clinit$MethodHandleImpl$2($Class* class$) {
	$assignStatic(MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess, $new($ints, $($MethodHandleImpl$ArrayAccess::values())->length));
	{
		try {
			$nc(MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess)->set($MethodHandleImpl$ArrayAccess::GET->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess)->set($MethodHandleImpl$ArrayAccess::SET->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess)->set($MethodHandleImpl$ArrayAccess::LENGTH->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MethodHandleImpl$2::MethodHandleImpl$2() {
}

$Class* MethodHandleImpl$2::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$2, name, initialize, &_MethodHandleImpl$2_ClassInfo_, clinit$MethodHandleImpl$2, allocate$MethodHandleImpl$2);
	return class$;
}

$Class* MethodHandleImpl$2::class$ = nullptr;

		} // invoke
	} // lang
} // java