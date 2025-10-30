#include <sun/nio/fs/UnixFileModeAttribute$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/nio/file/attribute/PosixFilePermission.h>
#include <sun/nio/fs/UnixFileModeAttribute.h>
#include <jcpp.h>

#undef GROUP_EXECUTE
#undef GROUP_READ
#undef GROUP_WRITE
#undef OTHERS_EXECUTE
#undef OTHERS_READ
#undef OTHERS_WRITE
#undef OWNER_EXECUTE
#undef OWNER_READ
#undef OWNER_WRITE

using $PosixFilePermissionArray = $Array<::java::nio::file::attribute::PosixFilePermission>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $PosixFilePermission = ::java::nio::file::attribute::PosixFilePermission;
using $UnixFileModeAttribute = ::sun::nio::fs::UnixFileModeAttribute;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixFileModeAttribute$1_FieldInfo_[] = {
	{"$SwitchMap$java$nio$file$attribute$PosixFilePermission", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(UnixFileModeAttribute$1, $SwitchMap$java$nio$file$attribute$PosixFilePermission)},
	{}
};

$EnclosingMethodInfo _UnixFileModeAttribute$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.UnixFileModeAttribute",
	nullptr,
	nullptr
};

$InnerClassInfo _UnixFileModeAttribute$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileModeAttribute$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _UnixFileModeAttribute$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.nio.fs.UnixFileModeAttribute$1",
	"java.lang.Object",
	nullptr,
	_UnixFileModeAttribute$1_FieldInfo_,
	nullptr,
	nullptr,
	&_UnixFileModeAttribute$1_EnclosingMethodInfo_,
	_UnixFileModeAttribute$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileModeAttribute"
};

$Object* allocate$UnixFileModeAttribute$1($Class* clazz) {
	return $of($alloc(UnixFileModeAttribute$1));
}

$ints* UnixFileModeAttribute$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission = nullptr;

void clinit$UnixFileModeAttribute$1($Class* class$) {
	$assignStatic(UnixFileModeAttribute$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission, $new($ints, $($PosixFilePermission::values())->length));
	{
		try {
			$nc(UnixFileModeAttribute$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::OWNER_READ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(UnixFileModeAttribute$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::OWNER_WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(UnixFileModeAttribute$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::OWNER_EXECUTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(UnixFileModeAttribute$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::GROUP_READ->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(UnixFileModeAttribute$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::GROUP_WRITE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(UnixFileModeAttribute$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::GROUP_EXECUTE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(UnixFileModeAttribute$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::OTHERS_READ->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(UnixFileModeAttribute$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::OTHERS_WRITE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(UnixFileModeAttribute$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::OTHERS_EXECUTE->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

UnixFileModeAttribute$1::UnixFileModeAttribute$1() {
}

$Class* UnixFileModeAttribute$1::load$($String* name, bool initialize) {
	$loadClass(UnixFileModeAttribute$1, name, initialize, &_UnixFileModeAttribute$1_ClassInfo_, clinit$UnixFileModeAttribute$1, allocate$UnixFileModeAttribute$1);
	return class$;
}

$Class* UnixFileModeAttribute$1::class$ = nullptr;

		} // fs
	} // nio
} // sun