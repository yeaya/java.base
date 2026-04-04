#include <BB.h>
#include <AB.h>
#include <jcpp.h>

#undef BB

using $AB = ::AB;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void BB::init$() {
	$AB::init$();
}

BB::BB() {
}

$Class* BB::load$($String* name, bool initialize) {
	$NamedAttribute barmethodAnnotations$$$namedAttribute[] = {
		{"modifiers", 'I', "1025"},
		{"declaringClass", 'c', "LBB;"},
		{}
	};
	$CompoundAttribute barmethodAnnotations$$[] = {
		{"LExpectedModel;", barmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BB, init$, void)},
		{"bar", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BB, bar, void), nullptr, nullptr, barmethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"BB",
		"AB",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BB, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BB);
	});
	return class$;
}

$Class* BB::class$ = nullptr;