#include <sun/reflect/annotation/AnnotatedTypeFactory.h>
#include <java/lang/AssertionError.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/GenericArrayType.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <java/lang/reflect/WildcardType.h>
#include <sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedArrayTypeImpl.h>
#include <sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl.h>
#include <sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedTypeBaseImpl.h>
#include <sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedTypeVariableImpl.h>
#include <sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedWildcardTypeImpl.h>
#include <sun/reflect/annotation/TypeAnnotation$LocationInfo.h>
#include <sun/reflect/annotation/TypeAnnotation.h>
#include <jcpp.h>

#undef BASE_LOCATION
#undef EMPTY_ANNOTATED_TYPE
#undef EMPTY_ANNOTATED_TYPE_ARRAY
#undef EMPTY_TYPE_ANNOTATION_ARRAY

using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $TypeAnnotationArray = $Array<::sun::reflect::annotation::TypeAnnotation>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $GenericArrayType = ::java::lang::reflect::GenericArrayType;
using $Modifier = ::java::lang::reflect::Modifier;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $TypeVariable = ::java::lang::reflect::TypeVariable;
using $WildcardType = ::java::lang::reflect::WildcardType;
using $AnnotatedTypeFactory$AnnotatedArrayTypeImpl = ::sun::reflect::annotation::AnnotatedTypeFactory$AnnotatedArrayTypeImpl;
using $AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl = ::sun::reflect::annotation::AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl;
using $AnnotatedTypeFactory$AnnotatedTypeBaseImpl = ::sun::reflect::annotation::AnnotatedTypeFactory$AnnotatedTypeBaseImpl;
using $AnnotatedTypeFactory$AnnotatedTypeVariableImpl = ::sun::reflect::annotation::AnnotatedTypeFactory$AnnotatedTypeVariableImpl;
using $AnnotatedTypeFactory$AnnotatedWildcardTypeImpl = ::sun::reflect::annotation::AnnotatedTypeFactory$AnnotatedWildcardTypeImpl;
using $TypeAnnotation$LocationInfo = ::sun::reflect::annotation::TypeAnnotation$LocationInfo;

