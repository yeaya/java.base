#include <java/nio/file/SimpleFileVisitor.h>

#include <java/io/IOException.h>
#include <java/nio/file/FileVisitResult.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef CONTINUE

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileVisitResult = ::java::nio::file::FileVisitResult;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $Objects = ::java::util::Objects;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _SimpleFileVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SimpleFileVisitor::*)()>(&SimpleFileVisitor::init$))},
	{"postVisitDirectory", "(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", "(TT;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", $PUBLIC, nullptr, "java.io.IOException"},
	{"preVisitDirectory", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", "(TT;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", $PUBLIC, nullptr, "java.io.IOException"},
	{"visitFile", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", "(TT;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", $PUBLIC, nullptr, "java.io.IOException"},
	{"visitFileFailed", "(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", "(TT;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SimpleFileVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.SimpleFileVisitor",
	"java.lang.Object",
	"java.nio.file.FileVisitor",
	nullptr,
	_SimpleFileVisitor_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/nio/file/FileVisitor<TT;>;"
};

$Object* allocate$SimpleFileVisitor($Class* clazz) {
	return $of($alloc(SimpleFileVisitor));
}

void SimpleFileVisitor::init$() {
}

$FileVisitResult* SimpleFileVisitor::preVisitDirectory(Object$* dir, $BasicFileAttributes* attrs) {
	$Objects::requireNonNull(dir);
	$Objects::requireNonNull(attrs);
	$init($FileVisitResult);
	return $FileVisitResult::CONTINUE;
}

$FileVisitResult* SimpleFileVisitor::visitFile(Object$* file, $BasicFileAttributes* attrs) {
	$Objects::requireNonNull(file);
	$Objects::requireNonNull(attrs);
	$init($FileVisitResult);
	return $FileVisitResult::CONTINUE;
}

$FileVisitResult* SimpleFileVisitor::visitFileFailed(Object$* file, $IOException* exc) {
	$Objects::requireNonNull(file);
	$throw(exc);
	$shouldNotReachHere();
}

$FileVisitResult* SimpleFileVisitor::postVisitDirectory(Object$* dir, $IOException* exc) {
	$Objects::requireNonNull(dir);
	if (exc != nullptr) {
		$throw(exc);
	}
	$init($FileVisitResult);
	return $FileVisitResult::CONTINUE;
}

SimpleFileVisitor::SimpleFileVisitor() {
}

$Class* SimpleFileVisitor::load$($String* name, bool initialize) {
	$loadClass(SimpleFileVisitor, name, initialize, &_SimpleFileVisitor_ClassInfo_, allocate$SimpleFileVisitor);
	return class$;
}

$Class* SimpleFileVisitor::class$ = nullptr;

		} // file
	} // nio
} // java