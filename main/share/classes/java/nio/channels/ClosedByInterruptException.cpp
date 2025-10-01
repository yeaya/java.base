#include <java/nio/channels/ClosedByInterruptException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/AsynchronousCloseException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousCloseException = ::java::nio::channels::AsynchronousCloseException;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _ClosedByInterruptException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClosedByInterruptException, serialVersionUID)},
	{}
};

$MethodInfo _ClosedByInterruptException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClosedByInterruptException::*)()>(&ClosedByInterruptException::init$))},
	{}
};

$ClassInfo _ClosedByInterruptException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.ClosedByInterruptException",
	"java.nio.channels.AsynchronousCloseException",
	nullptr,
	_ClosedByInterruptException_FieldInfo_,
	_ClosedByInterruptException_MethodInfo_
};

$Object* allocate$ClosedByInterruptException($Class* clazz) {
	return $of($alloc(ClosedByInterruptException));
}

void ClosedByInterruptException::init$() {
	$AsynchronousCloseException::init$();
}

ClosedByInterruptException::ClosedByInterruptException() {
}

ClosedByInterruptException::ClosedByInterruptException(const ClosedByInterruptException& e) {
}

ClosedByInterruptException ClosedByInterruptException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ClosedByInterruptException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ClosedByInterruptException::load$($String* name, bool initialize) {
	$loadClass(ClosedByInterruptException, name, initialize, &_ClosedByInterruptException_ClassInfo_, allocate$ClosedByInterruptException);
	return class$;
}

$Class* ClosedByInterruptException::class$ = nullptr;

		} // channels
	} // nio
} // java