namespace sun {
	namespace reflect {
		namespace annotation {

$TypeAnnotationArray* AnnotatedTypeFactory::EMPTY_TYPE_ANNOTATION_ARRAY = nullptr;
$AnnotatedType* AnnotatedTypeFactory::EMPTY_ANNOTATED_TYPE = nullptr;
$AnnotatedTypeArray* AnnotatedTypeFactory::EMPTY_ANNOTATED_TYPE_ARRAY = nullptr;

void AnnotatedTypeFactory::init$() {
}

$AnnotatedType* AnnotatedTypeFactory::buildAnnotatedType($Type* type, $TypeAnnotation$LocationInfo* currentLoc, $TypeAnnotationArray* actualTypeAnnos, $TypeAnnotationArray* allOnSameTarget, $AnnotatedElement* decl) {
	$init(AnnotatedTypeFactory);
	if (type == nullptr) {
		return AnnotatedTypeFactory::EMPTY_ANNOTATED_TYPE;
	}
	if (isArray(type)) {
		return $cast($AnnotatedTypeFactory$AnnotatedTypeBaseImpl, $new($AnnotatedTypeFactory$AnnotatedArrayTypeImpl, type, currentLoc, actualTypeAnnos, allOnSameTarget, decl));
	}
	if ($instanceOf($Class, type)) {
		return $new($AnnotatedTypeFactory$AnnotatedTypeBaseImpl, type, currentLoc, actualTypeAnnos, allOnSameTarget, decl);
	} else if ($instanceOf($TypeVariable, type)) {
		return $cast($AnnotatedTypeFactory$AnnotatedTypeBaseImpl, $new($AnnotatedTypeFactory$AnnotatedTypeVariableImpl, $cast($TypeVariable, type), currentLoc, actualTypeAnnos, allOnSameTarget, decl));
	} else if ($instanceOf($ParameterizedType, type)) {
		return $cast($AnnotatedTypeFactory$AnnotatedTypeBaseImpl, $new($AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl, $cast($ParameterizedType, type), currentLoc, actualTypeAnnos, allOnSameTarget, decl));
	} else if ($instanceOf($WildcardType, type)) {
		return $cast($AnnotatedTypeFactory$AnnotatedTypeBaseImpl, $new($AnnotatedTypeFactory$AnnotatedWildcardTypeImpl, $cast($WildcardType, type), currentLoc, actualTypeAnnos, allOnSameTarget, decl));
	}
	$throwNew($AssertionError, $$of($str({"Unknown instance of Type: "_s, type, "\nThis should not happen."_s})));
}

$TypeAnnotation$LocationInfo* AnnotatedTypeFactory::nestingForType($Type* type, $TypeAnnotation$LocationInfo* addTo) {
	$init(AnnotatedTypeFactory);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (isArray(type)) {
		return addTo;
	}
	if ($instanceOf($Class, type)) {
		$Class* clz = $cast($Class, type);
		if (clz->getEnclosingClass() == nullptr) {
			return addTo;
		}
		if ($Modifier::isStatic(clz->getModifiers())) {
			return addTo;
		}
		$var($Type, var$0, clz->getEnclosingClass());
		return nestingForType(var$0, $($nc(addTo)->pushInner()));
	} else if ($instanceOf($ParameterizedType, type)) {
		$var($ParameterizedType, t, $cast($ParameterizedType, type));
		if (t->getOwnerType() == nullptr) {
			return addTo;
		}
		bool var$1 = $instanceOf($Class, $(t->getRawType()));
		if (var$1 && $Modifier::isStatic($$sure($Class, t->getRawType())->getModifiers())) {
			return addTo;
		}
		$var($Type, var$2, t->getOwnerType());
		return nestingForType(var$2, $($nc(addTo)->pushInner()));
	}
	return addTo;
}

bool AnnotatedTypeFactory::isArray($Type* t) {
	$init(AnnotatedTypeFactory);
	if ($instanceOf($Class, t)) {
		$Class* c = $cast($Class, t);
		if (c->isArray()) {
			return true;
		}
	} else if ($instanceOf($GenericArrayType, t)) {
		return true;
	}
	return false;
}

void AnnotatedTypeFactory::clinit$($Class* clazz) {
	$assignStatic(AnnotatedTypeFactory::EMPTY_TYPE_ANNOTATION_ARRAY, $new($TypeAnnotationArray, 0));
	$init($TypeAnnotation$LocationInfo);
	$assignStatic(AnnotatedTypeFactory::EMPTY_ANNOTATED_TYPE, $new($AnnotatedTypeFactory$AnnotatedTypeBaseImpl, nullptr, $TypeAnnotation$LocationInfo::BASE_LOCATION, AnnotatedTypeFactory::EMPTY_TYPE_ANNOTATION_ARRAY, AnnotatedTypeFactory::EMPTY_TYPE_ANNOTATION_ARRAY, nullptr));
	$assignStatic(AnnotatedTypeFactory::EMPTY_ANNOTATED_TYPE_ARRAY, $new($AnnotatedTypeArray, 0));
}

AnnotatedTypeFactory::AnnotatedTypeFactory() {
}

$Class* AnnotatedTypeFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EMPTY_TYPE_ANNOTATION_ARRAY", "[Lsun/reflect/annotation/TypeAnnotation;", nullptr, $STATIC | $FINAL, $staticField(AnnotatedTypeFactory, EMPTY_TYPE_ANNOTATION_ARRAY)},
		{"EMPTY_ANNOTATED_TYPE", "Ljava/lang/reflect/AnnotatedType;", nullptr, $STATIC | $FINAL, $staticField(AnnotatedTypeFactory, EMPTY_ANNOTATED_TYPE)},
		{"EMPTY_ANNOTATED_TYPE_ARRAY", "[Ljava/lang/reflect/AnnotatedType;", nullptr, $STATIC | $FINAL, $staticField(AnnotatedTypeFactory, EMPTY_ANNOTATED_TYPE_ARRAY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AnnotatedTypeFactory, init$, void)},
		{"buildAnnotatedType", "(Ljava/lang/reflect/Type;Lsun/reflect/annotation/TypeAnnotation$LocationInfo;[Lsun/reflect/annotation/TypeAnnotation;[Lsun/reflect/annotation/TypeAnnotation;Ljava/lang/reflect/AnnotatedElement;)Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $STATIC, $staticMethod(AnnotatedTypeFactory, buildAnnotatedType, $AnnotatedType*, $Type*, $TypeAnnotation$LocationInfo*, $TypeAnnotationArray*, $TypeAnnotationArray*, $AnnotatedElement*)},
		{"isArray", "(Ljava/lang/reflect/Type;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotatedTypeFactory, isArray, bool, $Type*)},
		{"nestingForType", "(Ljava/lang/reflect/Type;Lsun/reflect/annotation/TypeAnnotation$LocationInfo;)Lsun/reflect/annotation/TypeAnnotation$LocationInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(AnnotatedTypeFactory, nestingForType, $TypeAnnotation$LocationInfo*, $Type*, $TypeAnnotation$LocationInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedWildcardTypeImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedWildcardTypeImpl", $PRIVATE | $STATIC | $FINAL},
		{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedParameterizedTypeImpl", $PRIVATE | $STATIC | $FINAL},
		{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeVariableImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedTypeVariableImpl", $PRIVATE | $STATIC | $FINAL},
		{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedArrayTypeImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedArrayTypeImpl", $PRIVATE | $STATIC | $FINAL},
		{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeBaseImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedTypeBaseImpl", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.reflect.annotation.AnnotatedTypeFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedWildcardTypeImpl,sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl,sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeVariableImpl,sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedArrayTypeImpl,sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeBaseImpl"
	};
	$loadClass(AnnotatedTypeFactory, name, initialize, &classInfo$$, AnnotatedTypeFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotatedTypeFactory);
	});
	return class$;
}

$Class* AnnotatedTypeFactory::class$ = nullptr;

		} // annotation
	} // reflect
} // sun