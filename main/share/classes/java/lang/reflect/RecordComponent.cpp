#include <java/lang/reflect/RecordComponent.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/reflect/ConstantPool.h>
#include <sun/reflect/annotation/AnnotationParser.h>
#include <sun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget.h>
#include <sun/reflect/annotation/TypeAnnotationParser.h>
#include <sun/reflect/generics/factory/CoreReflectionFactory.h>
#include <sun/reflect/generics/factory/GenericsFactory.h>
#include <sun/reflect/generics/repository/FieldRepository.h>
#include <sun/reflect/generics/scope/ClassScope.h>
#include <sun/reflect/generics/scope/Scope.h>
#include <jcpp.h>

#undef FIELD

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $Method = ::java::lang::reflect::Method;
using $Type = ::java::lang::reflect::Type;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ConstantPool = ::jdk::internal::reflect::ConstantPool;
using $AnnotationParser = ::sun::reflect::annotation::AnnotationParser;
using $TypeAnnotation$TypeAnnotationTarget = ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget;
using $TypeAnnotationParser = ::sun::reflect::annotation::TypeAnnotationParser;
using $CoreReflectionFactory = ::sun::reflect::generics::factory::CoreReflectionFactory;
using $GenericsFactory = ::sun::reflect::generics::factory::GenericsFactory;
using $FieldRepository = ::sun::reflect::generics::repository::FieldRepository;
using $ClassScope = ::sun::reflect::generics::scope::ClassScope;

namespace java {
	namespace lang {
		namespace reflect {

void RecordComponent::init$() {
}

$String* RecordComponent::getName() {
	return this->name;
}

$Class* RecordComponent::getType() {
	return this->type;
}

$String* RecordComponent::getGenericSignature() {
	return this->signature;
}

$Type* RecordComponent::getGenericType() {
	if (getGenericSignature() != nullptr) {
		return $$nc(getGenericInfo())->getGenericType();
	} else {
		return getType();
	}
}

$FieldRepository* RecordComponent::getGenericInfo() {
	$useLocalObjectStack();
	if (this->genericInfo == nullptr) {
		$var($String, var$0, getGenericSignature());
		$set(this, genericInfo, $FieldRepository::make(var$0, $(getFactory())));
	}
	return this->genericInfo;
}

$GenericsFactory* RecordComponent::getFactory() {
	$Class* c = getDeclaringRecord();
	return $CoreReflectionFactory::make(c, $($ClassScope::make(c)));
}

$AnnotatedType* RecordComponent::getAnnotatedType() {
	$useLocalObjectStack();
	$var($bytes, var$0, this->typeAnnotations);
	$var($ConstantPool, var$1, $$nc($SharedSecrets::getJavaLangAccess())->getConstantPool(getDeclaringRecord()));
	$Class* var$2 = getDeclaringRecord();
	$init($TypeAnnotation$TypeAnnotationTarget);
	return $TypeAnnotationParser::buildAnnotatedType(var$0, var$1, this, var$2, $(getGenericType()), $TypeAnnotation$TypeAnnotationTarget::FIELD);
}

$Method* RecordComponent::getAccessor() {
	return this->accessor;
}

$Annotation* RecordComponent::getAnnotation($Class* annotationClass) {
	$useLocalObjectStack();
	$Objects::requireNonNull(annotationClass);
	return $cast($Annotation, annotationClass->cast($($$nc(declaredAnnotations())->get(annotationClass))));
}

$Map* RecordComponent::declaredAnnotations() {
	$useLocalObjectStack();
	$var($Map, declAnnos, nullptr);
	if (($assign(declAnnos, this->declaredAnnotations$)) == nullptr) {
		$synchronized(this) {
			if (($assign(declAnnos, this->declaredAnnotations$)) == nullptr) {
				$var(RecordComponent, root, this->root);
				if (root != nullptr) {
					$assign(declAnnos, root->declaredAnnotations());
				} else {
					$var($bytes, var$0, this->annotations);
					$var($ConstantPool, var$1, $$nc($SharedSecrets::getJavaLangAccess())->getConstantPool(getDeclaringRecord()));
					$assign(declAnnos, $AnnotationParser::parseAnnotations(var$0, var$1, getDeclaringRecord()));
				}
				$set(this, declaredAnnotations$, declAnnos);
			}
		}
	}
	return declAnnos;
}

$AnnotationArray* RecordComponent::getAnnotations() {
	return getDeclaredAnnotations();
}

$AnnotationArray* RecordComponent::getDeclaredAnnotations() {
	return $AnnotationParser::toArray($(declaredAnnotations()));
}

$String* RecordComponent::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($nc(getType())->getTypeName()));
	var$0->append(" "_s);
	var$0->append($(getName()));
	return ($str(var$0));
}

$Class* RecordComponent::getDeclaringRecord() {
	return this->clazz;
}

RecordComponent::RecordComponent() {
}

$Class* RecordComponent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"clazz", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(RecordComponent, clazz)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RecordComponent, name)},
		{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(RecordComponent, type)},
		{"accessor", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE, $field(RecordComponent, accessor)},
		{"signature", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RecordComponent, signature)},
		{"genericInfo", "Lsun/reflect/generics/repository/FieldRepository;", nullptr, $PRIVATE | $TRANSIENT, $field(RecordComponent, genericInfo)},
		{"annotations", "[B", nullptr, $PRIVATE, $field(RecordComponent, annotations)},
		{"typeAnnotations", "[B", nullptr, $PRIVATE, $field(RecordComponent, typeAnnotations)},
		{"root", "Ljava/lang/reflect/RecordComponent;", nullptr, $PRIVATE, $field(RecordComponent, root)},
		{"declaredAnnotations", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $PRIVATE | $VOLATILE | $TRANSIENT, $field(RecordComponent, declaredAnnotations$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(RecordComponent, init$, void)},
		{"declaredAnnotations", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $PRIVATE, $method(RecordComponent, declaredAnnotations, $Map*)},
		{"getAccessor", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $method(RecordComponent, getAccessor, $Method*)},
		{"getAnnotatedType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC, $method(RecordComponent, getAnnotatedType, $AnnotatedType*)},
		{"getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC, $virtualMethod(RecordComponent, getAnnotation, $Annotation*, $Class*)},
		{"getAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC, $virtualMethod(RecordComponent, getAnnotations, $AnnotationArray*)},
		{"getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC, $virtualMethod(RecordComponent, getDeclaredAnnotations, $AnnotationArray*)},
		{"getDeclaringRecord", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $method(RecordComponent, getDeclaringRecord, $Class*)},
		{"getFactory", "()Lsun/reflect/generics/factory/GenericsFactory;", nullptr, $PRIVATE, $method(RecordComponent, getFactory, $GenericsFactory*)},
		{"getGenericInfo", "()Lsun/reflect/generics/repository/FieldRepository;", nullptr, $PRIVATE, $method(RecordComponent, getGenericInfo, $FieldRepository*)},
		{"getGenericSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(RecordComponent, getGenericSignature, $String*)},
		{"getGenericType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC, $method(RecordComponent, getGenericType, $Type*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(RecordComponent, getName, $String*)},
		{"getType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $method(RecordComponent, getType, $Class*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RecordComponent, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.reflect.RecordComponent",
		"java.lang.Object",
		"java.lang.reflect.AnnotatedElement",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RecordComponent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RecordComponent);
	});
	return class$;
}

$Class* RecordComponent::class$ = nullptr;

		} // reflect
	} // lang
} // java