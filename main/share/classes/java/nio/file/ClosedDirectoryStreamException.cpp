#include <java/nio/file/ClosedDirectoryStreamException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _ClosedDirectoryStreamException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ClosedDirectoryStreamException, serialVersionUID)},
	{}
};

$MethodInfo _ClosedDirectoryStreamException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClosedDirectoryStreamException::*)()>(&ClosedDirectoryStreamException::init$))},
	{}
};

$ClassInfo _ClosedDirectoryStreamException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.ClosedDirectoryStreamException",
	"java.lang.IllegalStateException",
	nullptr,
	_ClosedDirectoryStreamException_FieldInfo_,
	_ClosedDirectoryStreamException_MethodInfo_
};

$Object* allocate$ClosedDirectoryStreamException($Class* clazz) {
	return $of($alloc(ClosedDirectoryStreamException));
}

void ClosedDirectoryStreamException::init$() {
	$IllegalStateException::init$();
}

ClosedDirectoryStreamException::ClosedDirectoryStreamException() {
}

ClosedDirectoryStreamException::ClosedDirectoryStreamException(const ClosedDirectoryStreamException& e) {
}

ClosedDirectoryStreamException ClosedDirectoryStreamException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ClosedDirectoryStreamException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ClosedDirectoryStreamException::load$($String* name, bool initialize) {
	$loadClass(ClosedDirectoryStreamException, name, initialize, &_ClosedDirectoryStreamException_ClassInfo_, allocate$ClosedDirectoryStreamException);
	return class$;
}

$Class* ClosedDirectoryStreamException::class$ = nullptr;

		} // file
	} // nio
} // java