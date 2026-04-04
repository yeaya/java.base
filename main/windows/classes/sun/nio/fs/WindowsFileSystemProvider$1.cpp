#include <sun/nio/fs/WindowsFileSystemProvider$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/nio/file/AccessMode.h>
#include <sun/nio/fs/WindowsFileSystemProvider.h>
#include <jcpp.h>

#undef EXECUTE
#undef READ
#undef WRITE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $AccessMode = ::java::nio::file::AccessMode;

namespace sun {
	namespace nio {
		namespace fs {

$ints* WindowsFileSystemProvider$1::$SwitchMap$java$nio$file$AccessMode = nullptr;

void WindowsFileSystemProvider$1::clinit$($Class* clazz) {
	$assignStatic(WindowsFileSystemProvider$1::$SwitchMap$java$nio$file$AccessMode, $new($ints, $($AccessMode::values())->length));
	{
		try {
			WindowsFileSystemProvider$1::$SwitchMap$java$nio$file$AccessMode->set($AccessMode::READ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsFileSystemProvider$1::$SwitchMap$java$nio$file$AccessMode->set($AccessMode::WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsFileSystemProvider$1::$SwitchMap$java$nio$file$AccessMode->set($AccessMode::EXECUTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

WindowsFileSystemProvider$1::WindowsFileSystemProvider$1() {
}

$Class* WindowsFileSystemProvider$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$nio$file$AccessMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsFileSystemProvider$1, $SwitchMap$java$nio$file$AccessMode)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.WindowsFileSystemProvider",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsFileSystemProvider$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.nio.fs.WindowsFileSystemProvider$1",
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
		"sun.nio.fs.WindowsFileSystemProvider"
	};
	$loadClass(WindowsFileSystemProvider$1, name, initialize, &classInfo$$, WindowsFileSystemProvider$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileSystemProvider$1);
	});
	return class$;
}

$Class* WindowsFileSystemProvider$1::class$ = nullptr;

		} // fs
	} // nio
} // sun