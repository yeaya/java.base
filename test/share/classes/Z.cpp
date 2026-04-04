#include <Z.h>
#include <jcpp.h>

#undef Z

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Z::init$() {
}

void Z::main($StringArray* argv) {
	$nc($System::out)->println("Hello world."_s);
}

Z::Z() {
}

$Class* Z::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Z, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Z, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Z",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Z, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Z);
	});
	return class$;
}

$Class* Z::class$ = nullptr;