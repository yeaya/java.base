#include <SuperCchild.h>
#include <SuperC.h>
#include <jcpp.h>

using $SuperC = ::SuperC;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void SuperCchild::init$() {
	$SuperC::init$();
}

void SuperCchild::foo() {
	;
}

SuperCchild::SuperCchild() {
}

$Class* SuperCchild::load$($String* name, bool initialize) {
	$NamedAttribute foomethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LSuperCchild;"},
		{}
	};
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LExpectedModel;", foomethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SuperCchild, init$, void)},
		{"foo", "()V", nullptr, $PUBLIC, $virtualMethod(SuperCchild, foo, void), nullptr, nullptr, foomethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SuperCchild",
		"SuperC",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SuperCchild, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SuperCchild);
	});
	return class$;
}

$Class* SuperCchild::class$ = nullptr;