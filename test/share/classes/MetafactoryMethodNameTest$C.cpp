#include <MetafactoryMethodNameTest$C.h>
#include <MetafactoryMethodNameTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MetafactoryMethodNameTest$C::init$() {
}

void MetafactoryMethodNameTest$C::m() {
}

MetafactoryMethodNameTest$C::MetafactoryMethodNameTest$C() {
}

$Class* MetafactoryMethodNameTest$C::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetafactoryMethodNameTest$C, init$, void)},
		{"m", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(MetafactoryMethodNameTest$C, m, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetafactoryMethodNameTest$C", "MetafactoryMethodNameTest", "C", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MetafactoryMethodNameTest$C",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"MetafactoryMethodNameTest"
	};
	$loadClass(MetafactoryMethodNameTest$C, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetafactoryMethodNameTest$C);
	});
	return class$;
}

$Class* MetafactoryMethodNameTest$C::class$ = nullptr;