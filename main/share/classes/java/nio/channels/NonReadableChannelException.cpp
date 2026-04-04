#include <java/nio/channels/NonReadableChannelException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void NonReadableChannelException::init$() {
	$IllegalStateException::init$();
}

NonReadableChannelException::NonReadableChannelException() {
}

NonReadableChannelException::NonReadableChannelException(const NonReadableChannelException& e) : $IllegalStateException(e) {
}

void NonReadableChannelException::throw$() {
	throw *this;
}

$Class* NonReadableChannelException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NonReadableChannelException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NonReadableChannelException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.NonReadableChannelException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NonReadableChannelException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonReadableChannelException);
	});
	return class$;
}

$Class* NonReadableChannelException::class$ = nullptr;

		} // channels
	} // nio
} // java