#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

void IllegalStateException::init$() {
	$RuntimeException::init$();
}

void IllegalStateException::init$($String* s) {
	$RuntimeException::init$(s);
}

void IllegalStateException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void IllegalStateException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

IllegalStateException::IllegalStateException() {
}

IllegalStateException::IllegalStateException(const IllegalStateException& e) : $RuntimeException(e) {
}

void IllegalStateException::throw$() {
	throw *this;
}

$Class* IllegalStateException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(IllegalStateException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalStateException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalStateException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(IllegalStateException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(IllegalStateException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.IllegalStateException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalStateException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalStateException);
	});
	return class$;
}

$Class* IllegalStateException::class$ = nullptr;

	} // lang
} // java