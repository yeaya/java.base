#include <sun/reflect/annotation/AnnotatedTypeFactory.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/GenericArrayType.h>
#include <java/lang/reflect/Method.h>
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
using $TypeAnnotation = ::sun::reflect::annotation::TypeAnnotation;
using $TypeAnnotation$LocationInfo = ::sun::reflect::annotation::TypeAnnotation$LocationInfo;

namespace sun {
	namespace reflect {
		namespace annotation {

$FieldInfo _AnnotatedTypeFactory_FieldInfo_[] = {
	{"EMPTY_TYPE_ANNOTATION_ARRAY", "[Lsun/reflect/annotation/TypeAnnotation;", nullptr, $STATIC | $FINAL, $staticField(AnnotatedTypeFactory, EMPTY_TYPE_ANNOTATION_ARRAY)},
	{"EMPTY_ANNOTATED_TYPE", "Ljava/lang/reflect/AnnotatedType;", nullptr, $STATIC | $FINAL, $staticField(AnnotatedTypeFactory, EMPTY_ANNOTATED_TYPE)},
	{"EMPTY_ANNOTATED_TYPE_ARRAY", "[Ljava/lang/reflect/AnnotatedType;", nullptr, $STATIC | $FINAL, $staticField(AnnotatedTypeFactory, EMPTY_ANNOTATED_TYPE_ARRAY)},
	{}
};

$MethodInfo _AnnotatedTypeFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AnnotatedTypeFactory::*)()>(&AnnotatedTypeFactory::init$))},
	{"buildAnnotatedType", "(Ljava/lang/reflect/Type;Lsun/reflect/annotation/TypeAnnotation$LocationInfo;[Lsun/reflect/annotation/TypeAnnotation;[Lsun/reflect/annotation/TypeAnnotation;Ljava/lang/reflect/AnnotatedElement;)Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AnnotatedType*(*)($Type*,$TypeAnnotation$LocationInfo*,$TypeAnnotationArray*,$TypeAnnotationArray*,$AnnotatedElement*)>(&AnnotatedTypeFactory::buildAnnotatedType))},
	{"isArray", "(Ljava/lang/reflect/Type;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Type*)>(&AnnotatedTypeFactory::isArray))},
	{"nestingForType", "(Ljava/lang/reflect/Type;Lsun/reflect/annotation/TypeAnnotation$LocationInfo;)Lsun/reflect/annotation/TypeAnnotation$LocationInfo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TypeAnnotation$LocationInfo*(*)($Type*,$TypeAnnotation$LocationInfo*)>(&AnnotatedTypeFactory::nestingForType))},
	{}
};

$InnerClassInfo _AnnotatedTypeFactory_InnerClassesInfo_[] = {
	{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedWildcardTypeImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedWildcardTypeImpl", $PRIVATE | $STATIC | $FINAL},
	{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedParameterizedTypeImpl", $PRIVATE | $STATIC | $FINAL},
	{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeVariableImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedTypeVariableImpl", $PRIVATE | $STATIC | $FINAL},
	{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedArrayTypeImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedArrayTypeImpl", $PRIVATE | $STATIC | $FINAL},
	{"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeBaseImpl", "sun.reflect.annotation.AnnotatedTypeFactory", "AnnotatedTypeBaseImpl", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AnnotatedTypeFactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.reflect.annotation.AnnotatedTypeFactory",
	"java.lang.Object",
	nullptr,
	_AnnotatedTypeFactory_FieldInfo_,
	_AnnotatedTypeFactory_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotatedTypeFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedWildcardTypeImpl,sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl,sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeVariableImpl,sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedArrayTypeImpl,sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeBaseImpl"
};

$Object* allocate$AnnotatedTypeFactory($Class* clazz) {
	return $of($alloc(AnnotatedTypeFactory));
}

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
		return static_cast<$AnnotatedType*>(static_cast<$AnnotatedTypeFactory$AnnotatedTypeBaseImpl*>($new($AnnotatedTypeFactory$AnnotatedArrayTypeImpl, type, currentLoc, actualTypeAnnos, allOnSameTarget, decl)));
	}
	if ($instanceOf($Class, type)) {
		return $new($AnnotatedTypeFactory$AnnotatedTypeBaseImpl, type, currentLoc, actualTypeAnnos, allOnSameTarget, decl);
	} else if ($instanceOf($TypeVariable, type)) {
		return static_cast<$AnnotatedType*>(static_cast<$AnnotatedTypeFactory$AnnotatedTypeBaseImpl*>($new($AnnotatedTypeFactory$AnnotatedTypeVariableImpl, $cast($TypeVariable, type), currentLoc, actualTypeAnnos, allOnSameTarget, decl)));
	} else if ($instanceOf($ParameterizedType, type)) {
		return static_cast<$AnnotatedType*>(static_cast<$AnnotatedTypeFactory$AnnotatedTypeBaseImpl*>($new($AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl, $cast($ParameterizedType, type), currentLoc, actualTypeAnnos, allOnSameTarget, decl)));
	} else if ($instanceOf($WildcardType, type)) {
		return static_cast<$AnnotatedType*>(static_cast<$AnnotatedTypeFactory$AnnotatedTypeBaseImpl*>($new($AnnotatedTypeFactory$AnnotatedWildcardTypeImpl, $cast($WildcardType, type), currentLoc, actualTypeAnnos, allOnSameTarget, decl)));
	}
	$throwNew($AssertionError, $of($$str({"Unknown instance of Type: "_s, type, "\nThis should not happen."_s})));
}

$TypeAnnotation$LocationInfo* AnnotatedTypeFactory::nestingForType($Type* type, $TypeAnnotation$LocationInfo* addTo) {
	$init(AnnotatedTypeFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (isArray(type)) {
		return addTo;
	}
	if ($instanceOf($Class, type)) {
		$Class* clz = $cast($Class, type);
		if ($nc(clz)->getEnclosingClass() == nullptr) {
			return addTo;
		}
		if ($Modifier::isStatic($nc(clz)->getModifiers())) {
			return addTo;
		}
		$var($Type, var$0, static_cast<$Type*>($nc(clz)->getEnclosingClass()));
		return nestingForType(var$0, $($nc(addTo)->pushInner()));
	} else if ($instanceOf($ParameterizedType, type)) {
		$var($ParameterizedType, t, $cast($ParameterizedType, type));
		if ($nc(t)->getOwnerType() == nullptr) {
			return addTo;
		}
		bool var$1 = $instanceOf($Class, $($nc(t)->getRawType()));
		if (var$1 && $Modifier::isStatic($nc(($cast($Class, $(t->getRawType()))))->getModifiers())) {
			return addTo;
		}
		$var($Type, var$2, $nc(t)->getOwnerType());
		return nestingForType(var$2, $($nc(addTo)->pushInner()));
	}
	return addTo;
}

bool AnnotatedTypeFactory::isArray($Type* t) {
	$init(AnnotatedTypeFactory);
	if ($instanceOf($Class, t)) {
		$Class* c = $cast($Class, t);
		if ($nc(c)->isArray()) {
			return true;
		}
	} else if ($instanceOf($GenericArrayType, t)) {
		return true;
	}
	return false;
}

void clinit$AnnotatedTypeFactory($Class* class$) {
	$assignStatic(AnnotatedTypeFactory::EMPTY_TYPE_ANNOTATION_ARRAY, $new($TypeAnnotationArray, 0));
	$init($TypeAnnotation$LocationInfo);
	$assignStatic(AnnotatedTypeFactory::EMPTY_ANNOTATED_TYPE, $new($AnnotatedTypeFactory$AnnotatedTypeBaseImpl, nullptr, $TypeAnnotation$LocationInfo::BASE_LOCATION, AnnotatedTypeFactory::EMPTY_TYPE_ANNOTATION_ARRAY, AnnotatedTypeFactory::EMPTY_TYPE_ANNOTATION_ARRAY, nullptr));
	$assignStatic(AnnotatedTypeFactory::EMPTY_ANNOTATED_TYPE_ARRAY, $new($AnnotatedTypeArray, 0));
}

AnnotatedTypeFactory::AnnotatedTypeFactory() {
}

$Class* AnnotatedTypeFactory::load$($String* name, bool initialize) {
	$loadClass(AnnotatedTypeFactory, name, initialize, &_AnnotatedTypeFactory_ClassInfo_, clinit$AnnotatedTypeFactory, allocate$AnnotatedTypeFactory);
	return class$;
}

$Class* AnnotatedTypeFactory::class$ = nullptr;

		} // annotation
	} // reflect
} // sun