#include <java/util/EmptyStackException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace util {

void EmptyStackException::init$() {
	$RuntimeException::init$();
}

EmptyStackException::EmptyStackException() {
}

EmptyStackException::EmptyStackException(const EmptyStackException& e) : $RuntimeException(e) {
}

void EmptyStackException::throw$() {
	throw *this;
}

$Class* EmptyStackException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EmptyStackException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EmptyStackException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.EmptyStackException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EmptyStackException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EmptyStackException);
	});
	return class$;
}

$Class* EmptyStackException::class$ = nullptr;

	} // util
} // java