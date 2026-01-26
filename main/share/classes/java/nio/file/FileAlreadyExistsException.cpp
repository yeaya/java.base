#include <java/nio/file/FileAlreadyExistsException.h>

#include <java/nio/file/FileSystemException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemException = ::java::nio::file::FileSystemException;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _FileAlreadyExistsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FileAlreadyExistsException, serialVersionUID)},
	{}
};

$MethodInfo _FileAlreadyExistsException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileAlreadyExistsException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileAlreadyExistsException, init$, void, $String*, $String*, $String*)},
	{}
};

$ClassInfo _FileAlreadyExistsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.FileAlreadyExistsException",
	"java.nio.file.FileSystemException",
	nullptr,
	_FileAlreadyExistsException_FieldInfo_,
	_FileAlreadyExistsException_MethodInfo_
};

$Object* allocate$FileAlreadyExistsException($Class* clazz) {
	return $of($alloc(FileAlreadyExistsException));
}

void FileAlreadyExistsException::init$($String* file) {
	$FileSystemException::init$(file);
}

void FileAlreadyExistsException::init$($String* file, $String* other, $String* reason) {
	$FileSystemException::init$(file, other, reason);
}

FileAlreadyExistsException::FileAlreadyExistsException() {
}

FileAlreadyExistsException::FileAlreadyExistsException(const FileAlreadyExistsException& e) : $FileSystemException(e) {
}

void FileAlreadyExistsException::throw$() {
	throw *this;
}

$Class* FileAlreadyExistsException::load$($String* name, bool initialize) {
	$loadClass(FileAlreadyExistsException, name, initialize, &_FileAlreadyExistsException_ClassInfo_, allocate$FileAlreadyExistsException);
	return class$;
}

$Class* FileAlreadyExistsException::class$ = nullptr;

		} // file
	} // nio
} // java