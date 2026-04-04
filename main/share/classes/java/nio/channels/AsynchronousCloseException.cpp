#include <java/nio/channels/AsynchronousCloseException.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;

namespace java {
	namespace nio {
		namespace channels {

void AsynchronousCloseException::init$() {
	$ClosedChannelException::init$();
}

AsynchronousCloseException::AsynchronousCloseException() {
}

AsynchronousCloseException::AsynchronousCloseException(const AsynchronousCloseException& e) : $ClosedChannelException(e) {
}

void AsynchronousCloseException::throw$() {
	throw *this;
}

$Class* AsynchronousCloseException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AsynchronousCloseException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AsynchronousCloseException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.AsynchronousCloseException",
		"java.nio.channels.ClosedChannelException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AsynchronousCloseException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsynchronousCloseException);
	});
	return class$;
}

$Class* AsynchronousCloseException::class$ = nullptr;

		} // channels
	} // nio
} // java