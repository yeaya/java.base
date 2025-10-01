#include <java/nio/file/FileSystemNotFoundException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FileSystemNotFoundException::*)()>(&FileSystemNotFoundException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FileSystemNotFoundException::*)($String*)>(&FileSystemNotFoundException::init$))},
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

FileSystemNotFoundException::FileSystemNotFoundException(const FileSystemNotFoundException& e) {
}

FileSystemNotFoundException FileSystemNotFoundException::wrapper$() {
	$pendingException(this);
	return *this;
}

void FileSystemNotFoundException::throwWrapper$() {
	$pendingException(this);
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