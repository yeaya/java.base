#include <java/nio/file/ClosedWatchServiceException.h>

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

$FieldInfo _ClosedWatchServiceException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ClosedWatchServiceException, serialVersionUID)},
	{}
};

$MethodInfo _ClosedWatchServiceException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClosedWatchServiceException::*)()>(&ClosedWatchServiceException::init$))},
	{}
};

$ClassInfo _ClosedWatchServiceException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.ClosedWatchServiceException",
	"java.lang.IllegalStateException",
	nullptr,
	_ClosedWatchServiceException_FieldInfo_,
	_ClosedWatchServiceException_MethodInfo_
};

$Object* allocate$ClosedWatchServiceException($Class* clazz) {
	return $of($alloc(ClosedWatchServiceException));
}

void ClosedWatchServiceException::init$() {
	$IllegalStateException::init$();
}

ClosedWatchServiceException::ClosedWatchServiceException() {
}

ClosedWatchServiceException::ClosedWatchServiceException(const ClosedWatchServiceException& e) {
}

ClosedWatchServiceException ClosedWatchServiceException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ClosedWatchServiceException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ClosedWatchServiceException::load$($String* name, bool initialize) {
	$loadClass(ClosedWatchServiceException, name, initialize, &_ClosedWatchServiceException_ClassInfo_, allocate$ClosedWatchServiceException);
	return class$;
}

$Class* ClosedWatchServiceException::class$ = nullptr;

		} // file
	} // nio
} // java