#include <MetafactoryParameterCastTest$C.h>
#include <MetafactoryParameterCastTest$B.h>
#include <MetafactoryParameterCastTest.h>
#include <jcpp.h>

using $MetafactoryParameterCastTest$B = ::MetafactoryParameterCastTest$B;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MetafactoryParameterCastTest$C::init$() {
	$MetafactoryParameterCastTest$B::init$();
}

MetafactoryParameterCastTest$C::MetafactoryParameterCastTest$C() {
}

$Class* MetafactoryParameterCastTest$C::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetafactoryParameterCastTest$C, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetafactoryParameterCastTest$C", "MetafactoryParameterCastTest", "C", $PUBLIC | $STATIC},
		{"MetafactoryParameterCastTest$B", "MetafactoryParameterCastTest", "B", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MetafactoryParameterCastTest$C",
		"MetafactoryParameterCastTest$B",
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
	$loadClass(MetafactoryParameterCastTest$C, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetafactoryParameterCastTest$C);
	});
	return class$;
}

$Class* MetafactoryParameterCastTest$C::class$ = nullptr;