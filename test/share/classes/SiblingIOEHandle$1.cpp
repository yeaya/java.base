#include <SiblingIOEHandle$1.h>

#include <SiblingIOEHandle$APP.h>
#include <SiblingIOEHandle.h>
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
#include <jcpp.h>

#undef A
#undef B
#undef C

using $SiblingIOEHandle = ::SiblingIOEHandle;
using $SiblingIOEHandle$APP = ::SiblingIOEHandle$APP;
using $SiblingIOEHandle$APPArray = $Array<SiblingIOEHandle$APP>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

$FieldInfo _SiblingIOEHandle$1_FieldInfo_[] = {
	{"$SwitchMap$SiblingIOEHandle$APP", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SiblingIOEHandle$1, $SwitchMap$SiblingIOEHandle$APP)},
	{}
};

$EnclosingMethodInfo _SiblingIOEHandle$1_EnclosingMethodInfo_ = {
	"SiblingIOEHandle",
	nullptr,
	nullptr
};

$InnerClassInfo _SiblingIOEHandle$1_InnerClassesInfo_[] = {
	{"SiblingIOEHandle$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _SiblingIOEHandle$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"SiblingIOEHandle$1",
	"java.lang.Object",
	nullptr,
	_SiblingIOEHandle$1_FieldInfo_,
	nullptr,
	nullptr,
	&_SiblingIOEHandle$1_EnclosingMethodInfo_,
	_SiblingIOEHandle$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SiblingIOEHandle"
};

$Object* allocate$SiblingIOEHandle$1($Class* clazz) {
	return $of($alloc(SiblingIOEHandle$1));
}

$ints* SiblingIOEHandle$1::$SwitchMap$SiblingIOEHandle$APP = nullptr;

void clinit$SiblingIOEHandle$1($Class* class$) {
	$assignStatic(SiblingIOEHandle$1::$SwitchMap$SiblingIOEHandle$APP, $new($ints, $($SiblingIOEHandle$APP::values())->length));
	{
		try {
			$nc(SiblingIOEHandle$1::$SwitchMap$SiblingIOEHandle$APP)->set($SiblingIOEHandle$APP::A->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SiblingIOEHandle$1::$SwitchMap$SiblingIOEHandle$APP)->set($SiblingIOEHandle$APP::B->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SiblingIOEHandle$1::$SwitchMap$SiblingIOEHandle$APP)->set($SiblingIOEHandle$APP::C->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

SiblingIOEHandle$1::SiblingIOEHandle$1() {
}

$Class* SiblingIOEHandle$1::load$($String* name, bool initialize) {
	$loadClass(SiblingIOEHandle$1, name, initialize, &_SiblingIOEHandle$1_ClassInfo_, clinit$SiblingIOEHandle$1, allocate$SiblingIOEHandle$1);
	return class$;
}

$Class* SiblingIOEHandle$1::class$ = nullptr;