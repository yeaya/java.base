#include <SuperIchild.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void SuperIchild::init$() {
}

void SuperIchild::foo() {
	;
}

void SuperIchild::bar() {
	;
}

SuperIchild::SuperIchild() {
}

$Class* SuperIchild::load$($String* name, bool initialize) {
	$NamedAttribute barmethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LSuperIchild;"},
		{}
	};
	$CompoundAttribute barmethodAnnotations$$[] = {
		{"LExpectedModel;", barmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute foomethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LSuperIchild;"},
		{}
	};
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LExpectedModel;", foomethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SuperIchild, init$, void)},
		{"bar", "()V", nullptr, $PUBLIC, $virtualMethod(SuperIchild, bar, void), nullptr, nullptr, barmethodAnnotations$$},
		{"foo", "()V", nullptr, $PUBLIC, $virtualMethod(SuperIchild, foo, void), nullptr, nullptr, foomethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SuperIchild",
		"java.lang.Object",
		"SuperI",
		nullptr,
		methodInfos$$
	};
	$loadClass(SuperIchild, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SuperIchild);
	});
	return class$;
}

$Class* SuperIchild::class$ = nullptr;