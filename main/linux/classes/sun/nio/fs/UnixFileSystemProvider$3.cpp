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

$FieldInfo _UnixFileSystemProvider$3_FieldInfo_[] = {
	{"$SwitchMap$java$nio$file$AccessMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(UnixFileSystemProvider$3, $SwitchMap$java$nio$file$AccessMode)},
	{}
};

$EnclosingMethodInfo _UnixFileSystemProvider$3_EnclosingMethodInfo_ = {
	"sun.nio.fs.UnixFileSystemProvider",
	nullptr,
	nullptr
};

$InnerClassInfo _UnixFileSystemProvider$3_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileSystemProvider$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _UnixFileSystemProvider$3_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.nio.fs.UnixFileSystemProvider$3",
	"java.lang.Object",
	nullptr,
	_UnixFileSystemProvider$3_FieldInfo_,
	nullptr,
	nullptr,
	&_UnixFileSystemProvider$3_EnclosingMethodInfo_,
	_UnixFileSystemProvider$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileSystemProvider"
};

$Object* allocate$UnixFileSystemProvider$3($Class* clazz) {
	return $of($alloc(UnixFileSystemProvider$3));
}

$ints* UnixFileSystemProvider$3::$SwitchMap$java$nio$file$AccessMode = nullptr;

void clinit$UnixFileSystemProvider$3($Class* class$) {
	$assignStatic(UnixFileSystemProvider$3::$SwitchMap$java$nio$file$AccessMode, $new($ints, $($AccessMode::values())->length));
	{
		try {
			$nc(UnixFileSystemProvider$3::$SwitchMap$java$nio$file$AccessMode)->set($AccessMode::READ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(UnixFileSystemProvider$3::$SwitchMap$java$nio$file$AccessMode)->set($AccessMode::WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(UnixFileSystemProvider$3::$SwitchMap$java$nio$file$AccessMode)->set($AccessMode::EXECUTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

UnixFileSystemProvider$3::UnixFileSystemProvider$3() {
}

$Class* UnixFileSystemProvider$3::load$($String* name, bool initialize) {
	$loadClass(UnixFileSystemProvider$3, name, initialize, &_UnixFileSystemProvider$3_ClassInfo_, clinit$UnixFileSystemProvider$3, allocate$UnixFileSystemProvider$3);
	return class$;
}

$Class* UnixFileSystemProvider$3::class$ = nullptr;

		} // fs
	} // nio
} // sun