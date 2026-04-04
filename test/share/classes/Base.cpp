#include <Base.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void Base::init$() {
}

void Base::quux() {
	;
}

Base::Base() {
}

$Class* Base::load$($String* name, bool initialize) {
	$NamedAttribute bazmethodAnnotations$$$namedAttribute[] = {
		{"modifiers", 'I', "1025"},
		{"declaringClass", 'c', "LBase;"},
		{}
	};
	$CompoundAttribute bazmethodAnnotations$$[] = {
		{"LExpectedModel;", bazmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute quuxmethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LBase;"},
		{}
	};
	$CompoundAttribute quuxmethodAnnotations$$[] = {
		{"LExpectedModel;", quuxmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Base, init$, void)},
		{"baz", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Base, baz, void), nullptr, nullptr, bazmethodAnnotations$$},
		{"quux", "()V", nullptr, $PUBLIC, $virtualMethod(Base, quux, void), nullptr, nullptr, quuxmethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"Base",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Base, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Base);
	});
	return class$;
}

$Class* Base::class$ = nullptr;