#include <java/nio/file/FileSystemNotFoundException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _FileSystemNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FileSystemNotFoundException, serialVersionUID)},
	{}
};

$MethodInfo _FileSystemNotFoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FileSystemNotFoundException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileSystemNotFoundException, init$, void, $String*)},
	{}
};

$ClassInfo _FileSystemNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.FileSystemNotFoundException",
	"java.lang.RuntimeException",
	nullptr,
	_FileSystemNotFoundException_FieldInfo_,
	_FileSystemNotFoundException_MethodInfo_
};

$Object* allocate$FileSystemNotFoundException($Class* clazz) {
	return $of($alloc(FileSystemNotFoundException));
}

void FileSystemNotFoundException::init$() {
	$RuntimeException::init$();
}

void FileSystemNotFoundException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

FileSystemNotFoundException::FileSystemNotFoundException() {
}

FileSystemNotFoundException::FileSystemNotFoundException(const FileSystemNotFoundException& e) : $RuntimeException(e) {
}

void FileSystemNotFoundException::throw$() {
	throw *this;
}

$Class* FileSystemNotFoundException::load$($String* name, bool initialize) {
	$loadClass(FileSystemNotFoundException, name, initialize, &_FileSystemNotFoundException_ClassInfo_, allocate$FileSystemNotFoundException);
	return class$;
}

$Class* FileSystemNotFoundException::class$ = nullptr;

		} // file
	} // nio
} // java