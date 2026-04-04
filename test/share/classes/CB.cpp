#include <CB.h>
#include <BB.h>
#include <jcpp.h>

#undef CB

using $BB = ::BB;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void CB::init$() {
	$BB::init$();
}

void CB::bar() {
}

CB::CB() {
}

$Class* CB::load$($String* name, bool initialize) {
	$NamedAttribute barmethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LCB;"},
		{}
	};
	$CompoundAttribute barmethodAnnotations$$[] = {
		{"LExpectedModel;", barmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CB, init$, void)},
		{"bar", "()V", nullptr, $PUBLIC, $virtualMethod(CB, bar, void), nullptr, nullptr, barmethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CB",
		"BB",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CB, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CB);
	});
	return class$;
}

$Class* CB::class$ = nullptr;