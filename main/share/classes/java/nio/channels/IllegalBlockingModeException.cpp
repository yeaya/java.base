#include <java/nio/channels/IllegalBlockingModeException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void IllegalBlockingModeException::init$() {
	$IllegalStateException::init$();
}

IllegalBlockingModeException::IllegalBlockingModeException() {
}

IllegalBlockingModeException::IllegalBlockingModeException(const IllegalBlockingModeException& e) : $IllegalStateException(e) {
}

void IllegalBlockingModeException::throw$() {
	throw *this;
}

$Class* IllegalBlockingModeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalBlockingModeException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalBlockingModeException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.IllegalBlockingModeException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalBlockingModeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalBlockingModeException);
	});
	return class$;
}

$Class* IllegalBlockingModeException::class$ = nullptr;

		} // channels
	} // nio
} // java