#include <sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedTypeVariableImpl.h>

#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/AnnotatedTypeVariable.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedTypeBaseImpl.h>
#include <sun/reflect/annotation/AnnotatedTypeFactory.h>
#include <sun/reflect/annotation/TypeAnnotation$LocationInfo.h>
#include <sun/reflect/annotation/TypeAnnotation.h>
#include <jcpp.h>

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $TypeAnnotationArray = $Array<::sun::reflect::annotation::TypeAnnotation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $AnnotatedTypeVariable = ::java::lang::reflect::AnnotatedTypeVariable;
using $Type = ::java::lang::reflect::Type;
using $TypeVariable = ::java::lang::reflect::TypeVariable;
using $AnnotatedTypeFactory$AnnotatedTypeBaseImpl = ::sun::reflect::annotation::AnnotatedTypeFactory$AnnotatedTypeBaseImpl;
using $TypeAnnotation$LocationInfo = ::sun::reflect::annotation::TypeAnnotation$LocationInfo;

namespace sun {
	namespace reflect {
		namespace annotation {

$MethodInfo _AnnotatedTypeFactory$AnnotatedTypeVariableImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
	{"*getAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
	{"*getDeclaredAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
	{"*getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
	{"*getDeclaredAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
	{"*getType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/reflect/TypeVariable;Lsun/reflect/annotation/TypeAnnotation$LocationInfo;[Lsun/reflect/annotation/TypeAnnotation;[Lsun/reflect/annotation/TypeAnnotation;Ljava/lang/reflect/AnnotatedElement;)V", "(Ljava/lang/reflect/TypeVariable<*>;Lsun/reflect/annotation/TypeAnnotation$LocationInfo;[Lsun/reflect/annotation/TypeAnnotation;[Lsun/reflect/annotation/TypeAnnotation;Ljava/lang/reflect/AnnotatedElement;)V", 0, $method(AnnotatedTypeFactory$AnnotatedTypeVariableImpl, init$, void, $TypeVariable*, $TypeAnnotation$LocationInfo*, $TypeAnnotationArray*, $TypeAnnotationArray*, $AnnotatedElement*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(AnnotatedTypeFactory$AnnotatedTypeVariableImpl, equals, bool, Object$*)},
	{"getAnnotatedBounds", "()[Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC, $virtualMethod(AnnotatedTypeFactory$AnnotatedTypeVariableImpl, getAnnotatedBounds, $AnnotatedTypeArray*)},
	{"getAnnotatedOwnerType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC, $virtualMethod(AnnotatedTypeFactory$AnnotatedTypeVariableImpl, getAnnotatedOwnerType, $AnnotatedType*)},
	{"getTypeVariable", "()Ljava/lang/reflect/TypeVariable;", "()Ljava/lang/reflect/TypeVariable<*>;", $PRIVATE, $method(AnnotatedTypeFactory$AnnotatedTypeVariableImpl, getTypeVariable, $TypeVariable*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*isAnnotationPresent", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AnnotatedTypeFactory$AnnotatedTypeVariableImpl_InnerClassesInfo_[] = {
	{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeVariableImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedTypeVariableImpl", $PRIVATE | $STATIC | $FINAL},
	{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeBaseImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedTypeBaseImpl", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AnnotatedTypeFactory$AnnotatedTypeVariableImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeVariableImpl",
	"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeBaseImpl",
	"java.lang.reflect.AnnotatedTypeVariable",
	nullptr,
	_AnnotatedTypeFactory$AnnotatedTypeVariableImpl_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotatedTypeFactory$AnnotatedTypeVariableImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.reflect.annotation.AnnotatedTypeFactory"
};

$Object* allocate$AnnotatedTypeFactory$AnnotatedTypeVariableImpl($Class* clazz) {
	return $of($alloc(AnnotatedTypeFactory$AnnotatedTypeVariableImpl));
}

$AnnotationArray* AnnotatedTypeFactory$AnnotatedTypeVariableImpl::getAnnotations() {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getAnnotations();
}

$Annotation* AnnotatedTypeFactory$AnnotatedTypeVariableImpl::getAnnotation($Class* annotation) {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getAnnotation(annotation);
}

$AnnotationArray* AnnotatedTypeFactory$AnnotatedTypeVariableImpl::getAnnotationsByType($Class* annotation) {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getAnnotationsByType(annotation);
}

$AnnotationArray* AnnotatedTypeFactory$AnnotatedTypeVariableImpl::getDeclaredAnnotations() {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getDeclaredAnnotations();
}

$Annotation* AnnotatedTypeFactory$AnnotatedTypeVariableImpl::getDeclaredAnnotation($Class* annotation) {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getDeclaredAnnotation(annotation);
}

$AnnotationArray* AnnotatedTypeFactory$AnnotatedTypeVariableImpl::getDeclaredAnnotationsByType($Class* annotation) {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getDeclaredAnnotationsByType(annotation);
}

$Type* AnnotatedTypeFactory$AnnotatedTypeVariableImpl::getType() {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getType();
}

$String* AnnotatedTypeFactory$AnnotatedTypeVariableImpl::toString() {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::toString();
}

int32_t AnnotatedTypeFactory$AnnotatedTypeVariableImpl::hashCode() {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::hashCode();
}

bool AnnotatedTypeFactory$AnnotatedTypeVariableImpl::isAnnotationPresent($Class* annotationClass) {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::isAnnotationPresent(annotationClass);
}

$Object* AnnotatedTypeFactory$AnnotatedTypeVariableImpl::clone() {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::clone();
}

void AnnotatedTypeFactory$AnnotatedTypeVariableImpl::finalize() {
	this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::finalize();
}

void AnnotatedTypeFactory$AnnotatedTypeVariableImpl::init$($TypeVariable* type, $TypeAnnotation$LocationInfo* location, $TypeAnnotationArray* actualTypeAnnotations, $TypeAnnotationArray* allOnSameTargetTypeAnnotations, $AnnotatedElement* decl) {
	$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::init$(type, location, actualTypeAnnotations, allOnSameTargetTypeAnnotations, decl);
}

$AnnotatedTypeArray* AnnotatedTypeFactory$AnnotatedTypeVariableImpl::getAnnotatedBounds() {
	return $nc($(getTypeVariable()))->getAnnotatedBounds();
}

$AnnotatedType* AnnotatedTypeFactory$AnnotatedTypeVariableImpl::getAnnotatedOwnerType() {
	return nullptr;
}

$TypeVariable* AnnotatedTypeFactory$AnnotatedTypeVariableImpl::getTypeVariable() {
	return $cast($TypeVariable, getType());
}

bool AnnotatedTypeFactory$AnnotatedTypeVariableImpl::equals(Object$* o) {
	if ($instanceOf($AnnotatedTypeVariable, o)) {
		$var($AnnotatedTypeVariable, that, $cast($AnnotatedTypeVariable, o));
		return equalsTypeAndAnnotations(that);
	} else {
		return false;
	}
}

AnnotatedTypeFactory$AnnotatedTypeVariableImpl::AnnotatedTypeFactory$AnnotatedTypeVariableImpl() {
}

$Class* AnnotatedTypeFactory$AnnotatedTypeVariableImpl::load$($String* name, bool initialize) {
	$loadClass(AnnotatedTypeFactory$AnnotatedTypeVariableImpl, name, initialize, &_AnnotatedTypeFactory$AnnotatedTypeVariableImpl_ClassInfo_, allocate$AnnotatedTypeFactory$AnnotatedTypeVariableImpl);
	return class$;
}

$Class* AnnotatedTypeFactory$AnnotatedTypeVariableImpl::class$ = nullptr;

		} // annotation
	} // reflect
} // sun