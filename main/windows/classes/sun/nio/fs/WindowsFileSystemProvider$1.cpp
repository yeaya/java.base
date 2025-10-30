#include <sun/nio/fs/WindowsFileSystemProvider$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/nio/file/AccessMode.h>
#include <sun/nio/fs/WindowsFileSystemProvider.h>
#include <jcpp.h>

#undef EXECUTE
#undef READ
#undef WRITE

using $AccessModeArray = $Array<::java::nio::file::AccessMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $AccessMode = ::java::nio::file::AccessMode;
using $WindowsFileSystemProvider = ::sun::nio::fs::WindowsFileSystemProvider;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsFileSystemProvider$1_FieldInfo_[] = {
	{"$SwitchMap$java$nio$file$AccessMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsFileSystemProvider$1, $SwitchMap$java$nio$file$AccessMode)},
	{}
};

$EnclosingMethodInfo _WindowsFileSystemProvider$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.WindowsFileSystemProvider",
	nullptr,
	nullptr
};

$InnerClassInfo _WindowsFileSystemProvider$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsFileSystemProvider$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _WindowsFileSystemProvider$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.nio.fs.WindowsFileSystemProvider$1",
	"java.lang.Object",
	nullptr,
	_WindowsFileSystemProvider$1_FieldInfo_,
	nullptr,
	nullptr,
	&_WindowsFileSystemProvider$1_EnclosingMethodInfo_,
	_WindowsFileSystemProvider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsFileSystemProvider"
};

$Object* allocate$WindowsFileSystemProvider$1($Class* clazz) {
	return $of($alloc(WindowsFileSystemProvider$1));
}

$ints* WindowsFileSystemProvider$1::$SwitchMap$java$nio$file$AccessMode = nullptr;

void clinit$WindowsFileSystemProvider$1($Class* class$) {
	$assignStatic(WindowsFileSystemProvider$1::$SwitchMap$java$nio$file$AccessMode, $new($ints, $($AccessMode::values())->length));
	{
		try {
			$nc(WindowsFileSystemProvider$1::$SwitchMap$java$nio$file$AccessMode)->set($AccessMode::READ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(WindowsFileSystemProvider$1::$SwitchMap$java$nio$file$AccessMode)->set($AccessMode::WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(WindowsFileSystemProvider$1::$SwitchMap$java$nio$file$AccessMode)->set($AccessMode::EXECUTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

WindowsFileSystemProvider$1::WindowsFileSystemProvider$1() {
}

$Class* WindowsFileSystemProvider$1::load$($String* name, bool initialize) {
	$loadClass(WindowsFileSystemProvider$1, name, initialize, &_WindowsFileSystemProvider$1_ClassInfo_, clinit$WindowsFileSystemProvider$1, allocate$WindowsFileSystemProvider$1);
	return class$;
}

$Class* WindowsFileSystemProvider$1::class$ = nullptr;

		} // fs
	} // nio
} // sun