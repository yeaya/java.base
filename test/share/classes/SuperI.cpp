#include <SuperI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* SuperI::load$($String* name, bool initialize) {
	$NamedAttribute barmethodAnnotations$$$namedAttribute[] = {
		{"modifiers", 'I', "1025"},
		{"declaringClass", 'c', "LSuperI;"},
		{}
	};
	$CompoundAttribute barmethodAnnotations$$[] = {
		{"LExpectedModel;", barmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute foomethodAnnotations$$$namedAttribute[] = {
		{"modifiers", 'I', "1025"},
		{"declaringClass", 'c', "LSuperI;"},
		{}
	};
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LExpectedModel;", foomethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"bar", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SuperI, bar, void), nullptr, nullptr, barmethodAnnotations$$},
		{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SuperI, foo, void), nullptr, nullptr, foomethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"SuperI",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SuperI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SuperI);
	});
	return class$;
}

$Class* SuperI::class$ = nullptr;