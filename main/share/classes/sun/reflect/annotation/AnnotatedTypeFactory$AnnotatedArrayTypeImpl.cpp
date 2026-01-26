#include <sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedArrayTypeImpl.h>

#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedArrayType.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/GenericArrayType.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Objects.h>
#include <sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedTypeBaseImpl.h>
#include <sun/reflect/annotation/AnnotatedTypeFactory.h>
#include <sun/reflect/annotation/TypeAnnotation$LocationInfo.h>
#include <sun/reflect/annotation/TypeAnnotation.h>
#include <jcpp.h>

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $TypeAnnotationArray = $Array<::sun::reflect::annotation::TypeAnnotation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotatedArrayType = ::java::lang::reflect::AnnotatedArrayType;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $GenericArrayType = ::java::lang::reflect::GenericArrayType;
using $Type = ::java::lang::reflect::Type;
using $Objects = ::java::util::Objects;
using $AnnotatedTypeFactory = ::sun::reflect::annotation::AnnotatedTypeFactory;
using $AnnotatedTypeFactory$AnnotatedTypeBaseImpl = ::sun::reflect::annotation::AnnotatedTypeFactory$AnnotatedTypeBaseImpl;
using $TypeAnnotation$LocationInfo = ::sun::reflect::annotation::TypeAnnotation$LocationInfo;

