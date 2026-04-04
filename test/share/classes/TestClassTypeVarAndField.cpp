#include <TestClassTypeVarAndField.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Runnable = ::java::lang::Runnable;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void TestClassTypeVarAndField::init$() {
}

$Object* TestClassTypeVarAndField::foo() {
	return nullptr;
}

$Runnable* TestClassTypeVarAndField::foo2() {
	return nullptr;
}

$Cloneable* TestClassTypeVarAndField::foo3() {
	return nullptr;
}

$Object* TestClassTypeVarAndField::foo4() {
	return nullptr;
}

TestClassTypeVarAndField::TestClassTypeVarAndField() {
}

$Class* TestClassTypeVarAndField::load$($String* name, bool initialize) {
	$NamedAttribute field1fieldTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "T1 field"},
		{}
	};
	$NamedAttribute field1fieldTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "T2 field"},
		{}
	};
	$TypeAnnotation field1fieldTypeAnnotations$$[] = {
		{"LTypeAnno;", field1fieldTypeAnnotations$$$namedAttribute, "FIELD"},
		{"LTypeAnno2;", field1fieldTypeAnnotations$$$namedAttribute$1, "FIELD"},
		{}
	};
	$NamedAttribute field3fieldTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "Object field"},
		{}
	};
	$TypeAnnotation field3fieldTypeAnnotations$$[] = {
		{"LTypeAnno;", field3fieldTypeAnnotations$$$namedAttribute, "FIELD"},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"field1", "Ljava/lang/Object;", "TT;", 0, $field(TestClassTypeVarAndField, field1), nullptr, field1fieldTypeAnnotations$$},
		{"field2", "Ljava/lang/Object;", "TT;", 0, $field(TestClassTypeVarAndField, field2)},
		{"field3", "Ljava/lang/Object;", nullptr, 0, $field(TestClassTypeVarAndField, field3), nullptr, field3fieldTypeAnnotations$$},
		{}
	};
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "t1"},
		{}
	};
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "t2"},
		{}
	};
	$TypeAnnotation foomethodTypeAnnotations$$[] = {
		{"LTypeAnno;", foomethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN"},
		{"LTypeAnno2;", foomethodTypeAnnotations$$$namedAttribute$1, "METHOD_RETURN"},
		{}
	};
	$NamedAttribute foo2methodTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "M Runnable"},
		{}
	};
	$TypeAnnotation foo2methodTypeAnnotations$$[] = {
		{"LTypeAnno;", foo2methodTypeAnnotations$$$namedAttribute, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
		{}
	};
	$NamedAttribute foo3methodTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "K"},
		{}
	};
	$TypeAnnotation foo3methodTypeAnnotations$$[] = {
		{"LTypeAnno;", foo3methodTypeAnnotations$$$namedAttribute, "METHOD_TYPE_PARAMETER, param_index = 0"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestClassTypeVarAndField, init$, void)},
		{"foo", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(TestClassTypeVarAndField, foo, $Object*), nullptr, nullptr, nullptr, foomethodTypeAnnotations$$},
		{"foo2", "()Ljava/lang/Runnable;", "<M::Ljava/lang/Runnable;>()TM;", $PUBLIC, $virtualMethod(TestClassTypeVarAndField, foo2, $Runnable*), nullptr, nullptr, nullptr, foo2methodTypeAnnotations$$},
		{"foo3", "()Ljava/lang/Cloneable;", "<K::Ljava/lang/Cloneable;L:Ljava/lang/Object;>()TK;", $PUBLIC, $virtualMethod(TestClassTypeVarAndField, foo3, $Cloneable*), nullptr, nullptr, nullptr, foo3methodTypeAnnotations$$},
		{"foo4", "()Ljava/lang/Object;", "<L:Ljava/lang/Object;>()TL;", $PUBLIC, $virtualMethod(TestClassTypeVarAndField, foo4, $Object*)},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute[] = {
		{"value", 's', "Object1"},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "Runnable1"},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute$2[] = {
		{"value", 's', "Runnable2"},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute$3[] = {
		{"value", 's', "EE"},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute$4[] = {
		{"value", 's', "EEBound"},
		{}
	};
	$TypeAnnotation typeAnnotations$$[] = {
		{"LTypeAnno;", typeAnnotations$$$namedAttribute, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
		{"LTypeAnno;", typeAnnotations$$$namedAttribute$1, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
		{"LTypeAnno2;", typeAnnotations$$$namedAttribute$2, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
		{"LTypeAnno;", typeAnnotations$$$namedAttribute$3, "CLASS_TYPE_PARAMETER, param_index = 1"},
		{"LTypeAnno2;", typeAnnotations$$$namedAttribute$4, "CLASS_TYPE_PARAMETER_BOUND, param_index = 1, bound_index = 1"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"TestClassTypeVarAndField",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;:Ljava/lang/Runnable;EE::Ljava/lang/Runnable;V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		nullptr,
		typeAnnotations$$
	};
	$loadClass(TestClassTypeVarAndField, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestClassTypeVarAndField);
	});
	return class$;
}

$Class* TestClassTypeVarAndField::class$ = nullptr;