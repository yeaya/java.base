#include <p/ThrowException.h>

#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {

$MethodInfo _ThrowException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ThrowException::*)()>(&ThrowException::init$))},
	{"throwError", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&ThrowException::throwError))},
	{}
};

$ClassInfo _ThrowException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p.ThrowException",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ThrowException_MethodInfo_
};

$Object* allocate$ThrowException($Class* clazz) {
	return $of($alloc(ThrowException));
}

void ThrowException::init$() {
}

void ThrowException::throwError() {
	$throwNew($Error, "testing"_s);
}

ThrowException::ThrowException() {
}

$Class* ThrowException::load$($String* name, bool initialize) {
	$loadClass(ThrowException, name, initialize, &_ThrowException_ClassInfo_, allocate$ThrowException);
	return class$;
}

$Class* ThrowException::class$ = nullptr;

} // p