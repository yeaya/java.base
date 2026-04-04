#include <java/lang/SecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

void SecurityException::init$() {
	$RuntimeException::init$();
}

void SecurityException::init$($String* s) {
	$RuntimeException::init$(s);
}

void SecurityException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void SecurityException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

SecurityException::SecurityException() {
}

SecurityException::SecurityException(const SecurityException& e) : $RuntimeException(e) {
}

void SecurityException::throw$() {
	throw *this;
}

$Class* SecurityException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SecurityException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SecurityException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SecurityException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SecurityException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SecurityException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.SecurityException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SecurityException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecurityException);
	});
	return class$;
}

$Class* SecurityException::class$ = nullptr;

	} // lang
} // java