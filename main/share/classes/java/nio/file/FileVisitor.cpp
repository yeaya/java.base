#include <java/nio/file/FileVisitor.h>

#include <java/io/IOException.h>
#include <java/nio/file/FileVisitResult.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _FileVisitor_MethodInfo_[] = {
	{"postVisitDirectory", "(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", "(TT;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"preVisitDirectory", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", "(TT;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"visitFile", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", "(TT;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"visitFileFailed", "(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", "(TT;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _FileVisitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.FileVisitor",
	nullptr,
	nullptr,
	nullptr,
	_FileVisitor_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$FileVisitor($Class* clazz) {
	return $of($alloc(FileVisitor));
}

$Class* FileVisitor::load$($String* name, bool initialize) {
	$loadClass(FileVisitor, name, initialize, &_FileVisitor_ClassInfo_, allocate$FileVisitor);
	return class$;
}

$Class* FileVisitor::class$ = nullptr;

		} // file
	} // nio
} // java