#include <java/lang/OutOfMemoryError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/VirtualMachineError.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VirtualMachineError = ::java::lang::VirtualMachineError;

namespace java {
	namespace lang {

$FieldInfo _OutOfMemoryError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OutOfMemoryError, serialVersionUID)},
	{}
};

$MethodInfo _OutOfMemoryError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OutOfMemoryError::*)()>(&OutOfMemoryError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(OutOfMemoryError::*)($String*)>(&OutOfMemoryError::init$))},
	{}
};

$ClassInfo _OutOfMemoryError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.OutOfMemoryError",
	"java.lang.VirtualMachineError",
	nullptr,
	_OutOfMemoryError_FieldInfo_,
	_OutOfMemoryError_MethodInfo_
};

$Object* allocate$OutOfMemoryError($Class* clazz) {
	return $of($alloc(OutOfMemoryError));
}

void OutOfMemoryError::init$() {
	$VirtualMachineError::init$();
}

void OutOfMemoryError::init$($String* s) {
	$VirtualMachineError::init$(s);
}

OutOfMemoryError::OutOfMemoryError() {
}

OutOfMemoryError::OutOfMemoryError(const OutOfMemoryError& e) {
}

OutOfMemoryError OutOfMemoryError::wrapper$() {
	$pendingException(this);
	return *this;
}

void OutOfMemoryError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* OutOfMemoryError::load$($String* name, bool initialize) {
	$loadClass(OutOfMemoryError, name, initialize, &_OutOfMemoryError_ClassInfo_, allocate$OutOfMemoryError);
	return class$;
}

$Class* OutOfMemoryError::class$ = nullptr;

	} // lang
} // java