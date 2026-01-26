#include <java/lang/OutOfMemoryError.h>

#include <java/lang/VirtualMachineError.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(OutOfMemoryError, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(OutOfMemoryError, init$, void, $String*)},
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

OutOfMemoryError::OutOfMemoryError(const OutOfMemoryError& e) : $VirtualMachineError(e) {
}

void OutOfMemoryError::throw$() {
	throw *this;
}

$Class* OutOfMemoryError::load$($String* name, bool initialize) {
	$loadClass(OutOfMemoryError, name, initialize, &_OutOfMemoryError_ClassInfo_, allocate$OutOfMemoryError);
	return class$;
}

$Class* OutOfMemoryError::class$ = nullptr;

	} // lang
} // java