#include <SonSuperIwithDefault.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void SonSuperIwithDefault::bazD() {
	;
}

$Class* SonSuperIwithDefault::load$($String* name, bool initialize) {
	$NamedAttribute bazmethodAnnotations$$$namedAttribute[] = {
		{"modifiers", 'I', "1025"},
		{"declaringClass", 'c', "LSonSuperIwithDefault;"},
		{}
	};
	$CompoundAttribute bazmethodAnnotations$$[] = {
		{"LExpectedModel;", bazmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute bazDmethodAnnotations$$$namedAttribute[] = {
		{"isDefault", 'Z', "true"},
		{"declaringClass", 'c', "LSonSuperIwithDefault;"},
		{}
	};
	$CompoundAttribute bazDmethodAnnotations$$[] = {
		{"LExpectedModel;", bazDmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"baz", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SonSuperIwithDefault, baz, void), nullptr, nullptr, bazmethodAnnotations$$},
		{"bazD", "()V", nullptr, $PUBLIC, $virtualMethod(SonSuperIwithDefault, bazD, void), nullptr, nullptr, bazDmethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"SonSuperIwithDefault",
		nullptr,
		"SuperIwithDefault",
		nullptr,
		methodInfos$$
	};
	$loadClass(SonSuperIwithDefault, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SonSuperIwithDefault);
	});
	return class$;
}

$Class* SonSuperIwithDefault::class$ = nullptr;