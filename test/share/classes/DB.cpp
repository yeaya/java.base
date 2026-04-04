#include <DB.h>
#include <jcpp.h>

#undef DB

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void DB::init$() {
}

void DB::wombat() {
}

void DB::baz() {
}

void DB::foo() {
}

void DB::quux() {
}

DB::DB() {
}

$Class* DB::load$($String* name, bool initialize) {
	$NamedAttribute bazmethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LDB;"},
		{}
	};
	$CompoundAttribute bazmethodAnnotations$$[] = {
		{"LExpectedModel;", bazmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute foomethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LDB;"},
		{}
	};
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LExpectedModel;", foomethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute quuxmethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LDB;"},
		{}
	};
	$CompoundAttribute quuxmethodAnnotations$$[] = {
		{"LExpectedModel;", quuxmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute wombatmethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LDB;"},
		{}
	};
	$CompoundAttribute wombatmethodAnnotations$$[] = {
		{"LExpectedModel;", wombatmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DB, init$, void)},
		{"baz", "()V", nullptr, $PUBLIC, $virtualMethod(DB, baz, void), nullptr, nullptr, bazmethodAnnotations$$},
		{"foo", "()V", nullptr, $PUBLIC, $virtualMethod(DB, foo, void), nullptr, nullptr, foomethodAnnotations$$},
		{"quux", "()V", nullptr, $PUBLIC, $virtualMethod(DB, quux, void), nullptr, nullptr, quuxmethodAnnotations$$},
		{"wombat", "()V", nullptr, $PUBLIC, $virtualMethod(DB, wombat, void), nullptr, nullptr, wombatmethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DB",
		"java.lang.Object",
		"GrandchildSuperIwithDefault",
		nullptr,
		methodInfos$$
	};
	$loadClass(DB, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DB));
	});
	return class$;
}

$Class* DB::class$ = nullptr;