#include <MultiThreadStackWalk$1.h>
#include <MultiThreadStackWalk$Call$WalkType.h>
#include <MultiThreadStackWalk$Call.h>
#include <MultiThreadStackWalk.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef WALKSTACK

using $MultiThreadStackWalk$Call$WalkType = ::MultiThreadStackWalk$Call$WalkType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

$ints* MultiThreadStackWalk$1::$SwitchMap$MultiThreadStackWalk$Call$WalkType = nullptr;

void MultiThreadStackWalk$1::clinit$($Class* clazz) {
	$assignStatic(MultiThreadStackWalk$1::$SwitchMap$MultiThreadStackWalk$Call$WalkType, $new($ints, $($MultiThreadStackWalk$Call$WalkType::values())->length));
	{
		try {
			MultiThreadStackWalk$1::$SwitchMap$MultiThreadStackWalk$Call$WalkType->set($MultiThreadStackWalk$Call$WalkType::WALKSTACK->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MultiThreadStackWalk$1::MultiThreadStackWalk$1() {
}

$Class* MultiThreadStackWalk$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$MultiThreadStackWalk$Call$WalkType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MultiThreadStackWalk$1, $SwitchMap$MultiThreadStackWalk$Call$WalkType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"MultiThreadStackWalk",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MultiThreadStackWalk$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"MultiThreadStackWalk$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"MultiThreadStackWalk"
	};
	$loadClass(MultiThreadStackWalk$1, name, initialize, &classInfo$$, MultiThreadStackWalk$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MultiThreadStackWalk$1);
	});
	return class$;
}

$Class* MultiThreadStackWalk$1::class$ = nullptr;