#include <B1B.h>
#include <A1B.h>
#include <jcpp.h>

#undef B1B

using $A1B = ::A1B;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void B1B::init$() {
	$A1B::init$();
}

void B1B::foo() {
	;
}

void B1B::baz() {
}

B1B::B1B() {
}

$Class* B1B::load$($String* name, bool initialize) {
	$NamedAttribute bazmethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LB1B;"},
		{}
	};
	$CompoundAttribute bazmethodAnnotations$$[] = {
		{"LExpectedModel;", bazmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute foomethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LB1B;"},
		{}
	};
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LExpectedModel;", foomethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(B1B, init$, void)},
		{"baz", "()V", nullptr, $PUBLIC, $virtualMethod(B1B, baz, void), nullptr, nullptr, bazmethodAnnotations$$},
		{"foo", "()V", nullptr, $PUBLIC, $virtualMethod(B1B, foo, void), nullptr, nullptr, foomethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"B1B",
		"A1B",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(B1B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B1B);
	});
	return class$;
}

$Class* B1B::class$ = nullptr;