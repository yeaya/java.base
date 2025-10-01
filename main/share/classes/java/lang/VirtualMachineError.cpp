#include <java/lang/VirtualMachineError.h>

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
	namespace lang {

$FieldInfo _VirtualMachineError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VirtualMachineError, serialVersionUID)},
	{}
};

$MethodInfo _VirtualMachineError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VirtualMachineError::*)()>(&VirtualMachineError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(VirtualMachineError::*)($String*)>(&VirtualMachineError::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(VirtualMachineError::*)($String*,$Throwable*)>(&VirtualMachineError::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(VirtualMachineError::*)($Throwable*)>(&VirtualMachineError::init$))},
	{}
};

$ClassInfo _VirtualMachineError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.lang.VirtualMachineError",
	"java.lang.Error",
	nullptr,
	_VirtualMachineError_FieldInfo_,
	_VirtualMachineError_MethodInfo_
};

$Object* allocate$VirtualMachineError($Class* clazz) {
	return $of($alloc(VirtualMachineError));
}

void VirtualMachineError::init$() {
	$Error::init$();
}

void VirtualMachineError::init$($String* message) {
	$Error::init$(message);
}

void VirtualMachineError::init$($String* message, $Throwable* cause) {
	$Error::init$(message, cause);
}

void VirtualMachineError::init$($Throwable* cause) {
	$Error::init$(cause);
}

VirtualMachineError::VirtualMachineError() {
}

VirtualMachineError::VirtualMachineError(const VirtualMachineError& e) {
}

VirtualMachineError VirtualMachineError::wrapper$() {
	$pendingException(this);
	return *this;
}

void VirtualMachineError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* VirtualMachineError::load$($String* name, bool initialize) {
	$loadClass(VirtualMachineError, name, initialize, &_VirtualMachineError_ClassInfo_, allocate$VirtualMachineError);
	return class$;
}

$Class* VirtualMachineError::class$ = nullptr;

	} // lang
} // java