namespace sun {
	namespace reflect {
		namespace annotation {

$MethodInfo _AnnotatedTypeFactory$AnnotatedArrayTypeImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
	{"*getAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
	{"*getDeclaredAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
	{"*getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
	{"*getDeclaredAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $FINAL},
	{"*getType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/reflect/Type;Lsun/reflect/annotation/TypeAnnotation$LocationInfo;[Lsun/reflect/annotation/TypeAnnotation;[Lsun/reflect/annotation/TypeAnnotation;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, 0, $method(AnnotatedTypeFactory$AnnotatedArrayTypeImpl, init$, void, $Type*, $TypeAnnotation$LocationInfo*, $TypeAnnotationArray*, $TypeAnnotationArray*, $AnnotatedElement*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(AnnotatedTypeFactory$AnnotatedArrayTypeImpl, equals, bool, Object$*)},
	{"getAnnotatedGenericComponentType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC, $virtualMethod(AnnotatedTypeFactory$AnnotatedArrayTypeImpl, getAnnotatedGenericComponentType, $AnnotatedType*)},
	{"getAnnotatedOwnerType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC, $virtualMethod(AnnotatedTypeFactory$AnnotatedArrayTypeImpl, getAnnotatedOwnerType, $AnnotatedType*)},
	{"getComponentType", "()Ljava/lang/reflect/Type;", nullptr, $PRIVATE, $method(AnnotatedTypeFactory$AnnotatedArrayTypeImpl, getComponentType, $Type*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(AnnotatedTypeFactory$AnnotatedArrayTypeImpl, hashCode, int32_t)},
	{"*isAnnotationPresent", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AnnotatedTypeFactory$AnnotatedArrayTypeImpl, toString, $String*)},
	{}
};

$InnerClassInfo _AnnotatedTypeFactory$AnnotatedArrayTypeImpl_InnerClassesInfo_[] = {
	{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedArrayTypeImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedArrayTypeImpl", $PRIVATE | $STATIC | $FINAL},
	{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeBaseImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedTypeBaseImpl", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AnnotatedTypeFactory$AnnotatedArrayTypeImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedArrayTypeImpl",
	"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeBaseImpl",
	"java.lang.reflect.AnnotatedArrayType",
	nullptr,
	_AnnotatedTypeFactory$AnnotatedArrayTypeImpl_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotatedTypeFactory$AnnotatedArrayTypeImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.reflect.annotation.AnnotatedTypeFactory"
};

$Object* allocate$AnnotatedTypeFactory$AnnotatedArrayTypeImpl($Class* clazz) {
	return $of($alloc(AnnotatedTypeFactory$AnnotatedArrayTypeImpl));
}

$AnnotationArray* AnnotatedTypeFactory$AnnotatedArrayTypeImpl::getAnnotations() {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getAnnotations();
}

$Annotation* AnnotatedTypeFactory$AnnotatedArrayTypeImpl::getAnnotation($Class* annotation) {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getAnnotation(annotation);
}

$AnnotationArray* AnnotatedTypeFactory$AnnotatedArrayTypeImpl::getAnnotationsByType($Class* annotation) {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getAnnotationsByType(annotation);
}

$AnnotationArray* AnnotatedTypeFactory$AnnotatedArrayTypeImpl::getDeclaredAnnotations() {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getDeclaredAnnotations();
}

$Annotation* AnnotatedTypeFactory$AnnotatedArrayTypeImpl::getDeclaredAnnotation($Class* annotation) {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getDeclaredAnnotation(annotation);
}

$AnnotationArray* AnnotatedTypeFactory$AnnotatedArrayTypeImpl::getDeclaredAnnotationsByType($Class* annotation) {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getDeclaredAnnotationsByType(annotation);
}

$Type* AnnotatedTypeFactory$AnnotatedArrayTypeImpl::getType() {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::getType();
}

bool AnnotatedTypeFactory$AnnotatedArrayTypeImpl::isAnnotationPresent($Class* annotationClass) {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::isAnnotationPresent(annotationClass);
}

$Object* AnnotatedTypeFactory$AnnotatedArrayTypeImpl::clone() {
	 return this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::clone();
}

void AnnotatedTypeFactory$AnnotatedArrayTypeImpl::finalize() {
	this->$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::finalize();
}

void AnnotatedTypeFactory$AnnotatedArrayTypeImpl::init$($Type* type, $TypeAnnotation$LocationInfo* location, $TypeAnnotationArray* actualTypeAnnotations, $TypeAnnotationArray* allOnSameTargetTypeAnnotations, $AnnotatedElement* decl) {
	$AnnotatedTypeFactory$AnnotatedTypeBaseImpl::init$(type, location, actualTypeAnnotations, allOnSameTargetTypeAnnotations, decl);
}

$AnnotatedType* AnnotatedTypeFactory$AnnotatedArrayTypeImpl::getAnnotatedGenericComponentType() {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, getComponentType());
	$var($Type, var$0, t);
	$var($TypeAnnotation$LocationInfo, var$1, $AnnotatedTypeFactory::nestingForType(t, $($nc($(getLocation()))->pushArray())));
	$var($TypeAnnotationArray, var$2, getTypeAnnotations());
	$var($TypeAnnotationArray, var$3, getTypeAnnotations());
	return $AnnotatedTypeFactory::buildAnnotatedType(var$0, var$1, var$2, var$3, $(getDecl()));
}

$AnnotatedType* AnnotatedTypeFactory$AnnotatedArrayTypeImpl::getAnnotatedOwnerType() {
	return nullptr;
}

$Type* AnnotatedTypeFactory$AnnotatedArrayTypeImpl::getComponentType() {
	$var($Type, t, getType());
	if ($instanceOf($Class, t)) {
		$Class* c = $cast($Class, t);
		return $nc(c)->getComponentType();
	}
	return $nc(($cast($GenericArrayType, t)))->getGenericComponentType();
}

$String* AnnotatedTypeFactory$AnnotatedArrayTypeImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($AnnotatedType, componentType, static_cast<$AnnotatedType*>(static_cast<$AnnotatedTypeFactory$AnnotatedTypeBaseImpl*>(this)));
	while ($instanceOf($AnnotatedArrayType, componentType)) {
		$var($AnnotatedArrayType, annotatedArrayType, $cast($AnnotatedArrayType, componentType));
		sb->append($$str({$(annotationsToString($($nc(annotatedArrayType)->getAnnotations()), true)), "[]"_s}));
		$assign(componentType, $nc(annotatedArrayType)->getAnnotatedGenericComponentType());
	}
	sb->insert(0, $($nc($of(componentType))->toString()));
	return sb->toString();
}

bool AnnotatedTypeFactory$AnnotatedArrayTypeImpl::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($AnnotatedArrayType, o)) {
		$var($AnnotatedArrayType, that, $cast($AnnotatedArrayType, o));
		bool var$0 = equalsTypeAndAnnotations(that);
		if (var$0) {
			$var($Object, var$1, $of(getAnnotatedGenericComponentType()));
			var$0 = $Objects::equals(var$1, $($nc(that)->getAnnotatedGenericComponentType()));
		}
		return var$0;
	} else {
		return false;
	}
}

int32_t AnnotatedTypeFactory$AnnotatedArrayTypeImpl::hashCode() {
	int32_t var$0 = baseHashCode();
	return var$0 ^ $nc($of($(getAnnotatedGenericComponentType())))->hashCode();
}

AnnotatedTypeFactory$AnnotatedArrayTypeImpl::AnnotatedTypeFactory$AnnotatedArrayTypeImpl() {
}

$Class* AnnotatedTypeFactory$AnnotatedArrayTypeImpl::load$($String* name, bool initialize) {
	$loadClass(AnnotatedTypeFactory$AnnotatedArrayTypeImpl, name, initialize, &_AnnotatedTypeFactory$AnnotatedArrayTypeImpl_ClassInfo_, allocate$AnnotatedTypeFactory$AnnotatedArrayTypeImpl);
	return class$;
}

$Class* AnnotatedTypeFactory$AnnotatedArrayTypeImpl::class$ = nullptr;

		} // annotation
	} // reflect
} // sun