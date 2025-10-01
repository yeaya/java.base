#include <java/nio/file/DirectoryNotEmptyException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DirectoryNotEmptyException::*)($String*)>(&DirectoryNotEmptyException::init$))},
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

DirectoryNotEmptyException::DirectoryNotEmptyException(const DirectoryNotEmptyException& e) {
}

DirectoryNotEmptyException DirectoryNotEmptyException::wrapper$() {
	$pendingException(this);
	return *this;
}

void DirectoryNotEmptyException::throwWrapper$() {
	$pendingException(this);
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