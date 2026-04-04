#include <TypeAnnotationReflection.h>
#include <Params.h>
#include <TestClassArray.h>
#include <TestClassException.h>
#include <TestClassNested.h>
#include <TestClassTypeVarAndField.h>
#include <TestParameterizedTypeA.h>
#include <TestWildcardType.h>
#include <TypeAnno.h>
#include <TypeAnno2.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedArrayType.h>
#include <java/lang/reflect/AnnotatedParameterizedType.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/AnnotatedTypeVariable.h>
#include <java/lang/reflect/AnnotatedWildcardType.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Parameter.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <jcpp.h>

using $Params = ::Params;
using $TestClassArray = ::TestClassArray;
using $TestClassException = ::TestClassException;
using $TestClassNested = ::TestClassNested;
using $TestClassTypeVarAndField = ::TestClassTypeVarAndField;
using $TestParameterizedTypeA = ::TestParameterizedTypeA;
using $TestWildcardType = ::TestWildcardType;
using $TypeAnno = ::TypeAnno;
using $TypeAnno2 = ::TypeAnno2;
using $TypeAnno2Array = $Array<TypeAnno2>;
using $TypeAnnoArray = $Array<TypeAnno>;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $ParameterArray = $Array<::java::lang::reflect::Parameter>;
using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AnnotatedArrayType = ::java::lang::reflect::AnnotatedArrayType;
using $AnnotatedParameterizedType = ::java::lang::reflect::AnnotatedParameterizedType;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $AnnotatedTypeVariable = ::java::lang::reflect::AnnotatedTypeVariable;
using $AnnotatedWildcardType = ::java::lang::reflect::AnnotatedWildcardType;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;

void TypeAnnotationReflection::init$() {
}

void TypeAnnotationReflection::main($StringArray* args) {
	testSuper();
	testInterfaces();
	testReturnType();
	testNested();
	testArray();
	testRunException();
	testClassTypeVarBounds();
	testMethodTypeVarBounds();
	testFields();
	testClassTypeVar();
	testMethodTypeVar();
	testParameterizedType();
	testNestedParameterizedType();
	testWildcardType();
	testParameterTypes();
	testParameterType();
}

void TypeAnnotationReflection::check(bool b) {
	if (!b) {
		$throwNew($RuntimeException);
	}
}

