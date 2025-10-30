#include <SetTimesNanos.h>

#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/BasicFileAttributeView.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileAttributeView.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/util/Set.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef IS_WINDOWS
#undef NANOSECONDS

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $FileTimeArray = $Array<::java::nio::file::attribute::FileTime>;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $FileStore = ::java::nio::file::FileStore;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $BasicFileAttributeView = ::java::nio::file::attribute::BasicFileAttributeView;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $FileAttributeView = ::java::nio::file::attribute::FileAttributeView;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $Set = ::java::util::Set;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

$FieldInfo _SetTimesNanos_FieldInfo_[] = {
	{"IS_WINDOWS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SetTimesNanos, IS_WINDOWS)},
	{}
};

$MethodInfo _SetTimesNanos_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SetTimesNanos::*)()>(&SetTimesNanos::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SetTimesNanos::main)), "java.lang.Exception"},
	{"testNanos", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Path*)>(&SetTimesNanos::testNanos)), "java.io.IOException"},
	{}
};

$ClassInfo _SetTimesNanos_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SetTimesNanos",
	"java.lang.Object",
	nullptr,
	_SetTimesNanos_FieldInfo_,
	_SetTimesNanos_MethodInfo_
};

$Object* allocate$SetTimesNanos($Class* clazz) {
	return $of($alloc(SetTimesNanos));
}

bool SetTimesNanos::IS_WINDOWS = false;

void SetTimesNanos::init$() {
}

void SetTimesNanos::main($StringArray* args) {
	$init(SetTimesNanos);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!SetTimesNanos::IS_WINDOWS) {
		$Class* unixNativeDispatcherClass = $Class::forName("sun.nio.fs.UnixNativeDispatcher"_s);
		$var($Method, futimensSupported, $nc(unixNativeDispatcherClass)->getDeclaredMethod("futimensSupported"_s, $$new($ClassArray, 0)));
		$nc(futimensSupported)->setAccessible(true);
		if (!$nc(($cast($Boolean, $(futimensSupported->invoke(nullptr, $$new($ObjectArray, 0))))))->booleanValue()) {
			$nc($System::err)->println("futimens() not supported; skipping test"_s);
			return;
		}
	}
	$var($Path, dirPath, $Path::of("test"_s, $$new($StringArray, 0)));
	$var($Path, dir, $Files::createDirectory(dirPath, $$new($FileAttributeArray, 0)));
	$var($FileStore, store, $Files::getFileStore(dir));
	$nc($System::out)->format("FileStore: \"%s\" on %s (%s)%n"_s, $$new($ObjectArray, {
		$of(dir),
		$($of($nc(store)->name())),
		$($of(store->type()))
	}));
	$var($Set, testedTypes, SetTimesNanos::IS_WINDOWS ? $Set::of($of("NTFS"_s)) : $Set::of("apfs"_s, "ext4"_s, "xfs"_s, "zfs"_s));
	if (!$nc(testedTypes)->contains($($nc(store)->type()))) {
		$nc($System::err)->format("%s not in %s; skipping test"_s, $$new($ObjectArray, {
			$($of($nc(store)->type())),
			$of(testedTypes)
		}));
		return;
	}
	testNanos(dir);
	$var($Path, file, $Files::createFile($($nc(dir)->resolve("test.dat"_s)), $$new($FileAttributeArray, 0)));
	testNanos(file);
}

void SetTimesNanos::testNanos($Path* path) {
	$init(SetTimesNanos);
	$useLocalCurrentObjectStackCache();
	int64_t timeNanos = (int64_t)1483261261 * (int64_t)1000000000 + (int64_t)123456789;
	$init($TimeUnit);
	$var($FileTime, pathTime, $FileTime::from(timeNanos, $TimeUnit::NANOSECONDS));
	$load($BasicFileAttributeView);
	$var($BasicFileAttributeView, view, $cast($BasicFileAttributeView, $Files::getFileAttributeView(path, $BasicFileAttributeView::class$, $$new($LinkOptionArray, 0))));
	$nc(view)->setTimes(pathTime, pathTime, nullptr);
	if (SetTimesNanos::IS_WINDOWS) {
		timeNanos = (int64_t)100 * ($div(timeNanos, (int64_t)100));
	}
	$load($BasicFileAttributes);
	$var($BasicFileAttributes, attrs, $Files::readAttributes(path, $BasicFileAttributes::class$, $$new($LinkOptionArray, 0)));
	$var($StringArray, timeNames, $new($StringArray, {
		"modification"_s,
		"access"_s
	}));
	$var($FileTimeArray, times, $new($FileTimeArray, {
		$($nc(attrs)->lastModifiedTime()),
		$(attrs->lastAccessTime())
	}));
	for (int32_t i = 0; i < timeNames->length; ++i) {
		int64_t nanos = $nc(times->get(i))->to($TimeUnit::NANOSECONDS);
		if (nanos != timeNanos) {
			$throwNew($RuntimeException, $$str({"Expected "_s, timeNames->get(i), " timestamp to be \'"_s, $$str(timeNanos), "\', but was \'"_s, $$str(nanos), "\'"_s}));
		}
	}
}

void clinit$SetTimesNanos($Class* class$) {
	SetTimesNanos::IS_WINDOWS = $nc($($System::getProperty("os.name"_s)))->startsWith("Windows"_s);
}

SetTimesNanos::SetTimesNanos() {
}

$Class* SetTimesNanos::load$($String* name, bool initialize) {
	$loadClass(SetTimesNanos, name, initialize, &_SetTimesNanos_ClassInfo_, clinit$SetTimesNanos, allocate$SetTimesNanos);
	return class$;
}

$Class* SetTimesNanos::class$ = nullptr;