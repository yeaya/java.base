#include <MetafactoryParameterCastTest$A.h>
#include <MetafactoryParameterCastTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MetafactoryParameterCastTest$A::init$() {
}

MetafactoryParameterCastTest$A::MetafactoryParameterCastTest$A() {
}

$Class* MetafactoryParameterCastTest$A::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetafactoryParameterCastTest$A, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetafactoryParameterCastTest$A", "MetafactoryParameterCastTest", "A", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MetafactoryParameterCastTest$A",
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
		"MetafactoryParameterCastTest"
	};
	$loadClass(MetafactoryParameterCastTest$A, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetafactoryParameterCastTest$A);
	});
	return class$;
}

$Class* MetafactoryParameterCastTest$A::class$ = nullptr;