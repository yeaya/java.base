#include <java/lang/InternalError.h>

#include <java/lang/VirtualMachineError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VirtualMachineError = ::java::lang::VirtualMachineError;

namespace java {
	namespace lang {

$FieldInfo _InternalError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InternalError, serialVersionUID)},
	{}
};

$MethodInfo _InternalError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InternalError, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InternalError, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(InternalError, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(InternalError, init$, void, $Throwable*)},
	{}
};

$ClassInfo _InternalError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.InternalError",
	"java.lang.VirtualMachineError",
	nullptr,
	_InternalError_FieldInfo_,
	_InternalError_MethodInfo_
};

$Object* allocate$InternalError($Class* clazz) {
	return $of($alloc(InternalError));
}

void InternalError::init$() {
	$VirtualMachineError::init$();
}

void InternalError::init$($String* message) {
	$VirtualMachineError::init$(message);
}

void InternalError::init$($String* message, $Throwable* cause) {
	$VirtualMachineError::init$(message, cause);
}

void InternalError::init$($Throwable* cause) {
	$VirtualMachineError::init$(cause);
}

InternalError::InternalError() {
}

InternalError::InternalError(const InternalError& e) : $VirtualMachineError(e) {
}

void InternalError::throw$() {
	throw *this;
}

$Class* InternalError::load$($String* name, bool initialize) {
	$loadClass(InternalError, name, initialize, &_InternalError_ClassInfo_, allocate$InternalError);
	return class$;
}

$Class* InternalError::class$ = nullptr;

	} // lang
} // java