#include <HighLevelException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void HighLevelException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

HighLevelException::HighLevelException() {
}

HighLevelException::HighLevelException(const HighLevelException& e) : $Exception(e) {
}

void HighLevelException::throw$() {
	throw *this;
}

$Class* HighLevelException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, 0, $method(HighLevelException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HighLevelException",
		"java.lang.Exception",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HighLevelException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HighLevelException);
	});
	return class$;
}

$Class* HighLevelException::class$ = nullptr;