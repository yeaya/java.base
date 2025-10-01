#include <sun/nio/fs/UnixChannelFactory$1.h>

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
#include <java/nio/file/StandardOpenOption.h>
#include <sun/nio/fs/UnixChannelFactory.h>
#include <jcpp.h>

#undef READ
#undef TRUNCATE_EXISTING
#undef CREATE
#undef CREATE_NEW
#undef SPARSE
#undef DELETE_ON_CLOSE
#undef DSYNC
#undef SYNC
#undef APPEND
#undef WRITE

using $StandardOpenOptionArray = $Array<::java::nio::file::StandardOpenOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $UnixChannelFactory = ::sun::nio::fs::UnixChannelFactory;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixChannelFactory$1_FieldInfo_[] = {
	{"$SwitchMap$java$nio$file$StandardOpenOption", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(UnixChannelFactory$1, $SwitchMap$java$nio$file$StandardOpenOption)},
	{}
};

$EnclosingMethodInfo _UnixChannelFactory$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.UnixChannelFactory",
	nullptr,
	nullptr
};

$InnerClassInfo _UnixChannelFactory$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixChannelFactory$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _UnixChannelFactory$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.nio.fs.UnixChannelFactory$1",
	"java.lang.Object",
	nullptr,
	_UnixChannelFactory$1_FieldInfo_,
	nullptr,
	nullptr,
	&_UnixChannelFactory$1_EnclosingMethodInfo_,
	_UnixChannelFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixChannelFactory"
};

$Object* allocate$UnixChannelFactory$1($Class* clazz) {
	return $of($alloc(UnixChannelFactory$1));
}

$ints* UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption = nullptr;

void clinit$UnixChannelFactory$1($Class* class$) {
	$assignStatic(UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption, $new($ints, $($StandardOpenOption::values())->length));
	{
		try {
			$nc(UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption)->set($StandardOpenOption::READ->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption)->set($StandardOpenOption::WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption)->set($StandardOpenOption::APPEND->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption)->set($StandardOpenOption::TRUNCATE_EXISTING->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption)->set($StandardOpenOption::CREATE->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption)->set($StandardOpenOption::CREATE_NEW->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption)->set($StandardOpenOption::DELETE_ON_CLOSE->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption)->set($StandardOpenOption::SPARSE->ordinal(), 8);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption)->set($StandardOpenOption::SYNC->ordinal(), 9);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption)->set($StandardOpenOption::DSYNC->ordinal(), 10);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

UnixChannelFactory$1::UnixChannelFactory$1() {
}

$Class* UnixChannelFactory$1::load$($String* name, bool initialize) {
	$loadClass(UnixChannelFactory$1, name, initialize, &_UnixChannelFactory$1_ClassInfo_, clinit$UnixChannelFactory$1, allocate$UnixChannelFactory$1);
	return class$;
}

$Class* UnixChannelFactory$1::class$ = nullptr;

		} // fs
	} // nio
} // sun