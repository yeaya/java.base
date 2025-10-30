#include <java/nio/file/ReadOnlyFileSystemException.h>

#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _ReadOnlyFileSystemException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ReadOnlyFileSystemException, serialVersionUID)},
	{}
};

$MethodInfo _ReadOnlyFileSystemException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReadOnlyFileSystemException::*)()>(&ReadOnlyFileSystemException::init$))},
	{}
};

$ClassInfo _ReadOnlyFileSystemException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.ReadOnlyFileSystemException",
	"java.lang.UnsupportedOperationException",
	nullptr,
	_ReadOnlyFileSystemException_FieldInfo_,
	_ReadOnlyFileSystemException_MethodInfo_
};

$Object* allocate$ReadOnlyFileSystemException($Class* clazz) {
	return $of($alloc(ReadOnlyFileSystemException));
}

void ReadOnlyFileSystemException::init$() {
	$UnsupportedOperationException::init$();
}

ReadOnlyFileSystemException::ReadOnlyFileSystemException() {
}

ReadOnlyFileSystemException::ReadOnlyFileSystemException(const ReadOnlyFileSystemException& e) : $UnsupportedOperationException(e) {
}

void ReadOnlyFileSystemException::throw$() {
	throw *this;
}

$Class* ReadOnlyFileSystemException::load$($String* name, bool initialize) {
	$loadClass(ReadOnlyFileSystemException, name, initialize, &_ReadOnlyFileSystemException_ClassInfo_, allocate$ReadOnlyFileSystemException);
	return class$;
}

$Class* ReadOnlyFileSystemException::class$ = nullptr;

		} // file
	} // nio
} // java