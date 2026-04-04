#include <DaughterSuperIwithDefault.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void DaughterSuperIwithDefault::quuxD() {
	;
}

$Class* DaughterSuperIwithDefault::load$($String* name, bool initialize) {
	$NamedAttribute quuxmethodAnnotations$$$namedAttribute[] = {
		{"modifiers", 'I', "1025"},
		{"declaringClass", 'c', "LDaughterSuperIwithDefault;"},
		{}
	};
	$CompoundAttribute quuxmethodAnnotations$$[] = {
		{"LExpectedModel;", quuxmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute quuxDmethodAnnotations$$$namedAttribute[] = {
		{"isDefault", 'Z', "true"},
		{"declaringClass", 'c', "LDaughterSuperIwithDefault;"},
		{}
	};
	$CompoundAttribute quuxDmethodAnnotations$$[] = {
		{"LExpectedModel;", quuxDmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"quux", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DaughterSuperIwithDefault, quux, void), nullptr, nullptr, quuxmethodAnnotations$$},
		{"quuxD", "()V", nullptr, $PUBLIC, $virtualMethod(DaughterSuperIwithDefault, quuxD, void), nullptr, nullptr, quuxDmethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"DaughterSuperIwithDefault",
		nullptr,
		"SuperIwithDefault",
		nullptr,
		methodInfos$$
	};
	$loadClass(DaughterSuperIwithDefault, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DaughterSuperIwithDefault);
	});
	return class$;
}

$Class* DaughterSuperIwithDefault::class$ = nullptr;