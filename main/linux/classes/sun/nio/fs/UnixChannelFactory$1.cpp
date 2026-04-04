#include <sun/nio/fs/UnixChannelFactory$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/nio/file/StandardOpenOption.h>
#include <sun/nio/fs/UnixChannelFactory.h>
#include <jcpp.h>

#undef APPEND
#undef CREATE
#undef CREATE_NEW
#undef DELETE_ON_CLOSE
#undef DSYNC
#undef READ
#undef SPARSE
#undef SYNC
#undef TRUNCATE_EXISTING
#undef WRITE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;

namespace sun {
	namespace nio {
		namespace fs {

$ints* UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption = nullptr;

void UnixChannelFactory$1::clinit$($Class* clazz) {
	$assignStatic(UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption, $new($ints, $($StandardOpenOption::values())->length));
	{
		try {
			UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::READ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::APPEND->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::TRUNCATE_EXISTING->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::CREATE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::CREATE_NEW->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::DELETE_ON_CLOSE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::SPARSE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::SYNC->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::DSYNC->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

UnixChannelFactory$1::UnixChannelFactory$1() {
}

$Class* UnixChannelFactory$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$nio$file$StandardOpenOption", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(UnixChannelFactory$1, $SwitchMap$java$nio$file$StandardOpenOption)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.UnixChannelFactory",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.UnixChannelFactory$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.nio.fs.UnixChannelFactory$1",
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
		"sun.nio.fs.UnixChannelFactory"
	};
	$loadClass(UnixChannelFactory$1, name, initialize, &classInfo$$, UnixChannelFactory$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UnixChannelFactory$1);
	});
	return class$;
}

$Class* UnixChannelFactory$1::class$ = nullptr;

		} // fs
	} // nio
} // sun