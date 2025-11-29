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
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotatedArrayType = ::java::lang::reflect::AnnotatedArrayType;
using $AnnotatedParameterizedType = ::java::lang::reflect::AnnotatedParameterizedType;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $AnnotatedTypeVariable = ::java::lang::reflect::AnnotatedTypeVariable;
using $AnnotatedWildcardType = ::java::lang::reflect::AnnotatedWildcardType;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;
using $Parameter = ::java::lang::reflect::Parameter;
using $Type = ::java::lang::reflect::Type;
using $TypeVariable = ::java::lang::reflect::TypeVariable;

$MethodInfo _TypeAnnotationReflection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TypeAnnotationReflection::*)()>(&TypeAnnotationReflection::init$))},
	{"check", "(Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool)>(&TypeAnnotationReflection::check))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TypeAnnotationReflection::main)), "java.lang.Exception"},
	{"testArray", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testArray)), "java.lang.Exception"},
	{"testClassTypeVar", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testClassTypeVar)), "java.lang.Exception"},
	{"testClassTypeVarBounds", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testClassTypeVarBounds)), "java.lang.Exception"},
	{"testFields", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testFields)), "java.lang.Exception"},
	{"testInterfaces", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testInterfaces)), "java.lang.Exception"},
	{"testMethodTypeVar", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testMethodTypeVar)), "java.lang.Exception"},
	{"testMethodTypeVarBounds", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testMethodTypeVarBounds)), "java.lang.Exception"},
	{"testNested", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testNested)), "java.lang.Exception"},
	{"testNestedParameterizedType", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testNestedParameterizedType)), "java.lang.Exception"},
	{"testParameterType", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testParameterType)), "java.lang.Exception"},
	{"testParameterTypes", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testParameterTypes)), "java.lang.Exception"},
	{"testParameterizedType", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testParameterizedType))},
	{"testReturnType", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testReturnType)), "java.lang.Exception"},
	{"testRunException", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testRunException)), "java.lang.Exception"},
	{"testSuper", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testSuper)), "java.lang.Exception"},
	{"testWildcardType", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeAnnotationReflection::testWildcardType)), "java.lang.Exception"},
	{}
};

$ClassInfo _TypeAnnotationReflection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TypeAnnotationReflection",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TypeAnnotationReflection_MethodInfo_
};

$Object* allocate$TypeAnnotationReflection($Class* clazz) {
	return $of($alloc(TypeAnnotationReflection));
}

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
	$useLocalCurrentObjectStackCache();
	check($Object::class$->getAnnotatedSuperclass() == nullptr);
	check($nc($($nc($($Class::class$->getAnnotatedSuperclass()))->getAnnotations()))->length == 0);
	$var($AnnotatedType, a, nullptr);
	$load($TestClassArray);
	$assign(a, $TestClassArray::class$->getAnnotatedSuperclass());
	$var($AnnotationArray, annos, $nc(a)->getAnnotations());
	check($nc(annos)->length == 2);
	$load($TypeAnno);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	$load($TypeAnno2);
	check($nc($of($nc($nc(annos)->get(1))->annotationType()))->equals($TypeAnno2::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("extends"_s));
	check($nc($($nc(($cast($TypeAnno2, $nc(annos)->get(1))))->value()))->equals("extends2"_s));
}

