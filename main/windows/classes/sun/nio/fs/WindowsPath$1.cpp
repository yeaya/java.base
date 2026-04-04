#include <sun/nio/fs/WindowsPath$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/nio/fs/WindowsPath.h>
#include <sun/nio/fs/WindowsPathType.h>
#include <jcpp.h>

#undef DIRECTORY_RELATIVE
#undef DRIVE_RELATIVE
#undef RELATIVE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $WindowsPathType = ::sun::nio::fs::WindowsPathType;

namespace sun {
	namespace nio {
		namespace fs {

$ints* WindowsPath$1::$SwitchMap$sun$nio$fs$WindowsPathType = nullptr;

void WindowsPath$1::clinit$($Class* clazz) {
	$assignStatic(WindowsPath$1::$SwitchMap$sun$nio$fs$WindowsPathType, $new($ints, $($WindowsPathType::values())->length));
	{
		try {
			WindowsPath$1::$SwitchMap$sun$nio$fs$WindowsPathType->set($WindowsPathType::RELATIVE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsPath$1::$SwitchMap$sun$nio$fs$WindowsPathType->set($WindowsPathType::DIRECTORY_RELATIVE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsPath$1::$SwitchMap$sun$nio$fs$WindowsPathType->set($WindowsPathType::DRIVE_RELATIVE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

WindowsPath$1::WindowsPath$1() {
}

$Class* WindowsPath$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$nio$fs$WindowsPathType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsPath$1, $SwitchMap$sun$nio$fs$WindowsPathType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.WindowsPath",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsPath$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.nio.fs.WindowsPath$1",
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
		"sun.nio.fs.WindowsPath"
	};
	$loadClass(WindowsPath$1, name, initialize, &classInfo$$, WindowsPath$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsPath$1);
	});
	return class$;
}

$Class* WindowsPath$1::class$ = nullptr;

		} // fs
	} // nio
} // sun