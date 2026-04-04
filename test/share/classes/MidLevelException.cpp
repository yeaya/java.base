#include <MidLevelException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void MidLevelException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

MidLevelException::MidLevelException() {
}

MidLevelException::MidLevelException(const MidLevelException& e) : $Exception(e) {
}

void MidLevelException::throw$() {
	throw *this;
}

$Class* MidLevelException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, 0, $method(MidLevelException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MidLevelException",
		"java.lang.Exception",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MidLevelException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidLevelException);
	});
	return class$;
}

$Class* MidLevelException::class$ = nullptr;