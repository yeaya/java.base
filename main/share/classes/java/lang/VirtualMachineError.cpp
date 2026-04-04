#include <java/lang/VirtualMachineError.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

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

VirtualMachineError::VirtualMachineError(const VirtualMachineError& e) : $Error(e) {
}

void VirtualMachineError::throw$() {
	throw *this;
}

$Class* VirtualMachineError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VirtualMachineError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VirtualMachineError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(VirtualMachineError, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(VirtualMachineError, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(VirtualMachineError, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.lang.VirtualMachineError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VirtualMachineError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VirtualMachineError);
	});
	return class$;
}

$Class* VirtualMachineError::class$ = nullptr;

	} // lang
} // java