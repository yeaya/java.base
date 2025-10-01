#include <java/nio/channels/InterruptedByTimeoutException.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _InterruptedByTimeoutException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InterruptedByTimeoutException, serialVersionUID)},
	{}
};

$MethodInfo _InterruptedByTimeoutException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InterruptedByTimeoutException::*)()>(&InterruptedByTimeoutException::init$))},
	{}
};

$ClassInfo _InterruptedByTimeoutException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.InterruptedByTimeoutException",
	"java.io.IOException",
	nullptr,
	_InterruptedByTimeoutException_FieldInfo_,
	_InterruptedByTimeoutException_MethodInfo_
};

$Object* allocate$InterruptedByTimeoutException($Class* clazz) {
	return $of($alloc(InterruptedByTimeoutException));
}

void InterruptedByTimeoutException::init$() {
	$IOException::init$();
}

InterruptedByTimeoutException::InterruptedByTimeoutException() {
}

InterruptedByTimeoutException::InterruptedByTimeoutException(const InterruptedByTimeoutException& e) {
}

InterruptedByTimeoutException InterruptedByTimeoutException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InterruptedByTimeoutException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InterruptedByTimeoutException::load$($String* name, bool initialize) {
	$loadClass(InterruptedByTimeoutException, name, initialize, &_InterruptedByTimeoutException_ClassInfo_, allocate$InterruptedByTimeoutException);
	return class$;
}

$Class* InterruptedByTimeoutException::class$ = nullptr;

		} // channels
	} // nio
} // java