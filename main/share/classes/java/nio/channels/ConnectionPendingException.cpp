#include <java/nio/channels/ConnectionPendingException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void ConnectionPendingException::init$() {
	$IllegalStateException::init$();
}

ConnectionPendingException::ConnectionPendingException() {
}

ConnectionPendingException::ConnectionPendingException(const ConnectionPendingException& e) : $IllegalStateException(e) {
}

void ConnectionPendingException::throw$() {
	throw *this;
}

$Class* ConnectionPendingException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConnectionPendingException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ConnectionPendingException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.ConnectionPendingException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConnectionPendingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectionPendingException);
	});
	return class$;
}

$Class* ConnectionPendingException::class$ = nullptr;

		} // channels
	} // nio
} // java