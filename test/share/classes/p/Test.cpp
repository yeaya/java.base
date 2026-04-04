#include <p/Test.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace p {

void Test::init$() {
}

int32_t Test::count() {
	$init(Test);
	$prepareNativeStatic(count, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void Test::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$System::loadLibrary("nativeLibraryTest"_s);
	if (count() != 1) {
		$throwNew($RuntimeException, $$str({"Expected count = 1 but got "_s, $$str(count())}));
	}
}

Test::Test() {
}

$Class* Test::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test, init$, void)},
		{"count", "()I", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(Test, count, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p.Test",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Test, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test);
	});
	return class$;
}

$Class* Test::class$ = nullptr;

} // p