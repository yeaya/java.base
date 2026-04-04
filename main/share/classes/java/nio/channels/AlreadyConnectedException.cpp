#include <java/nio/channels/AlreadyConnectedException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void AlreadyConnectedException::init$() {
	$IllegalStateException::init$();
}

AlreadyConnectedException::AlreadyConnectedException() {
}

AlreadyConnectedException::AlreadyConnectedException(const AlreadyConnectedException& e) : $IllegalStateException(e) {
}

void AlreadyConnectedException::throw$() {
	throw *this;
}

$Class* AlreadyConnectedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AlreadyConnectedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AlreadyConnectedException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.AlreadyConnectedException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AlreadyConnectedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AlreadyConnectedException);
	});
	return class$;
}

$Class* AlreadyConnectedException::class$ = nullptr;

		} // channels
	} // nio
} // java