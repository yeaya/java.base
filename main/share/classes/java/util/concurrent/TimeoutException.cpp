#include <java/util/concurrent/TimeoutException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _TimeoutException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimeoutException, serialVersionUID)},
	{}
};

$MethodInfo _TimeoutException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeoutException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TimeoutException, init$, void, $String*)},
	{}
};

$ClassInfo _TimeoutException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.TimeoutException",
	"java.lang.Exception",
	nullptr,
	_TimeoutException_FieldInfo_,
	_TimeoutException_MethodInfo_
};

$Object* allocate$TimeoutException($Class* clazz) {
	return $of($alloc(TimeoutException));
}

void TimeoutException::init$() {
	$Exception::init$();
}

void TimeoutException::init$($String* message) {
	$Exception::init$(message);
}

TimeoutException::TimeoutException() {
}

TimeoutException::TimeoutException(const TimeoutException& e) : $Exception(e) {
}

void TimeoutException::throw$() {
	throw *this;
}

$Class* TimeoutException::load$($String* name, bool initialize) {
	$loadClass(TimeoutException, name, initialize, &_TimeoutException_ClassInfo_, allocate$TimeoutException);
	return class$;
}

$Class* TimeoutException::class$ = nullptr;

		} // concurrent
	} // util
} // java