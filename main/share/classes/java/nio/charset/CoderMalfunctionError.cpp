#include <java/nio/charset/CoderMalfunctionError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace charset {

$FieldInfo _CoderMalfunctionError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CoderMalfunctionError, serialVersionUID)},
	{}
};

$MethodInfo _CoderMalfunctionError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(CoderMalfunctionError::*)($Exception*)>(&CoderMalfunctionError::init$))},
	{}
};

$ClassInfo _CoderMalfunctionError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.charset.CoderMalfunctionError",
	"java.lang.Error",
	nullptr,
	_CoderMalfunctionError_FieldInfo_,
	_CoderMalfunctionError_MethodInfo_
};

$Object* allocate$CoderMalfunctionError($Class* clazz) {
	return $of($alloc(CoderMalfunctionError));
}

void CoderMalfunctionError::init$($Exception* cause) {
	$Error::init$(static_cast<$Throwable*>(cause));
}

CoderMalfunctionError::CoderMalfunctionError() {
}

CoderMalfunctionError::CoderMalfunctionError(const CoderMalfunctionError& e) {
}

CoderMalfunctionError CoderMalfunctionError::wrapper$() {
	$pendingException(this);
	return *this;
}

void CoderMalfunctionError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* CoderMalfunctionError::load$($String* name, bool initialize) {
	$loadClass(CoderMalfunctionError, name, initialize, &_CoderMalfunctionError_ClassInfo_, allocate$CoderMalfunctionError);
	return class$;
}

$Class* CoderMalfunctionError::class$ = nullptr;

		} // charset
	} // nio
} // java