void TypeAnnotationReflection::testInterfaces() {
	$useLocalCurrentObjectStackCache();
	$var($AnnotatedTypeArray, as, nullptr);
	$load($TestClassArray);
	$assign(as, $TestClassArray::class$->getAnnotatedInterfaces());
	check($nc(as)->length == 3);
	check($nc($($nc($nc(as)->get(1))->getAnnotations()))->length == 0);
	$var($AnnotationArray, annos, nullptr);
	$assign(annos, $nc($nc(as)->get(0))->getAnnotations());
	check($nc(annos)->length == 2);
	$load($TypeAnno);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	$load($TypeAnno2);
	check($nc($of($nc($nc(annos)->get(1))->annotationType()))->equals($TypeAnno2::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("implements serializable"_s));
	check($nc($($nc(($cast($TypeAnno2, $nc(annos)->get(1))))->value()))->equals("implements2 serializable"_s));
	$assign(annos, $nc(as->get(2))->getAnnotations());
	check($nc(annos)->length == 2);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($of($nc($nc(annos)->get(1))->annotationType()))->equals($TypeAnno2::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("implements cloneable"_s));
	check($nc($($nc(($cast($TypeAnno2, $nc(annos)->get(1))))->value()))->equals("implements2 cloneable"_s));
}

void TypeAnnotationReflection::testReturnType() {
	$load(TypeAnnotationReflection);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($TestClassArray);
	$var($Method, m, $TestClassArray::class$->getDeclaredMethod("foo"_s, ($ClassArray*)nullptr));
	$var($AnnotationArray, annos, $nc($($nc(m)->getAnnotatedReturnType()))->getAnnotations());
	check($nc(annos)->length == 1);
	$load($TypeAnno);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("return1"_s));
}

void TypeAnnotationReflection::testNested() {
	$load(TypeAnnotationReflection);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($TestClassNested);
	$var($Method, m, $TestClassNested::class$->getDeclaredMethod("foo"_s, ($ClassArray*)nullptr));
	$var($AnnotationArray, annos, $nc($($nc(m)->getAnnotatedReturnType()))->getAnnotations());
	check($nc(annos)->length == 1);
	$load($TypeAnno);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("array"_s));
	$var($AnnotatedType, t, m->getAnnotatedReturnType());
	$assign(t, $nc(($cast($AnnotatedArrayType, t)))->getAnnotatedGenericComponentType());
	$assign(annos, $nc(t)->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("Inner"_s));
}

void TypeAnnotationReflection::testArray() {
	$load(TypeAnnotationReflection);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($TestClassArray);
	$var($Method, m, $TestClassArray::class$->getDeclaredMethod("foo"_s, ($ClassArray*)nullptr));
	$var($AnnotatedArrayType, t, $cast($AnnotatedArrayType, $nc(m)->getAnnotatedReturnType()));
	$var($AnnotationArray, annos, $nc(t)->getAnnotations());
	check($nc(annos)->length == 1);
	$load($TypeAnno);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("return1"_s));
	$assign(t, $cast($AnnotatedArrayType, t->getAnnotatedGenericComponentType()));
	$assign(annos, t->getAnnotations());
	check($nc(annos)->length == 0);
	$assign(t, $cast($AnnotatedArrayType, t->getAnnotatedGenericComponentType()));
	$assign(annos, t->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("return3"_s));
	$var($AnnotatedType, tt, t->getAnnotatedGenericComponentType());
	check(!($instanceOf($AnnotatedArrayType, tt)));
	$assign(annos, $nc(tt)->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("return4"_s));
}

