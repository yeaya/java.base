#include <TypeVariableBoundParameterIndex.h>

#include <TypeVariableBoundParameterIndex$Sample.h>
#include <TypeVariableBoundParameterIndex$TypeAnnotation.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedParameterizedType.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotatedParameterizedType = ::java::lang::reflect::AnnotatedParameterizedType;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $TypeVariable = ::java::lang::reflect::TypeVariable;

$MethodInfo _TypeVariableBoundParameterIndex_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TypeVariableBoundParameterIndex::*)()>(&TypeVariableBoundParameterIndex::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TypeVariableBoundParameterIndex::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TypeVariableBoundParameterIndex_InnerClassesInfo_[] = {
	{"TypeVariableBoundParameterIndex$Sample", "TypeVariableBoundParameterIndex", "Sample", $STATIC},
	{"TypeVariableBoundParameterIndex$TypeAnnotation", "TypeVariableBoundParameterIndex", "TypeAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _TypeVariableBoundParameterIndex_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TypeVariableBoundParameterIndex",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TypeVariableBoundParameterIndex_MethodInfo_,
	nullptr,
	nullptr,
	_TypeVariableBoundParameterIndex_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TypeVariableBoundParameterIndex$Sample,TypeVariableBoundParameterIndex$TypeAnnotation"
};

$Object* allocate$TypeVariableBoundParameterIndex($Class* clazz) {
	return $of($alloc(TypeVariableBoundParameterIndex));
}

void TypeVariableBoundParameterIndex::init$() {
}

void TypeVariableBoundParameterIndex::main($StringArray* args) {
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
		if ($nc(annotations)->length != 1 || $nc($nc(annotations)->get(0))->annotationType() != $TypeVariableBoundParameterIndex$TypeAnnotation::class$) {
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
	$loadClass(TypeVariableBoundParameterIndex, name, initialize, &_TypeVariableBoundParameterIndex_ClassInfo_, allocate$TypeVariableBoundParameterIndex);
	return class$;
}

$Class* TypeVariableBoundParameterIndex::class$ = nullptr;