#include <java/nio/channels/NoConnectionPendingException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void NoConnectionPendingException::init$() {
	$IllegalStateException::init$();
}

NoConnectionPendingException::NoConnectionPendingException() {
}

NoConnectionPendingException::NoConnectionPendingException(const NoConnectionPendingException& e) : $IllegalStateException(e) {
}

void NoConnectionPendingException::throw$() {
	throw *this;
}

$Class* NoConnectionPendingException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoConnectionPendingException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NoConnectionPendingException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.NoConnectionPendingException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoConnectionPendingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoConnectionPendingException);
	});
	return class$;
}

$Class* NoConnectionPendingException::class$ = nullptr;

		} // channels
	} // nio
} // java