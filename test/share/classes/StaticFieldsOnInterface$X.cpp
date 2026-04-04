#include <StaticFieldsOnInterface$X.h>
#include <StaticFieldsOnInterface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StaticFieldsOnInterface$X::init$() {
}

StaticFieldsOnInterface$X::StaticFieldsOnInterface$X() {
}

$Class* StaticFieldsOnInterface$X::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StaticFieldsOnInterface$X, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StaticFieldsOnInterface$X", "StaticFieldsOnInterface", "X", $STATIC},
		{"StaticFieldsOnInterface$A", "StaticFieldsOnInterface", "A", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StaticFieldsOnInterface$X",
		"java.lang.Object",
		"StaticFieldsOnInterface$A",
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
	$loadClass(StaticFieldsOnInterface$X, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StaticFieldsOnInterface$X);
	});
	return class$;
}

$Class* StaticFieldsOnInterface$X::class$ = nullptr;