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

$ints* FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit = nullptr;

void FileTime$1::clinit$($Class* clazz) {
	$assignStatic(FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit, $new($ints, $($TimeUnit::values())->length));
	{
		try {
			FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit->set($TimeUnit::DAYS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit->set($TimeUnit::HOURS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit->set($TimeUnit::MINUTES->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit->set($TimeUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit->set($TimeUnit::MILLISECONDS->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit->set($TimeUnit::MICROSECONDS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit->set($TimeUnit::NANOSECONDS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

FileTime$1::FileTime$1() {
}

$Class* FileTime$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$util$concurrent$TimeUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FileTime$1, $SwitchMap$java$util$concurrent$TimeUnit)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.file.attribute.FileTime",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.attribute.FileTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.nio.file.attribute.FileTime$1",
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
		"java.nio.file.attribute.FileTime"
	};
	$loadClass(FileTime$1, name, initialize, &classInfo$$, FileTime$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FileTime$1);
	});
	return class$;
}

$Class* FileTime$1::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java