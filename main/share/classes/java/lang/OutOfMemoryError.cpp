#include <java/lang/OutOfMemoryError.h>
#include <java/lang/VirtualMachineError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VirtualMachineError = ::java::lang::VirtualMachineError;

namespace java {
	namespace lang {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OutOfMemoryError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OutOfMemoryError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(OutOfMemoryError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.OutOfMemoryError",
		"java.lang.VirtualMachineError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OutOfMemoryError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OutOfMemoryError);
	});
	return class$;
}

$Class* OutOfMemoryError::class$ = nullptr;

	} // lang
} // java