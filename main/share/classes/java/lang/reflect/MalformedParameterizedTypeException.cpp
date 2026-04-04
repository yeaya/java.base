#include <java/lang/reflect/MalformedParameterizedTypeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace reflect {

void MalformedParameterizedTypeException::init$() {
	$RuntimeException::init$();
}

void MalformedParameterizedTypeException::init$($String* message) {
	$RuntimeException::init$(message);
}

MalformedParameterizedTypeException::MalformedParameterizedTypeException() {
}

MalformedParameterizedTypeException::MalformedParameterizedTypeException(const MalformedParameterizedTypeException& e) : $RuntimeException(e) {
}

void MalformedParameterizedTypeException::throw$() {
	throw *this;
}

$Class* MalformedParameterizedTypeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MalformedParameterizedTypeException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MalformedParameterizedTypeException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MalformedParameterizedTypeException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.reflect.MalformedParameterizedTypeException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MalformedParameterizedTypeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MalformedParameterizedTypeException);
	});
	return class$;
}

$Class* MalformedParameterizedTypeException::class$ = nullptr;

		} // reflect
	} // lang
} // java