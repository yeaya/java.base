#include <WalkWithSecurity$CountingVisitor.h>
#include <WalkWithSecurity.h>
#include <java/nio/file/FileVisitResult.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <jcpp.h>

#undef CONTINUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileVisitResult = ::java::nio::file::FileVisitResult;
using $Path = ::java::nio::file::Path;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;

void WalkWithSecurity$CountingVisitor::init$() {
	$SimpleFileVisitor::init$();
}

int32_t WalkWithSecurity$CountingVisitor::count() {
	return this->count$;
}

$FileVisitResult* WalkWithSecurity$CountingVisitor::preVisitDirectory($Path* dir, $BasicFileAttributes* attrs) {
	$nc($System::out)->println(dir);
	++this->count$;
	$init($FileVisitResult);
	return $FileVisitResult::CONTINUE;
}

$FileVisitResult* WalkWithSecurity$CountingVisitor::visitFile($Path* file, $BasicFileAttributes* attrs) {
	$nc($System::out)->println(file);
	++this->count$;
	$init($FileVisitResult);
	return $FileVisitResult::CONTINUE;
}

$FileVisitResult* WalkWithSecurity$CountingVisitor::visitFile(Object$* file, $BasicFileAttributes* attrs) {
	return this->visitFile($cast($Path, file), attrs);
}

$FileVisitResult* WalkWithSecurity$CountingVisitor::preVisitDirectory(Object$* dir, $BasicFileAttributes* attrs) {
	return this->preVisitDirectory($cast($Path, dir), attrs);
}

WalkWithSecurity$CountingVisitor::WalkWithSecurity$CountingVisitor() {
}

$Class* WalkWithSecurity$CountingVisitor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"count", "I", nullptr, $PRIVATE, $field(WalkWithSecurity$CountingVisitor, count$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WalkWithSecurity$CountingVisitor, init$, void)},
		{"count", "()I", nullptr, 0, $virtualMethod(WalkWithSecurity$CountingVisitor, count, int32_t)},
		{"preVisitDirectory", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC, $virtualMethod(WalkWithSecurity$CountingVisitor, preVisitDirectory, $FileVisitResult*, $Path*, $BasicFileAttributes*)},
		{"preVisitDirectory", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WalkWithSecurity$CountingVisitor, preVisitDirectory, $FileVisitResult*, Object$*, $BasicFileAttributes*), "java.io.IOException"},
		{"visitFile", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC, $virtualMethod(WalkWithSecurity$CountingVisitor, visitFile, $FileVisitResult*, $Path*, $BasicFileAttributes*)},
		{"visitFile", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WalkWithSecurity$CountingVisitor, visitFile, $FileVisitResult*, Object$*, $BasicFileAttributes*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WalkWithSecurity$CountingVisitor", "WalkWithSecurity", "CountingVisitor", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WalkWithSecurity$CountingVisitor",
		"java.nio.file.SimpleFileVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/nio/file/SimpleFileVisitor<Ljava/nio/file/Path;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"WalkWithSecurity"
	};
	$loadClass(WalkWithSecurity$CountingVisitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WalkWithSecurity$CountingVisitor);
	});
	return class$;
}

$Class* WalkWithSecurity$CountingVisitor::class$ = nullptr;