#include <java/nio/channels/InterruptedByTimeoutException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void InterruptedByTimeoutException::init$() {
	$IOException::init$();
}

InterruptedByTimeoutException::InterruptedByTimeoutException() {
}

InterruptedByTimeoutException::InterruptedByTimeoutException(const InterruptedByTimeoutException& e) : $IOException(e) {
}

void InterruptedByTimeoutException::throw$() {
	throw *this;
}

$Class* InterruptedByTimeoutException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InterruptedByTimeoutException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InterruptedByTimeoutException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.InterruptedByTimeoutException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InterruptedByTimeoutException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InterruptedByTimeoutException);
	});
	return class$;
}

$Class* InterruptedByTimeoutException::class$ = nullptr;

		} // channels
	} // nio
} // java