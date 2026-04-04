#include <sun/nio/fs/UnixFileSystemProvider$3.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/nio/file/AccessMode.h>
#include <sun/nio/fs/UnixFileSystemProvider.h>
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

$ints* UnixFileSystemProvider$3::$SwitchMap$java$nio$file$AccessMode = nullptr;

void UnixFileSystemProvider$3::clinit$($Class* clazz) {
	$assignStatic(UnixFileSystemProvider$3::$SwitchMap$java$nio$file$AccessMode, $new($ints, $($AccessMode::values())->length));
	{
		try {
			UnixFileSystemProvider$3::$SwitchMap$java$nio$file$AccessMode->set($AccessMode::READ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			UnixFileSystemProvider$3::$SwitchMap$java$nio$file$AccessMode->set($AccessMode::WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			UnixFileSystemProvider$3::$SwitchMap$java$nio$file$AccessMode->set($AccessMode::EXECUTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

UnixFileSystemProvider$3::UnixFileSystemProvider$3() {
}

$Class* UnixFileSystemProvider$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$nio$file$AccessMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(UnixFileSystemProvider$3, $SwitchMap$java$nio$file$AccessMode)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.UnixFileSystemProvider",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.UnixFileSystemProvider$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.nio.fs.UnixFileSystemProvider$3",
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
		"sun.nio.fs.UnixFileSystemProvider"
	};
	$loadClass(UnixFileSystemProvider$3, name, initialize, &classInfo$$, UnixFileSystemProvider$3::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UnixFileSystemProvider$3);
	});
	return class$;
}

$Class* UnixFileSystemProvider$3::class$ = nullptr;

		} // fs
	} // nio
} // sun