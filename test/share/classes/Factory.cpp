#include <Factory.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void Factory::init$() {
}

void Factory::main($StringArray* args) {
	if ($Boolean::valueOf(true) != $Boolean::TRUE) {
		$throwNew($Exception, "Truth failure"_s);
	}
	if ($Boolean::valueOf(false) != $Boolean::FALSE) {
		$throwNew($Exception, "Major fallacy"_s);
	}
}

Factory::Factory() {
}

$Class* Factory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Factory, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Factory, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Factory",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Factory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Factory);
	});
	return class$;
}

$Class* Factory::class$ = nullptr;