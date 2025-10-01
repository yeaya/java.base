#include <java/nio/file/NoSuchFileException.h>

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

$FieldInfo _NoSuchFileException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NoSuchFileException, serialVersionUID)},
	{}
};

$MethodInfo _NoSuchFileException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchFileException::*)($String*)>(&NoSuchFileException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchFileException::*)($String*,$String*,$String*)>(&NoSuchFileException::init$))},
	{}
};

$ClassInfo _NoSuchFileException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.NoSuchFileException",
	"java.nio.file.FileSystemException",
	nullptr,
	_NoSuchFileException_FieldInfo_,
	_NoSuchFileException_MethodInfo_
};

$Object* allocate$NoSuchFileException($Class* clazz) {
	return $of($alloc(NoSuchFileException));
}

void NoSuchFileException::init$($String* file) {
	$FileSystemException::init$(file);
}

void NoSuchFileException::init$($String* file, $String* other, $String* reason) {
	$FileSystemException::init$(file, other, reason);
}

NoSuchFileException::NoSuchFileException() {
}

NoSuchFileException::NoSuchFileException(const NoSuchFileException& e) {
}

NoSuchFileException NoSuchFileException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NoSuchFileException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NoSuchFileException::load$($String* name, bool initialize) {
	$loadClass(NoSuchFileException, name, initialize, &_NoSuchFileException_ClassInfo_, allocate$NoSuchFileException);
	return class$;
}

$Class* NoSuchFileException::class$ = nullptr;

		} // file
	} // nio
} // java