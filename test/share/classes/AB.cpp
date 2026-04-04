#include <AB.h>
#include <jcpp.h>

#undef AB

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void AB::init$() {
}

void AB::foo() {
	;
}

AB::AB() {
}

$Class* AB::load$($String* name, bool initialize) {
	$NamedAttribute foomethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LAB;"},
		{}
	};
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LExpectedModel;", foomethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AB, init$, void)},
		{"foo", "()V", nullptr, $PUBLIC, $virtualMethod(AB, foo, void), nullptr, nullptr, foomethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AB",
		"java.lang.Object",
		"SuperIwithDefault",
		nullptr,
		methodInfos$$
	};
	$loadClass(AB, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AB);
	});
	return class$;
}

$Class* AB::class$ = nullptr;