#include <java/lang/BootstrapMethodError.h>
#include <java/lang/LinkageError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void BootstrapMethodError::init$() {
	$LinkageError::init$();
}

void BootstrapMethodError::init$($String* s) {
	$LinkageError::init$(s);
}

void BootstrapMethodError::init$($String* s, $Throwable* cause) {
	$LinkageError::init$(s, cause);
}

void BootstrapMethodError::init$($Throwable* cause) {
	$LinkageError::init$(cause == nullptr ? ($String*)nullptr : $(cause->toString()));
	initCause(cause);
}

BootstrapMethodError::BootstrapMethodError() {
}

BootstrapMethodError::BootstrapMethodError(const BootstrapMethodError& e) : $LinkageError(e) {
}

void BootstrapMethodError::throw$() {
	throw *this;
}

$Class* BootstrapMethodError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BootstrapMethodError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BootstrapMethodError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BootstrapMethodError, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(BootstrapMethodError, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(BootstrapMethodError, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.BootstrapMethodError",
		"java.lang.LinkageError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BootstrapMethodError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BootstrapMethodError);
	});
	return class$;
}

$Class* BootstrapMethodError::class$ = nullptr;

	} // lang
} // java