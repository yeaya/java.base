#include <TestParameterizedTypeA.h>
#include <ParameterizedOuter$ParameterizedInner.h>
#include <TypeAnno.h>
#include <jcpp.h>

using $ParameterizedOuter$ParameterizedInner = ::ParameterizedOuter$ParameterizedInner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void TestParameterizedTypeA::init$() {
}

$ParameterizedOuter$ParameterizedInner* TestParameterizedTypeA::foo() {
	return nullptr;
}

$ParameterizedOuter$ParameterizedInner* TestParameterizedTypeA::foo2() {
	return nullptr;
}

TestParameterizedTypeA::TestParameterizedTypeA() {
}

$Class* TestParameterizedTypeA::load$($String* name, bool initialize) {
	$NamedAttribute theFieldfieldTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "FieldInner"},
		{}
	};
	$NamedAttribute theFieldfieldTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "String Arg"},
		{}
	};
	$NamedAttribute theFieldfieldTypeAnnotations$$$namedAttribute$2[] = {
		{"value", 's', "Map Arg"},
		{}
	};
	$NamedAttribute theFieldfieldTypeAnnotations$$$namedAttribute$3[] = {
		{"value", 's', "FieldOuter"},
		{}
	};
	$TypeAnnotation theFieldfieldTypeAnnotations$$[] = {
		{"LTypeAnno;", theFieldfieldTypeAnnotations$$$namedAttribute, "FIELD, location = (INNER_TYPE)"},
		{"LTypeAnno2;", theFieldfieldTypeAnnotations$$$namedAttribute$1, "FIELD, location = (TYPE_ARGUMENT(0))"},
		{"LTypeAnno2;", theFieldfieldTypeAnnotations$$$namedAttribute$2, "FIELD, location = (INNER_TYPE,TYPE_ARGUMENT(0))"},
		{"LTypeAnno;", theFieldfieldTypeAnnotations$$$namedAttribute$3, "FIELD"},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"theField", "LParameterizedOuter$ParameterizedInner;", "LParameterizedOuter<Ljava/lang/String;>.ParameterizedInner<Ljava/util/Map;>;", $PUBLIC, $field(TestParameterizedTypeA, theField), nullptr, theFieldfieldTypeAnnotations$$},
		{}
	};
	$NamedAttribute foo2methodTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "I"},
		{}
	};
	$NamedAttribute foo2methodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "S1"},
		{}
	};
	$NamedAttribute foo2methodTypeAnnotations$$$namedAttribute$2[] = {
		{"value", 's', "S2"},
		{}
	};
	$NamedAttribute foo2methodTypeAnnotations$$$namedAttribute$3[] = {
		{"value", 's', "I1"},
		{}
	};
	$NamedAttribute foo2methodTypeAnnotations$$$namedAttribute$4[] = {
		{"value", 's', "I2"},
		{}
	};
	$NamedAttribute foo2methodTypeAnnotations$$$namedAttribute$5[] = {
		{"value", 's', "O"},
		{}
	};
	$TypeAnnotation foo2methodTypeAnnotations$$[] = {
		{"LTypeAnno;", foo2methodTypeAnnotations$$$namedAttribute, "METHOD_RETURN, location = (INNER_TYPE)"},
		{"LTypeAnno;", foo2methodTypeAnnotations$$$namedAttribute$1, "METHOD_RETURN, location = (TYPE_ARGUMENT(0))"},
		{"LTypeAnno2;", foo2methodTypeAnnotations$$$namedAttribute$2, "METHOD_RETURN, location = (TYPE_ARGUMENT(0))"},
		{"LTypeAnno;", foo2methodTypeAnnotations$$$namedAttribute$3, "METHOD_RETURN, location = (INNER_TYPE,TYPE_ARGUMENT(0))"},
		{"LTypeAnno2;", foo2methodTypeAnnotations$$$namedAttribute$4, "METHOD_RETURN, location = (INNER_TYPE,TYPE_ARGUMENT(0))"},
		{"LTypeAnno;", foo2methodTypeAnnotations$$$namedAttribute$5, "METHOD_RETURN"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestParameterizedTypeA, init$, void)},
		{"foo", "()LParameterizedOuter$ParameterizedInner;", "()LParameterizedOuter<Ljava/lang/String;>.ParameterizedInner<Ljava/lang/Integer;>;", $PUBLIC, $virtualMethod(TestParameterizedTypeA, foo, $ParameterizedOuter$ParameterizedInner*)},
		{"foo2", "()LParameterizedOuter$ParameterizedInner;", "()LParameterizedOuter<Ljava/lang/String;>.ParameterizedInner<Ljava/lang/Integer;>;", $PUBLIC, $virtualMethod(TestParameterizedTypeA, foo2, $ParameterizedOuter$ParameterizedInner*), nullptr, nullptr, nullptr, foo2methodTypeAnnotations$$},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute[] = {
		{"value", 's', "M"},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "S"},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute$2[] = {
		{"value", 's', "I"},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute$3[] = {
		{"value", 's', "I2"},
		{}
	};
	$TypeAnnotation typeAnnotations$$[] = {
		{"LTypeAnno;", typeAnnotations$$$namedAttribute, "CLASS_EXTENDS, type_index = 0"},
		{"LTypeAnno;", typeAnnotations$$$namedAttribute$1, "CLASS_EXTENDS, type_index = 0, location = (TYPE_ARGUMENT(0))"},
		{"LTypeAnno;", typeAnnotations$$$namedAttribute$2, "CLASS_EXTENDS, type_index = 0, location = (TYPE_ARGUMENT(1))"},
		{"LTypeAnno2;", typeAnnotations$$$namedAttribute$3, "CLASS_EXTENDS, type_index = 0, location = (TYPE_ARGUMENT(1))"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"TestParameterizedTypeA",
		"java.lang.Object",
		"java.util.Map",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;",
		nullptr,
		nullptr,
		nullptr,
		typeAnnotations$$
	};
	$loadClass(TestParameterizedTypeA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestParameterizedTypeA);
	});
	return class$;
}

$Class* TestParameterizedTypeA::class$ = nullptr;