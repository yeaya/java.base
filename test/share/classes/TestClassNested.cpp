#include <TestClassNested.h>
#include <Outer$Inner.h>
#include <jcpp.h>

using $Outer$InnerArray = $Array<Outer$Inner>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void TestClassNested::init$() {
}

$Outer$InnerArray* TestClassNested::foo() {
	return nullptr;
}

TestClassNested::TestClassNested() {
}

$Class* TestClassNested::load$($String* name, bool initialize) {
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "array"},
		{}
	};
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "Inner"},
		{}
	};
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute$2[] = {
		{"value", 's', "Outer"},
		{}
	};
	$TypeAnnotation foomethodTypeAnnotations$$[] = {
		{"LTypeAnno;", foomethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN"},
		{"LTypeAnno;", foomethodTypeAnnotations$$$namedAttribute$1, "METHOD_RETURN, location = (ARRAY,INNER_TYPE)"},
		{"LTypeAnno;", foomethodTypeAnnotations$$$namedAttribute$2, "METHOD_RETURN, location = (ARRAY)"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestClassNested, init$, void)},
		{"foo", "()[LOuter$Inner;", nullptr, $PUBLIC, $virtualMethod(TestClassNested, foo, $Outer$InnerArray*), nullptr, nullptr, nullptr, foomethodTypeAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"TestClassNested",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestClassNested, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestClassNested);
	});
	return class$;
}

$Class* TestClassNested::class$ = nullptr;