#include <BasicUnit.h>
#include <Int.h>
#include <jcpp.h>

using $Int = ::Int;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void BasicUnit::init$() {
}

$Int* BasicUnit::factory($Class* c) {
	$load(BasicUnit);
	$beforeCallerSensitive();
	return $cast($Int, $nc(c)->newInstance());
}

void BasicUnit::main($StringArray* args) {
	$load(BasicUnit);
	$beforeCallerSensitive();
	$load($Int);
	$$nc(factory($Class::forName("MyInt"_s)->asSubclass($Int::class$)))->main();
}

BasicUnit::BasicUnit() {
}

$Class* BasicUnit::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicUnit, init$, void)},
		{"factory", "(Ljava/lang/Class;)LInt;", "<T::LInt;>(Ljava/lang/Class<TT;>;)TT;", $STATIC, $staticMethod(BasicUnit, factory, $Int*, $Class*), "java.lang.Throwable"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicUnit, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BasicUnit",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicUnit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicUnit);
	});
	return class$;
}

$Class* BasicUnit::class$ = nullptr;