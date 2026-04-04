#include <sun/nio/fs/AbstractPoller$2.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/nio/fs/AbstractPoller$RequestType.h>
#include <sun/nio/fs/AbstractPoller.h>
#include <jcpp.h>

#undef CANCEL
#undef CLOSE
#undef REGISTER

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $AbstractPoller$RequestType = ::sun::nio::fs::AbstractPoller$RequestType;

namespace sun {
	namespace nio {
		namespace fs {

$ints* AbstractPoller$2::$SwitchMap$sun$nio$fs$AbstractPoller$RequestType = nullptr;

void AbstractPoller$2::clinit$($Class* clazz) {
	$assignStatic(AbstractPoller$2::$SwitchMap$sun$nio$fs$AbstractPoller$RequestType, $new($ints, $($AbstractPoller$RequestType::values())->length));
	{
		try {
			AbstractPoller$2::$SwitchMap$sun$nio$fs$AbstractPoller$RequestType->set($AbstractPoller$RequestType::REGISTER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AbstractPoller$2::$SwitchMap$sun$nio$fs$AbstractPoller$RequestType->set($AbstractPoller$RequestType::CANCEL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AbstractPoller$2::$SwitchMap$sun$nio$fs$AbstractPoller$RequestType->set($AbstractPoller$RequestType::CLOSE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

AbstractPoller$2::AbstractPoller$2() {
}

$Class* AbstractPoller$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$nio$fs$AbstractPoller$RequestType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractPoller$2, $SwitchMap$sun$nio$fs$AbstractPoller$RequestType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.AbstractPoller",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.AbstractPoller$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.nio.fs.AbstractPoller$2",
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
		"sun.nio.fs.AbstractPoller"
	};
	$loadClass(AbstractPoller$2, name, initialize, &classInfo$$, AbstractPoller$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractPoller$2);
	});
	return class$;
}

$Class* AbstractPoller$2::class$ = nullptr;

		} // fs
	} // nio
} // sun