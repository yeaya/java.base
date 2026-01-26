#include <java/nio/file/FileSystemLoopException.h>

#include <java/nio/file/FileSystemException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemException = ::java::nio::file::FileSystemException;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _FileSystemLoopException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileSystemLoopException, serialVersionUID)},
	{}
};

$MethodInfo _FileSystemLoopException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileSystemLoopException, init$, void, $String*)},
	{}
};

$ClassInfo _FileSystemLoopException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.FileSystemLoopException",
	"java.nio.file.FileSystemException",
	nullptr,
	_FileSystemLoopException_FieldInfo_,
	_FileSystemLoopException_MethodInfo_
};

$Object* allocate$FileSystemLoopException($Class* clazz) {
	return $of($alloc(FileSystemLoopException));
}

void FileSystemLoopException::init$($String* file) {
	$FileSystemException::init$(file);
}

FileSystemLoopException::FileSystemLoopException() {
}

FileSystemLoopException::FileSystemLoopException(const FileSystemLoopException& e) : $FileSystemException(e) {
}

void FileSystemLoopException::throw$() {
	throw *this;
}

$Class* FileSystemLoopException::load$($String* name, bool initialize) {
	$loadClass(FileSystemLoopException, name, initialize, &_FileSystemLoopException_ClassInfo_, allocate$FileSystemLoopException);
	return class$;
}

$Class* FileSystemLoopException::class$ = nullptr;

		} // file
	} // nio
} // java