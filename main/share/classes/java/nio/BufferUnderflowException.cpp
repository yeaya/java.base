#include <java/nio/BufferUnderflowException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace nio {

void BufferUnderflowException::init$() {
	$RuntimeException::init$();
}

BufferUnderflowException::BufferUnderflowException() {
}

BufferUnderflowException::BufferUnderflowException(const BufferUnderflowException& e) : $RuntimeException(e) {
}

void BufferUnderflowException::throw$() {
	throw *this;
}

$Class* BufferUnderflowException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferUnderflowException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BufferUnderflowException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.BufferUnderflowException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BufferUnderflowException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufferUnderflowException);
	});
	return class$;
}

$Class* BufferUnderflowException::class$ = nullptr;

	} // nio
} // java