#include <java/nio/file/ClosedFileSystemException.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _ClosedFileSystemException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ClosedFileSystemException, serialVersionUID)},
	{}
};

$MethodInfo _ClosedFileSystemException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedFileSystemException, init$, void)},
	{}
};

$ClassInfo _ClosedFileSystemException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.ClosedFileSystemException",
	"java.lang.IllegalStateException",
	nullptr,
	_ClosedFileSystemException_FieldInfo_,
	_ClosedFileSystemException_MethodInfo_
};

$Object* allocate$ClosedFileSystemException($Class* clazz) {
	return $of($alloc(ClosedFileSystemException));
}

void ClosedFileSystemException::init$() {
	$IllegalStateException::init$();
}

ClosedFileSystemException::ClosedFileSystemException() {
}

ClosedFileSystemException::ClosedFileSystemException(const ClosedFileSystemException& e) : $IllegalStateException(e) {
}

void ClosedFileSystemException::throw$() {
	throw *this;
}

$Class* ClosedFileSystemException::load$($String* name, bool initialize) {
	$loadClass(ClosedFileSystemException, name, initialize, &_ClosedFileSystemException_ClassInfo_, allocate$ClosedFileSystemException);
	return class$;
}

$Class* ClosedFileSystemException::class$ = nullptr;

		} // file
	} // nio
} // java