void TypeAnnotationReflection::testRunException() {
	$load(TypeAnnotationReflection);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($TestClassException);
	$var($Method, m, $TestClassException::class$->getDeclaredMethod("foo"_s, ($ClassArray*)nullptr));
	$var($AnnotatedTypeArray, ts, $nc(m)->getAnnotatedExceptionTypes());
	check($nc(ts)->length == 3);
	$var($AnnotatedType, t, nullptr);
	$var($AnnotationArray, annos, nullptr);
	$assign(t, $nc(ts)->get(0));
	$assign(annos, $nc(t)->getAnnotations());
	check($nc(annos)->length == 2);
	$load($TypeAnno);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	$load($TypeAnno2);
	check($nc($of($nc($nc(annos)->get(1))->annotationType()))->equals($TypeAnno2::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("RE"_s));
	check($nc($($nc(($cast($TypeAnno2, $nc(annos)->get(1))))->value()))->equals("RE2"_s));
	$assign(t, ts->get(1));
	$assign(annos, t->getAnnotations());
	check($nc(annos)->length == 0);
	$assign(t, ts->get(2));
	$assign(annos, t->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("AIOOBE"_s));
}

void TypeAnnotationReflection::testClassTypeVarBounds() {
	$load(TypeAnnotationReflection);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($TestClassTypeVarAndField);
	$var($Method, m, $TestClassTypeVarAndField::class$->getDeclaredMethod("foo"_s, ($ClassArray*)nullptr));
	$var($AnnotatedType, ret, $nc(m)->getAnnotatedReturnType());
	$var($AnnotationArray, annos, $nc(ret)->getAnnotations());
	check($nc(annos)->length == 2);
	$var($AnnotatedTypeArray, annotatedBounds, $nc(($cast($AnnotatedTypeVariable, ret)))->getAnnotatedBounds());
	check($nc(annotatedBounds)->length == 2);
	$assign(annos, $nc($nc(annotatedBounds)->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	$load($TypeAnno);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("Object1"_s));
	$assign(annos, $nc(annotatedBounds->get(1))->getAnnotations());
	check($nc(annos)->length == 2);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	$load($TypeAnno2);
	check($nc($of($nc($nc(annos)->get(1))->annotationType()))->equals($TypeAnno2::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("Runnable1"_s));
	check($nc($($nc(($cast($TypeAnno2, $nc(annos)->get(1))))->value()))->equals("Runnable2"_s));
}

void TypeAnnotationReflection::testMethodTypeVarBounds() {
	$load(TypeAnnotationReflection);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($TestClassTypeVarAndField);
	$var($Method, m2, $TestClassTypeVarAndField::class$->getDeclaredMethod("foo2"_s, ($ClassArray*)nullptr));
	$var($AnnotatedType, ret2, $nc(m2)->getAnnotatedReturnType());
	$var($AnnotatedTypeArray, annotatedBounds2, $nc(($cast($AnnotatedTypeVariable, ret2)))->getAnnotatedBounds());
	check($nc(annotatedBounds2)->length == 1);
	$var($AnnotationArray, annos, $nc($nc(annotatedBounds2)->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	$load($TypeAnno);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("M Runnable"_s));
	$var($Method, m4, $TestClassTypeVarAndField::class$->getDeclaredMethod("foo4"_s, ($ClassArray*)nullptr));
	$var($AnnotatedType, ret4, $nc(m4)->getAnnotatedReturnType());
	$var($AnnotatedTypeArray, annotatedBounds4, $nc(($cast($AnnotatedTypeVariable, ret4)))->getAnnotatedBounds());
	check($nc(annotatedBounds4)->length == 1);
	$assign(annos, $nc($nc(annotatedBounds4)->get(0))->getAnnotations());
	check($nc(annos)->length == 0);
	check($nc($of($($nc(annotatedBounds4->get(0))->getType())))->equals($Object::class$));
}

void TypeAnnotationReflection::testFields() {
	$load(TypeAnnotationReflection);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($TestClassTypeVarAndField);
	$var($Field, f1, $TestClassTypeVarAndField::class$->getDeclaredField("field1"_s));
	$var($AnnotatedType, at, nullptr);
	$var($AnnotationArray, annos, nullptr);
	$assign(at, $nc(f1)->getAnnotatedType());
	$assign(annos, $nc(at)->getAnnotations());
	check($nc(annos)->length == 2);
	$load($TypeAnno);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	$load($TypeAnno2);
	check($nc($of($nc($nc(annos)->get(1))->annotationType()))->equals($TypeAnno2::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("T1 field"_s));
	check($nc($($nc(($cast($TypeAnno2, $nc(annos)->get(1))))->value()))->equals("T2 field"_s));
	$var($Field, f2, $TestClassTypeVarAndField::class$->getDeclaredField("field2"_s));
	$assign(at, $nc(f2)->getAnnotatedType());
	$assign(annos, at->getAnnotations());
	check($nc(annos)->length == 0);
	$var($Field, f3, $TestClassTypeVarAndField::class$->getDeclaredField("field3"_s));
	$assign(at, $nc(f3)->getAnnotatedType());
	$assign(annos, at->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("Object field"_s));
}

void TypeAnnotationReflection::testClassTypeVar() {
	$useLocalCurrentObjectStackCache();
	$load($TestClassTypeVarAndField);
	$var($TypeVariableArray, typeVars, $TestClassTypeVarAndField::class$->getTypeParameters());
	$var($AnnotationArray, annos, nullptr);
	check($nc(typeVars)->length == 3);
	$var($AnnotatedTypeArray, annotatedBounds, $nc($nc(typeVars)->get(0))->getAnnotatedBounds());
	check($nc(annotatedBounds)->length == 2);
	$assign(annos, $nc($nc(annotatedBounds)->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	$load($TypeAnno);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("Object1"_s));
	$assign(annos, $nc(annotatedBounds->get(1))->getAnnotations());
	check($nc(annos)->length == 2);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	$load($TypeAnno2);
	check($nc($of($nc($nc(annos)->get(1))->annotationType()))->equals($TypeAnno2::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("Runnable1"_s));
	check($nc($($nc(($cast($TypeAnno2, $nc(annos)->get(1))))->value()))->equals("Runnable2"_s));
	$var($AnnotationArray, regularAnnos, $nc(typeVars->get(1))->getAnnotations());
	check($nc(regularAnnos)->length == 1);
	check($nc($($nc(($cast($TypeAnno, $($nc(typeVars->get(1))->getAnnotation($TypeAnno::class$)))))->value()))->equals("EE"_s));
	$assign(annotatedBounds, $nc(typeVars->get(1))->getAnnotatedBounds());
	check(annotatedBounds->length == 1);
	$assign(annos, $nc(annotatedBounds->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno2::class$));
	check($nc($($nc(($cast($TypeAnno2, $nc(annos)->get(0))))->value()))->equals("EEBound"_s));
	$assign(annotatedBounds, $nc(typeVars->get(2))->getAnnotatedBounds());
	check(annotatedBounds->length == 1);
	$assign(annos, $nc(annotatedBounds->get(0))->getAnnotations());
	check($nc(annos)->length == 0);
	check($nc($of($($nc(annotatedBounds->get(0))->getType())))->equals($Object::class$));
}

void TypeAnnotationReflection::testMethodTypeVar() {
	$load(TypeAnnotationReflection);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($TestClassTypeVarAndField);
	$var($Method, m2, $TestClassTypeVarAndField::class$->getDeclaredMethod("foo2"_s, ($ClassArray*)nullptr));
	$var($TypeVariableArray, t, $nc(m2)->getTypeParameters());
	check($nc(t)->length == 1);
	$var($AnnotationArray, annos, $nc($nc(t)->get(0))->getAnnotations());
	check($nc(annos)->length == 0);
	$var($AnnotatedTypeArray, annotatedBounds2, $nc(t->get(0))->getAnnotatedBounds());
	check($nc(annotatedBounds2)->length == 1);
	$assign(annos, $nc($nc(annotatedBounds2)->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	$load($TypeAnno);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("M Runnable"_s));
	$assign(m2, $TestClassTypeVarAndField::class$->getDeclaredMethod("foo3"_s, ($ClassArray*)nullptr));
	$assign(t, m2->getTypeParameters());
	check(t->length == 2);
	$assign(annos, $nc(t->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($of($nc($nc(annos)->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("K"_s));
	$assign(annotatedBounds2, $nc(t->get(0))->getAnnotatedBounds());
	check(annotatedBounds2->length == 1);
	$assign(annos, $nc(annotatedBounds2->get(0))->getAnnotations());
	check($nc(annos)->length == 0);
	$assign(annotatedBounds2, $nc(t->get(1))->getAnnotatedBounds());
	check(annotatedBounds2->length == 1);
	check($nc($of($($nc(annotatedBounds2->get(0))->getType())))->equals($Object::class$));
	$assign(annos, $nc(annotatedBounds2->get(0))->getAnnotations());
	check($nc(annos)->length == 0);
}

void TypeAnnotationReflection::testParameterizedType() {
	$useLocalCurrentObjectStackCache();
	$var($AnnotatedTypeArray, as, nullptr);
	$load($TestParameterizedTypeA);
	$assign(as, $TestParameterizedTypeA::class$->getAnnotatedInterfaces());
	check($nc(as)->length == 1);
	check($nc($($nc($nc(as)->get(0))->getAnnotations()))->length == 1);
	$load($TypeAnno);
	check($nc($($nc(($cast($TypeAnno, $($nc($nc(as)->get(0))->getAnnotation($TypeAnno::class$)))))->value()))->equals("M"_s));
	$var($AnnotationArray, annos, nullptr);
	$assign(as, $nc(($cast($AnnotatedParameterizedType, $nc(as)->get(0))))->getAnnotatedActualTypeArguments());
	check(as->length == 2);
	$assign(annos, $nc(as->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($($nc(($cast($TypeAnno, $($nc(as->get(0))->getAnnotation($TypeAnno::class$)))))->value()))->equals("S"_s));
	$load($TypeAnno2);
	check($nc(as->get(0))->getAnnotation($TypeAnno2::class$) == nullptr);
	$assign(annos, $nc(as->get(1))->getAnnotations());
	check($nc(annos)->length == 2);
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("I"_s));
	check($nc($($nc(($cast($TypeAnno2, $($nc(as->get(1))->getAnnotation($TypeAnno2::class$)))))->value()))->equals("I2"_s));
}

void TypeAnnotationReflection::testNestedParameterizedType() {
	$load(TypeAnnotationReflection);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($TestParameterizedTypeA);
	$var($Method, m, $TestParameterizedTypeA::class$->getDeclaredMethod("foo2"_s, ($ClassArray*)nullptr));
	$var($AnnotatedType, ret, $nc(m)->getAnnotatedReturnType());
	$var($AnnotationArray, annos, nullptr);
	$assign(annos, $nc(ret)->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("I"_s));
	$var($AnnotatedTypeArray, args, $nc(($cast($AnnotatedParameterizedType, ret)))->getAnnotatedActualTypeArguments());
	check($nc(args)->length == 1);
	$assign(annos, $nc($nc(args)->get(0))->getAnnotations());
	check($nc(annos)->length == 2);
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("I1"_s));
	$load($TypeAnno2);
	check($nc($($nc(($cast($TypeAnno2, $($nc(args->get(0))->getAnnotation($TypeAnno2::class$)))))->value()))->equals("I2"_s));
	$var($Field, f, $TestParameterizedTypeA::class$->getDeclaredField("theField"_s));
	$var($AnnotatedParameterizedType, fType, $cast($AnnotatedParameterizedType, $nc(f)->getAnnotatedType()));
	$assign(args, $nc(fType)->getAnnotatedActualTypeArguments());
	check(args->length == 1);
	$assign(annos, $nc(args->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($($nc(($cast($TypeAnno2, $nc(annos)->get(0))))->value()))->equals("Map Arg"_s));
	check($nc($($nc(($cast($TypeAnno2, $($nc(args->get(0))->getAnnotation($TypeAnno2::class$)))))->value()))->equals("Map Arg"_s));
	$assign(fType, $cast($AnnotatedParameterizedType, fType->getAnnotatedOwnerType()));
	$assign(args, fType->getAnnotatedActualTypeArguments());
	check(args->length == 1);
	$assign(annos, $nc(args->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($($nc(($cast($TypeAnno2, $nc(annos)->get(0))))->value()))->equals("String Arg"_s));
	check($nc($($nc(($cast($TypeAnno2, $($nc(args->get(0))->getAnnotation($TypeAnno2::class$)))))->value()))->equals("String Arg"_s));
	$assign(annos, fType->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("FieldOuter"_s));
	check($nc($($nc(($cast($TypeAnno, $(fType->getAnnotation($TypeAnno::class$)))))->value()))->equals("FieldOuter"_s));
}

void TypeAnnotationReflection::testWildcardType() {
	$load(TypeAnnotationReflection);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($TestWildcardType);
	$var($Method, m, $TestWildcardType::class$->getDeclaredMethod("foo"_s, ($ClassArray*)nullptr));
	$var($AnnotatedType, ret, $nc(m)->getAnnotatedReturnType());
	$var($AnnotatedTypeArray, t, nullptr);
	$assign(t, $nc(($cast($AnnotatedParameterizedType, ret)))->getAnnotatedActualTypeArguments());
	check($nc(t)->length == 1);
	$assign(ret, $nc(t)->get(0));
	$var($Field, f, $TestWildcardType::class$->getDeclaredField("f1"_s));
	$var($AnnotatedWildcardType, w, $cast($AnnotatedWildcardType, $nc($($nc(($cast($AnnotatedParameterizedType, $($nc(f)->getAnnotatedType()))))->getAnnotatedActualTypeArguments()))->get(0)));
	$assign(t, $nc(w)->getAnnotatedLowerBounds());
	check(t->length == 0);
	$assign(t, w->getAnnotatedUpperBounds());
	check(t->length == 1);
	$var($AnnotationArray, annos, nullptr);
	$assign(annos, $nc(t->get(0))->getAnnotations());
	check($nc(annos)->length == 1);
	check($nc($($nc(($cast($TypeAnno, $nc(annos)->get(0))))->value()))->equals("2"_s));
	$assign(f, $TestWildcardType::class$->getDeclaredField("f2"_s));
	$assign(w, $cast($AnnotatedWildcardType, $nc($($nc(($cast($AnnotatedParameterizedType, $(f->getAnnotatedType()))))->getAnnotatedActualTypeArguments()))->get(0)));
	$assign(t, w->getAnnotatedUpperBounds());
	check(t->length == 1);
	check($nc($of($($nc(t->get(0))->getType())))->equals($Object::class$));
	$assign(annos, $nc(t->get(0))->getAnnotations());
	check($nc(annos)->length == 0);
	$assign(t, w->getAnnotatedLowerBounds());
	check(t->length == 1);
	$assign(f, $TestWildcardType::class$->getDeclaredField("f3"_s));
	$assign(w, $cast($AnnotatedWildcardType, $nc($($nc(($cast($AnnotatedParameterizedType, $(f->getAnnotatedType()))))->getAnnotatedActualTypeArguments()))->get(0)));
	$assign(t, w->getAnnotatedUpperBounds());
	check(t->length == 1);
	check($nc($of($($nc(t->get(0))->getType())))->equals($Object::class$));
	$assign(annos, $nc(t->get(0))->getAnnotations());
	check($nc(annos)->length == 0);
	$assign(t, w->getAnnotatedLowerBounds());
	check(t->length == 0);
}

void TypeAnnotationReflection::testParameterTypes() {
	$load(TypeAnnotationReflection);
	$useLocalCurrentObjectStackCache();
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
	$assign(t, m->getAnnotatedParameterTypes());
	check($nc(t)->length == 3);
	check($nc($($nc($nc(t)->get(0))->getAnnotations()))->length == 1);
	$load($TypeAnno);
	check($nc($nc(t)->get(0))->getAnnotation($TypeAnno::class$) != nullptr);
	check($nc($($nc($nc(($fcast($TypeAnnoArray, $($nc($nc(t)->get(0))->getAnnotationsByType($TypeAnno::class$)))))->get(0))->value()))->equals("1"_s));
	check($nc($($nc($nc(t)->get(1))->getAnnotations()))->length == 1);
	check($nc($nc(t)->get(1))->getAnnotation($TypeAnno::class$) != nullptr);
	check($nc($($nc($nc(($fcast($TypeAnnoArray, $($nc($nc(t)->get(1))->getAnnotationsByType($TypeAnno::class$)))))->get(0))->value()))->equals("2"_s));
	check($nc($($nc($nc(t)->get(2))->getAnnotations()))->length == 2);
	check($nc($of($nc($nc($($nc($nc(t)->get(2))->getAnnotations()))->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($nc(t)->get(2))->getAnnotation($TypeAnno::class$) != nullptr);
	$load($TypeAnno2);
	check($nc($nc(t)->get(2))->getAnnotation($TypeAnno2::class$) != nullptr);
	check($nc($($nc($nc(($fcast($TypeAnnoArray, $($nc($nc(t)->get(2))->getAnnotationsByType($TypeAnno::class$)))))->get(0))->value()))->equals("3a"_s));
	check($nc($($nc($nc(($fcast($TypeAnno2Array, $($nc($nc(t)->get(2))->getAnnotationsByType($TypeAnno2::class$)))))->get(0))->value()))->equals("3b"_s));
	$assign(m, $Params::class$->getDeclaredMethod("mixed"_s, argsArr));
	$assign(t, m->getAnnotatedParameterTypes());
	check($nc(t)->length == 3);
	check($nc($($nc($nc(t)->get(0))->getAnnotations()))->length == 1);
	check($nc($nc(t)->get(0))->getAnnotation($TypeAnno::class$) != nullptr);
	check($nc($($nc($nc(($fcast($TypeAnnoArray, $($nc($nc(t)->get(0))->getAnnotationsByType($TypeAnno::class$)))))->get(0))->value()))->equals("1"_s));
	check($nc($($nc($nc(t)->get(1))->getAnnotations()))->length == 0);
	check($nc($nc(t)->get(1))->getAnnotation($TypeAnno::class$) == nullptr);
	check($nc($nc(t)->get(1))->getAnnotation($TypeAnno2::class$) == nullptr);
	check($nc($($nc($nc(t)->get(2))->getAnnotations()))->length == 2);
	check($nc($of($nc($nc($($nc($nc(t)->get(2))->getAnnotations()))->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc($nc(t)->get(2))->getAnnotation($TypeAnno::class$) != nullptr);
	check($nc($nc(t)->get(2))->getAnnotation($TypeAnno2::class$) != nullptr);
	check($nc($($nc($nc(($fcast($TypeAnnoArray, $($nc($nc(t)->get(2))->getAnnotationsByType($TypeAnno::class$)))))->get(0))->value()))->equals("3a"_s));
	check($nc($($nc($nc(($fcast($TypeAnno2Array, $($nc($nc(t)->get(2))->getAnnotationsByType($TypeAnno2::class$)))))->get(0))->value()))->equals("3b"_s));
	$assign(m, $Params::class$->getDeclaredMethod("unAnnotated"_s, argsArr));
	$assign(t, m->getAnnotatedParameterTypes());
	check($nc(t)->length == 3);
	check($nc($($nc($nc(t)->get(0))->getAnnotations()))->length == 0);
	check($nc($nc(t)->get(0))->getAnnotation($TypeAnno::class$) == nullptr);
	check($nc($nc(t)->get(0))->getAnnotation($TypeAnno2::class$) == nullptr);
	check($nc($($nc($nc(t)->get(1))->getAnnotations()))->length == 0);
	check($nc($nc(t)->get(1))->getAnnotation($TypeAnno::class$) == nullptr);
	check($nc($nc(t)->get(1))->getAnnotation($TypeAnno2::class$) == nullptr);
	check($nc($($nc($nc(t)->get(2))->getAnnotations()))->length == 0);
	check($nc($nc(t)->get(2))->getAnnotation($TypeAnno::class$) == nullptr);
	check($nc($nc(t)->get(2))->getAnnotation($TypeAnno2::class$) == nullptr);
}

void TypeAnnotationReflection::testParameterType() {
	$load(TypeAnnotationReflection);
	$useLocalCurrentObjectStackCache();
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
	$assign(p, m->getParameters());
	check($nc(p)->length == 3);
	$var($AnnotatedType, t0, $nc($nc(p)->get(0))->getAnnotatedType());
	$var($AnnotatedType, t1, $nc(p->get(1))->getAnnotatedType());
	$var($AnnotatedType, t2, $nc(p->get(2))->getAnnotatedType());
	check($nc($($nc(t0)->getAnnotations()))->length == 1);
	$load($TypeAnno);
	check($nc(t0)->getAnnotation($TypeAnno::class$) != nullptr);
	check($nc($($nc($nc(($fcast($TypeAnnoArray, $($nc(t0)->getAnnotationsByType($TypeAnno::class$)))))->get(0))->value()))->equals("1"_s));
	check($nc($($nc(t1)->getAnnotations()))->length == 1);
	check($nc(t1)->getAnnotation($TypeAnno::class$) != nullptr);
	check($nc($($nc($nc(($fcast($TypeAnnoArray, $($nc(t1)->getAnnotationsByType($TypeAnno::class$)))))->get(0))->value()))->equals("2"_s));
	check($nc($($nc(t2)->getAnnotations()))->length == 2);
	check($nc($of($nc($nc($($nc(t2)->getAnnotations()))->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc(t2)->getAnnotation($TypeAnno::class$) != nullptr);
	$load($TypeAnno2);
	check($nc(t2)->getAnnotation($TypeAnno2::class$) != nullptr);
	check($nc($($nc($nc(($fcast($TypeAnnoArray, $($nc(t2)->getAnnotationsByType($TypeAnno::class$)))))->get(0))->value()))->equals("3a"_s));
	check($nc($($nc($nc(($fcast($TypeAnno2Array, $($nc(t2)->getAnnotationsByType($TypeAnno2::class$)))))->get(0))->value()))->equals("3b"_s));
	$assign(m, $Params::class$->getDeclaredMethod("mixed"_s, argsArr));
	$assign(p, m->getParameters());
	check(p->length == 3);
	$assign(t0, $nc(p->get(0))->getAnnotatedType());
	$assign(t1, $nc(p->get(1))->getAnnotatedType());
	$assign(t2, $nc(p->get(2))->getAnnotatedType());
	check($nc($($nc(t0)->getAnnotations()))->length == 1);
	check($nc(t0)->getAnnotation($TypeAnno::class$) != nullptr);
	check($nc($($nc($nc(($fcast($TypeAnnoArray, $($nc(t0)->getAnnotationsByType($TypeAnno::class$)))))->get(0))->value()))->equals("1"_s));
	check($nc($($nc(t1)->getAnnotations()))->length == 0);
	check($nc(t1)->getAnnotation($TypeAnno::class$) == nullptr);
	check($nc(t1)->getAnnotation($TypeAnno2::class$) == nullptr);
	check($nc($($nc(t2)->getAnnotations()))->length == 2);
	check($nc($of($nc($nc($($nc(t2)->getAnnotations()))->get(0))->annotationType()))->equals($TypeAnno::class$));
	check($nc(t2)->getAnnotation($TypeAnno::class$) != nullptr);
	check($nc(t2)->getAnnotation($TypeAnno2::class$) != nullptr);
	check($nc($($nc($nc(($fcast($TypeAnnoArray, $($nc(t2)->getAnnotationsByType($TypeAnno::class$)))))->get(0))->value()))->equals("3a"_s));
	check($nc($($nc($nc(($fcast($TypeAnno2Array, $($nc(t2)->getAnnotationsByType($TypeAnno2::class$)))))->get(0))->value()))->equals("3b"_s));
	$assign(m, $Params::class$->getDeclaredMethod("unAnnotated"_s, argsArr));
	$assign(p, m->getParameters());
	check(p->length == 3);
	$assign(t0, $nc(p->get(0))->getAnnotatedType());
	$assign(t1, $nc(p->get(1))->getAnnotatedType());
	$assign(t2, $nc(p->get(2))->getAnnotatedType());
	check($nc($($nc(t0)->getAnnotations()))->length == 0);
	check($nc(t0)->getAnnotation($TypeAnno::class$) == nullptr);
	check($nc(t0)->getAnnotation($TypeAnno2::class$) == nullptr);
	check($nc($($nc(t1)->getAnnotations()))->length == 0);
	check($nc(t1)->getAnnotation($TypeAnno::class$) == nullptr);
	check($nc(t1)->getAnnotation($TypeAnno2::class$) == nullptr);
	check($nc($($nc(t2)->getAnnotations()))->length == 0);
	check($nc(t2)->getAnnotation($TypeAnno::class$) == nullptr);
	check($nc(t2)->getAnnotation($TypeAnno2::class$) == nullptr);
}

TypeAnnotationReflection::TypeAnnotationReflection() {
}

$Class* TypeAnnotationReflection::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotationReflection, name, initialize, &_TypeAnnotationReflection_ClassInfo_, allocate$TypeAnnotationReflection);
	return class$;
}

$Class* TypeAnnotationReflection::class$ = nullptr;