void TypeAnnotationReflection::testSuper() {
	$useLocalObjectStack();
	check($Object::class$->getAnnotatedSuperclass() == nullptr);
	check($nc($($$nc($Class::class$->getAnnotatedSuperclass())->getAnnotations()))->length == 0);
	$var($AnnotatedType, a, nullptr);
	$load($TestClassArray);
	$assign(a, $TestClassArray::class$->getAnnotatedSuperclass());
	$var($AnnotationArray, annos, $nc(a)->getAnnotations());
	check($nc(annos)->length == 2);
	$load($TypeAnno);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	$load($TypeAnno2);
	check($nc($nc(annos->get(1))->annotationType())->equals($TypeAnno2::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("extends"_s));
	check($$nc($nc($cast($TypeAnno2, annos->get(1)))->value())->equals("extends2"_s));
}

void TypeAnnotationReflection::testInterfaces() {
	$useLocalObjectStack();
	$var($AnnotatedTypeArray, as, nullptr);
	$load($TestClassArray);
	$assign(as, $TestClassArray::class$->getAnnotatedInterfaces());
	check($nc(as)->length == 3);
	check($nc($($nc(as->get(1))->getAnnotations()))->length == 0);
	$var($AnnotationArray, annos, nullptr);
	$assign(annos, $nc(as->get(0))->getAnnotations());
	check($nc(annos)->length == 2);
	$load($TypeAnno);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	$load($TypeAnno2);
	check($nc($nc(annos->get(1))->annotationType())->equals($TypeAnno2::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("implements serializable"_s));
	check($$nc($nc($cast($TypeAnno2, annos->get(1)))->value())->equals("implements2 serializable"_s));
	$assign(annos, $nc(as->get(2))->getAnnotations());
	check($nc(annos)->length == 2);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	check($nc($nc(annos->get(1))->annotationType())->equals($TypeAnno2::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("implements cloneable"_s));
	check($$nc($nc($cast($TypeAnno2, annos->get(1)))->value())->equals("implements2 cloneable"_s));
}

void TypeAnnotationReflection::testReturnType() {
	$useLocalObjectStack();
	$load(TypeAnnotationReflection);
	$beforeCallerSensitive();
	$load($TestClassArray);
	$var($Method, m, $TestClassArray::class$->getDeclaredMethod("foo"_s, ($ClassArray*)nullptr));
	$var($AnnotationArray, annos, $$nc($nc(m)->getAnnotatedReturnType())->getAnnotations());
	check($nc(annos)->length == 1);
	$load($TypeAnno);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("return1"_s));
}

void TypeAnnotationReflection::testNested() {
	$useLocalObjectStack();
	$load(TypeAnnotationReflection);
	$beforeCallerSensitive();
	$load($TestClassNested);
	$var($Method, m, $TestClassNested::class$->getDeclaredMethod("foo"_s, ($ClassArray*)nullptr));
	$var($AnnotationArray, annos, $$nc($nc(m)->getAnnotatedReturnType())->getAnnotations());
	check($nc(annos)->length == 1);
	$load($TypeAnno);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("array"_s));
	$var($AnnotatedType, t, m->getAnnotatedReturnType());
	$assign(t, $nc($cast($AnnotatedArrayType, t))->getAnnotatedGenericComponentType());
	$assign(annos, $nc(t)->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("Inner"_s));
}

void TypeAnnotationReflection::testArray() {
	$useLocalObjectStack();
	$load(TypeAnnotationReflection);
	$beforeCallerSensitive();
	$load($TestClassArray);
	$var($Method, m, $TestClassArray::class$->getDeclaredMethod("foo"_s, ($ClassArray*)nullptr));
	$var($AnnotatedArrayType, t, $cast($AnnotatedArrayType, $nc(m)->getAnnotatedReturnType()));
	$var($AnnotationArray, annos, $nc(t)->getAnnotations());
	check($nc(annos)->length == 1);
	$load($TypeAnno);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("return1"_s));
	$assign(t, $cast($AnnotatedArrayType, t->getAnnotatedGenericComponentType()));
	$assign(annos, $nc(t)->getAnnotations());
	check($nc(annos)->length == 0);
	$assign(t, $cast($AnnotatedArrayType, t->getAnnotatedGenericComponentType()));
	$assign(annos, $nc(t)->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("return3"_s));
	$var($AnnotatedType, tt, t->getAnnotatedGenericComponentType());
	check(!($instanceOf($AnnotatedArrayType, tt)));
	$assign(annos, $nc(tt)->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("return4"_s));
}

