#include <java/lang/StackOverflowError.h>

#include <java/lang/VirtualMachineError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VirtualMachineError = ::java::lang::VirtualMachineError;

namespace java {
	namespace lang {

$FieldInfo _StackOverflowError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StackOverflowError, serialVersionUID)},
	{}
};

$MethodInfo _StackOverflowError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackOverflowError::*)()>(&StackOverflowError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StackOverflowError::*)($String*)>(&StackOverflowError::init$))},
	{}
};

$ClassInfo _StackOverflowError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.StackOverflowError",
	"java.lang.VirtualMachineError",
	nullptr,
	_StackOverflowError_FieldInfo_,
	_StackOverflowError_MethodInfo_
};

$Object* allocate$StackOverflowError($Class* clazz) {
	return $of($alloc(StackOverflowError));
}

void StackOverflowError::init$() {
	$VirtualMachineError::init$();
}

void StackOverflowError::init$($String* s) {
	$VirtualMachineError::init$(s);
}

StackOverflowError::StackOverflowError() {
}

StackOverflowError::StackOverflowError(const StackOverflowError& e) : $VirtualMachineError(e) {
}

void StackOverflowError::throw$() {
	throw *this;
}

$Class* StackOverflowError::load$($String* name, bool initialize) {
	$loadClass(StackOverflowError, name, initialize, &_StackOverflowError_ClassInfo_, allocate$StackOverflowError);
	return class$;
}

$Class* StackOverflowError::class$ = nullptr;

	} // lang
} // java