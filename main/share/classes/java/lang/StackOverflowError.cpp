#include <java/lang/StackOverflowError.h>
#include <java/lang/VirtualMachineError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VirtualMachineError = ::java::lang::VirtualMachineError;

namespace java {
	namespace lang {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StackOverflowError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StackOverflowError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StackOverflowError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.StackOverflowError",
		"java.lang.VirtualMachineError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StackOverflowError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackOverflowError);
	});
	return class$;
}

$Class* StackOverflowError::class$ = nullptr;

	} // lang
} // java