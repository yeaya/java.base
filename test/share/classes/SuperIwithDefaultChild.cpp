#include <SuperIwithDefaultChild.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void SuperIwithDefaultChild::init$() {
}

void SuperIwithDefaultChild::foo() {
	;
}

SuperIwithDefaultChild::SuperIwithDefaultChild() {
}

$Class* SuperIwithDefaultChild::load$($String* name, bool initialize) {
	$NamedAttribute foomethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LSuperIwithDefaultChild;"},
		{}
	};
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LExpectedModel;", foomethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SuperIwithDefaultChild, init$, void)},
		{"foo", "()V", nullptr, $PUBLIC, $virtualMethod(SuperIwithDefaultChild, foo, void), nullptr, nullptr, foomethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SuperIwithDefaultChild",
		"java.lang.Object",
		"SuperIwithDefault",
		nullptr,
		methodInfos$$
	};
	$loadClass(SuperIwithDefaultChild, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SuperIwithDefaultChild);
	});
	return class$;
}

$Class* SuperIwithDefaultChild::class$ = nullptr;