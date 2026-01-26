#include <java/nio/file/FileVisitor.h>

#include <java/io/IOException.h>
#include <java/nio/file/FileVisitResult.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileVisitResult = ::java::nio::file::FileVisitResult;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _FileVisitor_MethodInfo_[] = {
	{"postVisitDirectory", "(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", "(TT;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", $PUBLIC | $ABSTRACT, $virtualMethod(FileVisitor, postVisitDirectory, $FileVisitResult*, Object$*, $IOException*), "java.io.IOException"},
	{"preVisitDirectory", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", "(TT;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", $PUBLIC | $ABSTRACT, $virtualMethod(FileVisitor, preVisitDirectory, $FileVisitResult*, Object$*, $BasicFileAttributes*), "java.io.IOException"},
	{"visitFile", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", "(TT;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", $PUBLIC | $ABSTRACT, $virtualMethod(FileVisitor, visitFile, $FileVisitResult*, Object$*, $BasicFileAttributes*), "java.io.IOException"},
	{"visitFileFailed", "(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", "(TT;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;", $PUBLIC | $ABSTRACT, $virtualMethod(FileVisitor, visitFileFailed, $FileVisitResult*, Object$*, $IOException*), "java.io.IOException"},
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