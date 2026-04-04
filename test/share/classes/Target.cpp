#include <Target.h>
#include <java/lang/UnsatisfiedLinkError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsatisfiedLinkError = ::java::lang::UnsatisfiedLinkError;

void Target::init$() {
}

void Target::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		try {
			$System::loadLibrary("someLibrary"_s);
			$throwNew($RuntimeException, "someLibrary was loaded"_s);
		} catch ($UnsatisfiedLinkError& e) {
		}
	}
}

Target::Target() {
}

$Class* Target::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Target, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Target",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Target, name, initialize, &classInfo$$, Target::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Target);
	});
	return class$;
}

$Class* Target::class$ = nullptr;