#include <SuperC.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void SuperC::init$() {
}

void SuperC::bar() {
	;
}

SuperC::SuperC() {
}

$Class* SuperC::load$($String* name, bool initialize) {
	$NamedAttribute barmethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LSuperC;"},
		{}
	};
	$CompoundAttribute barmethodAnnotations$$[] = {
		{"LExpectedModel;", barmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute foomethodAnnotations$$$namedAttribute[] = {
		{"modifiers", 'I', "1025"},
		{"declaringClass", 'c', "LSuperC;"},
		{}
	};
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LExpectedModel;", foomethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SuperC, init$, void)},
		{"bar", "()V", nullptr, $PUBLIC, $virtualMethod(SuperC, bar, void), nullptr, nullptr, barmethodAnnotations$$},
		{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SuperC, foo, void), nullptr, nullptr, foomethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"SuperC",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SuperC, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SuperC);
	});
	return class$;
}

$Class* SuperC::class$ = nullptr;