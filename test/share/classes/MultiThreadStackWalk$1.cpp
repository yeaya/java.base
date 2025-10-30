#include <MultiThreadStackWalk$1.h>

#include <MultiThreadStackWalk$Call$WalkType.h>
#include <MultiThreadStackWalk$Call.h>
#include <MultiThreadStackWalk.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef WALKSTACK

using $MultiThreadStackWalk = ::MultiThreadStackWalk;
using $MultiThreadStackWalk$Call = ::MultiThreadStackWalk$Call;
using $MultiThreadStackWalk$Call$WalkType = ::MultiThreadStackWalk$Call$WalkType;
using $MultiThreadStackWalk$Call$WalkTypeArray = $Array<MultiThreadStackWalk$Call$WalkType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

$FieldInfo _MultiThreadStackWalk$1_FieldInfo_[] = {
	{"$SwitchMap$MultiThreadStackWalk$Call$WalkType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MultiThreadStackWalk$1, $SwitchMap$MultiThreadStackWalk$Call$WalkType)},
	{}
};

$EnclosingMethodInfo _MultiThreadStackWalk$1_EnclosingMethodInfo_ = {
	"MultiThreadStackWalk",
	nullptr,
	nullptr
};

$InnerClassInfo _MultiThreadStackWalk$1_InnerClassesInfo_[] = {
	{"MultiThreadStackWalk$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _MultiThreadStackWalk$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"MultiThreadStackWalk$1",
	"java.lang.Object",
	nullptr,
	_MultiThreadStackWalk$1_FieldInfo_,
	nullptr,
	nullptr,
	&_MultiThreadStackWalk$1_EnclosingMethodInfo_,
	_MultiThreadStackWalk$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MultiThreadStackWalk"
};

$Object* allocate$MultiThreadStackWalk$1($Class* clazz) {
	return $of($alloc(MultiThreadStackWalk$1));
}

$ints* MultiThreadStackWalk$1::$SwitchMap$MultiThreadStackWalk$Call$WalkType = nullptr;

void clinit$MultiThreadStackWalk$1($Class* class$) {
	$assignStatic(MultiThreadStackWalk$1::$SwitchMap$MultiThreadStackWalk$Call$WalkType, $new($ints, $($MultiThreadStackWalk$Call$WalkType::values())->length));
	{
		try {
			$nc(MultiThreadStackWalk$1::$SwitchMap$MultiThreadStackWalk$Call$WalkType)->set($MultiThreadStackWalk$Call$WalkType::WALKSTACK->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MultiThreadStackWalk$1::MultiThreadStackWalk$1() {
}

$Class* MultiThreadStackWalk$1::load$($String* name, bool initialize) {
	$loadClass(MultiThreadStackWalk$1, name, initialize, &_MultiThreadStackWalk$1_ClassInfo_, clinit$MultiThreadStackWalk$1, allocate$MultiThreadStackWalk$1);
	return class$;
}

$Class* MultiThreadStackWalk$1::class$ = nullptr;