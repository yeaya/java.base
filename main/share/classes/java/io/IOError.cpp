#include <java/io/IOError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _IOError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IOError, serialVersionUID)},
	{}
};

$MethodInfo _IOError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(IOError::*)($Throwable*)>(&IOError::init$))},
	{}
};

$ClassInfo _IOError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.IOError",
	"java.lang.Error",
	nullptr,
	_IOError_FieldInfo_,
	_IOError_MethodInfo_
};

$Object* allocate$IOError($Class* clazz) {
	return $of($alloc(IOError));
}

void IOError::init$($Throwable* cause) {
	$Error::init$(cause);
}

IOError::IOError() {
}

IOError::IOError(const IOError& e) {
}

IOError IOError::wrapper$() {
	$pendingException(this);
	return *this;
}

void IOError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IOError::load$($String* name, bool initialize) {
	$loadClass(IOError, name, initialize, &_IOError_ClassInfo_, allocate$IOError);
	return class$;
}

$Class* IOError::class$ = nullptr;

	} // io
} // java