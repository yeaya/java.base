#include <sun/nio/fs/LinuxFileSystem$SupportedFileFileAttributeViewsHolder.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <sun/nio/fs/LinuxFileSystem.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;

namespace sun {
	namespace nio {
		namespace fs {

$Set* LinuxFileSystem$SupportedFileFileAttributeViewsHolder::supportedFileAttributeViews$ = nullptr;

void LinuxFileSystem$SupportedFileFileAttributeViewsHolder::init$() {
}

$Set* LinuxFileSystem$SupportedFileFileAttributeViewsHolder::supportedFileAttributeViews() {
	$init(LinuxFileSystem$SupportedFileFileAttributeViewsHolder);
	$useLocalObjectStack();
	$var($Set, result, $new($HashSet));
	result->addAll($($UnixFileSystem::standardFileAttributeViews()));
	result->add("dos"_s);
	result->add("user"_s);
	return $Collections::unmodifiableSet(result);
}

void LinuxFileSystem$SupportedFileFileAttributeViewsHolder::clinit$($Class* clazz) {
	$assignStatic(LinuxFileSystem$SupportedFileFileAttributeViewsHolder::supportedFileAttributeViews$, LinuxFileSystem$SupportedFileFileAttributeViewsHolder::supportedFileAttributeViews());
}

LinuxFileSystem$SupportedFileFileAttributeViewsHolder::LinuxFileSystem$SupportedFileFileAttributeViewsHolder() {
}

$Class* LinuxFileSystem$SupportedFileFileAttributeViewsHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"supportedFileAttributeViews", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $STATIC | $FINAL, $staticField(LinuxFileSystem$SupportedFileFileAttributeViewsHolder, supportedFileAttributeViews$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(LinuxFileSystem$SupportedFileFileAttributeViewsHolder, init$, void)},
		{"supportedFileAttributeViews", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticMethod(LinuxFileSystem$SupportedFileFileAttributeViewsHolder, supportedFileAttributeViews, $Set*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.LinuxFileSystem$SupportedFileFileAttributeViewsHolder", "sun.nio.fs.LinuxFileSystem", "SupportedFileFileAttributeViewsHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.LinuxFileSystem$SupportedFileFileAttributeViewsHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.LinuxFileSystem"
	};
	$loadClass(LinuxFileSystem$SupportedFileFileAttributeViewsHolder, name, initialize, &classInfo$$, LinuxFileSystem$SupportedFileFileAttributeViewsHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LinuxFileSystem$SupportedFileFileAttributeViewsHolder);
	});
	return class$;
}

$Class* LinuxFileSystem$SupportedFileFileAttributeViewsHolder::class$ = nullptr;

		} // fs
	} // nio
} // sun