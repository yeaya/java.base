#include <java/nio/file/attribute/FileTime$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef DAYS
#undef HOURS
#undef MICROSECONDS
#undef MILLISECONDS
#undef MINUTES
#undef NANOSECONDS
#undef SECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$FieldInfo _FileTime$1_FieldInfo_[] = {
	{"$SwitchMap$java$util$concurrent$TimeUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FileTime$1, $SwitchMap$java$util$concurrent$TimeUnit)},
	{}
};

$EnclosingMethodInfo _FileTime$1_EnclosingMethodInfo_ = {
	"java.nio.file.attribute.FileTime",
	nullptr,
	nullptr
};

$InnerClassInfo _FileTime$1_InnerClassesInfo_[] = {
	{"java.nio.file.attribute.FileTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _FileTime$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.nio.file.attribute.FileTime$1",
	"java.lang.Object",
	nullptr,
	_FileTime$1_FieldInfo_,
	nullptr,
	nullptr,
	&_FileTime$1_EnclosingMethodInfo_,
	_FileTime$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.attribute.FileTime"
};

$Object* allocate$FileTime$1($Class* clazz) {
	return $of($alloc(FileTime$1));
}

$ints* FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit = nullptr;

void clinit$FileTime$1($Class* class$) {
	$assignStatic(FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit, $new($ints, $($TimeUnit::values())->length));
	{
		try {
			$nc(FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit)->set($TimeUnit::DAYS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit)->set($TimeUnit::HOURS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit)->set($TimeUnit::MINUTES->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit)->set($TimeUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit)->set($TimeUnit::MILLISECONDS->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit)->set($TimeUnit::MICROSECONDS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit)->set($TimeUnit::NANOSECONDS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

FileTime$1::FileTime$1() {
}

$Class* FileTime$1::load$($String* name, bool initialize) {
	$loadClass(FileTime$1, name, initialize, &_FileTime$1_ClassInfo_, clinit$FileTime$1, allocate$FileTime$1);
	return class$;
}

$Class* FileTime$1::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java