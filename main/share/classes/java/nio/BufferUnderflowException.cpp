#include <java/nio/BufferUnderflowException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace nio {

$FieldInfo _BufferUnderflowException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferUnderflowException, serialVersionUID)},
	{}
};

$MethodInfo _BufferUnderflowException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BufferUnderflowException::*)()>(&BufferUnderflowException::init$))},
	{}
};

$ClassInfo _BufferUnderflowException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.BufferUnderflowException",
	"java.lang.RuntimeException",
	nullptr,
	_BufferUnderflowException_FieldInfo_,
	_BufferUnderflowException_MethodInfo_
};

$Object* allocate$BufferUnderflowException($Class* clazz) {
	return $of($alloc(BufferUnderflowException));
}

void BufferUnderflowException::init$() {
	$RuntimeException::init$();
}

BufferUnderflowException::BufferUnderflowException() {
}

BufferUnderflowException::BufferUnderflowException(const BufferUnderflowException& e) {
}

BufferUnderflowException BufferUnderflowException::wrapper$() {
	$pendingException(this);
	return *this;
}

void BufferUnderflowException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* BufferUnderflowException::load$($String* name, bool initialize) {
	$loadClass(BufferUnderflowException, name, initialize, &_BufferUnderflowException_ClassInfo_, allocate$BufferUnderflowException);
	return class$;
}

$Class* BufferUnderflowException::class$ = nullptr;

	} // nio
} // java