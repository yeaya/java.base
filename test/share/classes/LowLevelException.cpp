#include <LowLevelException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void LowLevelException::init$() {
	$Exception::init$();
}

LowLevelException::LowLevelException() {
}

LowLevelException::LowLevelException(const LowLevelException& e) : $Exception(e) {
}

void LowLevelException::throw$() {
	throw *this;
}

$Class* LowLevelException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LowLevelException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LowLevelException",
		"java.lang.Exception",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LowLevelException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LowLevelException);
	});
	return class$;
}

$Class* LowLevelException::class$ = nullptr;