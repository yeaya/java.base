#include <java/nio/channels/AlreadyBoundException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void AlreadyBoundException::init$() {
	$IllegalStateException::init$();
}

AlreadyBoundException::AlreadyBoundException() {
}

AlreadyBoundException::AlreadyBoundException(const AlreadyBoundException& e) : $IllegalStateException(e) {
}

void AlreadyBoundException::throw$() {
	throw *this;
}

$Class* AlreadyBoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AlreadyBoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AlreadyBoundException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.AlreadyBoundException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AlreadyBoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AlreadyBoundException);
	});
	return class$;
}

$Class* AlreadyBoundException::class$ = nullptr;

		} // channels
	} // nio
} // java