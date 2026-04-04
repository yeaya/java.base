#include <java/lang/IllegalArgumentException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

void IllegalArgumentException::init$() {
	$RuntimeException::init$();
}

void IllegalArgumentException::init$($String* s) {
	$RuntimeException::init$(s);
}

void IllegalArgumentException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void IllegalArgumentException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

IllegalArgumentException::IllegalArgumentException() {
}

IllegalArgumentException::IllegalArgumentException(const IllegalArgumentException& e) : $RuntimeException(e) {
}

void IllegalArgumentException::throw$() {
	throw *this;
}

$Class* IllegalArgumentException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalArgumentException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalArgumentException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalArgumentException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(IllegalArgumentException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(IllegalArgumentException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.IllegalArgumentException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalArgumentException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalArgumentException);
	});
	return class$;
}

$Class* IllegalArgumentException::class$ = nullptr;

	} // lang
} // java