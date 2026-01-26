#include <java/lang/UnknownError.h>

#include <java/lang/VirtualMachineError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VirtualMachineError = ::java::lang::VirtualMachineError;

namespace java {
	namespace lang {

$FieldInfo _UnknownError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownError, serialVersionUID)},
	{}
};

$MethodInfo _UnknownError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(UnknownError, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnknownError, init$, void, $String*)},
	{}
};

$ClassInfo _UnknownError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.UnknownError",
	"java.lang.VirtualMachineError",
	nullptr,
	_UnknownError_FieldInfo_,
	_UnknownError_MethodInfo_
};

$Object* allocate$UnknownError($Class* clazz) {
	return $of($alloc(UnknownError));
}

void UnknownError::init$() {
	$VirtualMachineError::init$();
}

void UnknownError::init$($String* s) {
	$VirtualMachineError::init$(s);
}

UnknownError::UnknownError() {
}

UnknownError::UnknownError(const UnknownError& e) : $VirtualMachineError(e) {
}

void UnknownError::throw$() {
	throw *this;
}

$Class* UnknownError::load$($String* name, bool initialize) {
	$loadClass(UnknownError, name, initialize, &_UnknownError_ClassInfo_, allocate$UnknownError);
	return class$;
}

$Class* UnknownError::class$ = nullptr;

	} // lang
} // java