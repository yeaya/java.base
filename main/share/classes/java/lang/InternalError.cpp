#include <java/lang/InternalError.h>
#include <java/lang/VirtualMachineError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VirtualMachineError = ::java::lang::VirtualMachineError;

namespace java {
	namespace lang {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InternalError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InternalError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InternalError, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(InternalError, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(InternalError, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.InternalError",
		"java.lang.VirtualMachineError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InternalError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalError);
	});
	return class$;
}

$Class* InternalError::class$ = nullptr;

	} // lang
} // java