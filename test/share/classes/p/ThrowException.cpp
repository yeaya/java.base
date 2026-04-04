#include <p/ThrowException.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {

void ThrowException::init$() {
}

void ThrowException::throwError() {
	$throwNew($Error, "testing"_s);
}

ThrowException::ThrowException() {
}

$Class* ThrowException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ThrowException, init$, void)},
		{"throwError", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(ThrowException, throwError, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p.ThrowException",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ThrowException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ThrowException);
	});
	return class$;
}

$Class* ThrowException::class$ = nullptr;

} // p