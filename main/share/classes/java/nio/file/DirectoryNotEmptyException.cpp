#include <java/nio/file/DirectoryNotEmptyException.h>

#include <java/nio/file/FileSystemException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemException = ::java::nio::file::FileSystemException;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _DirectoryNotEmptyException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DirectoryNotEmptyException, serialVersionUID)},
	{}
};

$MethodInfo _DirectoryNotEmptyException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DirectoryNotEmptyException, init$, void, $String*)},
	{}
};

$ClassInfo _DirectoryNotEmptyException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.DirectoryNotEmptyException",
	"java.nio.file.FileSystemException",
	nullptr,
	_DirectoryNotEmptyException_FieldInfo_,
	_DirectoryNotEmptyException_MethodInfo_
};

$Object* allocate$DirectoryNotEmptyException($Class* clazz) {
	return $of($alloc(DirectoryNotEmptyException));
}

void DirectoryNotEmptyException::init$($String* dir) {
	$FileSystemException::init$(dir);
}

DirectoryNotEmptyException::DirectoryNotEmptyException() {
}

DirectoryNotEmptyException::DirectoryNotEmptyException(const DirectoryNotEmptyException& e) : $FileSystemException(e) {
}

void DirectoryNotEmptyException::throw$() {
	throw *this;
}

$Class* DirectoryNotEmptyException::load$($String* name, bool initialize) {
	$loadClass(DirectoryNotEmptyException, name, initialize, &_DirectoryNotEmptyException_ClassInfo_, allocate$DirectoryNotEmptyException);
	return class$;
}

$Class* DirectoryNotEmptyException::class$ = nullptr;

		} // file
	} // nio
} // java