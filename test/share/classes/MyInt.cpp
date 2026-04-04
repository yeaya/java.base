#include <MyInt.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MyInt::init$() {
}

void MyInt::main() {
	$nc($System::out)->println("Hello, world!"_s);
}

MyInt::MyInt() {
}

$Class* MyInt::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MyInt, init$, void)},
		{"main", "()V", nullptr, $PUBLIC, $virtualMethod(MyInt, main, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MyInt",
		"java.lang.Object",
		"Int",
		nullptr,
		methodInfos$$
	};
	$loadClass(MyInt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MyInt);
	});
	return class$;
}

$Class* MyInt::class$ = nullptr;