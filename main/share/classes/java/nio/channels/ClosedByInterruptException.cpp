#include <java/nio/channels/ClosedByInterruptException.h>
#include <java/nio/channels/AsynchronousCloseException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousCloseException = ::java::nio::channels::AsynchronousCloseException;

namespace java {
	namespace nio {
		namespace channels {

void ClosedByInterruptException::init$() {
	$AsynchronousCloseException::init$();
}

ClosedByInterruptException::ClosedByInterruptException() {
}

ClosedByInterruptException::ClosedByInterruptException(const ClosedByInterruptException& e) : $AsynchronousCloseException(e) {
}

void ClosedByInterruptException::throw$() {
	throw *this;
}

$Class* ClosedByInterruptException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClosedByInterruptException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedByInterruptException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.ClosedByInterruptException",
		"java.nio.channels.AsynchronousCloseException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClosedByInterruptException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClosedByInterruptException);
	});
	return class$;
}

$Class* ClosedByInterruptException::class$ = nullptr;

		} // channels
	} // nio
} // java