void TypeAnnotationReflection::testRunException() {
	$useLocalObjectStack();
	$load(TypeAnnotationReflection);
	$beforeCallerSensitive();
	$load($TestClassException);
	$var($Method, m, $TestClassException::class$->getDeclaredMethod("foo"_s, ($ClassArray*)nullptr));
	$var($AnnotatedTypeArray, ts, $nc(m)->getAnnotatedExceptionTypes());
	check($nc(ts)->length == 3);
	$var($AnnotatedType, t, nullptr);
	$var($AnnotationArray, annos, nullptr);
	$assign(t, ts->get(0));
	$assign(annos, $nc(t)->getAnnotations());
	check($nc(annos)->length == 2);
	$load($TypeAnno);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	$load($TypeAnno2);
	check($nc($nc(annos->get(1))->annotationType())->equals($TypeAnno2::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("RE"_s));
	check($$nc($nc($cast($TypeAnno2, annos->get(1)))->value())->equals("RE2"_s));
	$assign(t, ts->get(1));
	$assign(annos, $nc(t)->getAnnotations());
	check($nc(annos)->length == 0);
	$assign(t, ts->get(2));
	$assign(annos, $nc(t)->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("AIOOBE"_s));
}

void TypeAnnotationReflection::testClassTypeVarBounds() {
	$useLocalObjectStack();
	$load(TypeAnnotationReflection);
	$beforeCallerSensitive();
	$load($TestClassTypeVarAndField);
	$var($Method, m, $TestClassTypeVarAndField::class$->getDeclaredMethod("foo"_s, ($ClassArray*)nullptr));
	$var($AnnotatedType, ret, $nc(m)->getAnnotatedReturnType());
	$var($AnnotationArray, annos, $nc(ret)->getAnnotations());
	check($nc(annos)->length == 2);
	$var($AnnotatedTypeArray, annotatedBounds, $cast($AnnotatedTypeVariable, ret)->getAnnotatedBounds());
	check($nc(annotatedBounds)->length == 2);
	$assign(annos, $nc(annotatedBounds->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	$load($TypeAnno);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("Object1"_s));
	$assign(annos, $nc(annotatedBounds->get(1))->getAnnotations());
	check($nc(annos)->length == 2);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	$load($TypeAnno2);
	check($nc($nc(annos->get(1))->annotationType())->equals($TypeAnno2::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("Runnable1"_s));
	check($$nc($nc($cast($TypeAnno2, annos->get(1)))->value())->equals("Runnable2"_s));
}

void TypeAnnotationReflection::testMethodTypeVarBounds() {
	$useLocalObjectStack();
	$load(TypeAnnotationReflection);
	$beforeCallerSensitive();
	$load($TestClassTypeVarAndField);
	$var($Method, m2, $TestClassTypeVarAndField::class$->getDeclaredMethod("foo2"_s, ($ClassArray*)nullptr));
	$var($AnnotatedType, ret2, $nc(m2)->getAnnotatedReturnType());
	$var($AnnotatedTypeArray, annotatedBounds2, $nc($cast($AnnotatedTypeVariable, ret2))->getAnnotatedBounds());
	check($nc(annotatedBounds2)->length == 1);
	$var($AnnotationArray, annos, $nc(annotatedBounds2->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	$load($TypeAnno);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("M Runnable"_s));
	$var($Method, m4, $TestClassTypeVarAndField::class$->getDeclaredMethod("foo4"_s, ($ClassArray*)nullptr));
	$var($AnnotatedType, ret4, $nc(m4)->getAnnotatedReturnType());
	$var($AnnotatedTypeArray, annotatedBounds4, $nc($cast($AnnotatedTypeVariable, ret4))->getAnnotatedBounds());
	check($nc(annotatedBounds4)->length == 1);
	$assign(annos, $nc(annotatedBounds4->get(0))->getAnnotations());
	check($nc(annos)->length == 0);
	check($$nc($nc(annotatedBounds4->get(0))->getType())->equals($Object::class$));
}

void TypeAnnotationReflection::testFields() {
	$useLocalObjectStack();
	$load(TypeAnnotationReflection);
	$beforeCallerSensitive();
	$load($TestClassTypeVarAndField);
	$var($Field, f1, $TestClassTypeVarAndField::class$->getDeclaredField("field1"_s));
	$var($AnnotatedType, at, nullptr);
	$var($AnnotationArray, annos, nullptr);
	$assign(at, $nc(f1)->getAnnotatedType());
	$assign(annos, $nc(at)->getAnnotations());
	check($nc(annos)->length == 2);
	$load($TypeAnno);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	$load($TypeAnno2);
	check($nc($nc(annos->get(1))->annotationType())->equals($TypeAnno2::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("T1 field"_s));
	check($$nc($nc($cast($TypeAnno2, annos->get(1)))->value())->equals("T2 field"_s));
	$var($Field, f2, $TestClassTypeVarAndField::class$->getDeclaredField("field2"_s));
	$assign(at, $nc(f2)->getAnnotatedType());
	$assign(annos, $nc(at)->getAnnotations());
	check($nc(annos)->length == 0);
	$var($Field, f3, $TestClassTypeVarAndField::class$->getDeclaredField("field3"_s));
	$assign(at, $nc(f3)->getAnnotatedType());
	$assign(annos, $nc(at)->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("Object field"_s));
}

void TypeAnnotationReflection::testClassTypeVar() {
	$useLocalObjectStack();
	$load($TestClassTypeVarAndField);
	$var($TypeVariableArray, typeVars, $TestClassTypeVarAndField::class$->getTypeParameters());
	$var($AnnotationArray, annos, nullptr);
	check($nc(typeVars)->length == 3);
	$var($AnnotatedTypeArray, annotatedBounds, $nc(typeVars->get(0))->getAnnotatedBounds());
	check($nc(annotatedBounds)->length == 2);
	$assign(annos, $nc(annotatedBounds->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	$load($TypeAnno);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("Object1"_s));
	$assign(annos, $nc(annotatedBounds->get(1))->getAnnotations());
	check($nc(annos)->length == 2);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	$load($TypeAnno2);
	check($nc($nc(annos->get(1))->annotationType())->equals($TypeAnno2::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("Runnable1"_s));
	check($$nc($nc($cast($TypeAnno2, annos->get(1)))->value())->equals("Runnable2"_s));
	$var($AnnotationArray, regularAnnos, $nc(typeVars->get(1))->getAnnotations());
	check($nc(regularAnnos)->length == 1);
	check($$nc($$sure($TypeAnno, $nc(typeVars->get(1))->getAnnotation($TypeAnno::class$))->value())->equals("EE"_s));
	$assign(annotatedBounds, $nc(typeVars->get(1))->getAnnotatedBounds());
	check($nc(annotatedBounds)->length == 1);
	$assign(annos, $nc(annotatedBounds->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno2::class$));
	check($$nc($nc($cast($TypeAnno2, annos->get(0)))->value())->equals("EEBound"_s));
	$assign(annotatedBounds, $nc(typeVars->get(2))->getAnnotatedBounds());
	check($nc(annotatedBounds)->length == 1);
	$assign(annos, $nc(annotatedBounds->get(0))->getAnnotations());
	check($nc(annos)->length == 0);
	check($$nc($nc(annotatedBounds->get(0))->getType())->equals($Object::class$));
}

void TypeAnnotationReflection::testMethodTypeVar() {
	$useLocalObjectStack();
	$load(TypeAnnotationReflection);
	$beforeCallerSensitive();
	$load($TestClassTypeVarAndField);
	$var($Method, m2, $TestClassTypeVarAndField::class$->getDeclaredMethod("foo2"_s, ($ClassArray*)nullptr));
	$var($TypeVariableArray, t, $nc(m2)->getTypeParameters());
	check($nc(t)->length == 1);
	$var($AnnotationArray, annos, $nc(t->get(0))->getAnnotations());
	check($nc(annos)->length == 0);
	$var($AnnotatedTypeArray, annotatedBounds2, $nc(t->get(0))->getAnnotatedBounds());
	check($nc(annotatedBounds2)->length == 1);
	$assign(annos, $nc(annotatedBounds2->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	$load($TypeAnno);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("M Runnable"_s));
	$assign(m2, $TestClassTypeVarAndField::class$->getDeclaredMethod("foo3"_s, ($ClassArray*)nullptr));
	$assign(t, $nc(m2)->getTypeParameters());
	check($nc(t)->length == 2);
	$assign(annos, $nc(t->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($nc(annos->get(0))->annotationType())->equals($TypeAnno::class$));
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("K"_s));
	$assign(annotatedBounds2, $nc(t->get(0))->getAnnotatedBounds());
	check($nc(annotatedBounds2)->length == 1);
	$assign(annos, $nc(annotatedBounds2->get(0))->getAnnotations());
	check($nc(annos)->length == 0);
	$assign(annotatedBounds2, $nc(t->get(1))->getAnnotatedBounds());
	check($nc(annotatedBounds2)->length == 1);
	check($$nc($nc(annotatedBounds2->get(0))->getType())->equals($Object::class$));
	$assign(annos, $nc(annotatedBounds2->get(0))->getAnnotations());
	check($nc(annos)->length == 0);
}

void TypeAnnotationReflection::testParameterizedType() {
	$useLocalObjectStack();
	$var($AnnotatedTypeArray, as, nullptr);
	$load($TestParameterizedTypeA);
	$assign(as, $TestParameterizedTypeA::class$->getAnnotatedInterfaces());
	check($nc(as)->length == 1);
	check($nc($($nc(as->get(0))->getAnnotations()))->length == 1);
	$load($TypeAnno);
	check($$nc($$sure($TypeAnno, $nc(as->get(0))->getAnnotation($TypeAnno::class$))->value())->equals("M"_s));
	$var($AnnotationArray, annos, nullptr);
	$assign(as, $nc($cast($AnnotatedParameterizedType, as->get(0)))->getAnnotatedActualTypeArguments());
	check($nc(as)->length == 2);
	$assign(annos, $nc(as->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	check($$nc($$sure($TypeAnno, $nc(as->get(0))->getAnnotation($TypeAnno::class$))->value())->equals("S"_s));
	$load($TypeAnno2);
	check($nc(as->get(0))->getAnnotation($TypeAnno2::class$) == nullptr);
	$assign(annos, $nc(as->get(1))->getAnnotations());
	check($nc(annos)->length == 2);
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("I"_s));
	check($$nc($$sure($TypeAnno2, $nc(as->get(1))->getAnnotation($TypeAnno2::class$))->value())->equals("I2"_s));
}

void TypeAnnotationReflection::testNestedParameterizedType() {
	$useLocalObjectStack();
	$load(TypeAnnotationReflection);
	$beforeCallerSensitive();
	$load($TestParameterizedTypeA);
	$var($Method, m, $TestParameterizedTypeA::class$->getDeclaredMethod("foo2"_s, ($ClassArray*)nullptr));
	$var($AnnotatedType, ret, $nc(m)->getAnnotatedReturnType());
	$var($AnnotationArray, annos, nullptr);
	$assign(annos, $nc(ret)->getAnnotations());
	check($nc(annos)->length == 1);
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("I"_s));
	$var($AnnotatedTypeArray, args, $cast($AnnotatedParameterizedType, ret)->getAnnotatedActualTypeArguments());
	check($nc(args)->length == 1);
	$assign(annos, $nc(args->get(0))->getAnnotations());
	check($nc(annos)->length == 2);
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("I1"_s));
	$load($TypeAnno2);
	check($$nc($$sure($TypeAnno2, $nc(args->get(0))->getAnnotation($TypeAnno2::class$))->value())->equals("I2"_s));
	$var($Field, f, $TestParameterizedTypeA::class$->getDeclaredField("theField"_s));
	$var($AnnotatedParameterizedType, fType, $cast($AnnotatedParameterizedType, $nc(f)->getAnnotatedType()));
	$assign(args, $nc(fType)->getAnnotatedActualTypeArguments());
	check($nc(args)->length == 1);
	$assign(annos, $nc(args->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	check($$nc($nc($cast($TypeAnno2, annos->get(0)))->value())->equals("Map Arg"_s));
	check($$nc($$sure($TypeAnno2, $nc(args->get(0))->getAnnotation($TypeAnno2::class$))->value())->equals("Map Arg"_s));
	$assign(fType, $cast($AnnotatedParameterizedType, fType->getAnnotatedOwnerType()));
	$assign(args, $nc(fType)->getAnnotatedActualTypeArguments());
	check($nc(args)->length == 1);
	$assign(annos, $nc(args->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	check($$nc($nc($cast($TypeAnno2, annos->get(0)))->value())->equals("String Arg"_s));
	check($$nc($$sure($TypeAnno2, $nc(args->get(0))->getAnnotation($TypeAnno2::class$))->value())->equals("String Arg"_s));
	$assign(annos, fType->getAnnotations());
	check($nc(annos)->length == 1);
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("FieldOuter"_s));
	check($$nc($$sure($TypeAnno, fType->getAnnotation($TypeAnno::class$))->value())->equals("FieldOuter"_s));
}

void TypeAnnotationReflection::testWildcardType() {
	$useLocalObjectStack();
	$load(TypeAnnotationReflection);
	$beforeCallerSensitive();
	$load($TestWildcardType);
	$var($Method, m, $TestWildcardType::class$->getDeclaredMethod("foo"_s, ($ClassArray*)nullptr));
	$var($AnnotatedType, ret, $nc(m)->getAnnotatedReturnType());
	$var($AnnotatedTypeArray, t, nullptr);
	$assign(t, $nc($cast($AnnotatedParameterizedType, ret))->getAnnotatedActualTypeArguments());
	check($nc(t)->length == 1);
	$assign(ret, t->get(0));
	$var($Field, f, $TestWildcardType::class$->getDeclaredField("f1"_s));
	$var($AnnotatedWildcardType, w, $cast($AnnotatedWildcardType, $nc($($$sure($AnnotatedParameterizedType, $nc(f)->getAnnotatedType())->getAnnotatedActualTypeArguments()))->get(0)));
	$assign(t, $nc(w)->getAnnotatedLowerBounds());
	check($nc(t)->length == 0);
	$assign(t, w->getAnnotatedUpperBounds());
	check($nc(t)->length == 1);
	$var($AnnotationArray, annos, nullptr);
	$assign(annos, $nc(t->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	check($$nc($nc($cast($TypeAnno, annos->get(0)))->value())->equals("2"_s));
	$assign(f, $TestWildcardType::class$->getDeclaredField("f2"_s));
	$assign(w, $cast($AnnotatedWildcardType, $nc($($$sure($AnnotatedParameterizedType, $nc(f)->getAnnotatedType())->getAnnotatedActualTypeArguments()))->get(0)));
	$assign(t, $nc(w)->getAnnotatedUpperBounds());
	check($nc(t)->length == 1);
	check($$nc($nc(t->get(0))->getType())->equals($Object::class$));
	$assign(annos, $nc(t->get(0))->getAnnotations());
	check($nc(annos)->length == 0);
	$assign(t, w->getAnnotatedLowerBounds());
	check($nc(t)->length == 1);
	$assign(f, $TestWildcardType::class$->getDeclaredField("f3"_s));
	$assign(w, $cast($AnnotatedWildcardType, $nc($($$sure($AnnotatedParameterizedType, $nc(f)->getAnnotatedType())->getAnnotatedActualTypeArguments()))->get(0)));
	$assign(t, $nc(w)->getAnnotatedUpperBounds());
	check($nc(t)->length == 1);
	check($$nc($nc(t->get(0))->getType())->equals($Object::class$));
	$assign(annos, $nc(t->get(0))->getAnnotations());
	check($nc(annos)->length == 0);
	$assign(t, w->getAnnotatedLowerBounds());
	check($nc(t)->length == 0);
}

void TypeAnnotationReflection::testParameterTypes() {
	$useLocalObjectStack();
	$load(TypeAnnotationReflection);
	$beforeCallerSensitive();
	$load($Params);
	$var($Method, m, $Params::class$->getDeclaredMethod("noParams"_s, ($ClassArray*)nullptr));
	$var($AnnotatedTypeArray, t, $nc(m)->getAnnotatedParameterTypes());
	check($nc(t)->length == 0);
	$var($ClassArray, argsArr, $new($ClassArray, {
		$String::class$,
		$String::class$,
		$String::class$
	}));
	$assign(m, $Params::class$->getDeclaredMethod("onlyAnnotated"_s, argsArr));
	$assign(t, $nc(m)->getAnnotatedParameterTypes());
	check($nc(t)->length == 3);
	check($nc($($nc(t->get(0))->getAnnotations()))->length == 1);
	$load($TypeAnno);
	check($nc(t->get(0))->getAnnotation($TypeAnno::class$) != nullptr);
	check($$nc($nc($nc(($$cast($TypeAnnoArray, $nc(t->get(0))->getAnnotationsByType($TypeAnno::class$))))->get(0))->value())->equals("1"_s));
	check($nc($($nc(t->get(1))->getAnnotations()))->length == 1);
	check($nc(t->get(1))->getAnnotation($TypeAnno::class$) != nullptr);
	check($$nc($nc($nc(($$cast($TypeAnnoArray, $nc(t->get(1))->getAnnotationsByType($TypeAnno::class$))))->get(0))->value())->equals("2"_s));
	check($nc($($nc(t->get(2))->getAnnotations()))->length == 2);
	check($nc($nc($nc($($nc(t->get(2))->getAnnotations()))->get(0))->annotationType())->equals($TypeAnno::class$));
	check($nc(t->get(2))->getAnnotation($TypeAnno::class$) != nullptr);
	$load($TypeAnno2);
	check($nc(t->get(2))->getAnnotation($TypeAnno2::class$) != nullptr);
	check($$nc($nc($nc(($$cast($TypeAnnoArray, $nc(t->get(2))->getAnnotationsByType($TypeAnno::class$))))->get(0))->value())->equals("3a"_s));
	check($$nc($nc($nc(($$cast($TypeAnno2Array, $nc(t->get(2))->getAnnotationsByType($TypeAnno2::class$))))->get(0))->value())->equals("3b"_s));
	$assign(m, $Params::class$->getDeclaredMethod("mixed"_s, argsArr));
	$assign(t, $nc(m)->getAnnotatedParameterTypes());
	check($nc(t)->length == 3);
	check($nc($($nc(t->get(0))->getAnnotations()))->length == 1);
	check($nc(t->get(0))->getAnnotation($TypeAnno::class$) != nullptr);
	check($$nc($nc($nc(($$cast($TypeAnnoArray, $nc(t->get(0))->getAnnotationsByType($TypeAnno::class$))))->get(0))->value())->equals("1"_s));
	check($nc($($nc(t->get(1))->getAnnotations()))->length == 0);
	check($nc(t->get(1))->getAnnotation($TypeAnno::class$) == nullptr);
	check($nc(t->get(1))->getAnnotation($TypeAnno2::class$) == nullptr);
	check($nc($($nc(t->get(2))->getAnnotations()))->length == 2);
	check($nc($nc($nc($($nc(t->get(2))->getAnnotations()))->get(0))->annotationType())->equals($TypeAnno::class$));
	check($nc(t->get(2))->getAnnotation($TypeAnno::class$) != nullptr);
	check($nc(t->get(2))->getAnnotation($TypeAnno2::class$) != nullptr);
	check($$nc($nc($nc(($$cast($TypeAnnoArray, $nc(t->get(2))->getAnnotationsByType($TypeAnno::class$))))->get(0))->value())->equals("3a"_s));
	check($$nc($nc($nc(($$cast($TypeAnno2Array, $nc(t->get(2))->getAnnotationsByType($TypeAnno2::class$))))->get(0))->value())->equals("3b"_s));
	$assign(m, $Params::class$->getDeclaredMethod("unAnnotated"_s, argsArr));
	$assign(t, $nc(m)->getAnnotatedParameterTypes());
	check($nc(t)->length == 3);
	check($nc($($nc(t->get(0))->getAnnotations()))->length == 0);
	check($nc(t->get(0))->getAnnotation($TypeAnno::class$) == nullptr);
	check($nc(t->get(0))->getAnnotation($TypeAnno2::class$) == nullptr);
	check($nc($($nc(t->get(1))->getAnnotations()))->length == 0);
	check($nc(t->get(1))->getAnnotation($TypeAnno::class$) == nullptr);
	check($nc(t->get(1))->getAnnotation($TypeAnno2::class$) == nullptr);
	check($nc($($nc(t->get(2))->getAnnotations()))->length == 0);
	check($nc(t->get(2))->getAnnotation($TypeAnno::class$) == nullptr);
	check($nc(t->get(2))->getAnnotation($TypeAnno2::class$) == nullptr);
}

void TypeAnnotationReflection::testParameterType() {
	$useLocalObjectStack();
	$load(TypeAnnotationReflection);
	$beforeCallerSensitive();
	$load($Params);
	$var($Method, m, $Params::class$->getDeclaredMethod("noParams"_s, ($ClassArray*)nullptr));
	$var($ParameterArray, p, $nc(m)->getParameters());
	check($nc(p)->length == 0);
	$var($ClassArray, argsArr, $new($ClassArray, {
		$String::class$,
		$String::class$,
		$String::class$
	}));
	$assign(m, $Params::class$->getDeclaredMethod("onlyAnnotated"_s, argsArr));
	$assign(p, $nc(m)->getParameters());
	check($nc(p)->length == 3);
	$var($AnnotatedType, t0, $nc(p->get(0))->getAnnotatedType());
	$var($AnnotatedType, t1, $nc(p->get(1))->getAnnotatedType());
	$var($AnnotatedType, t2, $nc(p->get(2))->getAnnotatedType());
	check($nc($($nc(t0)->getAnnotations()))->length == 1);
	$load($TypeAnno);
	check(t0->getAnnotation($TypeAnno::class$) != nullptr);
	check($$nc($nc($nc(($$cast($TypeAnnoArray, t0->getAnnotationsByType($TypeAnno::class$))))->get(0))->value())->equals("1"_s));
	check($nc($($nc(t1)->getAnnotations()))->length == 1);
	check(t1->getAnnotation($TypeAnno::class$) != nullptr);
	check($$nc($nc($nc(($$cast($TypeAnnoArray, t1->getAnnotationsByType($TypeAnno::class$))))->get(0))->value())->equals("2"_s));
	check($nc($($nc(t2)->getAnnotations()))->length == 2);
	check($nc($nc($nc($(t2->getAnnotations()))->get(0))->annotationType())->equals($TypeAnno::class$));
	check(t2->getAnnotation($TypeAnno::class$) != nullptr);
	$load($TypeAnno2);
	check(t2->getAnnotation($TypeAnno2::class$) != nullptr);
	check($$nc($nc($nc(($$cast($TypeAnnoArray, t2->getAnnotationsByType($TypeAnno::class$))))->get(0))->value())->equals("3a"_s));
	check($$nc($nc($nc(($$cast($TypeAnno2Array, t2->getAnnotationsByType($TypeAnno2::class$))))->get(0))->value())->equals("3b"_s));
	$assign(m, $Params::class$->getDeclaredMethod("mixed"_s, argsArr));
	$assign(p, $nc(m)->getParameters());
	check($nc(p)->length == 3);
	$assign(t0, $nc(p->get(0))->getAnnotatedType());
	$assign(t1, $nc(p->get(1))->getAnnotatedType());
	$assign(t2, $nc(p->get(2))->getAnnotatedType());
	check($nc($($nc(t0)->getAnnotations()))->length == 1);
	check(t0->getAnnotation($TypeAnno::class$) != nullptr);
	check($$nc($nc($nc(($$cast($TypeAnnoArray, t0->getAnnotationsByType($TypeAnno::class$))))->get(0))->value())->equals("1"_s));
	check($nc($($nc(t1)->getAnnotations()))->length == 0);
	check(t1->getAnnotation($TypeAnno::class$) == nullptr);
	check(t1->getAnnotation($TypeAnno2::class$) == nullptr);
	check($nc($($nc(t2)->getAnnotations()))->length == 2);
	check($nc($nc($nc($(t2->getAnnotations()))->get(0))->annotationType())->equals($TypeAnno::class$));
	check(t2->getAnnotation($TypeAnno::class$) != nullptr);
	check(t2->getAnnotation($TypeAnno2::class$) != nullptr);
	check($$nc($nc($nc(($$cast($TypeAnnoArray, t2->getAnnotationsByType($TypeAnno::class$))))->get(0))->value())->equals("3a"_s));
	check($$nc($nc($nc(($$cast($TypeAnno2Array, t2->getAnnotationsByType($TypeAnno2::class$))))->get(0))->value())->equals("3b"_s));
	$assign(m, $Params::class$->getDeclaredMethod("unAnnotated"_s, argsArr));
	$assign(p, $nc(m)->getParameters());
	check($nc(p)->length == 3);
	$assign(t0, $nc(p->get(0))->getAnnotatedType());
	$assign(t1, $nc(p->get(1))->getAnnotatedType());
	$assign(t2, $nc(p->get(2))->getAnnotatedType());
	check($nc($($nc(t0)->getAnnotations()))->length == 0);
	check(t0->getAnnotation($TypeAnno::class$) == nullptr);
	check(t0->getAnnotation($TypeAnno2::class$) == nullptr);
	check($nc($($nc(t1)->getAnnotations()))->length == 0);
	check(t1->getAnnotation($TypeAnno::class$) == nullptr);
	check(t1->getAnnotation($TypeAnno2::class$) == nullptr);
	check($nc($($nc(t2)->getAnnotations()))->length == 0);
	check(t2->getAnnotation($TypeAnno::class$) == nullptr);
	check(t2->getAnnotation($TypeAnno2::class$) == nullptr);
}

TypeAnnotationReflection::TypeAnnotationReflection() {
}

$Class* TypeAnnotationReflection::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TypeAnnotationReflection, init$, void)},
		{"check", "(Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, check, void, bool)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TypeAnnotationReflection, main, void, $StringArray*), "java.lang.Exception"},
		{"testArray", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testArray, void), "java.lang.Exception"},
		{"testClassTypeVar", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testClassTypeVar, void), "java.lang.Exception"},
		{"testClassTypeVarBounds", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testClassTypeVarBounds, void), "java.lang.Exception"},
		{"testFields", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testFields, void), "java.lang.Exception"},
		{"testInterfaces", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testInterfaces, void), "java.lang.Exception"},
		{"testMethodTypeVar", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testMethodTypeVar, void), "java.lang.Exception"},
		{"testMethodTypeVarBounds", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testMethodTypeVarBounds, void), "java.lang.Exception"},
		{"testNested", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testNested, void), "java.lang.Exception"},
		{"testNestedParameterizedType", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testNestedParameterizedType, void), "java.lang.Exception"},
		{"testParameterType", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testParameterType, void), "java.lang.Exception"},
		{"testParameterTypes", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testParameterTypes, void), "java.lang.Exception"},
		{"testParameterizedType", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testParameterizedType, void)},
		{"testReturnType", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testReturnType, void), "java.lang.Exception"},
		{"testRunException", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testRunException, void), "java.lang.Exception"},
		{"testSuper", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testSuper, void), "java.lang.Exception"},
		{"testWildcardType", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeAnnotationReflection, testWildcardType, void), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TypeAnnotationReflection",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TypeAnnotationReflection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeAnnotationReflection);
	});
	return class$;
}

$Class* TypeAnnotationReflection::class$ = nullptr;