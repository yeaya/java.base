#include <java/lang/UnknownError.h>
#include <java/lang/VirtualMachineError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VirtualMachineError = ::java::lang::VirtualMachineError;

namespace java {
	namespace lang {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnknownError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnknownError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.UnknownError",
		"java.lang.VirtualMachineError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnknownError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnknownError);
	});
	return class$;
}

$Class* UnknownError::class$ = nullptr;

	} // lang
} // java