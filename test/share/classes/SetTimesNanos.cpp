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
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $FileStore = ::java::nio::file::FileStore;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $BasicFileAttributeView = ::java::nio::file::attribute::BasicFileAttributeView;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $Set = ::java::util::Set;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

bool SetTimesNanos::IS_WINDOWS = false;

void SetTimesNanos::init$() {
}

void SetTimesNanos::main($StringArray* args) {
	$init(SetTimesNanos);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (!SetTimesNanos::IS_WINDOWS) {
		$Class* unixNativeDispatcherClass = $Class::forName("sun.nio.fs.UnixNativeDispatcher"_s);
		$var($Method, futimensSupported, unixNativeDispatcherClass->getDeclaredMethod("futimensSupported"_s, $$new($ClassArray, 0)));
		$nc(futimensSupported)->setAccessible(true);
		if (!$$sure($Boolean, futimensSupported->invoke(nullptr, $$new($ObjectArray, 0)))->booleanValue()) {
			$nc($System::err)->println("futimens() not supported; skipping test"_s);
			return;
		}
	}
	$var($Path, dirPath, $Path::of("test"_s, $$new($StringArray, 0)));
	$var($Path, dir, $Files::createDirectory(dirPath, $$new($FileAttributeArray, 0)));
	$var($FileStore, store, $Files::getFileStore(dir));
	$nc($System::out)->format("FileStore: \"%s\" on %s (%s)%n"_s, $$new($ObjectArray, {
		dir,
		$($nc(store)->name()),
		$($nc(store)->type())
	}));
	$var($Set, testedTypes, SetTimesNanos::IS_WINDOWS ? $Set::of("NTFS"_s) : $Set::of("apfs"_s, "ext4"_s, "xfs"_s, "zfs"_s));
	if (!$nc(testedTypes)->contains($(store->type()))) {
		$nc($System::err)->format("%s not in %s; skipping test"_s, $$new($ObjectArray, {
			$(store->type()),
			testedTypes
		}));
		return;
	}
	testNanos(dir);
	$var($Path, file, $Files::createFile($($nc(dir)->resolve("test.dat"_s)), $$new($FileAttributeArray, 0)));
	testNanos(file);
}

void SetTimesNanos::testNanos($Path* path) {
	$init(SetTimesNanos);
	$useLocalObjectStack();
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
		$($nc(attrs)->lastAccessTime())
	}));
	for (int32_t i = 0; i < timeNames->length; ++i) {
		int64_t nanos = $nc(times->get(i))->to($TimeUnit::NANOSECONDS);
		if (nanos != timeNanos) {
			$throwNew($RuntimeException, $$str({"Expected "_s, timeNames->get(i), " timestamp to be \'"_s, $$str(timeNanos), "\', but was \'"_s, $$str(nanos), "\'"_s}));
		}
	}
}

void SetTimesNanos::clinit$($Class* clazz) {
	SetTimesNanos::IS_WINDOWS = $$nc($System::getProperty("os.name"_s))->startsWith("Windows"_s);
}

SetTimesNanos::SetTimesNanos() {
}

$Class* SetTimesNanos::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"IS_WINDOWS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SetTimesNanos, IS_WINDOWS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SetTimesNanos, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SetTimesNanos, main, void, $StringArray*), "java.lang.Exception"},
		{"testNanos", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SetTimesNanos, testNanos, void, $Path*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SetTimesNanos",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SetTimesNanos, name, initialize, &classInfo$$, SetTimesNanos::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SetTimesNanos);
	});
	return class$;
}

$Class* SetTimesNanos::class$ = nullptr;