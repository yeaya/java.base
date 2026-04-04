#include <java/lang/ArithmeticException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

void ArithmeticException::init$() {
	$RuntimeException::init$();
}

void ArithmeticException::init$($String* s) {
	$RuntimeException::init$(s);
}

ArithmeticException::ArithmeticException() {
}

ArithmeticException::ArithmeticException(const ArithmeticException& e) : $RuntimeException(e) {
}

void ArithmeticException::throw$() {
	throw *this;
}

$Class* ArithmeticException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArithmeticException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ArithmeticException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ArithmeticException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.ArithmeticException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ArithmeticException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArithmeticException);
	});
	return class$;
}

$Class* ArithmeticException::class$ = nullptr;

	} // lang
} // java