#include <Target2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Target2::init$() {
}

void Target2::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$System::loadLibrary("awt"_s);
	}
}

Target2::Target2() {
}

$Class* Target2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Target2, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Target2",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Target2, name, initialize, &classInfo$$, Target2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Target2);
	});
	return class$;
}

$Class* Target2::class$ = nullptr;