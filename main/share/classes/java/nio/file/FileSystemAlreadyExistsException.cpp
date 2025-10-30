#include <java/nio/file/FileSystemAlreadyExistsException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _FileSystemAlreadyExistsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FileSystemAlreadyExistsException, serialVersionUID)},
	{}
};

$MethodInfo _FileSystemAlreadyExistsException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FileSystemAlreadyExistsException::*)()>(&FileSystemAlreadyExistsException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FileSystemAlreadyExistsException::*)($String*)>(&FileSystemAlreadyExistsException::init$))},
	{}
};

$ClassInfo _FileSystemAlreadyExistsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.FileSystemAlreadyExistsException",
	"java.lang.RuntimeException",
	nullptr,
	_FileSystemAlreadyExistsException_FieldInfo_,
	_FileSystemAlreadyExistsException_MethodInfo_
};

$Object* allocate$FileSystemAlreadyExistsException($Class* clazz) {
	return $of($alloc(FileSystemAlreadyExistsException));
}

void FileSystemAlreadyExistsException::init$() {
	$RuntimeException::init$();
}

void FileSystemAlreadyExistsException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

FileSystemAlreadyExistsException::FileSystemAlreadyExistsException() {
}

FileSystemAlreadyExistsException::FileSystemAlreadyExistsException(const FileSystemAlreadyExistsException& e) : $RuntimeException(e) {
}

void FileSystemAlreadyExistsException::throw$() {
	throw *this;
}

$Class* FileSystemAlreadyExistsException::load$($String* name, bool initialize) {
	$loadClass(FileSystemAlreadyExistsException, name, initialize, &_FileSystemAlreadyExistsException_ClassInfo_, allocate$FileSystemAlreadyExistsException);
	return class$;
}

$Class* FileSystemAlreadyExistsException::class$ = nullptr;

		} // file
	} // nio
} // java