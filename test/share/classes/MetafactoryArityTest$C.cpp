#include <MetafactoryArityTest$C.h>
#include <MetafactoryArityTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MetafactoryArityTest$C::init$() {
}

$String* MetafactoryArityTest$C::m(int32_t arg) {
	return ""_s;
}

MetafactoryArityTest$C::MetafactoryArityTest$C() {
}

$Class* MetafactoryArityTest$C::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetafactoryArityTest$C, init$, void)},
		{"m", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetafactoryArityTest$C, m, $String*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetafactoryArityTest$C", "MetafactoryArityTest", "C", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MetafactoryArityTest$C",
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
		"MetafactoryArityTest"
	};
	$loadClass(MetafactoryArityTest$C, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetafactoryArityTest$C);
	});
	return class$;
}

$Class* MetafactoryArityTest$C::class$ = nullptr;