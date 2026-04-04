#include <MetafactoryParameterCastTest$NotC.h>
#include <MetafactoryParameterCastTest$B.h>
#include <MetafactoryParameterCastTest.h>
#include <jcpp.h>

using $MetafactoryParameterCastTest$B = ::MetafactoryParameterCastTest$B;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MetafactoryParameterCastTest$NotC::init$() {
	$MetafactoryParameterCastTest$B::init$();
}

MetafactoryParameterCastTest$NotC::MetafactoryParameterCastTest$NotC() {
}

$Class* MetafactoryParameterCastTest$NotC::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetafactoryParameterCastTest$NotC, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetafactoryParameterCastTest$NotC", "MetafactoryParameterCastTest", "NotC", $PUBLIC | $STATIC},
		{"MetafactoryParameterCastTest$B", "MetafactoryParameterCastTest", "B", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MetafactoryParameterCastTest$NotC",
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
	$loadClass(MetafactoryParameterCastTest$NotC, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetafactoryParameterCastTest$NotC);
	});
	return class$;
}

$Class* MetafactoryParameterCastTest$NotC::class$ = nullptr;