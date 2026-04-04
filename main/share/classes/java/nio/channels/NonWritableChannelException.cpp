#include <java/nio/channels/NonWritableChannelException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void NonWritableChannelException::init$() {
	$IllegalStateException::init$();
}

NonWritableChannelException::NonWritableChannelException() {
}

NonWritableChannelException::NonWritableChannelException(const NonWritableChannelException& e) : $IllegalStateException(e) {
}

void NonWritableChannelException::throw$() {
	throw *this;
}

$Class* NonWritableChannelException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NonWritableChannelException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NonWritableChannelException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.NonWritableChannelException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NonWritableChannelException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonWritableChannelException);
	});
	return class$;
}

$Class* NonWritableChannelException::class$ = nullptr;

		} // channels
	} // nio
} // java