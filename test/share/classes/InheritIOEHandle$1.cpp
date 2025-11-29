#include <InheritIOEHandle$1.h>

#include <InheritIOEHandle$APP.h>
#include <InheritIOEHandle.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef A
#undef B
#undef C

using $InheritIOEHandle$APP = ::InheritIOEHandle$APP;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

$FieldInfo _InheritIOEHandle$1_FieldInfo_[] = {
	{"$SwitchMap$InheritIOEHandle$APP", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(InheritIOEHandle$1, $SwitchMap$InheritIOEHandle$APP)},
	{}
};

$EnclosingMethodInfo _InheritIOEHandle$1_EnclosingMethodInfo_ = {
	"InheritIOEHandle",
	nullptr,
	nullptr
};

$InnerClassInfo _InheritIOEHandle$1_InnerClassesInfo_[] = {
	{"InheritIOEHandle$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _InheritIOEHandle$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"InheritIOEHandle$1",
	"java.lang.Object",
	nullptr,
	_InheritIOEHandle$1_FieldInfo_,
	nullptr,
	nullptr,
	&_InheritIOEHandle$1_EnclosingMethodInfo_,
	_InheritIOEHandle$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"InheritIOEHandle"
};

$Object* allocate$InheritIOEHandle$1($Class* clazz) {
	return $of($alloc(InheritIOEHandle$1));
}

$ints* InheritIOEHandle$1::$SwitchMap$InheritIOEHandle$APP = nullptr;

void clinit$InheritIOEHandle$1($Class* class$) {
	$assignStatic(InheritIOEHandle$1::$SwitchMap$InheritIOEHandle$APP, $new($ints, $($InheritIOEHandle$APP::values())->length));
	{
		try {
			$nc(InheritIOEHandle$1::$SwitchMap$InheritIOEHandle$APP)->set($InheritIOEHandle$APP::A->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InheritIOEHandle$1::$SwitchMap$InheritIOEHandle$APP)->set($InheritIOEHandle$APP::B->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(InheritIOEHandle$1::$SwitchMap$InheritIOEHandle$APP)->set($InheritIOEHandle$APP::C->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

InheritIOEHandle$1::InheritIOEHandle$1() {
}

$Class* InheritIOEHandle$1::load$($String* name, bool initialize) {
	$loadClass(InheritIOEHandle$1, name, initialize, &_InheritIOEHandle$1_ClassInfo_, clinit$InheritIOEHandle$1, allocate$InheritIOEHandle$1);
	return class$;
}

$Class* InheritIOEHandle$1::class$ = nullptr;