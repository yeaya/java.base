#include <sun/nio/fs/WindowsPath$1.h>

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
#include <sun/nio/fs/WindowsPath.h>
#include <sun/nio/fs/WindowsPathType.h>
#include <jcpp.h>

#undef RELATIVE
#undef DRIVE_RELATIVE
#undef DIRECTORY_RELATIVE

using $WindowsPathTypeArray = $Array<::sun::nio::fs::WindowsPathType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $WindowsPath = ::sun::nio::fs::WindowsPath;
using $WindowsPathType = ::sun::nio::fs::WindowsPathType;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsPath$1_FieldInfo_[] = {
	{"$SwitchMap$sun$nio$fs$WindowsPathType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsPath$1, $SwitchMap$sun$nio$fs$WindowsPathType)},
	{}
};

$EnclosingMethodInfo _WindowsPath$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.WindowsPath",
	nullptr,
	nullptr
};

$InnerClassInfo _WindowsPath$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsPath$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _WindowsPath$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.nio.fs.WindowsPath$1",
	"java.lang.Object",
	nullptr,
	_WindowsPath$1_FieldInfo_,
	nullptr,
	nullptr,
	&_WindowsPath$1_EnclosingMethodInfo_,
	_WindowsPath$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsPath"
};

$Object* allocate$WindowsPath$1($Class* clazz) {
	return $of($alloc(WindowsPath$1));
}

$ints* WindowsPath$1::$SwitchMap$sun$nio$fs$WindowsPathType = nullptr;

void clinit$WindowsPath$1($Class* class$) {
	$assignStatic(WindowsPath$1::$SwitchMap$sun$nio$fs$WindowsPathType, $new($ints, $($WindowsPathType::values())->length));
	{
		try {
			$nc(WindowsPath$1::$SwitchMap$sun$nio$fs$WindowsPathType)->set($WindowsPathType::RELATIVE->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(WindowsPath$1::$SwitchMap$sun$nio$fs$WindowsPathType)->set($WindowsPathType::DIRECTORY_RELATIVE->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(WindowsPath$1::$SwitchMap$sun$nio$fs$WindowsPathType)->set($WindowsPathType::DRIVE_RELATIVE->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

WindowsPath$1::WindowsPath$1() {
}

$Class* WindowsPath$1::load$($String* name, bool initialize) {
	$loadClass(WindowsPath$1, name, initialize, &_WindowsPath$1_ClassInfo_, clinit$WindowsPath$1, allocate$WindowsPath$1);
	return class$;
}

$Class* WindowsPath$1::class$ = nullptr;

		} // fs
	} // nio
} // sun