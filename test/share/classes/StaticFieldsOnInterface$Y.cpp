#include <StaticFieldsOnInterface$Y.h>
#include <StaticFieldsOnInterface$X.h>
#include <StaticFieldsOnInterface.h>
#include <jcpp.h>

using $StaticFieldsOnInterface$X = ::StaticFieldsOnInterface$X;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StaticFieldsOnInterface$Y::init$() {
	$StaticFieldsOnInterface$X::init$();
}

StaticFieldsOnInterface$Y::StaticFieldsOnInterface$Y() {
}

$Class* StaticFieldsOnInterface$Y::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StaticFieldsOnInterface$Y, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StaticFieldsOnInterface$Y", "StaticFieldsOnInterface", "Y", $STATIC},
		{"StaticFieldsOnInterface$X", "StaticFieldsOnInterface", "X", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StaticFieldsOnInterface$Y",
		"StaticFieldsOnInterface$X",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"StaticFieldsOnInterface"
	};
	$loadClass(StaticFieldsOnInterface$Y, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StaticFieldsOnInterface$Y);
	});
	return class$;
}

$Class* StaticFieldsOnInterface$Y::class$ = nullptr;