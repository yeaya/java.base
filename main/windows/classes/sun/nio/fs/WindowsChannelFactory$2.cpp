#include <sun/nio/fs/WindowsChannelFactory$2.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/nio/file/StandardOpenOption.h>
#include <sun/nio/fs/WindowsChannelFactory.h>
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

$ints* WindowsChannelFactory$2::$SwitchMap$java$nio$file$StandardOpenOption = nullptr;

void WindowsChannelFactory$2::clinit$($Class* clazz) {
	$assignStatic(WindowsChannelFactory$2::$SwitchMap$java$nio$file$StandardOpenOption, $new($ints, $($StandardOpenOption::values())->length));
	{
		try {
			WindowsChannelFactory$2::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::READ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsChannelFactory$2::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsChannelFactory$2::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::APPEND->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsChannelFactory$2::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::TRUNCATE_EXISTING->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsChannelFactory$2::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::CREATE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsChannelFactory$2::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::CREATE_NEW->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsChannelFactory$2::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::DELETE_ON_CLOSE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsChannelFactory$2::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::SPARSE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsChannelFactory$2::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::SYNC->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsChannelFactory$2::$SwitchMap$java$nio$file$StandardOpenOption->set($StandardOpenOption::DSYNC->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

WindowsChannelFactory$2::WindowsChannelFactory$2() {
}

$Class* WindowsChannelFactory$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$nio$file$StandardOpenOption", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsChannelFactory$2, $SwitchMap$java$nio$file$StandardOpenOption)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.WindowsChannelFactory",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsChannelFactory$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.nio.fs.WindowsChannelFactory$2",
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
		"sun.nio.fs.WindowsChannelFactory"
	};
	$loadClass(WindowsChannelFactory$2, name, initialize, &classInfo$$, WindowsChannelFactory$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsChannelFactory$2);
	});
	return class$;
}

$Class* WindowsChannelFactory$2::class$ = nullptr;

		} // fs
	} // nio
} // sun