#include <java/nio/channels/ClosedChannelException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void ClosedChannelException::init$() {
	$IOException::init$();
}

ClosedChannelException::ClosedChannelException() {
}

ClosedChannelException::ClosedChannelException(const ClosedChannelException& e) : $IOException(e) {
}

void ClosedChannelException::throw$() {
	throw *this;
}

$Class* ClosedChannelException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClosedChannelException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedChannelException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.ClosedChannelException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClosedChannelException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClosedChannelException);
	});
	return class$;
}

$Class* ClosedChannelException::class$ = nullptr;

		} // channels
	} // nio
} // java