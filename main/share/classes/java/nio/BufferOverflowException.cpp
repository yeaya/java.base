#include <java/nio/BufferOverflowException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace nio {

void BufferOverflowException::init$() {
	$RuntimeException::init$();
}

BufferOverflowException::BufferOverflowException() {
}

BufferOverflowException::BufferOverflowException(const BufferOverflowException& e) : $RuntimeException(e) {
}

void BufferOverflowException::throw$() {
	throw *this;
}

$Class* BufferOverflowException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferOverflowException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BufferOverflowException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.BufferOverflowException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BufferOverflowException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufferOverflowException);
	});
	return class$;
}

$Class* BufferOverflowException::class$ = nullptr;

	} // nio
} // java