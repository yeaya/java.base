#include <java/nio/channels/NotYetConnectedException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void NotYetConnectedException::init$() {
	$IllegalStateException::init$();
}

NotYetConnectedException::NotYetConnectedException() {
}

NotYetConnectedException::NotYetConnectedException(const NotYetConnectedException& e) : $IllegalStateException(e) {
}

void NotYetConnectedException::throw$() {
	throw *this;
}

$Class* NotYetConnectedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotYetConnectedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NotYetConnectedException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.NotYetConnectedException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NotYetConnectedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotYetConnectedException);
	});
	return class$;
}

$Class* NotYetConnectedException::class$ = nullptr;

		} // channels
	} // nio
} // java