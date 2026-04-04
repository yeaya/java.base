#include <java/lang/NegativeArraySizeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

void NegativeArraySizeException::init$() {
	$RuntimeException::init$();
}

void NegativeArraySizeException::init$($String* s) {
	$RuntimeException::init$(s);
}

NegativeArraySizeException::NegativeArraySizeException() {
}

NegativeArraySizeException::NegativeArraySizeException(const NegativeArraySizeException& e) : $RuntimeException(e) {
}

void NegativeArraySizeException::throw$() {
	throw *this;
}

$Class* NegativeArraySizeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NegativeArraySizeException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NegativeArraySizeException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NegativeArraySizeException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.NegativeArraySizeException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NegativeArraySizeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NegativeArraySizeException);
	});
	return class$;
}

$Class* NegativeArraySizeException::class$ = nullptr;

	} // lang
} // java