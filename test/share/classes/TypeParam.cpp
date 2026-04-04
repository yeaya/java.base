#include <TypeParam.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void TypeParam::init$() {
}

void TypeParam::foo() {
}

TypeParam::TypeParam() {
}

$Class* TypeParam::load$($String* name, bool initialize) {
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "x"},
		{}
	};
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 'I', "3"},
		{}
	};
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute$2[] = {
		{"value", 's', "z"},
		{}
	};
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute$3[] = {
		{"value", 'I', "4"},
		{}
	};
	$TypeAnnotation foomethodTypeAnnotations$$[] = {
		{"LParamAnno;", foomethodTypeAnnotations$$$namedAttribute, "METHOD_TYPE_PARAMETER, param_index = 0"},
		{"LParamAnno2;", foomethodTypeAnnotations$$$namedAttribute$1, "METHOD_TYPE_PARAMETER, param_index = 0"},
		{"LParamAnno;", foomethodTypeAnnotations$$$namedAttribute$2, "METHOD_TYPE_PARAMETER, param_index = 2"},
		{"LParamAnno2;", foomethodTypeAnnotations$$$namedAttribute$3, "METHOD_TYPE_PARAMETER, param_index = 2"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TypeParam, init$, void)},
		{"foo", "()V", "<X:Ljava/lang/Object;Y:Ljava/lang/Object;Z::Ljava/lang/Cloneable;>()V", $PUBLIC, $virtualMethod(TypeParam, foo, void), nullptr, nullptr, nullptr, foomethodTypeAnnotations$$},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute[] = {
		{"value", 's', "t"},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute$1[] = {
		{"value", 'I', "1"},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute$2[] = {
		{"value", 's', "v"},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute$3[] = {
		{"value", 'I', "2"},
		{}
	};
	$TypeAnnotation typeAnnotations$$[] = {
		{"LParamAnno;", typeAnnotations$$$namedAttribute, "CLASS_TYPE_PARAMETER, param_index = 0"},
		{"LParamAnno2;", typeAnnotations$$$namedAttribute$1, "CLASS_TYPE_PARAMETER, param_index = 0"},
		{"LParamAnno;", typeAnnotations$$$namedAttribute$2, "CLASS_TYPE_PARAMETER, param_index = 2"},
		{"LParamAnno2;", typeAnnotations$$$namedAttribute$3, "CLASS_TYPE_PARAMETER, param_index = 2"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TypeParam",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;U:Ljava/lang/Object;V::Ljava/lang/Runnable;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		nullptr,
		typeAnnotations$$
	};
	$loadClass(TypeParam, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeParam);
	});
	return class$;
}

$Class* TypeParam::class$ = nullptr;