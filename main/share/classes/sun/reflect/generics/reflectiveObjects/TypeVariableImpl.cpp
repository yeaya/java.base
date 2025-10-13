#include <sun/reflect/generics/reflectiveObjects/TypeVariableImpl.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/annotation/AnnotationFormatError.h>
#include <java/lang/annotation/RetentionPolicy.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/GenericDeclaration.h>
#include <java/lang/reflect/Member.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <sun/reflect/annotation/AnnotationSupport.h>
#include <sun/reflect/annotation/AnnotationType.h>
#include <sun/reflect/annotation/TypeAnnotationParser.h>
#include <sun/reflect/generics/factory/GenericsFactory.h>
#include <sun/reflect/generics/reflectiveObjects/LazyReflectiveObjectGenerator.h>
#include <sun/reflect/generics/tree/FieldTypeSignature.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef EMPTY_ANNOTATION_ARRAY
#undef RUNTIME

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $FieldTypeSignatureArray = $Array<::sun::reflect::generics::tree::FieldTypeSignature>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotationFormatError = ::java::lang::annotation::AnnotationFormatError;
using $RetentionPolicy = ::java::lang::annotation::RetentionPolicy;
using $Constructor = ::java::lang::reflect::Constructor;
using $GenericDeclaration = ::java::lang::reflect::GenericDeclaration;
using $Member = ::java::lang::reflect::Member;
using $Method = ::java::lang::reflect::Method;
using $Type = ::java::lang::reflect::Type;
using $TypeVariable = ::java::lang::reflect::TypeVariable;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $AnnotationSupport = ::sun::reflect::annotation::AnnotationSupport;
using $AnnotationType = ::sun::reflect::annotation::AnnotationType;
using $TypeAnnotationParser = ::sun::reflect::annotation::TypeAnnotationParser;
using $GenericsFactory = ::sun::reflect::generics::factory::GenericsFactory;
using $LazyReflectiveObjectGenerator = ::sun::reflect::generics::reflectiveObjects::LazyReflectiveObjectGenerator;
using $FieldTypeSignature = ::sun::reflect::generics::tree::FieldTypeSignature;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace reflectiveObjects {

$FieldInfo _TypeVariableImpl_FieldInfo_[] = {
	{"genericDeclaration", "Ljava/lang/reflect/GenericDeclaration;", "TD;", $PRIVATE | $FINAL, $field(TypeVariableImpl, genericDeclaration)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TypeVariableImpl, name)},
	{"bounds", "[Ljava/lang/Object;", nullptr, $PRIVATE | $VOLATILE, $field(TypeVariableImpl, bounds)},
	{"EMPTY_ANNOTATION_ARRAY", "[Ljava/lang/annotation/Annotation;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TypeVariableImpl, EMPTY_ANNOTATION_ARRAY)},
	{}
};

$MethodInfo _TypeVariableImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/reflect/GenericDeclaration;Ljava/lang/String;[Lsun/reflect/generics/tree/FieldTypeSignature;Lsun/reflect/generics/factory/GenericsFactory;)V", "(TD;Ljava/lang/String;[Lsun/reflect/generics/tree/FieldTypeSignature;Lsun/reflect/generics/factory/GenericsFactory;)V", $PRIVATE, $method(static_cast<void(TypeVariableImpl::*)($GenericDeclaration*,$String*,$FieldTypeSignatureArray*,$GenericsFactory*)>(&TypeVariableImpl::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAnnotatedBounds", "()[Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC},
	{"getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC},
	{"getAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getBounds", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"getDeclaredAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC},
	{"getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"getDeclaredAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getGenericDeclaration", "()Ljava/lang/reflect/GenericDeclaration;", "()TD;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"make", "(Ljava/lang/reflect/GenericDeclaration;Ljava/lang/String;[Lsun/reflect/generics/tree/FieldTypeSignature;Lsun/reflect/generics/factory/GenericsFactory;)Lsun/reflect/generics/reflectiveObjects/TypeVariableImpl;", "<T::Ljava/lang/reflect/GenericDeclaration;>(TT;Ljava/lang/String;[Lsun/reflect/generics/tree/FieldTypeSignature;Lsun/reflect/generics/factory/GenericsFactory;)Lsun/reflect/generics/reflectiveObjects/TypeVariableImpl<TT;>;", $PUBLIC | $STATIC, $method(static_cast<TypeVariableImpl*(*)($GenericDeclaration*,$String*,$FieldTypeSignatureArray*,$GenericsFactory*)>(&TypeVariableImpl::make))},
	{"mapAnnotations", "([Ljava/lang/annotation/Annotation;)Ljava/util/Map;", "([Ljava/lang/annotation/Annotation;)Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $PRIVATE | $STATIC, $method(static_cast<$Map*(*)($AnnotationArray*)>(&TypeVariableImpl::mapAnnotations))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"typeVarIndex", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(TypeVariableImpl::*)()>(&TypeVariableImpl::typeVarIndex))},
	{}
};

$ClassInfo _TypeVariableImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.reflectiveObjects.TypeVariableImpl",
	"sun.reflect.generics.reflectiveObjects.LazyReflectiveObjectGenerator",
	"java.lang.reflect.TypeVariable",
	_TypeVariableImpl_FieldInfo_,
	_TypeVariableImpl_MethodInfo_,
	"<D::Ljava/lang/reflect/GenericDeclaration;>Lsun/reflect/generics/reflectiveObjects/LazyReflectiveObjectGenerator;Ljava/lang/reflect/TypeVariable<TD;>;"
};

$Object* allocate$TypeVariableImpl($Class* clazz) {
	return $of($alloc(TypeVariableImpl));
}

$Object* TypeVariableImpl::clone() {
	 return this->$LazyReflectiveObjectGenerator::clone();
}

void TypeVariableImpl::finalize() {
	this->$LazyReflectiveObjectGenerator::finalize();
}

$AnnotationArray* TypeVariableImpl::EMPTY_ANNOTATION_ARRAY = nullptr;

void TypeVariableImpl::init$($GenericDeclaration* decl, $String* n, $FieldTypeSignatureArray* bs, $GenericsFactory* f) {
	$LazyReflectiveObjectGenerator::init$(f);
	$set(this, genericDeclaration, decl);
	$set(this, name, n);
	$set(this, bounds, bs);
}

TypeVariableImpl* TypeVariableImpl::make($GenericDeclaration* decl, $String* name, $FieldTypeSignatureArray* bs, $GenericsFactory* f) {
	$init(TypeVariableImpl);
	if (!(($instanceOf($Class, decl)) || ($instanceOf($Method, decl)) || ($instanceOf($Constructor, decl)))) {
		$throwNew($AssertionError, $of($$str({"Unexpected kind of GenericDeclaration"_s, $($nc($of(decl))->getClass()->toString())})));
	}
	return $new(TypeVariableImpl, decl, name, bs, f);
}

$TypeArray* TypeVariableImpl::getBounds() {
	$var($ObjectArray, value, this->bounds);
	if ($instanceOf($FieldTypeSignatureArray, value)) {
		$assign(value, reifyBounds($fcast($FieldTypeSignatureArray, value)));
		$set(this, bounds, value);
	}
	return $cast($TypeArray, $nc(value)->clone());
}

$GenericDeclaration* TypeVariableImpl::getGenericDeclaration() {
	if ($instanceOf($Class, this->genericDeclaration)) {
		$ReflectUtil::checkPackageAccess($cast($Class, this->genericDeclaration));
	} else if (($instanceOf($Method, this->genericDeclaration)) || ($instanceOf($Constructor, this->genericDeclaration))) {
		$ReflectUtil::conservativeCheckMemberAccess($cast($Member, this->genericDeclaration));
	} else {
		$throwNew($AssertionError, $of("Unexpected kind of GenericDeclaration"_s));
	}
	return this->genericDeclaration;
}

$String* TypeVariableImpl::getName() {
	return this->name;
}

$String* TypeVariableImpl::toString() {
	return getName();
}

bool TypeVariableImpl::equals(Object$* o) {
	if ($instanceOf($TypeVariable, o) && $nc($of(o))->getClass() == TypeVariableImpl::class$) {
		$var($TypeVariable, that, $cast($TypeVariable, o));
		$var($GenericDeclaration, thatDecl, that->getGenericDeclaration());
		$var($String, thatName, that->getName());
		bool var$0 = $Objects::equals(this->genericDeclaration, thatDecl);
		return var$0 && $Objects::equals(this->name, thatName);
	} else {
		return false;
	}
}

int32_t TypeVariableImpl::hashCode() {
	int32_t var$0 = $nc($of(this->genericDeclaration))->hashCode();
	return var$0 ^ $nc(this->name)->hashCode();
}

$Annotation* TypeVariableImpl::getAnnotation($Class* annotationClass) {
	$Objects::requireNonNull(annotationClass);
	return $cast($Annotation, $nc($(mapAnnotations($(getAnnotations()))))->get(annotationClass));
}

$Annotation* TypeVariableImpl::getDeclaredAnnotation($Class* annotationClass) {
	$Objects::requireNonNull(annotationClass);
	return getAnnotation(annotationClass);
}

$AnnotationArray* TypeVariableImpl::getAnnotationsByType($Class* annotationClass) {
	$Objects::requireNonNull(annotationClass);
	return $AnnotationSupport::getDirectlyAndIndirectlyPresent($(mapAnnotations($(getAnnotations()))), annotationClass);
}

$AnnotationArray* TypeVariableImpl::getDeclaredAnnotationsByType($Class* annotationClass) {
	$Objects::requireNonNull(annotationClass);
	return getAnnotationsByType(annotationClass);
}

$AnnotationArray* TypeVariableImpl::getAnnotations() {
	int32_t myIndex = typeVarIndex();
	if (myIndex < 0) {
		$throwNew($AssertionError, $of("Index must be non-negative."_s));
	}
	return $TypeAnnotationParser::parseTypeVariableAnnotations($(getGenericDeclaration()), myIndex);
}

$AnnotationArray* TypeVariableImpl::getDeclaredAnnotations() {
	return getAnnotations();
}

$AnnotatedTypeArray* TypeVariableImpl::getAnnotatedBounds() {
	$var($TypeArray, var$0, getBounds());
	$var($GenericDeclaration, var$1, getGenericDeclaration());
	return $TypeAnnotationParser::parseAnnotatedBounds(var$0, var$1, typeVarIndex());
}

int32_t TypeVariableImpl::typeVarIndex() {
	$var($TypeVariableArray, tVars, $nc($(getGenericDeclaration()))->getTypeParameters());
	int32_t i = -1;
	{
		$var($TypeVariableArray, arr$, tVars);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($TypeVariable, v, arr$->get(i$));
			{
				++i;
				if (equals(v)) {
					return i;
				}
			}
		}
	}
	return -1;
}

$Map* TypeVariableImpl::mapAnnotations($AnnotationArray* annos) {
	$init(TypeVariableImpl);
	$var($Map, result, $new($LinkedHashMap));
	{
		$var($AnnotationArray, arr$, annos);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Annotation, a, arr$->get(i$));
			{
				$Class* klass = $nc(a)->annotationType();
				$var($AnnotationType, type, $AnnotationType::getInstance(klass));
				$init($RetentionPolicy);
				if ($nc(type)->retention() == $RetentionPolicy::RUNTIME) {
					if (result->put(klass, a) != nullptr) {
						$throwNew($AnnotationFormatError, $$str({"Duplicate annotation for class: "_s, klass, ": "_s, a}));
					}
				}
			}
		}
	}
	return result;
}

void clinit$TypeVariableImpl($Class* class$) {
	$assignStatic(TypeVariableImpl::EMPTY_ANNOTATION_ARRAY, $new($AnnotationArray, 0));
}

TypeVariableImpl::TypeVariableImpl() {
}

$Class* TypeVariableImpl::load$($String* name, bool initialize) {
	$loadClass(TypeVariableImpl, name, initialize, &_TypeVariableImpl_ClassInfo_, clinit$TypeVariableImpl, allocate$TypeVariableImpl);
	return class$;
}

$Class* TypeVariableImpl::class$ = nullptr;

			} // reflectiveObjects
		} // generics
	} // reflect
} // sun