#include <WalkWithSecurity$CountingVisitor.h>

#include <WalkWithSecurity.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileVisitResult.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <jcpp.h>

#undef CONTINUE

using $WalkWithSecurity = ::WalkWithSecurity;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileVisitResult = ::java::nio::file::FileVisitResult;
using $Path = ::java::nio::file::Path;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;

$FieldInfo _WalkWithSecurity$CountingVisitor_FieldInfo_[] = {
	{"count", "I", nullptr, $PRIVATE, $field(WalkWithSecurity$CountingVisitor, count$)},
	{}
};

$MethodInfo _WalkWithSecurity$CountingVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WalkWithSecurity$CountingVisitor::*)()>(&WalkWithSecurity$CountingVisitor::init$))},
	{"count", "()I", nullptr, 0},
	{"preVisitDirectory", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC},
	{"preVisitDirectory", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"visitFile", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC},
	{"visitFile", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _WalkWithSecurity$CountingVisitor_InnerClassesInfo_[] = {
	{"WalkWithSecurity$CountingVisitor", "WalkWithSecurity", "CountingVisitor", $STATIC},
	{}
};

$ClassInfo _WalkWithSecurity$CountingVisitor_ClassInfo_ = {
	$ACC_SUPER,
	"WalkWithSecurity$CountingVisitor",
	"java.nio.file.SimpleFileVisitor",
	nullptr,
	_WalkWithSecurity$CountingVisitor_FieldInfo_,
	_WalkWithSecurity$CountingVisitor_MethodInfo_,
	"Ljava/nio/file/SimpleFileVisitor<Ljava/nio/file/Path;>;",
	nullptr,
	_WalkWithSecurity$CountingVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WalkWithSecurity"
};

$Object* allocate$WalkWithSecurity$CountingVisitor($Class* clazz) {
	return $of($alloc(WalkWithSecurity$CountingVisitor));
}

void WalkWithSecurity$CountingVisitor::init$() {
	$SimpleFileVisitor::init$();
}

int32_t WalkWithSecurity$CountingVisitor::count() {
	return this->count$;
}

$FileVisitResult* WalkWithSecurity$CountingVisitor::preVisitDirectory($Path* dir, $BasicFileAttributes* attrs) {
	$init($System);
	$nc($System::out)->println($of(dir));
	++this->count$;
	$init($FileVisitResult);
	return $FileVisitResult::CONTINUE;
}

$FileVisitResult* WalkWithSecurity$CountingVisitor::visitFile($Path* file, $BasicFileAttributes* attrs) {
	$init($System);
	$nc($System::out)->println($of(file));
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
	$loadClass(WalkWithSecurity$CountingVisitor, name, initialize, &_WalkWithSecurity$CountingVisitor_ClassInfo_, allocate$WalkWithSecurity$CountingVisitor);
	return class$;
}

$Class* WalkWithSecurity$CountingVisitor::class$ = nullptr;