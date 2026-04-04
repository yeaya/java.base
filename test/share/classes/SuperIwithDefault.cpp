#include <SuperIwithDefault.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void SuperIwithDefault::bar() {
	;
}

$Class* SuperIwithDefault::load$($String* name, bool initialize) {
	$NamedAttribute barmethodAnnotations$$$namedAttribute[] = {
		{"isDefault", 'Z', "true"},
		{"declaringClass", 'c', "LSuperIwithDefault;"},
		{}
	};
	$CompoundAttribute barmethodAnnotations$$[] = {
		{"LExpectedModel;", barmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute foomethodAnnotations$$$namedAttribute[] = {
		{"modifiers", 'I', "1025"},
		{"declaringClass", 'c', "LSuperIwithDefault;"},
		{}
	};
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LExpectedModel;", foomethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"bar", "()V", nullptr, $PUBLIC, $virtualMethod(SuperIwithDefault, bar, void), nullptr, nullptr, barmethodAnnotations$$},
		{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SuperIwithDefault, foo, void), nullptr, nullptr, foomethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"SuperIwithDefault",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SuperIwithDefault, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SuperIwithDefault);
	});
	return class$;
}

$Class* SuperIwithDefault::class$ = nullptr;