#include <java/nio/BufferOverflowException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace nio {

$FieldInfo _BufferOverflowException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferOverflowException, serialVersionUID)},
	{}
};

$MethodInfo _BufferOverflowException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BufferOverflowException::*)()>(&BufferOverflowException::init$))},
	{}
};

$ClassInfo _BufferOverflowException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.BufferOverflowException",
	"java.lang.RuntimeException",
	nullptr,
	_BufferOverflowException_FieldInfo_,
	_BufferOverflowException_MethodInfo_
};

$Object* allocate$BufferOverflowException($Class* clazz) {
	return $of($alloc(BufferOverflowException));
}

void BufferOverflowException::init$() {
	$RuntimeException::init$();
}

BufferOverflowException::BufferOverflowException() {
}

BufferOverflowException::BufferOverflowException(const BufferOverflowException& e) : $RuntimeException(e) {
}

void BufferOverflowException::throw$() {
	throw *this;
}

$Class* BufferOverflowException::load$($String* name, bool initialize) {
	$loadClass(BufferOverflowException, name, initialize, &_BufferOverflowException_ClassInfo_, allocate$BufferOverflowException);
	return class$;
}

$Class* BufferOverflowException::class$ = nullptr;

	} // nio
} // java