#include <java/nio/channels/CancelledKeyException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void CancelledKeyException::init$() {
	$IllegalStateException::init$();
}

CancelledKeyException::CancelledKeyException() {
}

CancelledKeyException::CancelledKeyException(const CancelledKeyException& e) : $IllegalStateException(e) {
}

void CancelledKeyException::throw$() {
	throw *this;
}

$Class* CancelledKeyException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CancelledKeyException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CancelledKeyException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.CancelledKeyException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CancelledKeyException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CancelledKeyException);
	});
	return class$;
}

$Class* CancelledKeyException::class$ = nullptr;

		} // channels
	} // nio
} // java