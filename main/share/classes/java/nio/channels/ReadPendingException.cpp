#include <java/nio/channels/ReadPendingException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void ReadPendingException::init$() {
	$IllegalStateException::init$();
}

ReadPendingException::ReadPendingException() {
}

ReadPendingException::ReadPendingException(const ReadPendingException& e) : $IllegalStateException(e) {
}

void ReadPendingException::throw$() {
	throw *this;
}

$Class* ReadPendingException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReadPendingException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadPendingException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.ReadPendingException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReadPendingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadPendingException);
	});
	return class$;
}

$Class* ReadPendingException::class$ = nullptr;

		} // channels
	} // nio
} // java