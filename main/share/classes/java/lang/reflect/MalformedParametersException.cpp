#include <java/lang/reflect/MalformedParametersException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace reflect {

void MalformedParametersException::init$() {
	$RuntimeException::init$();
}

void MalformedParametersException::init$($String* reason) {
	$RuntimeException::init$(reason);
}

MalformedParametersException::MalformedParametersException() {
}

MalformedParametersException::MalformedParametersException(const MalformedParametersException& e) : $RuntimeException(e) {
}

void MalformedParametersException::throw$() {
	throw *this;
}

$Class* MalformedParametersException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MalformedParametersException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MalformedParametersException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MalformedParametersException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.reflect.MalformedParametersException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MalformedParametersException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MalformedParametersException);
	});
	return class$;
}

$Class* MalformedParametersException::class$ = nullptr;

		} // reflect
	} // lang
} // java