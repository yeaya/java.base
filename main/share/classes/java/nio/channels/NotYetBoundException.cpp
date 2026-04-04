#include <java/nio/channels/NotYetBoundException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void NotYetBoundException::init$() {
	$IllegalStateException::init$();
}

NotYetBoundException::NotYetBoundException() {
}

NotYetBoundException::NotYetBoundException(const NotYetBoundException& e) : $IllegalStateException(e) {
}

void NotYetBoundException::throw$() {
	throw *this;
}

$Class* NotYetBoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotYetBoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NotYetBoundException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.NotYetBoundException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NotYetBoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotYetBoundException);
	});
	return class$;
}

$Class* NotYetBoundException::class$ = nullptr;

		} // channels
	} // nio
} // java