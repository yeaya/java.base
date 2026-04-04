#include <TypeVariableBoundParameterIndex.h>
#include <TypeVariableBoundParameterIndex$Sample.h>
#include <TypeVariableBoundParameterIndex$TypeAnnotation.h>
#include <java/lang/AssertionError.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedParameterizedType.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/TypeVariable.h>
#include <jcpp.h>

using $TypeVariableBoundParameterIndex$Sample = ::TypeVariableBoundParameterIndex$Sample;
using $TypeVariableBoundParameterIndex$TypeAnnotation = ::TypeVariableBoundParameterIndex$TypeAnnotation;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedParameterizedType = ::java::lang::reflect::AnnotatedParameterizedType;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $TypeVariable = ::java::lang::reflect::TypeVariable;

void TypeVariableBoundParameterIndex::init$() {
}

void TypeVariableBoundParameterIndex::main($StringArray* args) {
	$useLocalObjectStack();
	$load($TypeVariableBoundParameterIndex$Sample);
	$var($TypeVariableArray, variables, $TypeVariableBoundParameterIndex$Sample::class$->getTypeParameters());
	for (int32_t i = 0; i < 2; ++i) {
		$var($TypeVariable, variable, $nc(variables)->get(i));
		$var($AnnotatedTypeArray, bounds, $nc(variable)->getAnnotatedBounds());
		$var($AnnotatedType, bound, $nc(bounds)->get(0));
		$var($AnnotatedParameterizedType, parameterizedType, $cast($AnnotatedParameterizedType, bound));
		$var($AnnotatedTypeArray, actualTypeArguments, $nc(parameterizedType)->getAnnotatedActualTypeArguments());
		$var($AnnotationArray, annotations, $nc($nc(actualTypeArguments)->get(0))->getAnnotations());
		$load($TypeVariableBoundParameterIndex$TypeAnnotation);
		if ($nc(annotations)->length != 1 || $nc(annotations->get(0))->annotationType() != $TypeVariableBoundParameterIndex$TypeAnnotation::class$) {
			$throwNew($AssertionError);
		}
	}
	$var($TypeVariable, variable, $nc(variables)->get(2));
	$var($AnnotatedTypeArray, bounds, $nc(variable)->getAnnotatedBounds());
	$var($AnnotatedType, bound, $nc(bounds)->get(0));
	$var($AnnotatedParameterizedType, parameterizedType, $cast($AnnotatedParameterizedType, bound));
	$var($AnnotatedTypeArray, actualTypeArguments, $nc(parameterizedType)->getAnnotatedActualTypeArguments());
	$var($AnnotationArray, annotations, $nc($nc(actualTypeArguments)->get(0))->getAnnotations());
	if ($nc(annotations)->length != 0) {
		$throwNew($AssertionError);
	}
}

TypeVariableBoundParameterIndex::TypeVariableBoundParameterIndex() {
}

$Class* TypeVariableBoundParameterIndex::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TypeVariableBoundParameterIndex, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TypeVariableBoundParameterIndex, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TypeVariableBoundParameterIndex$Sample", "TypeVariableBoundParameterIndex", "Sample", $STATIC},
		{"TypeVariableBoundParameterIndex$TypeAnnotation", "TypeVariableBoundParameterIndex", "TypeAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TypeVariableBoundParameterIndex",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TypeVariableBoundParameterIndex$Sample,TypeVariableBoundParameterIndex$TypeAnnotation"
	};
	$loadClass(TypeVariableBoundParameterIndex, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeVariableBoundParameterIndex);
	});
	return class$;
}

$Class* TypeVariableBoundParameterIndex::class$ = nullptr;